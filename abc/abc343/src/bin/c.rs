use proconio::input;

fn main() {
    let mut ans = 1;
    let mut x = 1;
    proconio::input! {
        n: i64,
    }
    while x * x * x <= n {
        let tmp = x * x * x;
        if is_palindrome(tmp) {
            ans = tmp;
        }
        x += 1;
    }
    println!("{}", ans);
}

fn is_palindrome(n: i64) -> bool {
    let s = n.to_string();
    s == s.chars().rev().collect::<String>()
}
