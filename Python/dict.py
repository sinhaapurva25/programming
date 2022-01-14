z = {'a':12,'b':13}
print(*z.values())
[print(k,sep='') for k in z.keys()]
print(list(k for k in z.keys()))
[print(k,sep='\t') for k in z.keys()]