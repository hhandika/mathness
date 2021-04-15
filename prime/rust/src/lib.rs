pub fn generate_prime_num(n: usize) -> Vec<i32> {
    let mut prime: Vec<i32> = Vec::new();

    (1..n).for_each(|p| {
        if p % 3 == 0 || p % 5 == 0 {
            prime.push(p as i32);
        }
    });

    prime
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn prime_test() {
        let n = 10;
        let prime = generate_prime_num(n);
        let res = vec![3, 5, 6, 9];
        assert_eq!(res, prime);
    }
}
