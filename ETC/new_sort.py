import math

def getPrimeNumberCount(_number):
#    print("Input Number : %d"%_number)
#    data_list = []
    # Initialize the list
#    for i in range(2,2*_number+1):
#        data_list.append(i)

    data_list = [True] * 2*_number

    for i in range(2, math.floor(math.sqrt(2*_number))+1):
        if(data_list[i] != False):
            for j in range(_number, 2*_number+1):
                if(j%i == 0):
#                    if(data_list[j] == False):
#                        continue
                    data_list[j] = False

#    print("The Prime Number : " + str(data_list))
#    print("The Total Number of Prime : %d"%len(data_list))

    data_list[0:_number+1] = [ ]
    return data_list.count(True)

if __name__ == "__main__":
    while(True):
        num = int(input())

        if(num == 0):
            break

        n = getPrimeNumberCount(num)
#        n2 = getPrimeNumberCount(2*num)

        print(n)

