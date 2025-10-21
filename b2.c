#include <stdio.h>

void namnhuan(){
    int nam;
    printf("nhap so nam: ");
    scanf("%d",&nam);

    if(nam%4==0){
        printf("%d la nam nhuan", nam);
    }
    else{
        printf("%d khong phai nam nhuan", nam);
    }
}
