
def TinhTong(n):
    s = 0
    while (n != 0):
        s += n % 10
        n //= 10
    return s

def Process():
    stream = []
    T = int(input())
    for _ in range(T):
        n = int(input())
        stream.append(str(TinhTong(n)))
    return "\n".join(stream)

if __name__ == "__main__":
    print(Process())
