a, b, c = map(int, input().split())
s = input()
t = input()
w = [0] * (a + 1)
for i in range(a - b + 1):
    if s[i:i + b] == t:
        w[i + 1] = w[i + 1]+1
p = [0] * (a + 1)
for i in range(1, a + 1):
    p[i] =p[i] + p[i - 1] + w[i]
for i in range(c):
    l, r = map(int, input().split())
    if r + 1 - l >= b:
        print(p[r - b + 1] - p[l - 1])
    else:
        print(0)