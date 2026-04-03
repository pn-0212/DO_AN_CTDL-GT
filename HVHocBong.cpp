#include "Header.h"

void Export_HocVien(FILE* f, HocVien hv) {
	fprintf(f, "\t  %-12s\t%-15s %s\t%s \t %-6s %.2f\n",
		hv.MaHocVien,
		hv.HoLot,
		hv.Ten,
		hv.NgaySinh,
		hv.MaLop,
		hv.Diem
	);
}

void Export_dsHocVien_FILE(ListHocVien hv, FILE* f) {
	for (NodeHocVien* i = hv.Head; i != NULL; i = i->Next)
	{
		if (i->Info.Diem >= 8) {
			Export_HocVien(f, i->Info);
		}

	}
	
}

void Export_dsLopHoc_FILE(ListLopHoc lh, char* nameFileHV)
{
	bool kt = false;
	FILE* f = fopen(nameFileHV, "wt");
	if (!f) 
	{
		color(6);
		printf("\n"); 
		printf("\t\t\tLUU FILE THAT BAI ROI!!!");
		printf("\n");
	}
	fprintf(f, "\t\t*********** DANH SACH HOC VIEN CO HOC BONG ***********\n");
	for (NodeLopHoc* i = lh.head; i != NULL; i = i->Next)
	{
		Export_dsHocVien_FILE(i->Info.dsHocVien, f);
		kt = true;

	}
	fclose(f);

	if (kt) 
	color(6);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\t\t\t DA LUU FILE THANH CONG <3");
	printf("\n");
}


