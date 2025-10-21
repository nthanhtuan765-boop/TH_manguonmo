#include <stdio.h>

void inTamGiacSao(int n) {
    for (int i = 1; i <= n; i++) {
        // In khoang trang (spaces)
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // In ky tu sao (*)
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        
        printf("\n");
    }
}

int main() {
    int N = 4;
    
    printf("Voi N = %d:\n", N);
    inTamGiacSao(N);
    
    return 0;
}