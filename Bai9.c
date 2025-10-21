#include <stdio.h>

void nhapTuanTu(int n) {
    int so_nhap;
    int du_doan = 1; 

    printf("Bat dau nhap tu 1 den %d.\n", n);

    while (du_doan <= n) {
        printf("Nhap so %d: ", du_doan);
        
        // Kiem tra viec nhap co thanh cong khong
        if (scanf("%d", &so_nhap) != 1) {
            printf("\n--- LOI NHAP DU LIEU (Khong phai so)! ---\n");
            // Xoa bo dem nhap lieu bi loi
            while (getchar() != '\n'); 
            printf("Vui long nhap lai tu dau (so 1).\n");
            du_doan = 1; 
            continue; 
        }

        // Kiem tra xem so nhap co dung la so du doan hay khong
        if (so_nhap != du_doan) {
            printf("\n--- NHAP SAI! (Ban da nhap %d, can nhap %d) ---\n", so_nhap, du_doan);
            printf("Vui long nhap lai tu dau (so 1).\n");
            du_doan = 1; // Dat lai ve 1
            continue; // Bat dau lai vong lap
        }

        // Neu dung, tang so du doan len
        du_doan++;
    }
    
    printf("\n--- CHUC MUNG! BAN DA NHAP THANH CONG DAY SO TU 1 DEN %d. ---\n", n);
}

int main() {
    int N = 5; // Dat N mac dinh la 5 de thu nghiem
    
    nhapTuanTu(N);

    return 0;
}