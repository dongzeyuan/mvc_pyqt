'''
sequential keys
:parameter {type} : blah blah
:return {type} : blah blah
'''

import time

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

MAP_KEY_VALUE = 0
MAP_PO_VALUE = 1
KEY_SEQ_WITH_PO = [[[RU, POINT[0]], [RD, POINT[1]], [LD, POINT[2]], [LU, POINT[3]]], \
                [[LD, POINT[0]], [RD, POINT[1]], [LD, POINT[2]], [RD, POINT[3]]], \
                [[LD, POINT[0]], [RD, POINT[1]], [LD, POINT[2]], [RD, POINT[3]], [LD, POINT[4]], [RD, POINT[5]]] ]

# ################################################################################
# def print_key_sequence_with_po(key_sequence):
#     print(__name__, "#####################################################")
#     for keys in key_sequence:
#         print(keys)
#         for each_key in keys:
#             KEY_VAL = 0
#             POINT_VAL = 0
#             print(each_key[KEY_VAL], each_key[POINT_VAL])

# print_key_sequence_with_po(KEY_SEQ_WITH_PO)


################################################################################
class keyProcessor():

    def __init__(self):
        self.s_previous_time = time.time()
        self.s_previous_cmd = [None, None, time.time()]

    def setPreviousCmd(self, current_cmd):
        self.s_previous_key = previous_key

    def resetPreviousTime(self):
        self.s_previous_time = time.time()
    def getLapTime(self):
        return time.time() - self.s_previous_time

    def isFirstKey(self):
        if(self.s_previous_cmd[0] == None):
            return True
        if(time.time() - self.s_previous_time[3] > 400):
            return True

    def onKeyPressed(self, input_key):
        # print("Do what you have to do. onKeyPressed()")

        if( self.isFirstKey() ):
            # onfirst key()
            self.setPreviousKey(input_key)
            self.resetPreviousTime()
            return False
        
        for keys in KEY_SEQ_WITH_PO:
            print("keys", keys)
            for each_key in keys:
                print("each_key", each_key)
                print("each_key[MAP_KEY_VALUE]", each_key[MAP_KEY_VALUE])
                print("each_key[MAP_PO_VALUE]", each_key[MAP_PO_VALUE])
                if( input_key == each_key[MAP_KEY_VALUE]):
                    print("it is a command")
                    break
                else:
                    print("it is NOT a command")
                KEY_VAL = 0
                POINT_VAL = 0
                print(each_key[KEY_VAL], each_key[POINT_VAL])




########################################
SLEEP = -1
def filter_key(current_key):
    if((current_key != RU) and (current_key != RD) and (current_key != LD) and (current_key != LU)):
        print("key is : sleep")
        time.sleep(0.2)
        return 1
    print("key is :", current_key)
    return 0


def test_runner(user_keys):

    kp = keyProcessor()

    for current_key in user_keys:
        if( filter_key(current_key) == 1 ):
            continue
        kp.onKeyPressed(current_key)

########################################
if __name__ == "__main__":
    user_key_test10 = [RU, RD, LD, LU]
    user_key_test11 = [RU, RD, LD]
    user_key_test20 = [LD, RD, LD, RD]
    user_key_test21 = [LD, RD, SLEEP, LD, RD]
    user_key_test30 = [LU, RU, LD]


    test_runner(user_key_test10)