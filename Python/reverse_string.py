##reverse a string
string_array = [i for i in "qwerty uiop asdfg hjkl".split()]
print([string_array[(-1*(i+1))] for i in range(0,len(string_array))])