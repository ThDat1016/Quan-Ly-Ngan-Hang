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
   
   printf("\n");
    printf("| ID  |      Ho va ten      | Gioi tinh|   Ngay sinh  |  So dien thoai|      So du      |      Tien lai      |  Tong tiet kiem don   |   Lai kep   |\n");
    printf("+-----+----------------------+-----------+--------------+---------------+-----------------+-------------------+-----------------------+--------------+\n");
    for(int i = 0; i < n; i++) {
        printf("|%5d| %-20s|%-11s|%2d/%2d/%-9d|%-15s|%16d |%19.2lf |%22.2lf |%13.2lf |\n"
		, a[i].id, a[i].ten, a[i].gioitinh, a[i].ngaysinh.day, a[i].ngaysinh.month, a[i].ngaysinh.year, a[i].sdt, a[i].sodu.goc, a[i].tienlai, a[i].tong, a[i].laikep);
        printf("+-----+----------------------+-----------+--------------+---------------+-----------------+-------------------+-----------------------+--------------+\n");
    }
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
