#include <stdio.h>
#include <stdbool.h>

int main(void){
    int time = 12;
    
if (time >= 00){
        printf("good morning");
    }else if (time >= 12){
        printf("good afternoon");
    }else if (time >= 18){
        printf("good evening");
    }
    
    return 0;
}