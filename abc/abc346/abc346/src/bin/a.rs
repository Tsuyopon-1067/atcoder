fn main() {
    proconio::input! {
        n: i64,
    }
    let mut a = vec![];
    for i in 0..n {
        proconio::input! {
            tmp: i64,
        }
        a.push(tmp);
    }
    for i in 0..a.len() - 1 {
        println!("{}", a[i] * a[i + 1])
    }
}
