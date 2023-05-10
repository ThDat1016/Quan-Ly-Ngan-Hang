#include "khaibao.h"
int docFile(TK a[], char fileName[]) {
    FILE * fp;
    int i = 0;
    fp = fopen (fileName, "r");
    printf("Chuan bi doc file: "); puts(fileName);
    while (fscanf(fp, "%5d%30s%5s%5d%d%d%5s%d%0.2f%0.2f%0.2f\n", &a[i].id, &a[i].ten, &a[i].gioitinh, &a[i].ngaysinh.day, &a[i].ngaysinh.month, &a[i].ngaysinh.year, &a[i].sdt, &a[i].sodu.goc,&a[i].tienlai,&a[i].tong,&a[i].laikep)) {
       i++;
	   printf("Doc ban ghi thu: %d\n", i);
	    break;
    }
    printf("So luong tai khoan co san trong file la: %d\n", i);
    printf("\n");
    return i;
    fclose (fp);
}

void ghiFile(TK a[], int n, char fileName[]) {
    FILE * fp;
    fp = fopen (fileName,"w");
    fprintf(fp,"| ID  |      Ho va ten      | Gioi tinh|   Ngay sinh  |  So dien thoai|      So du      |      Tien lai      |  Tong tiet kiem don   |   Lai kep   |\n");
    for(int i = 0;i < n;i++){
        fprintf(fp,"\n|%5d| %-20s|%-11s|%2d/%2d/%-9d|%-15s|%16d |%19.2lf |%22.2lf |%13.2lf |\n"
		, a[i].id, a[i].ten, a[i].gioitinh, a[i].ngaysinh.day, a[i].ngaysinh.month, a[i].ngaysinh.year, a[i].sdt, a[i].sodu.goc, a[i].tienlai, a[i].tong, a[i].laikep);
		}
    fclose (fp);
}
