print("This is a finacial calculator")
income = input("how much do you make a month?:\n" )
rent = input("how much is your rent?:\n")
utilities=input("how much is your utilities?:\n")
groceries=input("how much do your groceries cost?:\n")
transp=input("what does your transportation cost?:\n")
print("you make", income)
savings = float(income) * float(0.2)
expenses = (float(rent) + float(utilities) + float(groceries) + float(transp))
spending = float(income)-float(expenses)-float(savings)
print("your expenses are", expenses)
print("your savings is", savings)
print("your spending money is", spending)
prent=(float(rent)/float(income))*100
putilities=(float(utilities)/float(income))*100
pgroceries=(float(groceries)/float(income))*100
ptransp=(float(transp)/float(income))*100
print("your rent takes up this percent of your income;", prent)
print("your utilities take up this percent of your income;", putilities)
print("your groceries take up this percent of your income;", pgroceries)
print("your transportation needs take up this percent of your income;", ptransp)