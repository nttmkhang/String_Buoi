def luyencode(s, n):
    count = 0
    temp = 'luyencode'
    size = len(temp)
    for i in range(0, n):
        if s[i] == 'l':
            lc = 0
            for j in range(0, size):
                if i + j >= n or s[i + j] != temp[j]:
                    lc = 1
                    break
            if lc == 0:
                count = count + 1
    return count

def main():
    n = int(input())
    s = input()
    print(luyencode(s, n))

if __name__ == "__main__":
    main()