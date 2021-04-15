
# %%
from typing import List


def is_prime(n: int) -> List[int]:
    isprime = []
    for i in range(1, n):
        if i % 3 == 0 or i % 5 == 0:
            isprime.append(i)
    return isprime


def is_prime_quick(n: int) -> List[int]:
    return [i for i in range(n) if i % 3 == 0 or i % 5 == 0]


def main():
    res: List[int] = is_prime_quick(1000)
    print(sum(res))


if __name__ == "__main__":
    res = is_prime(1000)
    print(res)
    print(sum(res))
    main()
# %%
