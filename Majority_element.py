# Program to check whether an element in present in majority in a list.
# Input constraint : 5 <= list_size <= 2000, 0 <= list_element <= 100
# Majority when element is present atleast (list_size / 2) + 1 times.

# Function to find the number who is repeated most in the user_list ( aka :- major_digit )

def majority_element(any_list):
	distinct_set = set(any_list)
	major_digit = 0
	max_occurence = 0
	for element in distinct_set :
		occurence = any_list.count(element)
		if occurence > max_occurence :
			major_digit = element
			max_occurence = occurence

	if max_occurence >= ((len(any_list) // 2) + 1) :
		return f"The majority element is : {major_digit}"
	else :
		return f"There is no majority element."

# Taking list_size as input from the user.

while True :
	try :
		list_size = int(input("Enter the size of the list : "))
	except ValueError:
		print("Enter an integer according to the constraint.")
	else :
		if  5 <= list_size <= 2000 :
			break;

# list to store user input data.

user_list = []

# Input element from the user. ( Following the given constraint )

print("Enter element of the list.")
while list_size > 0 :
	list_element = int(input())
	if 0 <= list_element <= 100 :
		user_list.append(list_element)
		list_size -= 1

# Calling majority_element Function.

print(majority_element(user_list))
