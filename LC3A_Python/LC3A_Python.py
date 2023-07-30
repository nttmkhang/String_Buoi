
def KiemTra(a, b):
    m = len(a)
    n = len(b)

    dem = 0
    j = 0
    for k in range(n):
        if j < m and b[k] == a[j]:
            j += 1
        else:
            dem += 1
    if j == m:
        return dem
    return -1

def Process(n):
    for i in range(n):
        a = input()
        b = input()
        print(f"Case #{i + 1}: ", end="")
        kq = KiemTra(a, b)
        if kq == -1:
            print("IMPOSSIBLE")
        else:
            print(kq)

n = int(input())
Process(n)