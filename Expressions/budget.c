int main(void) {

    float income, rent, utilities, groceries, transportation, expenses, savings, total;
    float prent, putilities, pgroceries, ptransportation, pexpenses, psavings, ptotal;
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
    savings = income - rent - utilities - groceries - transportation *2.;
    total = income - expenses - savings;
    prent = rent/income *100;
    putilities = utilities/income *100;
    pgroceries = groceries/income *100;
    ptransportation = transportation/income *100;
    pexpenses = expenses/income *100;
    printf("The total amount you spend is %.1f%% of your income\n", ptotal );
    printf("Your expenses are %.1f%% of your income\n", pexpenses );
    printf("Your rent are %.1f%% of your income\n", prent );
    printf("Your utilities are %.1f%% of your income\n", putilities );
    printf("Your groceries are %.1f%% of your income\n", pgroceries );
    printf("Your transportation are %.1f%% of your income\n", ptransportation );
    printf("Your savings are  $%d%% of your income\n", psavings );
    return 0;
}
