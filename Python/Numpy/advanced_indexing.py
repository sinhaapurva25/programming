import numpy as np

def ex1():
    print("ex1()")
    x = np.array([[1, 2], [3, 4], [5, 6],[7,8],[9,10]])
    print(x)
    y = x[[2,3,0,1,1,1,2], [0,1,0,0,1,0,1]]
    print(y)

def ex2():
    print("ex2()")
    x = np.array([[ 0,  1,  2],[ 3,  4,  5],[ 6,  7,  8],[ 9, 10, 11]])
    rows = np.array([[0,0],[3,3]])
    cols = np.array([[0,2],[0,2]]) 
    y = x[rows,cols]
    print(y)

    z = x[[[0,0],[3,3]],[[0,2],[0,2]]]
    # print(z)

def ex3():
    x = np.array([[ 0,  1,  2],[ 3,  4,  5],[ 6,  7,  8],[ 9, 10, 11]])
    # print(x[1:4,1:3])
    print(x[1:4,[1,2]])

def boolean_array_indexing():
    x = np.array([[ 0,  1,  2],[ 3,  4,  5],[ 6,  7,  8],[ 9, 10, 11]])
    print(x[x > 5])

def isnan_func():
    a = np.array([np.nan, 1,2,np.nan,3,4,5])
    print(~np.isnan(a))
    print (a[~np.isnan(a)])

def iscomplex_func():
    a = np.array([1, 2+6j, 5, 3.5+5j]) 
    print(a)
    print(a[~np.iscomplex(a)])
iscomplex_func()
