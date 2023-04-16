#include "khaibao.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int key;
    char fileName[] = "taikhoan.txt";
    TK arrayTK[MAX];
    int soluongTK = 0;
    int idCount = 0; 
     
    soluongTK = docFile(arrayTK, fileName);
 
    while(true) {
        printf("CHUONG TRINH QUAN LY NGAN HANG\n");
        printf("=========================MENU==========================\n");
        printf("==  1. Them tai khoan.                               ==\n");
        printf("==  2. Cap nhat thong tin tai khoan boi ID.          ==\n");
        printf("==  3. Xoa tai khoan theo ID.                        ==\n");
        printf("==  4. Tim kiem tai khoan theo ten.                  ==\n");
        printf("==  5. Giao dich.                                    ==\n");
        printf("==  8. Hien thi danh sach tai khoan.                 ==\n");
        printf("==  9. Ghi danh sach tai khoan vao file.             ==\n"); 
        printf("==  0. Thoat                                         ==\n");
        printf("=======================================================\n");
        printf("Nhap tuy chon: ");
        scanf("%d", &key);
        switch(key){
            case 1:
                printf("\n1. Them tai khoan.");
                idCount++;
                nhapTK(arrayTK, idCount, soluongTK);
                printf("\nThem tai khoan thanh cong!");
                soluongTK++;
                pressAnyKey();
                break;
            case 2:
                if(soluongTK > 0) {
                    int id;
                    printf("\n2. Cap nhat thong tin tai khoan. ");
                    printf("\n Nhap ID: "); scanf("%d", &id);
                    capNhatTK(arrayTK, id, soluongTK);
                }else{
                    printf("\nSanh sach tai khoan trong!");
                }
                pressAnyKey();
                break;
            case 3:
                if(soluongTK > 0) {
                    int id;
                    printf("\n3. Xoa tai khoan.");
                    printf("\n Nhap ID: "); scanf("%d", &id);
                    if (xoaTheoID(arrayTK, id, soluongTK) == 1) {
                        printf("\nTai khoan co id = %d da bi xoa.", id);
                        soluongTK--;
                    }
                }else{
                    printf("\nDanh sach tai khoan trong!");
                }
                pressAnyKey();
                break;
            case 4:
                if(soluongTK > 0) {
                    printf("\n4. Tim kiem tai khoan theo ten.");
                    char strTen[30];
                    printf("\nNhap ten de tim kiem: "); fflush(stdin); gets(strTen);
                    timKiemTheoTen(arrayTK, strTen, soluongTK);
                }else{
                    printf("\nDanh sach tai khoan trong!");
                }
                pressAnyKey();
                break;
            case 5:
            	system("cls");
            	if(soluongTK > 0) {
				int c;
				while(true) {
        		printf("\n");
        		printf("======================GIAO DICH========================\n");
        		printf("==  1. Nap tien vao tai khoan.                       ==\n");
        		printf("==  2. Rut tien vao tai khoan.                       ==\n");
       			printf("==  3. Chuyen tien den tai khoan.                    ==\n");
        		printf("==  0. Thoat                                         ==\n");
        		printf("=======================================================\n");
        		printf("Nhap tuy chon: ");
        		scanf("%d", &c);
        		switch(c){
        		case 1:
            	if(soluongTK > 0) {
                    int id;
                    printf("\n1. Nap tien. ");
                    printf("\n Nhap ID: "); scanf("%d", &id);
                    naptienvaotaikhoan(arrayTK, id, soluongTK);
                }else{
                    printf("\nSanh sach tai khoan trong!");
                }
                pressAnyKey();
                break;
               case 2:
            	if(soluongTK > 0) {
                    int id;
                    printf("\n2. Rut tien. ");
                    printf("\n Nhap ID: "); scanf("%d", &id);
                    ruttientutaikhoan(arrayTK, id, soluongTK);
                }else{
                    printf("\nSanh sach tai khoan trong!");
                }
                pressAnyKey();
                break;
            	case 3:
            	if(soluongTK > 0) {
                    int id1, id2;
                    printf("\n3. Chuyen tien. ");
                    printf("\nNhap ID chuyen tien: "); scanf("%d", &id1);
                    printf("Nhap ID nhan tien: "); scanf("%d", &id2);
                    chuyentiendentaikhoan(arrayTK, id1, id2, soluongTK);
                }else{
                    printf("\nSanh sach tai khoan trong!");
                }
                pressAnyKey();
                break;
                case 0:
                printf("\nBan da chon thoat chuong trinh!");
                getch();
                return 0;
		}
	}
}
            else{
                    printf("\nDanh sach tai khoan trong!");
                }
                pressAnyKey();
                break;
            case 8:
                if(soluongTK > 0){
                    printf("\n8. Hien thi danh sach tai khoan.");
                    showTK(arrayTK, soluongTK);
                }else{
                    printf("\nDanh sach tai khoan trong!");
                }
                pressAnyKey();
                break;
            case 9:
                if(soluongTK > 0){
                    printf("\n9. Ghi danh sach tai khoan vao file.");
                    ghiFile(arrayTK, soluongTK, fileName);
                }else{
                    printf("\nSanh sach tai khoan trong!");
                }
                printf("\nGhi danh sach tai khoan vao file %s thanh cong!", fileName);
                pressAnyKey();
                break;
            case 0:
                printf("\nBan da chon thoat chuong trinh!");
                getch();
                return 0;
            default:
                printf("\nKhong co chuc nang nay!");
                printf("\nHay chon chuc nang trong hop menu.");
                pressAnyKey();
                break;
        }
    }
	return 0;
}
