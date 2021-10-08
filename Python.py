'''
 TO use the python revision codes that i have written i have made it easiy enough to read them.
 TO RUN each section revision select what you want to run and press run, it will run only that section alone.
'''
# How to print out a statement in python
print("hello")
print("world")
print("!\n")


# How to write out multiple comment in python
'''
print("hello world")
y = comment
comment = ["hello world", "world", "comment"]
print(y)
print("")
'''


# How to set and use a variable in python
is_male = True
is_female = False
name = "John"
print("Your first name is ", name)
print("Your name is " + name + "\n")


# How to cast and convert variables in python
print(int(3.142))
print(float(7))
print(str(True))
print(int("50") + int("120"))
# Looking into strings and looking at it's other functions and properties.
greeting = "Hello"
# some strings functions
print(len(greeting))
print(greeting[0])
print(greeting[-1])
print(greeting.find("lo"))
print(greeting.find("t"))
print(greeting[2:])
print(greeting[1:3])
print("")


# How to operate in number and it's various uses in python
print(3 * 9)  # It could be +, -, *, and /
print(3 ** 5)  # This is to show it raise t power something
print(10 % 3)  # This is the modulus operation i.e 10/3 remain what
print(2 + 5 * 9)  # Order of operations
print(10 / 3.0)  # int and double
# some examples of math functions using variable.
num = 10
num += 100  # it could be +=, -=, *=, and /=
print(num)
# Using math class library and it's useful math methods.'
import math
print(pow(3, 5))
print(math.sqrt(169))
print(round(3.5))
print("")


# How to get input from the users in python
name = input("Enter your name: ")
print("Hello", name + "!")
# using variables to make a sentences or a word from
num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
print(num1 + num2)
print("")


# How to get info from a list in python
lucky_numbers = [4, 8, "fifteen", 15.6, 25, True]  # this is a list of elements or figures it denoted by []
lucky_numbers[0] = 96
print(lucky_numbers[0])
print(lucky_numbers[1])
print(lucky_numbers[-1])
print(lucky_numbers[-2])
print(lucky_numbers[2:])
print(lucky_numbers[-3:])
print(lucky_numbers[1:4])
print(len(lucky_numbers))
print("")


# How to describe a N-Dimensional lists in python
numberGrid = [[1, 2, 3, ], [4, 5, 6, ], [7, 8, 9, ], [10, 11, 12]]
numberGrid[0][0] = 130
print(numberGrid[0][0])
print(numberGrid[1][1])
print(numberGrid[2][2])
print("")


# How to use list function in python
friend = ["Tom", "Oscar", "Peter"]
friend.insert(6, 8)
print(friend)
friend.remove("Peter")
print(friend)
print(friend.index("Oscar"))
print(friend.count("John"))
print(friend)
friend.clear()
print(friend)
print("")


# How to use Tuples function in python
lucky_numbers = (1, 2, 3, 4, "Ten", 5, 6)
'''
lucky_numbers[0] = 45 # You can't assign a value for an element in a tuple.
'''
print(lucky_numbers[0])
print(lucky_numbers[1])
print(lucky_numbers[-5])
print(lucky_numbers[2:])
print(lucky_numbers[-3:])
print(lucky_numbers[1:4])
print(len(lucky_numbers))


# How to define functions in python
def add_number(num1, num2=99): # num2 has a costant value of 99 when not declared.
    return num1 * num2
sum = add_number(10, 45)
print(sum)
sum = add_number(100)
print(sum)


# How to use IF statement in python
is_student = False
is_smart = False
if is_student and is_smart:
    print("You are a student")
elif is_student and not(is_smart):
    print("You are not a smart student")
else:
    print("You are not a student and you are not smart")
    
# How to use comparison in python
if 1 < 3:
    print("number comparison was true")
if "cat" == "dog":
    print("string comparison was true")
    
    
# How to use dictionary in python
test_grades = {
    "Andrew" : "B-",
    "Samuel" : "D-",
    "Robert" : "A-",
    "John" : "A+",
    3 : 95.2
}
print(test_grades["Andrew"] )
print(test_grades.get("Samuel", "No student found"))
print(test_grades[3])
# print(test_grades()) ("it not possible to call a dictionary")


# How to use while loops in python
index = 1
while index <= 5:
    print(index)
    index += 1
'''
print(index)    it will keep looping forever without "indes +=1 "
'''


# How to use for loops in python
for index in range(7):
    print(index)
lucky_numbers = [3, 4, 5, 6, 7, 8, 9, 10, 20]
for lucky_num in lucky_numbers:
    print(lucky_num)
for letter in "Themalikofcodes":
    print(letter)

    
# How to catch an exception in python
answers = 10/ int(input("pleasse enter a number: "))
print(answers) # for whole number only except from 1
try:
    answer = 10 / int(input("pleasse enter a number: "))
except:
    print("An error occured") # this is to catch the exception of zero's ans strings
try:
    answer = 10 / int(input("pleasse enter a number: "))
except ZeroDivisionError as e:
    print(e)
except:
    print("Caught any exception")

# Hot to use classes in python
class Book:
    def __init__(self, title, author):
        self.title = title
        self.author = author

    def read_book(self):
        print("Reading", self.title, "by", self.author)
book1 = Book("Sallahudin Al-Ayubi", "Hind Khadijah")
print(book1.title)
book1.read_book()


# How to use getters and setters in python
class Book:
        def __init__(self, title, author):
            self.title = title
            self.author = author
        @property
        def title(self):
            print("setting title")
            return self._title
        @title.setter
        def title(self, value):
            print("setting title")
            self._title = value
        @title.deleter
        def title(self):
            del self._title
        def read_book(self):
            print("Reading", self.title, "by", self.author)
book1 = Book("Sallahudin Al-Ayubi Biography", "Hind Khadijah")
print(book1.title)
book1.read_book()


# How to use inheritance in python
class Chef:
        def make_chicken(self):
            print("The chef makes a chicken.")

        def make_salad(self):
            print("The chef make a salad.")

        def make_special_dish(self):
            print("The chef makes Nasi Lemak.")
class ItalianChef(Chef):
    def make_special_dish(self):
        print("The chef makes Pasta.")
    
my_chef = Chef()
my_chef.make_chicken()
my_chef.make_special_dish()
myItalianChef = ItalianChef()
myItalianChef.make_chicken()
myItalianChef.make_special_dish()