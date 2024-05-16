fn main() {
    proconio::input! {
        n: i64,
    }
    for _ in 0..n {
        for i in 0..n {
            proconio::input! {
                v: i64,
            }
            if v == 1 {
                print!("{} ", i + 1);
            }
        }
        println!();
    }
}
