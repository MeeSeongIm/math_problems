# prints a string of letters in reverse order. 

word = input("Word: ")
def backward(n):
    set = ""
    for i in range(len(str(n))):
        set = set + n[len(n)-i-1]
    return set
print(word + " spelled backwards is " + backward(word)+ ".")



# prints every second letter of a word in reverse order.

word = input("Another word: ")
def second_rev(k):
    set = ""
    for i in range(len(str(k))):
        set = set + k[len(k)-i-1]
    modified = ""
    for i in range(int(len(str(set))/2)):
        if len(str(set)) % 2 ==0:
            modified += set[2*i]
        else:
            modified += set[2*i+1]
    return modified
print(second_rev(word))
    


# splits a string by commas 
user = input("Any word: ") 
comma = "" 
for i in range(len(str(user))):
    comma = comma + user[i] + ","
print(comma)    



# writes a string vertically 
user = input("Splitting a string by lines. Word: ")
lines = ""
for i in range(len(str(user))):
    lines = lines + user[i] + "\n"
print(lines)



# splits a string by two spaces 
person = input("Word: ")
two_space = ""
for i in range(len(str(person))):
    two_space = two_space + person[i] + "  "
print(two_space)



# adds every odd term in a Fibonacci sequence up to (and including) n, where n=6000000.

seq = []
odd =[]
n = 6000000
def fib(n):
    a=1
    b=2
    while a <= n:
        seq.append(a)
        a,b=b,a+b
    for k in range(int(len(seq)/2)):
        odd.append(seq[2*k])
    return odd
print(sum(fib(n)))
 


# adds every third term in a Fibonacci sequence up to (and including) n, where n=60000000.

seq = []
odd = []
n = 60000000
def fib(n):
    a=1
    b=2
    while a<=n:
        seq.append(a)
        a,b=b,a+b
    for k in range(int(len(seq)/3)):
        odd.append(seq[3*k+2])
    return odd
print(sum(fib(n)))



# pig latin
user= input("Word: ")
def pig_latin(n):
    new_word = ""
    new_word = n + n[0] + "ay"
    new_word = new_word[1:len(new_word)]
    return new_word
print(pig_latin(user))



# case-insensitive string comparison by ignoring all numbers, symbols, and spaces. 
word1= input("First Comment: ").lower()
word2= input("Second Comment: ").lower()

new_word1 = ""
new_word2 = ""

for i in range(len(str(word1))):
    if str(word1)[i].isalpha() == True:
        new_word1 += str(word1)[i]
for i in range(len(str(word2))):
    if str(word2)[i].isalpha() == True:
        new_word2 += str(word2)[i]
print("\n")        
print("With all symbols, numbers, and spaces removed, your first word is " + new_word1 + ".")
print("And with all symbols, numbers, and spaces removed, your second word is " + new_word2 + ".")
 
print("\n")    
if new_word1 == new_word2:
    print("Thus the two inputs are the same. ")
else:
    print("Thus the two inputs are different.")




# search user's text (input) for a specific word (or words).
# symbols, letters, and numbers are accounted for but not spaces (spaces are ignored). 
user_para = input("Please write something here: ")
user_search = input("Type something that we should search for: ")

new_user_para = []
new_user_search = []
for i in range(len(str(user_para))):
    if str(user_para)[i] != " ":
        new_user_para.append(str(user_para)[i])
for i in range(len(str(user_search))):
    if str(user_search)[i] != " ":
        new_user_search.append(str(user_search)[i])

#print(new_user_para)
#print(new_user_search)

words_to_search = [] 
for i in range(len(new_user_para)):
    if new_user_para[i:i+len(new_user_search)] == new_user_search[:len(new_user_search)]:
        words_to_search.append(new_user_search[:len(new_user_search)])
        i += len(new_user_search)
    else:
        i += 1
print (words_to_search)

print("Your '%s' appears %s times in your '%s'." % (user_search, len(words_to_search), user_para))





# a sequence is composed of triangular numbers if it is a sequence whose nth number
# is the sum of n natural numbers from 1 to n,
# e.g., 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
# the factors of these triangular numbers are:
#  1: 1
#  3: 1,3
#  6: 1,2,3,6
# 10: 1,2,5,10
# 15: 1,3,5,15
# 21: 1,3,7,21
# 28: 1,2,4,7,14,28
# Problem: find the value of the first triangular number which has over 100 divisors.

m = [] 
n = [1] 
p = 0 
q = [] 
k = 384 

for i in list(range(1,k+1)):
    m.append(i)
    n.append(sum(list(range(1,i+2))))

for i in list(range(0,k+1)):
    for j in list(range(1,n[i]+2)):
        if n[i] % j ==0:
            p = p + 1
    q.append(p)
    
r = [q[i+1]-q[i] for i in list(range(0,len(q)-1))]

print(r)














