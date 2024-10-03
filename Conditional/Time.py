import datetime

time = datetime.datetime.now().hour

if time >= 12:
    print("Good Morning!")

elif time >= 18:
    print("Good Afternoon!")

elif time >= 16:
    print("Good Evening!")

else:
    print("Go to bed,loser!!")
