#include "khaibao.h"
int docFile(TK a[], char fileName[]) {
    FILE * fp;
    int i = 0;
    fp = fopen (fileName, "r");
    printf("Chuan bi doc file: "); puts(fileName);
    while (fscanf(fp, "%5d%30s%5s%5d%d%d%5s%d\n", &a[i].id, &a[i].ten, &a[i].gioitinh, &a[i].ngaysinh.day, &a[i].ngaysinh.month, &a[i].ngaysinh.year, &a[i].sdt, &a[i].sodu.goc) != EOF) {
       i++;
	   printf("Doc ban ghi thu: %d\n", i);
    }
    printf("So luong tai khoan co san trong file la: %d\n", i);
    printf("\n");
    return i;
    fclose (fp);
}

void ghiFile(TK a[], int n, char fileName[]) {
    FILE * fp;
    fp = fopen (fileName,"w");
    fprintf(fp, "ID\tHo va ten\t\tGioi tinh\tNgaySinh\tSo Dien Thoai\tSo Du");
    for(int i = 0;i < n;i++){
        fprintf(fp, "\n%d\t%s\t%s\t\t%d/%d/%d\t%s\t%d USD", a[i].id, a[i].ten, a[i].gioitinh, a[i].ngaysinh.day, a[i].ngaysinh.month, a[i].ngaysinh.year, a[i].sdt,a[i].sodu.goc);
    }
    fclose (fp);
}
