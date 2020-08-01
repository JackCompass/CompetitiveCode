# Program to return sum of integers of a list.
# Input constraint : size of list > 5

# will return the list with all user inputs.

def data_entry(any_list, list_size) :
	print("Enter data.")
	for i in range(0, list_size) :
		data = int(input())
		any_list.append(data)

	return None

# return sum of all the integers in the list.

def sum_total(any_list) :
	total = 0
	for num in any_list :
		total = num + total
	return total


# main

if __name__ == "__main__" :

	user_list = []

	# Will take input until the constraint doesn't satisfy.

	while True :
		try : 
			list_size = int(input("Enter the size of the list : "))
		except ValueError :
			print("Enter numberic value.")
		else :
			if list_size > 5 :
				break

	# Function Call
	data_entry(user_list, list_size)

	# Function Call
	total = sum_total(user_list)

	# desired output.
	print(f"The sum of all the integers is : {total}")