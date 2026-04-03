#include "Header.h"

void Load_1_HocVien(FILE *f, HocVien &hv) 
{
	fscanf(f, "%[^,],%[^,],%[^,],%[^,],%[^,],%f\n",
		&hv.MaHocVien,
		&hv.HoLot,
		&hv.Ten,
		&hv.NgaySinh,
		&hv.MaLop,
		&hv.Diem
		);
}

void Load_dsHocVien_FILE(ListHocVien& hv, char *nameFile, char *maLop) 
{
	FILE* f = fopen(nameFile, "rt");
	int n;
	fscanf(f, "%d\n", &n);
	for (int i = 0; i < n; i++)
	{
		HocVien x;
		Load_1_HocVien(f, x);
		if (strcmpi(x.MaLop, maLop) == 0) //ktra lop co ton tai hay kh
		{
			insertTail_HocVien(hv, createHocVien(x));
		}
	}
	fclose(f);
}

void Load_1_LopHoc(FILE* f, LopHoc& lh) {
	fscanf(f, "%[^,],%[^,],%[^,],%f,%[^,],%[^,],%s\n",
		&lh.MaLop,
		&lh.TenLop,
		&lh.LichHoc,
		&lh.HocPhi,
		&lh.NgayBatDau,
		&lh.NgayKetThucDuKien,
		&lh.NgayKetThucThucTe
	);
}

void Load_dsLopHoc_FILE(ListLopHoc& lh, char* nameFileLop, char *nameFileHV) 
{
	FILE* f = fopen(nameFileLop, "rt");
	int n;//có bnhiu lớp học
	fscanf(f, "%d\n", &n);
	for (int i = 0; i < n; i++)
	{
		LopHoc x;
		Load_1_LopHoc(f, x);
		Load_dsHocVien_FILE(x.dsHocVien, nameFileHV, x.MaLop);
		insertTail_LopHoc(lh, createLopHoc(x));
	}
	fclose(f);
}




