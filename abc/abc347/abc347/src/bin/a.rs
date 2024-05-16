fn main() {
    proconio::input! {
        n: i64,
        k: i64,
    }
    for _ in 0..n {
        proconio::input! {
            a_i: i64,
        }
        if a_i % k == 0 {
            println!("{}", a_i / k);
        }
    }
}
