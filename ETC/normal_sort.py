import math
import time

def isPrime(_num):
    for i in range(2,round(math.sqrt(_num))):
        if(_num % i == 0):
            return False

    return True

if (__name__ == "__main__"):
    while(True):
        start = time.time()

        num = int(input())
        if(num == 0):
            break
        else:
            prime_count = 0
            for i in range(num+1, num*2 + 1):
                if(isPrime(i)):
                    prime_count += 1

            print(prime_count)

        print("Elapsed Time : %.02f" % (time.time() - start))
