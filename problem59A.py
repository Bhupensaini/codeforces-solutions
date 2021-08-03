s = input("")
word = ""
uppercase = 0
lowercase = 0
 
 
for i in s:
	if i.isupper():
		uppercase = uppercase + 1
	elif i.islower():
		lowercase = lowercase + 1
 
if uppercase == lowercase:
	print(s.lower())
elif uppercase > lowercase:
	print(s.upper())
elif uppercase < lowercase:
	print(s.lower())