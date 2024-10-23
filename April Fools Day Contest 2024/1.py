def is_palindrome(s):
    return s == s[::-1]

t = int(input())

for _ in range(t):
    string = input().strip()
    if is_palindrome(string):
        print("YES")
    else:
        print("NO")
