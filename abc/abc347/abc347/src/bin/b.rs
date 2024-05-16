use std::collections::HashSet;

fn main() {
    proconio::input! {
        s: String,
    }

    let mut set: HashSet<String> = HashSet::new();
    for i in 0..s.len() {
        for j in i + 1..s.len() + 1 {
            let tmp = s[i..j].to_string().clone();
            set.insert(tmp);
        }
    }
    println!("{}", set.len());
}
