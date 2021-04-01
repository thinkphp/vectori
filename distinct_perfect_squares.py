#
# Se citeste un numar natural k. Sa se afiseze
# toate numerele patrate perfecte mai mici decat
# k care sunt formate din cifre distincte.
# 
# input: k
# output: 1,4,9,16,36,49,81,...k <=
#

import math

def init_vec(n):
	global vec
	vec = [0]*10
	while n:
		vec[n%10] += 1
		n //= 10     	
def isDistinct(vec):       		
	for i in range(0, 10):
		if vec[i] > 1:
			return False
	return True		

	return True
def main():
	global vec
	k = int(input())
	k = int(math.sqrt(k))
	for i in range(1, k + 1):
		c = i * i
		init_vec(c)
		if isDistinct(vec):
		   print(c, end = ' ')	
main()

