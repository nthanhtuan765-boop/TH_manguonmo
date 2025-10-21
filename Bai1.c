#include <stdio.h>


int soNgayCuaThang(int thang) {
    if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        return 30;
    } else if (thang == 2) {
        
        return 28;
    } else if (thang >= 1 && thang <= 12) {
        return 31;
    } else {
        return -1; 
    }
}

int main() {
    int thang;

    printf("Nhap vao mot thang (tu 1 den 12): ");
    scanf("%d", &thang);

    int soNgay = soNgayCuaThang(thang);

    if (soNgay == -1) {
        printf("Thang ban nhap khong hop le.\n");
    } else {
        printf("Thang %d co %d ngay.\n", thang, soNgay);
    }

    return 0;
}