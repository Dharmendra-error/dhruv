name = input("Enter Your Name - ")
age = int(input("Enter your Age - "))
DOB = int(input("Enter Your Date of Birth - "))
bp = input("Enter Your Birth-place - ")
print("\nName - ",name, "\nAge - ",age , "\nDate Of Birth - ", DOB ,"\nBirth-Place - ", bp)

# square & cube of any no.

n1 = float(input("Enter any num: "))
sq = n1*n1
print("Square: ",sq)
cube = n1**3
print("Cube: ",cube)

# swap of 2 var without 3rd var
# logic 1
a = 10
b = 20

a = a+b
b = a-b
a = a-b

print("Swap - ",a,b)

# logic 2

a,b = b,a
print("Swap 2nd logic - ",a,b)

# Simple interest 

p = float(input("Enter Princple: "))
r = float(input("Enter Rate: "))
t = int(input("Enter Time: ")) 

SI = (p*t*r)/100

print("Simple interest - ",SI)




 