def Process():
    s = input()
    tsChuoi = {}
    for c in s:
        tsChuoi[c] = tsChuoi.get(c, 0) + 1

    code = ["ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"]

    for temp in code:

        tsCode = {}
        for c in temp:
            tsCode[c] = tsCode.get(c, 0) + 1

        flag = 1
        for c, ts in tsCode.items():
            if c not in tsChuoi or ts > tsChuoi[c]:
                flag = 0
                break

        if flag:
            return temp

    return "CHIA BUON, PHAI VE ROI, HEN NAM SAU NHE!!"

def main():
    print(Process())

if __name__ == "__main__":
    main()