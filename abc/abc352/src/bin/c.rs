use proconio::input;

fn main() {
    proconio::input! {
        n: i64,
    }
    let mut a = vec![];
    let mut b = vec![];
    for i in 0..n {
        input! {
            tmp_a: i64,
            tmp_b: i64,
        }
        a.push(tmp_a);
        b.push(tmp_b);
    }
    let mut max_head_idx = 0;
    for i in 0..n {
        if b[i as usize] - a[i as usize] > b[max_head_idx as usize] - a[max_head_idx as usize] {
            max_head_idx = i;
        }
    }
    let mut ans = a.iter().sum::<i64>();
    ans = ans - a[max_head_idx as usize] + b[max_head_idx as usize];
    println!("{}", ans);
}
