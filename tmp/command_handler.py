'''
sequential keys
:parameter {type} : blah blah
:return {type} : blah blah
'''

#ToDo:use enum
RU = 1
RD = 2
LD = 3
LU = 4


################################################################################
KEY_SEQUENCE_MAP = [
    [LU, RU, LD],
    [RD, LD]
]

def print_key_sequence(key_sequence):
    print(__name__, "#####################################################")
    for keys in key_sequence:
        print(keys)
        for each_key in keys:
            print(each_key)

print_key_sequence(KEY_SEQUENCE_MAP)


