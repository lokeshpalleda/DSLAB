#print tables using for loop
print("using for loop")
n=int(input("enter number"))
for i in range(1,11):
	m=n*i
	print(n,'x',i, '=',m)
#print tables using while loop
print("using while loop")
i=1
while i<=10:
	print(n,'x',i, '=',n*i)
	i=i+1
