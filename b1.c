#include <stdio.h>

int main() {
    int thang, nam, songay;

    printf("Nhap thang (1-12): ");
    scanf("%d", &thang);

    // Nếu tháng 2 thì cần nhập thêm năm để kiểm tra năm nhuận
    if (thang == 2) {
        printf("Nhap nam: ");
        scanf("%d", &nam);

        if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
            songay = 29; // năm nhuận
        else
            songay = 28;
    } 
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
        songay = 30;
    else if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || 
             thang == 8 || thang == 10 || thang == 12)
        songay = 31;
    else {
        printf("Thang khong hop le!\n");
        return 1;
    }

    printf("Thang %d co %d ngay.\n", thang, songay);
    return 0;
}
