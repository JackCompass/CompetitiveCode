# To calculate whether the user given input is abundant, perfect or deficient number.
# Input Constraint : 10 <= input_num <= 2000

# Taking input from the user following the given Constraint.

while True :
	try :
		user_input = int(input("Enter a num : "))
	except ValueError:
		print("Enter a integer.")
	else :
		if 10 <= user_input <= 2000 :
			break

# List of all the factors of the user_input. ( Using List comprehension )

factors = [ num for num in range(1, user_input) if user_input % num == 0 ]

# Evaluating the user input is abundant, perfect or deficient number.

if sum(factors) < user_input :
	print(f"{user_input} is deficient.")

elif sum(factors) > user_input :
	print(f"{user_input} is abundant.")

else :
	print(f"{user_input} is perfect.")
