fn main() {
    let mut a = vec![];
    for i in 0..100 {
        proconio::input! {
            tmp_a: i64,
        }
        a.push(tmp_a);
        if tmp_a == 0 {
            break;
        }
    }
    for i in 0..a.len() {
        println!("{}", a[a.len() - i - 1]);
    }
}
