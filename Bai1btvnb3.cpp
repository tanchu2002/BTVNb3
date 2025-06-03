#include <stdio.h>

int main(){
    int a;
    printf("thu nhap theo nam cua ban la: ");
	scanf("%d", &a);
	a-=132;
    int tienthue;
    if(a<=0){
        printf("Ban khong mat thue");
    }else{
        if(a<=60){
          tienthue=a*0.05;
          printf("So thue phai nop la %d trieu dong", tienthue);
        }else{
            if(a<=120){
              tienthue=60*0.05+(a-60)*0.1;
              printf("So thue phai nop la %d trieu dong", tienthue);
            }else{
                if(a<=216){
                    tienthue=60*0.05+60*0.1+(a-120)*0.15;
                    printf("So thue phai nop la %d trieu dong", tienthue);
                }else{
                    if(a<=384){
                        tienthue=60*0.05+60*0.1+96*0.15+(a-216)*0.2;
                        printf("So thue phai nop la %d trieu dong", tienthue);
                    }else{
                        if(a<=624){
                            tienthue=60*0.05+60*0.1+96*0.15+168*0.2+(a-384)*0.25;
                            printf("So thue phai nop la %d trieu dong", tienthue);
                        }else{
                            if(a<=960){
                                tienthue=60*0.05+60*0.1+96*0.15+168*0.2+240*0.25+(a-624)*0.3;
                                printf("So thue phai nop la %d trieu dong", tienthue);
                            }else{
                                 tienthue=60*0.05+60*0.1+96*0.15+168*0.2+240*0.25+336*0.3+(a-960)*0.35;
                                 printf("So thue phai nop la %d trieu dong", tienthue);
                            }
                        }
                    }
                }
            }
        }
    }
    
}

