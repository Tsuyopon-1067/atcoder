use std::collections::HashSet;
fn main() {
    let (n, a) = fetch_list();
    let (m, b) = fetch_list();
    let (l, c) = fetch_list();
    let (q, x) = fetch_list();

    let mut set: HashSet<i64> = HashSet::new();
    for ea in &a {
        for eb in &b {
            for ec in &c {
                set.insert(ea + eb + ec);
            }
        }
    }
    for ex in &x {
        if set.contains(ex) {
            println!("Yes");
        } else {
            println!("No");
        }
    }
}

fn fetch_list() -> (i64, Vec<i64>) {
    proconio::input! {
        len: i64,
    }
    let mut list = vec![];
    for _ in 0..len {
        proconio::input! {
            tmp: i64,
        }
        list.push(tmp);
    }
    return (len, list);
}
