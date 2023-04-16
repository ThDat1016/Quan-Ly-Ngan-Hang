#include "khaibao.h"

void nhapThongTinTaiKhoan(TK &tk, int id) {
    printf("\nNhap Ten: "); fflush(stdin); gets(tk.ten);
    printf("Nhap Gioi Tinh: "); gets(tk.gioitinh);
    printf("Nhap Ngay Sinh: "); scanf("%d%d%d",&tk.ngaysinh.day, &tk.ngaysinh.month, &tk.ngaysinh.year);
    printf("Nhap So Dien Thoai: "); fflush(stdin); gets(tk.sdt);
    tk.id = id;
    tk.sodu.goc = 0;
}

void nhapTK(TK a[], int id, int n){
	printLine(40);
    printf("\nNhap Tai Khoan Thu %d:", n + 1);
    nhapThongTinTaiKhoan(a[n], id);
    printLine(40);
}

void capnhatTaiKhoan(TK &tk){
	printf("Nhap Ten: "); fflush(stdin); gets(tk.ten);
    printf("Nhap Gioi Tinh: "); gets(tk.gioitinh);
    printf("Nhap Ngay Sinh: "); scanf("%d%d%d",&tk.ngaysinh.day, &tk.ngaysinh.month, &tk.ngaysinh.year);
    printf("Nhap So Dien Thoai: "); fflush(stdin); gets(tk.sdt);
}

void capNhatTK(TK a[], int id, int n) {
    int found = 0;
    for(int i = 0; i < n; i++) {
        if (a[i].id == id) {
            found = 1;
            printLine(40);
            printf("\nCap nhat thong tin tai khoan co ID = %d\n", id);
            capnhatTaiKhoan(a[i]);
            printLine(40);
            break;
        }
    }
    if (found == 0) {
        printf("\nTai khoan co ID = %d khong ton tai.", id);
    }
}

int xoaTheoID(TK a[], int id, int n) {
    int found = 0;
    for(int i = 0; i < n; i++) {
        if (a[i].id == id) {
            found = 1;
            printLine(40);
            for (int j = i; j < n; j++) {
                a[j] = a[j+1];
            }
            printf("\nDa xoa tai khoan co ID = %d", id);
            printLine(40);
            break;
        }
    }
    if (found == 0) {
        printf("\nTai khoan co ID = %d khong ton tai.", id);
        return 0;
    } else {
        return 1;
    }

}

void showTK(TK a[], int n) {
    printLine(100);
    printf("\n\tID\tHo va ten\t\tGioi tinh\tNgaySinh\tSo Dien Thoai\tSo Du");printf("\n");
    for(int i = 0; i < n; i++) {
        printf("\t%d", a[i].id);
        printf("\t%s", a[i].ten);
        printf("\t%s", a[i].gioitinh);
        printf("\t\t%d/%d/%d", a[i].ngaysinh.day, a[i].ngaysinh.month, a[i].ngaysinh.year);
        printf("\t%s", a[i].sdt);
        printf("\t%d USD\n", a[i].sodu.goc);
    }
    printLine(100);
}

void timKiemTheoTen(TK a[], char ten[], int n) {
    TK arrayFound[MAX];
    char tenTK[30];
    int found = 0;
    for(int i = 0; i < n; i++) {
        strcpy(tenTK, a[i].ten);
        if(strstr(strupr(tenTK), strupr(ten))) {
            arrayFound[found] = a[i];
            found++;
        }
    }
    showTK(arrayFound, found);
}
