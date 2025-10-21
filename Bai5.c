#include <stdio.h>

long long tinhTienDien(int so_dien) {
    long long tong_tien = 0;
    int con_lai = so_dien;
    
    if (so_dien < 0) return 0;
    
    if (con_lai > 650) {
        tong_tien += (long long)(con_lai - 650) * 700;
        con_lai = 650;
    }

    if (con_lai > 350) {
        tong_tien += (long long)(con_lai - 350) * 650;
        con_lai = 350;
    }

    if (con_lai > 100) {
        tong_tien += (long long)(con_lai - 100) * 550;
        con_lai = 100;
    }
    
    if (con_lai > 0) {
        tong_tien += (long long)con_lai * 500;
    }

    return tong_tien;
}

int main() {
    int so_dien;
    long long tien_dien;

    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%d", &so_dien);

    tien_dien = tinhTienDien(so_dien);

    printf("Tong tien dien: %lld VND\n", tien_dien);
    
    return 0;
}
