fn main() {
    proconio::input! {
        s: String,
    }
    let last_three_chars = &s[s.len() - 3..];
    if let Ok(num) = last_three_chars.parse::<i32>() {
        if 1 <= num && num <= 349 && num != 316 {
            println!("Yes");
        } else {
            println!("No");
        }
    }
}
