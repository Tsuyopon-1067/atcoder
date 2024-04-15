fn main() {
    proconio::input! {
        n: i32,
    }
    for i in 0..n {
        let count = i+1;
        if count % 3 == 0 {
            print!("x");
        } else {
            print!("o");
        }
    }
    println!();
}
