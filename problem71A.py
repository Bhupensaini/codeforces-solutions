n = int(input())
i = 0
 
x = 0
 
while i < n:
	word = input().lower()
	if len(word) > 10:
		x = len(word) - 2
		print(word[0]+str(x)+word[-1])
	else:
		print(word)
	i = i + 1