def func1(x, y=17):  # function has default value for y. If user does not give new value for y, it will use default y
    x = 30  # it will effect the inside of the function; one default variable have to follow the another default variable otherwise it gives error
    a = 30  # local variable of a it does not effect outside of the function
    print("Local variable x and default variable of y or given parameter of y(y will be default variable 17): ", x, y)


def func6(x ,y):       # x, y and y, x are different
    return x/4 , y*7


def func2(x):  
    print("First value of d :", x)
    x += 5
    print("New value of d: ", x)


def func3(list1):  # parameter passing with using assignment list
    print("List : ", list1)
    list1[0] = 1000  # first value of list changed
    list1[1] = 2000  # second value of list changed
    print(list1)


def func4(x, **y):  # we can use given parameters in function y.items()
    print("Given parameter of x and given parameter of y: ", x, y.items())


def func5(x, y, z):  # correspond to positional variable example
    print("x will be 12 and y will be 11 and z will be 13 :", x, y, z)


a = 10
b = 20
c = [20, 17, 18, 89]
d = 50

print("***Parameter Positions***") # their results are not equal
print("Result: " , func6(a, b))
print("Result: " , func6(b, a))

func1(a, b)  # it will print inner variable x and global variable b : 30 20

print("***Parameter Passing Methods***")
func3(c)  # list changed globally; it is a side effect but we can fic in function with using some techniques
func2(d)  # global variable does not changed because immutable

print("***Parameter Correspondence Keyword and Position***")
func4(a, y=5, y1=6, y2=2)

print("***Formal Parameter Default Values***")
func1(12)  # y gets default value in function

print("***Correspond to Positional***")
func5(12, 11, 13)

print("***Global Variables Values a and b***")
print("Global variables a and b: ", a, b)  # these variables do not change  global x and global y : 10 20

print("Global list changed by function3 ", c)
print("Global variables of d value does not change: ", d)
