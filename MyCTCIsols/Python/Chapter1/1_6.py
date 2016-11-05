

s = "aabbcccccaaa"
i = 0
count = 1
for index,item in enumerate(s):
    if(s[index] != s[index+1] and index+1<len(s)):
        print s[i]+str(count)
        count += 1
        count = 1
    else:
        count += 1
