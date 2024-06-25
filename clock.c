#include <stdio.h>
#include <windows.h>

int main(){
    int h=0,m=0,s=0,c;
    do{
        printf("Choose number:\n\t1/Stopwatch\n\t2/Timer\n ");
        scanf("%d",&c);
    }while(c!=1 && c!=2);
    if(c==1){
            while(1){
            s++;
            if(s>59){
                m++;
                s=0;
            }
            if(m>59){
                h++;
                m=0;
            }
            if(h>12){
                h=1;
            }
            printf("Clock: \n");
            printf("%02d:%02d:%02d",h,m,s);
            Sleep(965);
            system("cls");
            }
        }
    if(c==2){
        do{
            printf("Set time (hh:mm:ss): \n");
            scanf("%d:%d:%d",&h,&m,&s);
        }while(h==0 && m==0 && s==0);
        while(1){
            if(s!=0) s--;
            if(h==0 && m==0 && s==0) break;
            if(m==0 && s==0){
                h--;
                m=59;
                s=59;
            }
            if(s==0){
                m--;
                s=59;
            }
            printf("Clock: \n");
            printf("%02d:%02d:%02d",h,m,s);
            Sleep(965);
            system("cls");
            
        }
        Beep(700,200);Beep(700,200);Beep(700,200);
        printf("TIME IS UP !");
    }
}