

#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <cctype>
#include <windows.h>
#pragma warning(disable:4996)

// -----------HOC VIEN---------
struct HocVien
{
	char MaHocVien[51];
	char HoLot[51];
	char Ten[31];
	char NgaySinh[20];
	char MaLop[11];
	float Diem;
};

struct NodeHocVien
{
	HocVien Info;
	NodeHocVien* Next;
};

struct ListHocVien
{
	NodeHocVien* Head = NULL;
	NodeHocVien* Tail = NULL;
};

// -----------LOP HOC---------

struct LopHoc
{
	char MaLop[11];
	char TenLop[51];
	char LichHoc[11];
	float HocPhi;
	char NgayBatDau[20];
	char NgayKetThucDuKien[20];
	char NgayKetThucThucTe[20];
	ListHocVien dsHocVien;
};

struct NodeLopHoc
{
	LopHoc Info;
	NodeLopHoc* Next;
};

struct ListLopHoc
{
	NodeLopHoc* head = NULL;
	NodeLopHoc* Tail = NULL;
};

//-----------------------------------------------------------
//Tạo node Học viên
NodeHocVien* createHocVien(HocVien x);
//Kiểm tra danh sách học viên rỗng
int isEmptyHocVien(ListHocVien x);
//Tạo node Lớp học
NodeLopHoc* createLopHoc(LopHoc x);
//Kiểm tra danh sách lớp học rỗng
int isEmptyLopHoc(ListLopHoc x);
// Hàm thêm cuối danh sách Học viên
int insertTail_HocVien(ListHocVien& hv, NodeHocVien* p); 
// Hàm thêm cuối danh sách Lớp học
int insertTail_LopHoc(ListLopHoc& lh, NodeLopHoc* p);
//Up load danh sách lớp và học viên đi kèm
void Load_dsLopHoc_FILE(ListLopHoc& lh, char* nameFileLop, char* nameFileHV);
//Xuất 1 học viên
void xuat_1_HocVien(HocVien hv);
//Xuất 1 Lớp học
void xuat_1_LopHoc(LopHoc lh);
//Xuất danh sách lớp học
void xuatDanhSachLopHoc(ListLopHoc lh);
// Menu
void menu();
//Menu tìm kiếm
void menuTimKiem();
// Thêm 1 học viên
void Them_1_HocVien(ListLopHoc& lh);
// Xuất học viên điểm cao nhất
void xuatDsHocVienDiemMax(ListLopHoc lh);
//Tìm học viên có điểm cao nhất
void timHocVienLopHocPhiCaoNhat(ListLopHoc lh);
//Tìm kiếm theo yêu cầu(tên lớp,mã hoc viên,năm sinh)
void timKiemTieuChi(ListLopHoc lh);
void xuatDsHocVien(ListHocVien hv);
//Sắp xếp điểm giảm dần
void xuatHVDiemGiamDanTheoLop(ListLopHoc hv);
//Xuất file học bỗng
void Export_dsLopHoc_FILE(ListLopHoc lh, char* nameFileHV);
//Xuất học viên điểm thấp
void inHocVienDiemThap(ListLopHoc dsLop);
// Màu
void color(int color);

