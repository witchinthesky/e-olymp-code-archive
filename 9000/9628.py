import array

n = int(input())
value = list(map(int, input().split()))

dp = array.array('i', (0 for i in range(0,n)))
dp[1] = abs(value[1] - value[0]);
for i in range(2, n):
  dp[i] = min(dp[i - 1] + abs(value[i - 1] - value[i]), dp[i - 2] + abs(value[i] - value[i - 2]))

print(dp[n - 1])