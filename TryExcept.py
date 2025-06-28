print("before")


try:
    #4 / 0
    #print(name)
    print(age)
except NameError as e:
    print("This was a NameError")
    print(e)
except ZeroDivisionError:
    print("Oops! We cant divide by zero")
except:
    print("Something went wrong")


class CheeseError(Exception):
    pass

def upper_fun(word):
    if len(word) <= 0:
        raise CheeseError("The word has to have at lease one letter!")
    return word.upper()

print(upper_fun(""))

print("after")