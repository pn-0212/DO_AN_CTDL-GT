#include "Header.h"

void xuatDsHocVien(ListHocVien hv)
{
	color(7);
	for (NodeHocVien* i = hv.Head; i != NULL; i = i->Next)
	{
		xuat_1_HocVien(i->Info);
	}
}

void timTheoTenLop(ListLopHoc lh, char* tenLop) 
{
	bool kt = false;
	color(1);
	printf("\n");
	printf("\t\t------------- HOC VIEN THEO TEN LOP -------------\n");
	printf("\n");
	for (NodeLopHoc* i = lh.head; i != NULL; i = i->Next)
	{
		if (strcmpi(i->Info.TenLop, tenLop) == 0)
		{
			color(7);
			xuatDsHocVien(i->Info.dsHocVien);
			kt = true;
		}
		
	}
	if (!kt)
	{
		color(6);
		printf("\n");
		printf("\t\t SORRY =(( KHONG TIM THAY THONG TIN CUA HOC VIEN !!!");
		printf("\n");
	}
}

void xuatDsHocVienTheoMa(ListHocVien hv, char* maHocVien, bool &kt)
{
	for (NodeHocVien* i = hv.Head; i != NULL; i = i->Next)
	{
		if (strcmpi(i->Info.MaHocVien, maHocVien) == 0)
		{
			
			xuat_1_HocVien(i->Info);
			kt = true;
		}
	}
}

void timTheoMaHocVien(ListLopHoc lh, char* maHocVien)
{
	bool kt = false;
	color(3);
	printf("\n");
	printf("\t\t ------------- HOC VIEN THEO MA HOC VIEN -------------\n");
	printf("\n");
	for (NodeLopHoc* i = lh.head; i != NULL; i = i->Next)
	{
		color(7);
		xuatDsHocVienTheoMa(i->Info.dsHocVien, maHocVien, kt);
	}
	if (!kt)
	{
		color(6);
		printf("\n");
		printf("\t\t SORRY =(( KHONG TIM THAY THONG TIN CUA HOC VIEN !!!");
		printf("\n");
	}
}

int LayNamSinh(char* ns)
{
	int namSinh;
	sscanf(ns, "%*d/%*d/%d", &namSinh);
	return namSinh;
}

void xuatDsHocVienTheoNam(ListHocVien hv, int namSinh, bool &kt)
{
	for (NodeHocVien* i = hv.Head; i != NULL; i = i->Next)
	{
		int tmp = LayNamSinh(i->Info.NgaySinh);
		if (tmp == namSinh) 
		{
			xuat_1_HocVien(i->Info);
			kt = true;
		}
	}
}

void timTheoNam(ListLopHoc lh, int namSinh)
{
	bool kt = false;
	color(3);
	printf("\n");
	printf("\t\t------------- HOC VIEN THEO NAM -------------\n");
	printf("\n");
	for (NodeLopHoc* i = lh.head; i != NULL; i = i->Next)
	{
		color(7);
		xuatDsHocVienTheoNam(i->Info.dsHocVien, namSinh, kt);
	}
	if (!kt)
	{
		color(6);
		printf("\n");
		printf("\t\t SORRY =(( KHONG TIM THAY THONG TIN CUA HOC VIEN !!!");
		printf("\n");
	}
}

void timKiemTieuChi(ListLopHoc lh) {
	int luachon;
	do
	{
		menuTimKiem();
		printf("\n");
		color(11);
		printf("\n\t\t ==> Moi ban chon chuc nang: ");
		color(7);
		scanf_s("%d", &luachon);
		getchar();
		switch (luachon)
		{
		case 1: 
		{
			system("cls");
			char tenLop[20];
			color(12);
			printf("\n");
			printf("\n\t BAN HAY NHAP TEN CUA LOP: ");
			color(7);
			gets_s(tenLop);
			timTheoTenLop(lh, tenLop);
			break;
		}
		case 2: 
		{
			system("cls");
			char maHocVien[20];
			color(12);
			printf("\n");
			printf("\n\t BAN HAY NHAP MA HOC VIEN: ");
			color(7);
			gets_s(maHocVien);
			timTheoMaHocVien(lh, maHocVien);
			break;
		}
		case 3: 
		{
			system("cls");
			int namSinh;
			color(12);
			printf("\n");
			printf("\n\t BAN HAY NHAP NAM SINH CUA HOC VIEN: ");
			color(7);
			scanf_s("%d", &namSinh);
			timTheoNam(lh, namSinh);
			break;
		}
		case 0:
		{
			system("cls");
			color(14);
			printf("\n");
			printf("\n");
			printf("\n\n\t\t\t CAM ON VI DA DEN SU DUNG CHUONG TRINH TIM KIEM <3\n");
			printf("\n");
			printf("\t\t\t    TIEP TUC VOI CAC CASE CON LAI NHE  >.<    \n\n");
			break;
		}
		
		}
		
	} while (luachon != 0);
}



