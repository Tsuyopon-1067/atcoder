fn main() {
    proconio::input! {
        s: String,
    }
    let mut counts = vec![0; 26];
    for c in s.chars() {
        let idx = c as i8 - 'a' as i8;
        counts[idx as usize] += 1;
    }

    let mut ans = s.len() as i64 * (s.len() as i64 - 1) / 2;
    let mut is_exist_same = false;
    for count in counts {
        ans -= count * (count - 1) / 2;
        if count >= 2 {
            is_exist_same = true;
        }
    }
    if is_exist_same {
        ans += 1;
    }
    println!("{}", ans);
}
