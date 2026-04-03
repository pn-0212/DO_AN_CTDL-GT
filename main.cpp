#include "Header.h"


void process()
{
	int luachon;
	ListLopHoc lh;
	char lop[100] = "LopHoc.txt";
	char hocVien[100] = "HocVien.txt";
	char hocbong[100] = "dsHocBong.txt";
	Load_dsLopHoc_FILE(lh, lop, hocVien);
	do
	{
		menu();
		color(10);
		printf("\n\t ==> Moi ban chon chuc nang: ");
		color(7);
		scanf_s("%d", &luachon);
		getchar();
		switch (luachon)
		{
		case 1:
		{
			system("cls");
			xuatDanhSachLopHoc(lh);
			break;
		}
		case 2:
		{
			system("cls");
			Them_1_HocVien(lh);
			break;
		}
		case 3:
		{
			system("cls");
			timKiemTieuChi(lh);
			break;
		}
		case 4:
		{
			system("cls");
			xuatDsHocVienDiemMax(lh);
			break;
		}
		case 5:
		{
			system("cls");
			timHocVienLopHocPhiCaoNhat(lh);
			break;
		}
		case 6:
		{
			system("cls");
			color(10);
			printf("\n");
			printf("\t ---------- DANH SACH HOC VIEN SAU KHI SAP XEP GIAM DAN THEO LOP ------------\n");
			color(7);
			xuatHVDiemGiamDanTheoLop(lh);
			break;
		}
		case 7:
		{
			system("cls");
			inHocVienDiemThap(lh);
			break;
		}
		case 8:
		{
			system("cls");
			Export_dsLopHoc_FILE(lh, hocbong);
			break;
		}
		case 0: 
		{
			system("cls");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			color(11);
			printf("\n\t\t\t ================================================ ");
			printf("\n\t\t\t|     CAM ON DA SU DUNG CHUONG TRINH <33         |");
			printf("\n\t\t\t+     CHUC THAY VA CAC BAN NHIEU SUC KHOE :33    +");
			printf("\n\t\t\t|     NHOM 04 XIN CAM ON RAT NHIEU   >.<         |");
			printf("\n\t\t\t ================================================ ");
			printf("\n");
			printf("\n");
			color(20);
			printf("\n\t\t\t                  ****   ****                      "); 
			printf("\n\t\t\t               ***     *     ***                   ");
			printf("\n\t\t\t               **             **                   ");
			printf("\n\t\t\t                **           **                    ");
			printf("\n\t\t\t                  **       **                      ");
			printf("\n\t\t\t                    **   **                        ");
		    printf("\n\t\t\t                       *                           ");
			break;
		}
		default:
		{
			color(12);
			system("cls");
			printf("\n");
			printf("\n");
			printf("\t BAN VUOT MUC PICKEBALL ROI DO. MOI BAN CHON TRONG MUC CHO PHEP, HAY CHON LAI  !!!\n");
			break;
		}
		}
	} 
	while (luachon != 0);
	getch();
}

int main()
{
	process();
	return 0;
}

