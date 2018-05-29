def FizzBuzz(value):
    if value % 5 == 0 and value % 3 == 0:
        return "FizzBuzz"
    if value % 5 == 0:
        return "Fizz"
    if value % 3 == 0:
        return "Buzz"
    else:
        return value


print("FizzBuzz")

for x in range(100):
    print(FizzBuzz(x))
