#include "Header.h"

void menu()
{		
		color(4);
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\t\t ========================================================== \n");
		printf("\t\t|                   CHU DE 3 - NHOM 04                     |\n");
		printf("\t\t ========================================================== \n");
		color(15);
		printf("\n");
		printf("\t\t ========================================================== \n");
		printf("\t\t|     TEN DE TAI: QUAN LY HOC VIEN TAI TT CNTT - HUIT      |\n");
		printf("\t\t ========================================================== \n");
		color(3);
		printf("\n");
		printf("\t\t ========================================================== \n");
		printf("\t\t|                         MENU                             |\n");
		printf("\t\t|==========================================================|\n");
		printf("\t\t| 1.    Xem thong tin lop hoc va hoc vien.                 |\n");
		printf("\t\t| 2.    Them thong tin hoc vien tu ban phim.	           |\n");
		printf("\t\t| 3.    Tim kiem thong tin theo yeu cau.                   |\n");
		printf("\t\t| 4.    Tim thong tin hoc vien co diem cao nhat.           |\n");
		printf("\t\t| 5.    Tim thong tin hoc vien co hoc phi cao nhat.        |\n");
		printf("\t\t| 6.    Sap xep diem hoc vien giam dan theo lop.           |\n");
		printf("\t\t| 7.    In ra thong tin hoc vien co diem chua dat.         |\n");
		printf("\t\t| 8.    Luu file danh sach cac hoc vien duoc hoc bong.     |\n");
		printf("\t\t| 0.    Thoat chuong trinh!!!                              |\n"); 
		printf("\t\t ========================================================== \n");
		printf("\n");
}

void menuTimKiem()
{
	color(14);
	printf("\n");
	printf("\t\t ***************************************************** \n");
	printf("\t\t|       HAY CHON CAC YEU CAU TIM KIEM SAU DAY !!!     |\n");
	printf("\t\t ***************************************************** \n");
	color(20);
	printf("\n\t\t    -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= ");
	printf("\n\t\t   | 1.    Tim kiem hoc vien theo ten lop.          |");
	printf("\n\t\t   + 2.    Tim kiem hoc vien theo ma hoc vien.      +");
	printf("\n\t\t   + 3.    Tim kiem hoc vien theo nam sinh.         +");
	printf("\n\t\t   | 0.    Quay lai chuong trinh chinh!!!           |");
	printf("\n\t\t    -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= ");
	printf("\n");
}

void color(int color)
{
	WORD wColor;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
	{
		wColor = (csbi.wAttributes & 0xF0) + (color & 0x0F);
		SetConsoleTextAttribute(hStdOut, wColor);
	}
}



