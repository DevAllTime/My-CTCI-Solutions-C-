
s1 = raw_input("enter the string 1")
s2 = raw_input("enter the strin 2")

if len(s2)>len(s1):
    big = s2
    small = s1
else:
    big = s1
    small = s2
count = 0
for i,j in range(len(big)):
    if small[i] == big[j]: #hello lohel
