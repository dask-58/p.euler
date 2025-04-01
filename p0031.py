amount = 200
dp = [0] * 201
dp[0] = 1
coins = [1, 2, 5, 10, 20, 50, 100, 200]
for coin in coins:
    for i in range(coin, amount + 1):
        dp[i] += dp[i - coin]

print(dp[amount])
