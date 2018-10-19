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
POINT = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, \
         11, 12, 13, 14, 15, 16, 17, 18, 19, 20, \
         21, 22, 23, 24, 25, 26, 27, 28, 29, 30, \
         31, 32, 33, 34, 35, 36, 37, 38, 39, 40, \
         41, 42, 43, 44, 45, 46, 47, 48, 49, 50, \
         51, 52, 53, 54, 55, 56, 57, 58, 59, 60, \
         61, 62, 63, 64, 65, 66, 67, 68, 69, 70, \
         71, 72, 73, 74, 75, 76, 77, 78, 79, 80, \
         81, 82, 83, 84, 85, 86, 87, 88, 89, 90, \
         91, 92, 93, 94, 95, 96, 97, 98, 99, 100]


KEY_SEQ_WITH_PO = [[[RU, POINT[0]], [RD, POINT[1]], [LD, POINT[2]], [LU, POINT[3]]], \
                [[LD, POINT[0]], [RD, POINT[1]], [LD, POINT[2]], [RD, POINT[3]]], \
                [[LD, POINT[0]], [RD, POINT[1]], [LD, POINT[2]], [RD, POINT[3]], [LD, POINT[4]], [RD, POINT[5]]] ]

def print_key_sequence_with_po(key_sequence):
    print(__name__, "#####################################################")
    for keys in key_sequence:
        print(keys)
        for each_key in keys:
            KEY_VAL = 0
            POINT_VAL = 0
            print(each_key[KEY_VAL], each_key[POINT_VAL])

print_key_sequence_with_po(KEY_SEQ_WITH_PO)


