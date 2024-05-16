fn main() {
    proconio::input! {
        n: i64,
        x: i64,
        y: i64,
        z: i64,
    }
    if (x < z && z < y) || (y < z && z < x) {
        println!("Yes");
    } else {
        println!("No");
    }
}
