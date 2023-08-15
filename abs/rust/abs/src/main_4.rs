use proconio::input;

fn main() {
    input! {
        a:i64,
        b:i64,
        c:i64,
        x:i64
    }

    let mut ans:i64 = 0;
    for aa in 0 ..= a {
        for bb in 0 ..= b {
            let rem:i64 = x - (aa*500 + bb*100);
            let cc:i64 = rem / 50;
            if 0 <= cc && cc <= c {
                ans += 1;
            }
        }
    }
    println!("{}", ans);
}
