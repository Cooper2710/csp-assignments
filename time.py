import datetime

currenttime = datetime.datetime.now()

print(currenttime.hour)
if (currenttime.hour<12):
    print("good morning")
elif (currenttime.hour<18):
    print("good afternoon")
else:
    print("good evening")
