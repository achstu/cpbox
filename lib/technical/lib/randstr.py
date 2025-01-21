import string
import random

def randstr(len):
    alphabet = string.ascii_lowercase
    # alphabet = "ab"
    word = random.choices(list(alphabet), k=len)
    return ''.join(word)

n = int(200_000)
print(1)
print(n)
print(randstr(n))
exit(0)

t = 0x1000
for _ in range(t):
    n = random.randint(16, 32)
    print(f'\"{randstr(n)}\"', end=', ')
