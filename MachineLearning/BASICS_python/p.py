t = int(input())


for p in range(t):
    n = int(input())
    arr = list(map(int,input().split()))
    # print(arr)
    
    mp = {}
    for q in arr:
        if q in mp:
            mp[q] = mp[q] + 1
        else:
            mp[q] = 1
    # print(mp)
    

    s = 0
    i = 1
    ans = 1
    while(i<n):
        if(i == n-1) and (arr[i - 1] == arr[i]):
            if s == 0:
                arr[0],arr[i] = arr[i],arr[0]
                s +=1
            else:
                break
        
        elif(arr[i-1] == arr[i]) and s==0 and (mp[arr[i]]<3):
            arr[i],arr[i+1] = arr[i+1],arr[i]
            # print(arr[i],arr[i + 1])   # print
            s +=1
        
        elif((arr[i-1] == arr[i]) and s ==1) or (arr[i-1]==arr[i] and mp[arr[i]]>2 and s<=1):
            j = i
            if mp[arr[i]]>2:
                mp[arr[i]] -=2
            # print(arr[i],mp[arr[i]])     # print
            x = arr[i]
            while(j<n-1):
                arr[j] = arr[j+1]
                j +=1
            n -=1
            arr[j] = x
            if(s>0):
                s+=1

        else:
            i +=1
        # print(i,s)

    ans = i
    # print("----------------------")
    # print(arr)
    print(ans)
    
    
    