1. Program to Calculate the Sum of Two Numbers
# Take two numbers as input from the user
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

# Calculate and print their sum
sum_result = num1 + num2
print("The sum of the two numbers is:", sum_result)


2. Program to Check Even or Odd
# Ask the user for a number
num = int(input("Enter a number: "))

# Check if the number is even or odd
if num % 2 == 0:
    print("The number is even.")
else:
    print("The number is odd.")


3. Program to Count Vowels in a String
# Take a string input from the user
text = input("Enter a string: ")

# Initialize vowel count
vowel_count = 0
vowels = "aeiouAEIOU"

# Count vowels in the string
for char in text:
    if char in vowels:
        vowel_count += 1

print("The number of vowels in the string is:", vowel_count)


4. Menu-Driven Calculator Program
def calculator():
    print("Select an operation:")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    
    choice = input("Enter your choice (1/2/3/4): ")

    # Input two numbers
    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))

    if choice == '1':
        print("Result:", num1 + num2)
    elif choice == '2':
        print("Result:", num1 - num2)
    elif choice == '3':
        print("Result:", num1 * num2)
    elif choice == '4':
        if num2 != 0:
            print("Result:", num1 / num2)
        else:
            print("Error: Division by zero is not allowed.")
    else:
        print("Invalid choice.")

calculator()


5. Program to Calculate Average Marks and Assign Grades
# Ask the user for marks in 5 subjects
marks = []
for i in range(1, 6):
    mark = float(input(f"Enter marks for subject {i}: "))
    marks.append(mark)

# Calculate the average
average = sum(marks) / 5

# Determine the grade
if average >= 90:
    grade = 'A'
elif average >= 70:
    grade = 'B'
elif average >= 50:
    grade = 'C'
else:
    grade = 'D'

# Print the average and grade
print("Average Marks:", average)
print("Grade:", grade)
