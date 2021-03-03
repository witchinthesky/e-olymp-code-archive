def f(x):
    ans = 1
    for i in range(2, x + 1):
        ans *= i
    return ans


n = int(input())
res = (f(2 * n - 1) // f(n - 1) // f(n - 1)) % 9929
print(res)
