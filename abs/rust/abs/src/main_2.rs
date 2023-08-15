use proconio::input;

fn main() {
    input! {
        s: String
    }
    let mut ans: i64 = 0;
    for c in s.chars() {
        if c == '1' {
            ans += 1;
        }
    }
    println!("{}", ans);
}
