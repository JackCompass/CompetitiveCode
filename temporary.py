
def bit_score(num):
	
	bit_score_num = 0
	rem_list = []
	
	for x in range(0,3):
		rem = int(num) % 10
		rem_list.append(rem)
		num /= 10
	
	high = max(rem_list)
	low = min(rem_list)
	bit_score_num = (high *11) + (low * 7)

	if bit_score_num > 99:
		return bit_score_num % 100
	
	return bit_score_num


# Entering total num of input.

total_no_input = int(input())

user_num = []

# Taking input of the user.
 
for x in range(0,total_no_input):
	num = int(input())
	user_num.append(num)

bit_score_list = list(map(bit_score,user_num))

print(bit_score_list)
