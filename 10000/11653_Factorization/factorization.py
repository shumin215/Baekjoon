if __name__ == "__main__":
    data = int(input())
    
    for i in range(2,data+1):
        while(data % i == 0):
            print(i)
            data /= i
        i-=1

#    a,b = map(int, input().split())
#    print(a, b)
