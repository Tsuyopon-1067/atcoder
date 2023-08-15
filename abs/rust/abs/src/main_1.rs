use proconio::input;

fn main() {
    input! {
        a:i64,
        b:i64
    }
    if a%2 == 1 && b%2 == 1 {
        println!("Odd");
    } else {
        println!("Even");
    }
}
