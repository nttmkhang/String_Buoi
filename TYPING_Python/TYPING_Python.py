#TLE
MOD = 1000000007

def Process(s):
    dem = 1
    kq = 1
    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            dem += 1
        else:
            kq = (kq * dem) % MOD
            dem = 1
    kq = (kq * dem) % MOD
    return str(kq)

if __name__ == "__main__":
    s = input()
    print(Process(s))