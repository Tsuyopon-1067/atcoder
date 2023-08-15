use proconio::input;

fn main() {
    input! {
        n: i64,
        a: i64,
        b: i64
    }

    let mut ans: i64 = 0;

    for i in 0 ..= n {
        let d = digit(i);
        if a <= d && d <= b {
            ans += i;
        }
    }
    println!("{}", ans);
}

fn digit(mut n: i64) -> i64 {
    let mut res: i64 = 0;
    while n > 0 {
        res += n % 10;
        n /= 10;
    }
    return res;
}
