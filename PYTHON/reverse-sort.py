fhand=open('text.txt')
counts=dict()
for line in fhand:
    words=line.split()
    for word in words:
        counts[words]=counts.get(word,0)+1
lst=list()
for key, value in counts.items():
    newtup=(value, key)
    lst.append(newtup)
lst=sorted(lst, reverse=True)
for value, key in lst[:10]:
    print(key, value)
