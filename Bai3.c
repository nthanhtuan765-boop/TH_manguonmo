#include <stdio.h>
#include <math.h>

void giaiPhuongTrinhBacHai(float a, float b, float c) {
    float delta;
    
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            printf("Phuong trinh bac nhat: x = %.4f\n", -c / b);
        }
        return;
    }

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co hai nghiem phan biet:\n");
        printf("x1 = %.4f\n", x1);
        printf("x2 = %.4f\n", x2);
    } else if (delta == 0) {
        float x = -b / (2 * a);
        printf("Phuong trinh co nghiem kep:\n");
        printf("x1 = x2 = %.4f\n", x);
    } else {
        float phan_thuc = -b / (2 * a);
        float phan_ao = sqrt(-delta) / (2 * a);
        printf("Phuong trinh co hai nghiem phuc:\n");
        printf("x1 = %.4f + %.4fi\n", phan_thuc, phan_ao);
        printf("x2 = %.4f - %.4fi\n", phan_thuc, phan_ao);
    }
}

int main() {
    float a, b, c;

    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);

    printf("\nPhuong trinh: %.2fx^2 + %.2fx + %.2f = 0\n", a, b, c);
    giaiPhuongTrinhBacHai(a, b, c);

    return 0;
}