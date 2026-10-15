import sys

a, b = map(float, sys.stdin.read().split())

c = (b**2 - a**2) ** 0.5

keliling = a + b + c
luas = 0.5 * c * a

print(f"\033[F\033[K\nAlas = {c:g} cm")
print(f"Tinggi = {a:g} cm")
print(f"Keliling = {keliling:g} cm")
print(f"Luas = {luas:g} cm^2")