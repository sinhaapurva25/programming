import numpy as np 
x = np.arange(10,20,2) 
# print(x)

import numpy as np 
x = np.linspace(10,20, 5, endpoint = False,retstep = True) 
# print(x)

x = np.linspace(1,2,5, retstep = True) 
# print(x)

x = np.logspace(start=1,stop=5,num=5,endpoint=True,base=2,dtype=int)
print(x)