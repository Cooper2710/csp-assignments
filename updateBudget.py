print("This is a finacial calculator")

income=input("what is your monthly income?:\n")

def user_inputs(costs):
    fees=input(f"what does your {costs} cost?:\n")
    return int(fees)
rent=user_inputs("rent")
groceries=user_inputs("groceries")
utilities=user_inputs("utilities")
transp=user_inputs("transportation")

    


savings = float(income) * float(0.2)
expenses = float(rent) + float(utilities) + float(groceries) + float(transp)
spending = float(income)-float(expenses)-float(savings)

print("your expenses are", expenses)
print("your savings is", savings)
print("your spending money is", spending)

def percent(type, ammount):
    per = ammount/income *100
    return(f"your {type} is {per}% income")


percent("rent", rent)
percent("utilities", utilities)
percent("groceries", groceries)
percent("transportation", transp)
percent("expenses", expenses)