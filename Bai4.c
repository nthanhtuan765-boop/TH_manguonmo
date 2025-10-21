#include <stdio.h>
#include <string.h>

void xepLoaiHocLuc(float diem, char *ketQua) {
    if (diem < 3.0) {
        strcpy(ketQua, "YEU");
    } else if (diem <= 5.0) {
        strcpy(ketQua, "TRUNG BINH KEM");
    } else if (diem <= 6.5) {
        strcpy(ketQua, "TRUNG BINH");
    } else if (diem <= 8.0) {
        strcpy(ketQua, "KHA");
    } else if (diem <= 10.0) {
        strcpy(ketQua, "GIOI");
    } else {
        strcpy(ketQua, "DIEM KHONG HOP LE");
    }
}

int main() {
    float van, toan, anh_van, diem_cuoi_ky;
    char hoc_luc[50];

    printf("Nhap diem mon Van: ");
    scanf("%f", &van);
    printf("Nhap diem mon Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem mon Anh Van: ");
    scanf("%f", &anh_van);

    diem_cuoi_ky = (van * 2 + toan * 2 + anh_van) / 5.0;

    xepLoaiHocLuc(diem_cuoi_ky, hoc_luc);

    printf("\n--- KET QUA HOC TAP ---\n");
    printf("Diem Cuoi Ky: %.2f\n", diem_cuoi_ky);
    printf("Hoc Luc: %s\n", hoc_luc);
    
    return 0;
}