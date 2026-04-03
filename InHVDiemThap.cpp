#include "Header.h"


void swap(HocVien& a, HocVien& b)
{
	HocVien c = a;
	a = b;
	b = c;
}

void sapXepDiemHocVienGiam(ListHocVien& hv)
{
	for (NodeHocVien* i = hv.Head; i->Next != NULL; i = i->Next)
	{
		for (NodeHocVien* j = i->Next; j != NULL; j = j->Next)
		{
			if (i->Info.Diem < j->Info.Diem)
			{
				swap(i->Info, j->Info);
			}
		}
	} 
}

void xuatHVDiemGiamDanTheoLop(ListLopHoc hv)
{
	ListLopHoc tmp = hv;
	for (NodeLopHoc *i = tmp.head; i != NULL; i =i->Next)
	{
		
		sapXepDiemHocVienGiam(i->Info.dsHocVien);
		
	}
	for (NodeLopHoc *i = tmp.head; i != NULL; i =i->Next)
	{
		printf("\n\t\t\t\t -=-=-=-=-=-=-=-=-=-=-=-=-=-=- \n");
		printf("\n");
		xuatDsHocVien(i->Info.dsHocVien);
	}
}

