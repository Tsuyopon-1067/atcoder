use proconio::input_interactive;

fn main() {
    proconio::input! {
        n: i64,
        q: i64,
    }
    let mut t = vec![0; n as usize];
    for i in 0..n {
        t[i as usize] = 1;
    }
    for _ in 0..q {
        proconio::input! {
            tmp: i64
        }
        t[(tmp - 1) as usize] = 1 - t[(tmp - 1) as usize];
    }
    let mut ans = 0;
    for v in t.iter() {
        ans += v;
    }
    println!("{}", ans)
}
