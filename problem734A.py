while True:
 
	games_played = input('')
	results = input('').upper()
 
	if len(results) == int(games_played):
		break
	elif len(results) > int(games_played) or len(results) < int(games_played):
		continue
 
anton_wins = 0
danik_wins = 0
ind = 0
 
for games_played in results:
 
	if (results[ind] == 'A'):
		anton_wins = anton_wins + 1
 
	elif (results[ind] == 'D'):
		danik_wins = danik_wins + 1
 
	ind += 1
 
 
if anton_wins > danik_wins:
	print('Anton')
 
elif anton_wins < danik_wins:
	print('Danik')
 
elif anton_wins == danik_wins:
	print('Friendship')