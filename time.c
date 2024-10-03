#include<stdio.h>
#include <time.h>

int hour;

int main ()
{
    time_t now;
    struct tm * now_tm;

    now=time(NULL);
    now_tm = localtime(&now);
    hour = now_tm->tm_hour;
    
    scanf("%d", &hour);
    if (hour < 12){
        printf("good morning\n");
    }else if (hour < 18){
        printf("good afternoon\n");
    }else{
        printf("good evening\n");
    }
    return 0;
}