fn dfs(v: usize, graph: &Vec<Vec<usize>>, seen: &mut Vec<bool>) {
    seen[v] = true;
    print!("{} ", v);
    for &next in &graph[v] {
        if seen[next] {
            continue;
        }
        dfs(next, &graph, seen);
    }
}

fn main() {
    proconio::input! {
        n: i64,
        m: i64,
    }
    let mut graph = vec![vec![]; n as usize];
    for _ in 0..m {
        proconio::input! {
            a: usize,
            b: usize,
        }
        graph[a].push(b);
    }
    let mut seen = vec![false; n as usize];

    dfs(0, &graph, &mut seen);
    println!("");
}
