#include <stdio.h>

void inBangCuuChuong(int n) {
    if (n < 1 || n > 10) {
        printf("So chuong phai tu 1 den 10.\n");
        return;
    }
    printf("--- BANG CUU CHUONG %d ---\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int chuong;
    
    printf("Nhap so chuong muon in (1-10): ");
    scanf("%d", &chuong);

    inBangCuuChuong(chuong);

    return 0;
}