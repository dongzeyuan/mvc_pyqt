test = list(range(3,6))
len(test)

for x in range(3,6):
    print(x)

def print_arry(x):
    for i in x:
        print __func__, i, type(x)

def magu_print(*rest):
    print rest
    print_arry(rest)

magu_print(1,34,5,2,2346,12)
magu_print(1,(34,5,2),2346,12)

