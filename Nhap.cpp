#include "Header.h"

void nhapHocVien(HocVien &hv)
{
	color(12);
	printf("\n");
	printf("\t\t HAY NHAP NHUNG NOI DUNG SAU DE THEM HOC VIEN\n");
	printf("\n");
	color(3); printf("\tNhap ma hoc vien: ");color(7); gets_s(hv.MaHocVien);
	printf("\n");
	color(3); printf("\tNhap ho cua hoc vien: ");color(7); gets_s(hv.HoLot);
	printf("\n");
	color(3); printf("\tNhap ten cua hoc vien: ");color(7); gets_s(hv.Ten);
	printf("\n");
	color(3);printf("\tNhap ngay sinh cua hoc vien: ");color(7); gets_s(hv.NgaySinh);
	printf("\n");
	color(3); printf("\tNhap lop cua hoc vien: ");color(7); gets_s(hv.MaLop);
	printf("\n");
	color(3); printf("\tNhap diem cua hoc vien: ");color(7); scanf_s("%f", &hv.Diem);
	printf("\n");
}

int ktraLop(NodeLopHoc* lh, char* malopHV)
{
	if (strcmpi(lh->Info.MaLop, malopHV) == 0) {
		return 1;
	}
	return 0;
}


void themHocVienVaoLop(ListLopHoc& lh, NodeHocVien* hv)
{
	
	for (NodeLopHoc* i = lh.head; i != NULL; i = i->Next)
	{
		if (ktraLop(i, hv->Info.MaLop) == 1)
		{
			insertTail_HocVien(i->Info.dsHocVien, hv);
			color(2);
			printf("\n");
			printf("\t\t\t Congratulation Da Them Thanh Cong <3 ");
			printf("\n");
			return;
		}

	}
		color(2);
		printf("\n");
		printf("\t\t\t Lop hoc khong ton tai. Vui long nhap lop tu (L01 -> L20) !!! ");
		printf("\n");
}

void Them_1_HocVien(ListLopHoc& lh) 
{
	HocVien x;
	nhapHocVien(x);
	themHocVienVaoLop(lh, createHocVien(x));
}