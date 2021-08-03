word_s = input("").lower().strip()
word_t = input("").lower().strip()
 
if word_t == word_s[::-1]:
	print("YES")
elif word_t != word_s[::-1]:
	print("NO")