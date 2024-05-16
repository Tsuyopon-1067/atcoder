fn main() {
    proconio::input! {
        n: i64,
    }
    let mut a = vec![0; (n + 1) as usize];
    for i in 1..=n {
        proconio::input! {
            tmp: i64,
        }
        a[i as usize] = tmp;
    }
    let mut v_to_idx = vec![0; (n + 1) as usize];
    for i in 1..=n {
        let a_value = a[i as usize];
        v_to_idx[a_value as usize] = i;
    }

    let mut ans = vec![];
    for i in 1..=n {
        if a[i as usize] != i {
            // sv i
            // i  si
            let swapped_idx = v_to_idx[i as usize];
            let swapped_value = a[i as usize];
            ans.push((i, swapped_idx));
            a[swapped_idx as usize] = swapped_value;
            v_to_idx[swapped_value as usize] = swapped_idx;
            a[i as usize] = i;
            v_to_idx[i as usize] = i;
        }
    }

    println!("{}", ans.len());
    for (x, y) in ans {
        println!("{} {}", x, y);
    }
}
