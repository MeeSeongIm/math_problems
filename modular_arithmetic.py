

bit_length = 256
p = 29

def multiplication(i,j):
    n = i
    r = 0
    for i in range(bit_length):
        if (j & (1 << i)):
            r = (r+n) % p
        n = (n+n)% p
    return r

i = 2**8
j = 6
print("%d x %d = %s" % (i,j,multiplication(i,j)))




