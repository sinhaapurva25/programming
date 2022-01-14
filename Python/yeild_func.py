def func():
    yield 1
    yield 2
    yield 'k'
    yield '9'

print([i for i in func()])