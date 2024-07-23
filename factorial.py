#print factorial using for loop
n=int(input("enter number:"))
fact=1
for i in range(1,n+1):
	fact=fact*i
print("factorial of a given number",fact)
#while
j=1
fac=1
while j<=n:
	fac=fac*j
	j+=1
print("factorial of a given number",fac)


