#include "khaibao.h"

void naptienvaotaikhoan(TK a[], int id, int n){
	int found = 0;
    for(int i = 0; i < n; i++) {
        if (a[i].id == id) {
            found = 1;
            printLine(40);
            printf("\nNap tien vao tai khoan co ID = %d\n", id);
            printf("Nhap so tien: ");
			scanf("%d", &a[i].sodu.tien);
			a[i].sodu.goc += a[i].sodu.tien;
            printLine(40);
            break;
        }
    }
    if (found == 0) {
        printf("\nTai khoan co ID = %d khong ton tai.", id);
    }
}

void ruttientutaikhoan(TK a[], int id, int n){
	int found = 0;
    for(int i = 0; i < n; i++) {
        if (a[i].id == id) {
            found = 1;
            printLine(40);
            printf("\nRut tien tu tai khoan co ID = %d\n", id);
            printf("Nhap so tien: ");
			scanf("%d", &a[i].sodu.tien);
			a[i].sodu.goc -= a[i].sodu.tien;
            printLine(40);
            break;
        }
    }
    
    if (found == 0) {
        printf("\nTai khoan co ID = %d khong ton tai.", id);
    }
}


void chuyentiendentaikhoan(TK a[], int id1, int id2, int n){
		int found = 0;
		printf("\nChuyen tien tu tai khoan co ID = %d den tai khoan co ID = %d\n", id1, id2);
    for(int i = 0; i < n; i++) {
    	found = 1; 
    	for(int j = 0; j < n; j++){	
        if (a[i].id == id1 && a[j].id == id2){ 
            printLine(40);
            printf("Nhap so tien: ");
			scanf("%d", &a[i].sodu.tien);
            a[i].sodu.goc -= a[i].sodu.tien;
			a[j].sodu.goc += a[i].sodu.tien;
            printLine(40);
            break;
        	}
		}
    if (found == 0) {
        printf("\nTai khoan co ID = %d va ID = %d khong ton tai.", id1, id2);
   		}		
	}
}
