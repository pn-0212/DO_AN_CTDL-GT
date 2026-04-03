#include "Header.h"

void xuatLopHoc(NodeLopHoc* lh) 
{  
    color(4);
    printf("\n"); 
    printf("\n");
    printf("\t\t\t ------- LOP HOC CO HOC PHI CAO NHAT -------  ");
    printf("\n");
    xuat_1_LopHoc(lh->Info);

    if (isEmptyHocVien(lh->Info.dsHocVien)) 
    {
        printf(" KHONG CO LOP HOC \n");
        return;
    }
    color(6);
    printf("\t\t\t ~~~~~~~~~ DANH SACH HOC VIEN TRONG LOP ~~~~~~~~\n");
    printf("\n");
    NodeHocVien* q = lh->Info.dsHocVien.Head;
    while (q != NULL)
    {
        color(7);
        xuat_1_HocVien(q->Info);
        q = q->Next;
    }
}


NodeLopHoc* timHocPhiMax(ListLopHoc lh) {
    NodeLopHoc* lopHPMax = lh.head;
    NodeLopHoc* p = lh.head->Next;
    while (p != NULL) {
        if (p->Info.HocPhi > lopHPMax->Info.HocPhi) {
            lopHPMax = p;
        }
        p = p->Next;
    }
    return lopHPMax;
}


void timHocVienLopHocPhiCaoNhat(ListLopHoc lh)
{
    if (isEmptyLopHoc(lh) == 1) 
    {
        printf("\n");
        printf("\n");
        color(1);
        printf(" Danh sach lop hoc rong. Vui long kiem tra lai !!!\n");
        return;
    }

    NodeLopHoc* lopHPMax = timHocPhiMax(lh);
    xuatLopHoc(lopHPMax);
    
}
