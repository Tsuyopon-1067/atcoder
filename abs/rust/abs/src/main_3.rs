use proconio::input;

fn main() {
    input! {
        n:usize,
        mut a:[usize; n]
    }
    let mut ans = 0;
    let mut flag = true;

    while flag {
        for i in 0 .. n {
            if a[i] % 2 != 0 {
                flag = false;
                break;
            }
            a[i] /= 2;
        }
        if flag { // n clear -> ++
            ans += 1;
        }
    }
    println!("{}", ans);
}
