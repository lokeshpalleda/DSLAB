#print palindrome
n=int(input("enter number"))
sum=0
m=n
while n>0:
	rem=n%10
	sum=sum*10+rem
	n=n//10
if m==sum:
	print("palindrome")
else:
	print("not a palindrome")
