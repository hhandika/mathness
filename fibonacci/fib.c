/*
Heru Handika
4 November 2020
Fibonacci sequence using
memoization techniques
*/

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>

#define SIZE 10000
unsigned long long fib(int * cache, int n);
void initialize_cache(int * cache, size_t cache_size);
int fib_iter(int n);

int main(void) {
    int n = 40;
    printf("Enter sequence number: ");
    scanf("%d", &n);

    int memo[SIZE];
    initialize_cache(memo, SIZE);

    unsigned long long res = fib(memo, n);
    printf("%llu\n", res);
    
    if (n <= 40 ) {
        printf("Iter %d\n", fib_iter(n));
    }

    return EXIT_SUCCESS;
}

void initialize_cache(int * cache, size_t cache_size) {
    for (size_t i = 0; i < cache_size; i++)
        cache[i] = -1;  
}

int fib_iter(int n) {
    int64_t res = n < 2 ? n : fib_iter(n - 1) + fib_iter(n - 2);
    return res;
}

unsigned long long fib(int * cache, int n) {
    if (n < 2) return n;

    if (cache[n] == -1) {
        cache[n] = fib(cache, n - 1) + fib(cache, n - 2);
    }
    return cache[n];
}