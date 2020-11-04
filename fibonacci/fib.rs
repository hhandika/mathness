/*
Heru Handika
4 November 2020
Memoization fibonacci
*/

fn main() {
    let n: i64 = 40;

    println!("{}", fib_iter(n));

}

fn fib_iter(n: i64) -> i64 {
    if n < 2 {
        n
    } else {
        fib_iter(n - 2) + fib_iter(n - 1)
    }
}