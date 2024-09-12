#include <stdio.h>

int main(void){
    char income[9];
    char utilities[9];
    char groceries[9];
    char car[9];
    printf("this is a budget calculator.\n How much money do you make a month? \n");
    scanf("%s", income);
    printf("How much do your utilities cost? \n");
    scanf("%s", utilities);
    printf("How much does your groceries cost? \n");
    scanf("%s", income);
    printf("you make %s\n", income);
    float spend[] = (float)utilities;
    
    return 0;
}