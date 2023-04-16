#include<conio.h>
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

struct date{
	int day, month, year;
};
struct tien{
	int goc, tien;
};
typedef struct TaiKhoan{
	int id;
	char ten[30];
	char gioitinh[5];
	date ngaysinh;
	char sdt[10];
	tien sodu;
}TK;
// ke thang va xoa man hinh
void printLine(int n);
void pressAnyKey();
// thong tin tai khoan
void nhapThongTinTaiKhoan(TK &tk, int id);
void nhapTK(TK a[], int id, int n);
void capnhatTaiKhoan(TK &tk);
void capNhatTK(TK a[], int id, int n);
int xoaTheoID(TK a[], int id, int n);
void showTK(TK a[], int n);
void timKiemTheoTen(TK a[], char ten[], int n);
// giao dich
void naptienvaotaikhoan(TK a[], int id, int n);
void ruttientutaikhoan(TK a[], int id, int n);
void chuyentiendentaikhoan(TK a[], int id1, int id2, int n);
void menugd();
// file
int docFile(TK a[], char fileName[]);
void ghiFile(TK a[], int n, char fileName[]);
