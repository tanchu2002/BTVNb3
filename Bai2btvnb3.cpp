#include <stdio.h>

int main()
{
int ngay;
printf("nhap ngay: ");
scanf("%d", &ngay);
int thang;
printf("nhap thang: ");
scanf("%d", &thang);
int nam;
printf("nhap nam: ");
scanf("%d", &nam);
int songaytrongthang;

if(thang ==1 || thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){
    songaytrongthang=31;
}else{
    if(thang ==4 || thang==6||thang==9||thang==11){
       songaytrongthang=30; 
    }else{
        if(thang==2){
            if((nam%4==0&&nam%100!=0)||(nam%400==0)){
                songaytrongthang=29;
            }else{
                songaytrongthang=28;
            }
        }else{
            printf("khong co thang nay\n");
        }
    }
}
if(ngay<1||ngay>songaytrongthang){
    printf("sai ngay\n");
}
if(ngay==songaytrongthang){
    ngay=1;
    if(thang<12){
        thang=thang+1;
    }else{
        thang = 1;
        nam=nam+1;
    }
}else{
        ngay=ngay+1;
    }

printf("Ngày ke tiep là: %d\n", ngay);
printf("Tháng ke tiep là: %d\n", thang);
printf("Nãm ke tiep là: %d\n", nam);
}
