#print armstrong
n=int(input("enter number"))
sum=0
m=n
while n>0:
	rem=n%10
	sum=sum+rem**3
	n=n//10
if m==sum:
	print("armstrong")
else:
	print("not a armstrong")
