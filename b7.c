#include <stdio.h>

// 🧮 Hàm tính giai thừa của n
long long giaithua(int n) {
    long long kq = 1;
    for (int i = 1; i <= n; i++)
        kq *= i;
    return kq;
}

int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Khong co giai thua cho so am!\n");
    else
        printf("%d! = %lld\n", n, giaithua(n));

    return 0;
}
