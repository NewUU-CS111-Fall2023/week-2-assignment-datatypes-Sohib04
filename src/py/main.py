# * Author:Abdimannabov Sohibjon
# * Date:10/25/2023
import random
print("Task 1")
print("Enter year: ")
year = int(input())
if year%4==0 and (year%100!=0 or year%400==0):
    print(str(year) + " is a leap year")
else:
    print(str(year) + " is not a leap year")

print("Task 2")
random_number = random.randint(1, 100)
while True:
  guess = int(input("Enter your guess: "))

  if guess == random_number:
    print("Congratulations! You guessed correctly!")
    break
  elif guess < random_number:
    print("Your guess is too low.")
  else:
    print("Your guess is too high.")

print("Task 3")
A = int(input("Enter A: "))

random_number = ""
for i in range(100):
  random_number += str(random.randint(0, 9))

random_number_as_integer = int(random_number)

result = random_number_as_integer // A
print("Result:", result)
