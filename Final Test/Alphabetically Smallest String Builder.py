#Alphabetically Smallest String Builder
#python3
lst=[]
a=int(input())
for i in range (a): #appends all string to list
    b=input()
    lst.append(b)
#print(lst)
l="" #program to convert list to string
for i in lst: #1
        l += i#2
#print(l)
c=sorted(l) #sorts and print as list
#print(c)
d=""
for i in c: #program to convert list to string
        d += i
print(d)