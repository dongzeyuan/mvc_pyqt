# c : 2
# p : 12,5,6 



def prg2com(inlist, coms):
    outlist = []
    sumout = []
    for x in range(coms):
        outlist.append([])
        sumout.append(0)

    inlist.sort(reverse=True)

    for bread in inlist:
        print bread
        lowbasket = sumout.index(min(sumout))
        outlist[lowbasket].append(bread)
        sumout[lowbasket] += bread

    return outlist

print prg2com([1,4,2,5,46,7,3,6,78], 3)

