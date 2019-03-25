word=list(input())
for i in range(len(word )):
    if word[i].islower():
        word[i]=word[i].upper()
    else:
        word[i]=word[i].lower()
print(word)
