use proconio::input;

fn main() {
    input! {
        n: usize,
        mut a: [i64; n]
    }

    let mut sum_alice: i64 = 0;
    let mut sum_bob: i64 = 0;

    a.sort();
    a.reverse();

    for i in 0 .. n {
        if i % 2 == 0 {
            sum_alice += a[i];
        } else {
            sum_bob += a[i];
        }
    }

    println!("{}", sum_alice - sum_bob);
}
