def NhatChu(s):
    a = []
    ans = ''
    size = len(s)
    for i in range(0, size):
        if (s[i] >= 'A' and s[i] <= 'Z') or (s[i] >= 'a' and s[i] <= 'z'):
            if a.count(s[i]) == 0:
               a.append(s[i])
               ans = ans + s[i]
    return ans;

def main():
    s = input()
    ans = NhatChu(s)
    print(ans)

if __name__ == "__main__":
    main()