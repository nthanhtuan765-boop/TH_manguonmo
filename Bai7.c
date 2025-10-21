#include <stdio.h>

int tinhGiaiThua(int n) {
    int ket_qua = 1;
    for (int i = 1; i <= n; i++) {
        ket_qua = ket_qua * i;
    }
    return ket_qua;
}

int main() {
    int so;
    
    printf("Nhap so nguyen: ");
    scanf("%d", &so);

    printf("%d! = %d\n", so, tinhGiaiThua(so));
    
    return 0;
}