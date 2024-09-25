#include <stdio.h>
float income, rent, utilities, groceries, transportation, savings, spent, expenses;

void percent(char type[], int ammount){
    int per = ammount/income * 100;

    printf("your %s is %d%% of your income.\n", type, per);
}

int main(void){
    
    printf("this is a budget calculator.\n How much money do you make a month? \n");
    scanf("%f", &income);
    printf("How much do your utilities cost? \n");
    scanf("%f", &utilities);
    printf("How much does your groceries cost? \n");
    scanf("%f", &groceries);
    printf("How much do your transportation cost? \n");
    scanf("%f", &transportation);
    printf("How much do your rent cost? \n");
    scanf("%f", &rent);
    
    savings = income *.2;
    expenses = rent + utilities + groceries + transportation;
    spent = income - expenses - savings;
    
    printf("you make %.2f\n", income);
    printf("your expenses are $%.2f\n", expenses);
    printf("your savings are $%.2f\n", savings);
    printf("your spending money is $%.2f\n", spent);

    percent("rent", rent);
    percent("utilities", utilities);
    percent("groceries", groceries);
    percent("transportation", transportation);
    percent("savings", savings); 
    percent("expenses", expenses);
    percent("spending", spent);   
    return 0;
}