#print sum of digits
n=int(input("enter number"))
sum=0
for i in range(1,n+1):
	rem=n%10
	sum+=rem
	n=n//10
print("sum of digits",sum)
