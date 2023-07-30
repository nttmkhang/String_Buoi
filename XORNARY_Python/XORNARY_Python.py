def Xuly(ans):
    while(ans[0] == '0'):
        ans = ans[1:]
    return ans

def Xornary(a, b):
    size = len(a)
    ans = ''
    for i in range(0, size):
        if a[i] == b[i]:
            ans += '0'
        else:
            ans += '1'
    ans = Xuly(ans)
    return ans


def main():
    a, b = map(str, input().split())
    ans = Xornary(a, b)
    print(ans)

if __name__ == "__main__":
    main()