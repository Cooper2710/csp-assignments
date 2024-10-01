#include <stdio.h>
#include <stdbool.h>

int age=879999;

int main(void){

    if (age >= 18){
        printf("you are old enough to vote\n");
    }else{
        printf("you aint old enough to vote buckaroo\n");
    }
    if (age >= 16){
        printf("you are old enough to drive\n");
    }else{
        printf("you finna crash us you cant drive\n");
    }
    if (age >= 15){
        printf("you are old enoug to get a learners permit\n");
    }else{
        printf("you cant get a learners permit\n");
    }
    if (age >= 5){
        printf("you can go to school\n");
    }else{
        printf("you cannot go to school\n");
    }
    return 0;
}