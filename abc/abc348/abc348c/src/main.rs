use std::collections::HashMap;
struct Beans {
    a: i32,
    c: i32,
}

fn main() {
    proconio::input! {
        n: i32,
    }

    let mut c_to_min_a = HashMap::new();

    for _ in 0..n {
        proconio::input! {
            a: i32,
            c: i32,
        }
        match c_to_min_a.entry(c) {
            std::collections::hash_map::Entry::Occupied(mut entry) => {
                if *entry.get() > a {
                    entry.insert(a);
                }
            }
            std::collections::hash_map::Entry::Vacant(entry) => {
                entry.insert(a);
            }
        }
    }
    let mut c_list: Vec<_> = c_to_min_a.values().cloned().collect();
    if let Some(max_value) = c_list.iter().max() {
        println!("{}", max_value);
    }
}
