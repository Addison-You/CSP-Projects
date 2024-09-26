print("This is going to calculate your budget for the month.")
income = float (input("What is your monthly income: "))
rent = float (input("What is your monthly rent: "))
utilities = float (input("What is your monthly utilities: "))
groceries = float (input("What is your monthly groceries: "))
transportation = float (input("What is your monthly transportation: "))
expenses = rent + utilities + groceries + transportation
savings = income * 0.2
total = income - expenses - savings
prent = rent/income * 100
putilities = utilities/income *100
ptransportation = transportation/income * 100
pexpenses = expenses/income * 100
print("Your income is: %\n", income)
print("Your expenses are: %\n", expenses)
print("Your savings are: %\n", savings)
print("Your total left to spend is: $%.2f\n", total)
print("Your rent is % of your income", prent)
print("Your rent is % of your income", putilities)
print("Your rent is % of your income", ptransportation)