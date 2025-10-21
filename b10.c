#include <stdio.h>

// 🧮 Hàm in dãy Fibonacci nhỏ hơn n
void inFibonacci(int n) {
    int a = 0, b = 1, c;
    while (a < n) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Day Fibonacci nho hon %d:\n", n);
    inFibonacci(n);

    return 0;
}
