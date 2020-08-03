# Uses python3
import sys

def gcd_naive(a, b):
    m = max(a,b)
    n = min(a,b)
    if m%n ==0 :
        return n
    
    return gcd_naive(n,m%n)


def lcm(a, b):
    n = min(a, b)
    if n == 0:
        return 0
    return int((a*b)/gcd_naive(a, b))


if __name__ == '__main__':
    input = sys.stdin.readline()
    a, b = map(int, input.split())
    print(lcm(a, b))
