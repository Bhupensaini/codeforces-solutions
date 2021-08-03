while True:
	word = input("")
 
	if word[0].isupper():
		print(word)
		break
 
	elif word[0].islower():
		#word[0].upper()
        # word.replace(word[0], word[0].upper())
        # word = word[0].upper() + word[1:]
		print(word[0].upper() + word[1:])
		break
		
	else:
		continue