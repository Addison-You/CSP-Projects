def user_inputs(type): 
    return float(input(f"monthly {type} "))



print("This is going to calculate your budge for the month.")
income=float (input("What is your monthly income: "))
rent=float (input("What is your monthly rent: "))
utilities=float (input("What is your monthly utilities: "))
groceries=float (input("What is your monthly groceries: "))
transportation=float (input("What is your monthly transportation: "))
savings = income *.2
expenses = rent + utilities + groceries + transportation
spending = income-expenses-savings

def percent(type, amount):
    per = amount/income *100

    return (f"Your {type} is {per}% income. ")


print(f"Your monthly income is ${income}\n")
print(f"Your monthly expenses are ${expenses}\n")
print(f"Your monthly savings is ${savings}\n")
print(percent("rent", rent))
print(percent("utilities", utilities))
print(percent("groceries", groceries))
print(percent("transportation", transportation))
print(percent("savings", savings))
print(percent("expenses", expenses))