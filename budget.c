#include <stdio.h>

int main(void){
    float income, rent, utilities, groceries, transportation, savings, spent, expenses;
    float prent, pgroceries, ptransportation, psavings, pexpenses, putilities;
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
    prent = rent/income * 100;
    pgroceries = groceries/income * 100;
    ptransportation = transportation/income * 100;
    psavings = savings/income * 100;
    pexpenses = expenses/income * 100;
    printf("your rent is %d%% of your income.\n", (int) prent);
    printf("your utilities are %d%% of your income.\n", (int) putilities);
    return 0;
}