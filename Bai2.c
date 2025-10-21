#include <stdio.h>

int main() {
    int nam;

    // 1. Nhập vào số năm
    printf("Nhap vao so nam: ");
    scanf("%d", &nam);

    // 2. Kiểm tra năm nhuận và hiển thị kết quả
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        printf("%d LA nam nhuan.\n", nam);
    } else {
        printf("%d KHONG phai nam nhuan.\n", nam);
    }

    return 0;
}