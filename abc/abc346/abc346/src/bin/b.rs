use proconio::input;

fn main() {
    input! {
        w: usize,
        b: usize,
    }
    let s = "wbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbw".to_string();
    for i in 0..12 {
        let sub = s[i..i + w + b].to_string().clone();
        let mut count_w = 0;
        let mut count_b = 0;
        for c in sub.chars() {
            if c == 'w' {
                count_w += 1;
            } else {
                count_b += 1;
            }
        }
        if count_w == w && count_b == b {
            println!("Yes");
            return;
        }
    }
    println!("No");
}
