def add(x):  
    return x+1  
def sub(x):  
    return x-1  
def operator(func, x):  
    temp = func(x)  
    return temp  
print(operator(sub,10))
print(operator(add,20))

# nested function
# def func():
#     print("func")
#     def func1():
#         print("func1")
#     def func2():
#         print("func2")
#     func1()
#     func2()
# func()

##decorators
# ##1
# def add(x):
#     return x+x
# def sub(x):
#     return x-1
# def operator(func,x):
#     return func(x)
# print(operator(add,5))
# print(operator(sub,5))

##2
# def hello():
#     def hi():
#         print("hello")
#     return hi
# hey = hello()
# hey()