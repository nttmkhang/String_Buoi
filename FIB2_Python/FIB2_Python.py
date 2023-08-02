def Fibonacci(n):
    if n == 0:
        return 'a'
    elif n == 1:
        return 'b'
    else:
        return Fibonacci(n - 1) + Fibonacci(n - 2)

def TanSuat(s, k):
    return s[:k].count('a')

def Process():
    t = int(input())
    result = []

    for i in range(t):
        n, k = input().split()
        n = int(n)
        k = int(k)

        fn = Fibonacci(n)
        temp = TanSuat(fn, k)
        result.append(str(temp))

    return '\n'.join(result)

def main():
    print(Process())

if __name__ == "__main__":
    main()

