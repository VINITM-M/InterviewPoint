s = 'aababbaab'
from collections import Counter

count = Counter(s)
arr = [(k,v) for k,v in count.items()]
arr.sort(key=lambda x : -x[1])
print((arr))
res = ''
for x in arr:
    for i in range(x[1]):
        res += x[0]

print(res)
