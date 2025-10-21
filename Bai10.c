#include <stdio.h>

void inDayFibonacci(int n) {
    int a = 0;
    int b = 1;

    printf("Day Fibonacci nho hon %d:\n", n);
    
    // In so 0 neu n > 0
    if (n > 0) {
        printf("%d", a);
    }
    
    // In so 1 neu n > 1
    if (n > 1) {
        printf(" %d", b);
    }
    
    // Tinh va in cac so tiep theo
    while (1) {
        int next = a + b;
        
        if (next >= n) {
            break;
        }
        
        printf(" %d", next);
        
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int N;

    printf("Nhap gioi han N: ");
    scanf("%d", &N);

    inDayFibonacci(N);

    return 0;
}