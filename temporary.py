
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
even_pos_list = []
odd_pos_list = []
div_value = 0
dis_even_list = []
dis_odd_list = []
count = 0
pair_count = 0

# Taking input of the user.
 
for x in range(0,total_no_input):
	num = int(input())
	user_num.append(num)

bit_score_list = list(map(bit_score,user_num))

for x in range(1, total_no_input + 1):
	if x % 2 == 0:
		div_value = int(bit_score_list[x-1] / 10)
		even_pos_list.append(int(div_value))
	else:
		div_value = int(bit_score_list[x-1] / 10)
		odd_pos_list.append(int(div_value))

dis_odd_list = list(set(odd_pos_list))
dis_even_list = list(set(even_pos_list))

for x in dis_even_list:
	for y in even_pos_list:
		if x == y:
			count += 1

	if (count - 1) > 0:
		pair_count += (count - 1)
	count = 0

for x in dis_odd_list:
	for y in odd_pos_list:
		if x == y:
			count += 1

	if (count - 1) > 0:
		pair_count += (count - 1)
	count = 0

print(pair_count)
