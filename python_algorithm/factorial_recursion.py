
# def factorial(n):
#     if n == 0:
#         return 1
#     return n * factorial(n-1)

# n = 7
# print(factorial(n))


def factorial(n):
    if n == 0:
        return 1  # On renvoie 1, pas "rien"
    return n * factorial(n-1)

n = 7
print(factorial(n))