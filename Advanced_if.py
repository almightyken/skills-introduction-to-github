age = 10
height = 140

# and
if age >= 8 and height >= 135:
    print("You can ride the ride!")

# or
if age >= 17 or height >= 160:
    print("You are allowd to ride the super ride!")

# elif (else if)
if height < 120:
    print("You cant ride any rides :(")
elif height < 135:
    print("You can ride level 1 rides")
elif height < 200:
    print("You can ride any ride!")
else:
    print("Too tall for the rides :(")
