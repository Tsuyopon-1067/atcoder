use std::collections::HashSet;

fn main() {
    proconio::input! {
        n: i64,
        k: i64,
    }
    let mut set: HashSet<i64> = HashSet::new();
    for _ in 0..n {
        proconio::input! {
            tmp: i64,
        }
        set.insert(tmp);
    }
    let mut sum = k * (k + 1) / 2;
    for i in set {
        if i > k {
            continue;
        }
        sum -= i;
    }
    println!("{}", sum)
}
