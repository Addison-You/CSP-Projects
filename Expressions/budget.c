int main(void) {

    float income, rent, utilities, groceries, transportation, expenses, savings, total;
    float prent, putilities, pgroceries, ptransportation, pexpenses;
    printf("This is going to calculate your budget for the month.");
    printf("How much do you make in a month?\n");
    scanf("%f", &income);
    scanf("Your income is: $%d%%\n", income);
    printf("How much is rent?\n");
    scanf("%f",&rent);
    printf("How much is utilities?\n");
    scanf("%f",&utilities);
    printf("How much is groceries?\n");
    scanf("%f", &groceries);
    printf("How much is transportation\n");
    scanf("%f", &transportation);
    expenses = rent + utilities + groceries + transportation;
    savings = income *.2;
    total = income - expenses - savings;
    prent = rent/income *100;
    putilities = utilities/income *100;
    pgroceries = groceries/income *100;
    ptransportation = transportation/income *100;
    pexpenses = expenses/income *100;
    printf("Your expenses are %.1f%% of your income\n", pexpenses );
    return 0;
}

