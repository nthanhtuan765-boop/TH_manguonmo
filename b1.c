#include<stdio.h>

void xemthang(){
    int thang;
    printf("nhap thang: ");
    scanf("%d",&thang);

    if(thang == 2){
        printf("thang co 28 hoac 29 ngay");
    }
    if(thang==1 || thang==3 || thang==5 || thang==7 || thang==8 || thang==10 || thang==12){
        printf("thang co 31 ngay");
    }

    if(thang==4 || thang==6 || thang==9 || thang==11){
        printf("thang co 30 ngay");
    }
    
}