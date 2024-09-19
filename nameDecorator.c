#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{
    char name[30];
    printf("What is your name?:");
    scanf("%s", name);
    char decor[30];
    printf("what would you like your decoration to be?");
    scanf("%s", decor);
    char outcome[30];
    strcpy(outcome, decor);
    strcat(outcome, name);
    strcat(outcome, decor);
    printf("%s\n", outcome);
    return 0;
}