def Process():
    s = input().strip()
    n = len(s)
    t = ''
    for length in range(1, n//2 + 1):
        if n % length == 0:
            t = s[:length]
            k = n // length 
            temp = ""

            for i in range(k):
                temp += t

            if temp == s:
                return str(k) + t

    return '1' + s

def main():
    print(Process())

if __name__ == "__main__":
    main()
