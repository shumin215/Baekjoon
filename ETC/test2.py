def getGCD(_v1, _v2):
    if(_v1 < _v2):
        (_v1, _v2) = (_v2, _v1)
    while(_v2 != 0):
        (_v1, _v2) = (_v2, _v1%_v2)
    return _v1

def getLCM(_v1, _v2):
    gcd_value = getGCD(_v1, _v2)
    return _v1 * _v2 // gcd_value

if(__name__ == "__main__"):
    value1, value2 = map(int, input().split())
    print(getGCD(value1, value2))
    print(getLCM(value1, value2))
