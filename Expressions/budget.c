#include <stdio.h>

int main(void){
    float income, rent, utilities, grocieries, transportation, savings, expenses, spend;
    float prent, putilities, pgrocieries, ptransportation, psavings, pexpenses;
    printf("this is a budget caculator.\n How much do you make a month?\n");
    scanf("%f", &income);
    printf("How much does your utilities cost? \n");
    scanf("/%f", &utilities);
    printf("How much do your rent cost? \n");
    scanf("/%f", &rent);
    printf("How much do your grocieries cost? \n");
    scanf("/%f", &grocieries);
    printf("How much do your transportation cost? \n");
    scanf("/%f", &transportation);
    savings = income * .2;
    expenses = rent + utilities + grocieries + transportation;
    spend = income - expenses - savings;
    printf("your expenses $%.2f\n", expenses);
    printf("your savings $%.2f\n", savings);
    printf("you make $%.2f\n", income);
    printf("your spending $%.2f\n", spend);
    prent = rent/income * 100;
    putilities = utilities/income * 100;
    pgrocieries = grocieries/income * 100;
    ptransportation = transportation/income * 100;
    psavings = savings/income * 100;
    pexpenses = expenses/income * 100;
    printf("Your rent is %d%% of your income. \n", (int) prent);
    printf("Your utilites are %d%% of your income. \n", (int) putilities);
    printf("Your savings is %d%% of your income. \n", (int) psavings);
    printf("Your pexpenses is %d%% of your income. \n", (int) pexpenses);
    printf("Your transportation is %d%% of your income. \n", (int) ptransportation);
    return 0;

}
