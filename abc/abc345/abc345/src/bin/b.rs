fn main() {
    proconio::input! {
        x: i64,
    }
    if x % 10 == 0 || x < 0 {
        println!("{}", x / 10);
    } else {
        println!("{}", x / 10 + 1);
    }
}
