fn main() {
    proconio::input! {
        s: String,
        t: String,
    }
    let s_char = s.chars().collect::<Vec<char>>();
    let t_char = t.chars().collect::<Vec<char>>();
    let mut i = 0;
    let mut j = 0;
    while i < s.len() {
        while s_char[i] != t_char[j] {
            j += 1;
        }
        print!("{} ", j + 1);
        i += 1;
        j += 1;
    }
    println!();
}
