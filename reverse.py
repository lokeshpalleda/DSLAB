#print sum of digits
n=int(input("enter number"))
sum=0
while n>0:
	rem=n%10
	sum=sum*10+rem
	n=n//10
print("reverse",sum)
