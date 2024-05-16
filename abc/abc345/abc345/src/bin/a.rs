fn main() {
    proconio::input! {
        s: String,
    }
    let mut ans = true;
    for i in 0..s.len() {
        let c = s.chars().nth(i).unwrap();
        if i == 0 {
            if c != '<' {
                ans = false;
                break;
            }
        } else if i == s.len() - 1 {
            if c != '>' {
                ans = false;
                break;
            }
        } else {
            if c != '=' {
                ans = false;
                break;
            }
        }
    }
    if ans {
        println!("Yes");
    } else {
        println!("No");
    }
}
