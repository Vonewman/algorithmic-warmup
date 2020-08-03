from sys import stdin


def get_fibonacci_huge(n):

    if n <= 1:
        return n

    previous = 0
    current = 1

    for _ in range(n - 1):
        previous, current = current, (previous + current) % 10

    return current

if __name__ == '__main__':
    input = stdin.readline()
    n = int(input)
    print(get_fibonacci_huge(n))
