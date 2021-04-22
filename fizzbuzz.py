# FizzBuzz game in Python
# Written by calebrwalk5 (aka anusO1)

for i in range(1,101):
    response = ''
    if i%15==0:
      response += 'FizzBuzz'
      print(response)
    elif i%3==0:
        response += 'Fizz'
        print(response)
    elif i%5==0:
        response += 'Buzz'
        print(response)
    else:
      print(i)
