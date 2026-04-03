#include "Header.h"

float findMaxDiemHocVien(ListHocVien hv) {
	float max = 0;
	for (NodeHocVien* i = hv.Head; i != NULL; i = i->Next)
	{
		if (i->Info.Diem > max)
		{
			max = i->Info.Diem;
		}
	}
	return max;
}

float findMaxDiemTheoLop(ListLopHoc lh) {
	float max = 0;
	for (NodeLopHoc* i = lh.head; i != NULL; i = i->Next)
	{
		float tmp = findMaxDiemHocVien(i->Info.dsHocVien);
		if (tmp > max) max = tmp;
	}
	return max;
}

void xuatHocVienDiemMax(ListHocVien hv, float max) {
	for (NodeHocVien* i = hv.Head; i != NULL; i = i->Next)
	{
		float tmp = i->Info.Diem;
		if (tmp == max) {
			xuat_1_HocVien(i->Info);
		}
	}
}

void xuatDsHocVienDiemMax(ListLopHoc lh) 
{
	color(12);
	printf("\n");
	printf("\t\t%50s\n", "--------- DANH SACH HOC VIEN CAO DIEM NHAT ---------");
	color(14);
	printf("\n");
	printf("\t%s\t%-12s\t%s\t%s\t%s\t%s\n",
		"Ma Hoc Vien", "Ho Lot", "Ten",	"Ngay Sinh", "Ma Lop", "Diem");
	printf("\n");
	color(7);
	float max = findMaxDiemTheoLop(lh);
	for (NodeLopHoc* i = lh.head; i != NULL; i = i->Next)
	{
		LopHoc tmp = i->Info;
		xuatHocVienDiemMax(tmp.dsHocVien, max);
	}
}