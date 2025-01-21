for _ in range(int(input())):
    _, s = input(), input()
    x, y, cost = 0, 0, 0
    for c in s:
        x = x + 1 if c == '<' else 0
        y = y + 1 if c == '>' else 0
        cost = max(cost, x, y)
    print(cost + 1)
