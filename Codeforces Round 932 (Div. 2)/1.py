def broken_heart(n, s):
    found = False
    n = len(s)  # Fixing the assignment of n
    for i in range(n // 2):
        if s[i] == s[n - i - 1]:
            continue
        if s[i] > s[n - i - 1]:
            found = True
        else:
            break

    rev = s[::-1]
    if not found:
        print(s)
    else:
        print(rev + s)

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input().strip()
        broken_heart(n, s)

if __name__ == "__main__":
    main()
