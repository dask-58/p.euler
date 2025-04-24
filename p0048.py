n = 1000
def self_powers(n):
    return sum(i ** i for i in range(1, n + 1))
result = self_powers(n)
print(result%10000000000)
