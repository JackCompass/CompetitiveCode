# To check wheather the user input number is Disarium number or not.
# Disarium num = 175 : 1^1 + 7^2 + 5^3 = 1 + 49 + 125 = 175

# importing math module for calculation

import math
import pdb

# Function to check the given num is Disarium num or not.

def Disarium( num ):
	total = 0
	
	# Calculating the digits in the user num.
	no_of_digits = int(len(str(num))) 


	while ( num > 0) :
		rem = num % 10
		num = int(num / 10)
		total = total + pow(rem,no_of_digits)
		no_of_digits -= 1

	return total

# Taking input till the given constraint doesn't satisfy.

while True :
	try :
		user_num = int(input("Enter a num (num > 0) : "))
	except ValueError :
		print("Enter a integer.")
	else :
		if user_num > 0 :
			break

disarium_cal_num = Disarium(user_num)

# Evaluating whether the user_num is equal to disarium_cal_num

if disarium_cal_num == user_num :
	print(f"The {user_num} is a Disarium number.")
else :
	print(f"The {user_num} is not a Disarium number.")
