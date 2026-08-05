num = int(input("Enter num value: "))
count = 0
     # prime number
for i in range(1, num + 1):
    if num % i == 0:
        count += 1

if count == 2:
    print("Prime number")
else:
    print("Not a Prime number")  

    # palindrome
n = num
reverse = 0
while n>0:
   digit = n%10
   reverse = reverse*10+digit
   n= n/10

if num==reverse:
   print("palindrome")       
else:
   print("not a palindrome")    

   # armstrong
   sum = 0
   n = num                                                                                                                                                       
x = len(str(num))
while n>0:
   digit = n%10
   sum+=digit**x
   n = n//10

if num==sum:
   print("armstrong")       
else:
   print("not a armstrong")    

