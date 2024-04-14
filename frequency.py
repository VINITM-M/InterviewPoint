arr = [10,5,10,15,10,5]

visit = [False]*len(arr)
for i in range(len(arr)):
    if visit[i] == True:
        continue
    count = 1 
    for j in range(i+1,len(arr)):
        if arr[i] == arr[j]:
            visit[j] = True 
            count+=1 
    print(arr[i],count) 