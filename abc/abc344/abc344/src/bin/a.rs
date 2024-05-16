fn main() {
    proconio::input! {
        s: String,
    }
    let mut state = 0;
    for c in s.chars() {
        if state != 1 && c != '|' {
            print!("{}", c);
        }
        if c == '|' {
            state += 1;
        }
    }
    println!();
}
