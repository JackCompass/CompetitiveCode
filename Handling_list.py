# To merge two arrays if both the arrays are sorted.

# Function two take input of the user in the given list.

def user_data( any_list, size ):
	print("Enter data.")
	for i in range(0, size):
		data = int(input())
		any_list.append(data)

# Function to return True if the list is sorted else it return False.
def sorted_data( list_xyz, size ):
	for pos in range(0, (size - 1)):
		if list_xyz[pos] > list_xyz[pos + 1] :
			return False
	return True


# Two list to store user enetered data and third to merge those two if condition satisfies.
user_list_1 = []
user_list_2 = []
merge_list = []

# Taking the size of the array until the constraint ( Minimum size = 5 ) doesn't satisfy.

while True:
	try :
		L1_size = int(input("Enter the size of the array 1 : "))
		L2_size = int(input("Enter the size of the array 2 : "))
	except ValueError :
		print("Enter an integer.")
	else :
		if (L1_size >= 2) and (L2_size >= 2) :
			break

# Taking user input
user_data(user_list_1, L1_size)
user_data(user_list_2, L2_size)

# Evaluating the constraint ( List sorted or not ).

if (sorted_data(user_list_1, L1_size) and sorted_data(user_list_2, L2_size)) :
	pass
else :
	exit()

# Merging the two user input list.

merge_list = user_list_1 + user_list_2

# Sorting the merged_list

merge_list.sort()

# Final output.
print(merge_list)







