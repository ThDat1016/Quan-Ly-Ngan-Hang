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
            if(a[i].sodu.goc<50000){
            	printf("Tai khoan ban khong du vui long nap them tien!");}
            	else{
			
			scanf("%d", &a[i].sodu.tien);
			a[i].sodu.goc -= a[i].sodu.tien;
            printLine(40);
            break;
        }}}
    
    
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
void taikhoantietkiem1(TK a[], int id, int n){
int found = 0;
    for(int i = 0; i < n; i++) {
        if (a[i].id == id) {
            found = 1;
            printLine(40);
            printf("\n Gui tiet kiem tu tai khoan co ID = %d\n", id);
             printf("nhap ki han:"); scanf("%d",&a[i].kihan);
            printf("Nhap so tien: ");
			scanf("%d", &a[i].sodu.tien);
			if(a[i].sodu.goc<a[i].sodu.tien){
				printf("tai khoan khoan khong du gui tiet kiem");}
				else{
					a[i].sodu.goc -= a[i].sodu.tien;
					a[i].tienlai=a[i].sodu.tien*a[i].laisuat/12*a[i].kihan;
		
    				if(a[i].sodu.tien<100000){
       					 a[i].tienlai=0;
        				 a[i].sodu.goc+= a[i].sodu.tien;
   						}
    				else{
        			if(a[i].kihan<1){
            		printf("khong du dieu kien");
       			 }
        
        				if(1<=a[i].kihan&&a[i].kihan<3){
        					a[i].laisuat=0.054;
            				a[i].tienlai=a[i].sodu.tien*a[i].laisuat/12*a[i].kihan;   
           					a[i].tong=(a[i].sodu.tien*a[i].laisuat/12*a[i].kihan)+a[i].sodu.tien;
        		}
        				else if(3<=a[i].kihan&&a[i].kihan<6){
        					a[i].laisuat=0.06;
          					a[i].tienlai=a[i].sodu.tien*a[i].laisuat/12*a[i].kihan;
            				a[i].tong=(a[i].sodu.tien*a[i].laisuat/12*a[i].kihan)+a[i].sodu.tien;
        		}
        				else if( 6<=a[i].kihan&&a[i].kihan<9){
        					a[i].laisuat=0.061;
            				a[i].tienlai=a[i].sodu.tien*a[i].laisuat/12*a[i].kihan; 
            				a[i].tong=(a[i].sodu.tien*a[i].laisuat/12*a[i].kihan)+a[i].sodu.tien;
        }
        				else if( a[i].kihan>=9){
        					a[i].laisuat=0.07;
        					a[i].tienlai=a[i].sodu.tien*a[i].laisuat/12*a[i].kihan;
        					a[i].tong=(a[i].sodu.tien*a[i].laisuat/12*a[i].kihan)+a[i].sodu.tien;
        		printLine(40);
            	break;
        		}}}}
				a[i].tong=(a[i].sodu.tien*a[i].laisuat/12*a[i].kihan)+a[i].sodu.tien;}
			
        	 if (found == 0) {
        	 	printf("\nTai khoan co ID = %d khong ton tai.", id);
       }}
        
void taikhoantietkiem2(TK a[], int id, int n){
	int found = 0;
    for(int i = 0; i < n; i++) {
        if (a[i].id == id) {
            found = 1;
            printLine(40);
            printf("\n Gui tiet kiem tu tai khoan co ID = %d\n", id);
             printf("nhap ki han:"); scanf("%d",&a[i].kihan);
            printf("Nhap so tien: ");
			scanf("%d", &a[i].sodu.tien);
			if(a[i].sodu.goc<a[i].sodu.tien){
				printf("tai khoan khoan khong du gui tiet kiem");}
				else{
		a[i].sodu.goc -= a[i].sodu.tien;
    if(a[i].sodu.tien<100000){
        a[i].tienlai=0;
        a[i].sodu.goc+= a[i].sodu.tien;
    }
    else{
        if(a[i].kihan<1){
            a[i].tienlai=0;
        }
        if(1<=a[i].kihan&&a[i].kihan<3){
        	a[i].laisuat=0.054;
			a[i].laikep =a[i].sodu.tien*pow((1+a[i].laisuat/12),a[i].kihan);

        }
        else if(3<=a[i].kihan&&a[i].kihan<6){
        		a[i].laisuat=0.06;
           a[i].laikep =a[i].sodu.tien*pow((1+a[i].laisuat/12),a[i].kihan);
           
        }
        else if( 6<=a[i].kihan&&a[i].kihan<9){
        		a[i].laisuat=0.061;
            a[i].laikep =a[i].sodu.tien*pow((1+a[i].laisuat/12),a[i].kihan);
           
        }
        else if( a[i].kihan>=9){
        		a[i].laisuat=0.07;
        a[i].laikep =a[i].sodu.tien*pow((1+a[i].laisuat/12),a[i].kihan);
        
        printLine(40);
            break;
        	}}}}
		}
			
			if (found == 0) {
       printf("\nTai khoan co ID = %d khong ton tai.", id);}}
