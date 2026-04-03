#include "Header.h"

NodeHocVien* createHocVien(HocVien x)
{
	NodeHocVien* newNode = new NodeHocVien();
	if (newNode == NULL) return NULL;
	newNode->Info = x;
	newNode->Next = NULL;
	return newNode;
}

int isEmptyHocVien(ListHocVien x)
{
	return x.Head == NULL ? 1 : 0;
}

int insertTail_HocVien(ListHocVien& hv, NodeHocVien* p) //Thêm cuối
{
	if (p == NULL)
		return 0; //Thêm thất bại
	if (isEmptyHocVien(hv) == 1)
	{
		hv.Head = p;
		hv.Tail = p;
	}
	else
	{
		hv.Tail->Next = p;
		hv.Tail = p;
	}
	return 1; //Thêm thành công
}

NodeLopHoc* createLopHoc(LopHoc x)
{
	NodeLopHoc* newNode = new NodeLopHoc();
	if (newNode == NULL) return NULL;
	newNode->Info = x;
	newNode->Next = NULL;
	return newNode;
}

int isEmptyLopHoc(ListLopHoc x)
{
	return x.head == NULL ? 1 : 0;
}

int insertTail_LopHoc(ListLopHoc& lh, NodeLopHoc* p) //Thêm cuối
{
	if (p == NULL)
		return 0; //Thêm thất bại
	if (isEmptyLopHoc(lh) == 1)
	{
		lh.head = p;
		lh.Tail = p;
	}
	else
	{
		lh.Tail->Next = p;
		lh.Tail = p;
	}
	return 1; //Thêm thành công
}

