print("This is a finacial calculator")

def user_inputs(costs):
    fees=input("what does your %s cost", costs)
    return fees
rent=user_inputs("rent")
    


savings = float(income) * float(0.2)
expenses = float(rent) + float(utilities) + float(groceries) + float(transp)
spending = float(income)-float(expenses)-float(savings)

print("your expenses are", expenses)
print("your savings is", savings)
print("your spending money is", spending)

def percent(type, ammount):
    per = ammount/income *100
    
    print(f"your {type} is {per}% income")

percent("rent", rent)
percent("utilities", utilities)
percent("groceries", groceries)
percent("transportation", transp)
percent("expenses", expenses)