"""
Heru Handika
4 November 2020
Fibonacci using memoization
"""

from functools import lru_cache

@lru_cache(maxsize=None)
def fib(n: int) -> int:
    if n < 2:
        return n
    return fib(n - 1) + fib(n - 2)

def fib_iter(n: int) -> int:
    if n < 2:
        return n
    return fib(n - 1) + fib(n - 2)

def main():
    n: int = input("Enter number:")
    print(fib(int(n)))
    print(fib_iter(40))

if __name__ == "__main__":
    main()