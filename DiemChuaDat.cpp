
#include "Header.h"

void inHocVienDiemThap(ListLopHoc dsLop)
{
	ListHocVien listThap;
	NodeLopHoc* lop = dsLop.head;
	bool kt = false;
	while (lop != NULL)
	{
		NodeHocVien* hv = lop->Info.dsHocVien.Head;
		while (hv != NULL)
		{
			if (hv->Info.Diem < 5)
			{
				NodeHocVien* p = createHocVien(hv->Info);
				insertTail_HocVien(listThap, p);
				kt = true;
			}
			hv = hv->Next;
		}
		lop = lop->Next;
	}
	if (!kt)
	{
		color(10);
		printf("\n");
		printf("\t\t\tKHONG CO HOC VIEN < 5");
		return;
	}
	for (NodeHocVien* p = listThap.Head; p->Next != NULL; p = p->Next)
	{
		for (NodeHocVien* q = p->Next; q != NULL; q = q->Next)
		{
			if (strcmpi(p->Info.Ten, q->Info.Ten) < 0)
			{
				HocVien tmp = p->Info;
				p->Info = q->Info;
				q->Info = tmp;
			}
		}
	}
	color(12);
	printf("\n");
	printf("\n\t     --- DANH SACH HOC VIEN CO DIEM < 5 (GIAM DAN TU Z -> A) ---\n");
	printf("\n");
	NodeHocVien* p = listThap.Head;
	while (p != NULL)
	{
		color(7);
		xuat_1_HocVien(p->Info);
		p = p->Next;
	}
}
