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

def euclidean_algorithm(a,b):
    assert(isinstance(a,int))
    assert(isinstance(b,int))
    (s,t,u,v) = (1,0,0,1)
    while b!=0:
        (q,r) = (a//b, a % b)  # (q,r) = (floor division, remainder) 
        (u_new, v_new) = (s,t)
        s = u - (q*s)
        t = v - (q*t)
        (a,b) = (b,r)
        (u,v) = (u_new, v_new)
    return (a,u,v)
print(euclidean_algorithm(16,5))


def exponentiate(i, j):   # i^j mod p 
    n = i
    r = 1
    for bit in range(bit_length):
        if (j & (1 << bit)):
            r = multiplication(r, n)
        n = multiplication(n, n)
    return r

print(exponentiate(30,2))
    
