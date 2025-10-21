#include <stdio.h>

void inTamGiacSo(int x) {
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
    int x = 5; 
    
    printf("Voi x = %d:\n", x);
    inTamGiacSo(x);
    
    return 0;
}