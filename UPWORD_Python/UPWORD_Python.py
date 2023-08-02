
def process(s):
    n = len(s)
    dem = 0
    for i in range(n - 1):
        if (65 <= ord(s[i]) <= 90) and (97 <= ord(s[i + 1]) <= 122):
            dem += 1
    if 65 <= ord(s[n - 1]) <= 90:
        dem += 1
    return str(dem)

if __name__ == "__main__":
    s = input()
    print(process(s))