import sys

a, b, i, j, x, y = map(float, sys.stdin.read().split())

hasil = (a - b) * (i / j) - (x + y)

print(f"\033[F\033[K\n{hasil:.3f}")