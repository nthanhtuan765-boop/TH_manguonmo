#include <stdio.h>

// Hàm kiểm tra năm nhuận
int laNamNhuan(int nam) {
    return (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0);
}

// Hàm trả về số ngày của một tháng
int soNgayTrongThang(int thang, int nam) {
    switch (thang) {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return laNamNhuan(nam) ? 29 : 28;
        default:
            return -1; // tháng không hợp lệ
    }
}

int main() {
    int thang, nam;
    printf("Nhap thang (1-12): ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    int ngay = soNgayTrongThang(thang, nam);
    if (ngay == -1)
        printf("Thang khong hop le!\n");
    else
        printf("Thang %d nam %d co %d ngay.\n", thang, nam, ngay);

    return 0;
}
