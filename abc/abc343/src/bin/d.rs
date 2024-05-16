use std::collections::HashMap;
fn main() {
    proconio::input! {
        n: i64,
        t: i64,
    }
    let mut map = HashMap::new();
    map.insert(0, n);
    for i in 0..t {
        proconio::input! {
            tmp: i64,
        }
        if map.get(&tmp) == None {
            map.insert(tmp, 0);
        }
    }
}
