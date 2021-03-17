
# python simple calculator

def mycalc(): # defining mycalc() function
	a = int(input("the value of the first number: ")) # getting input value of a
	b = int(input("the value of the second number: ")) # getting input value of b
	operator = input("enter operator: ")# getting the operator to be used

	if operator == '+':
		print("the sum of two number  is:", a+b)
		return a + b
	elif operator == '-':
		print("the difference of two numbers is: ", a-b)
		return a - b
	elif operator == '/':
		print("the quotient of the two numbers is: ", a/b)
		return a / b
	elif operator == '*':
		print("the product of the two numbers is: ", a*b)
		return a * b
	else:
		print("no such operator on the calculator")
mycalc()
