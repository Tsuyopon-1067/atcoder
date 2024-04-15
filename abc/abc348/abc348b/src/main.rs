struct Point {
    x: i32,
    y: i32,
}

fn main() {
    proconio::input! {
        n: i32,
    }

    let mut points = vec![];

    for _ in 0..n {
        proconio::input! {
            x: i32,
            y: i32,
        }
        points.push(Point { x: x, y: y });
    }

    for i in 0..points.len() {
        let mut ans = 0;
        let mut length = 0;
        for j in 0..points.len() {
            if i == j {
                continue;
            }

            let dx = points[i].x - points[j].x;
            let dy = points[i].y - points[j].y;
            if length < dx * dx + dy * dy {
                length = dx * dx + dy * dy;
                ans = j;
            }
        }
        println!("{}", ans + 1);
    }
}
