#include "Header.h"


void xuat_1_HocVien(HocVien hv) {
	printf("\t  %-12s\t%-15s %s\t%s \t %-6s %.2f\n",
		hv.MaHocVien,
		hv.HoLot,
		hv.Ten,
		hv.NgaySinh,
		hv.MaLop,
		hv.Diem
	);
}

void xuatDanhSachHocVien(ListHocVien hv) 
{
	color(13);
	printf("\n");
	printf("\t\t%45s\n", "\t ------ DANH SACH HOC VIEN CUA LOP ------");
	printf("\n");
	color(14);
	printf("\t%s\t%-12s\t%s\t%s\t%s\t%s\n", "Ma Hoc Vien","Ho Lot", "Ten", "Ngay Sinh", "Ma Lop", "Diem");
	printf("\n");
	for (NodeHocVien* i = hv.Head; i != NULL; i = i->Next)
	{
		color(7);
		xuat_1_HocVien(i->Info);
	}
}


void xuat_1_LopHoc(LopHoc lh)
{
	color(17);
	printf("\n");
	printf("        -------------------------------- DANH SACH LOP --------------------------------- \n");
	printf("\n");
	color(18);
	printf("\t Ma lop: ");
	color(7);
	printf("%s", lh.MaLop);
	color(18);
	printf("\t\t Mon hoc: ");
	color(7);
	printf("%s", lh.TenLop); 
	color(18);
	printf("\t\tLich hoc: ");
	color(7);
	printf("%s", lh.LichHoc);
	color(18);
	printf("\n\t Hoc Phi: ");
	color(7);
	printf("%.2f(DONG)", lh.HocPhi);
	color(18);
	printf("\n\t Ngay bat dau: ");
	color(7);
	printf("%s", lh.NgayBatDau);
	color(18);
	printf("\n\t Ngay ket thuc du kien: ");
	color(7);
	printf("%s", lh.NgayKetThucDuKien);
	color(18);
	printf("\n\t Ngay ket thuc thuc te : ");
	color(7);
	printf("% s\n\n", lh.NgayKetThucThucTe);
}


void xuatDanhSachLopHoc(ListLopHoc lh) {
	for (NodeLopHoc* i = lh.head; i != NULL; i = i->Next)
	{
		
		xuat_1_LopHoc(i->Info);
		xuatDanhSachHocVien(i->Info.dsHocVien);

	}
}