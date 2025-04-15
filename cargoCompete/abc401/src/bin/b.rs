use std;
use std::io::{BufRead, Stdin, StdinLock};
use std::str::FromStr;

pub struct Scanner<'a> {
    reader: StdinLock<'a>,
    buf: String,
    words: Vec<String>,
}

impl<'a> Scanner<'a> {
    pub fn new(stdin: &'a Stdin) -> Self {
        Scanner {
            reader: stdin.lock(),
            buf: String::new(),
            words: Vec::new(),
        }
    }

    pub fn next<T: FromStr>(&mut self) -> T {
        if self.words.is_empty() {
            self.buf.clear();
            self.reader
                .read_line(&mut self.buf)
                .expect("Failed to read line");
            self.words = self.buf.split_whitespace().map(String::from).collect();
        }

        self.words
            .remove(0)
            .parse()
            .unwrap_or_else(|_| panic!("Failed to parse"))
    }

    pub fn next_line(&mut self) -> String {
        self.buf.clear();
        self.reader
            .read_line(&mut self.buf)
            .expect("Failed to read line");
        self.buf.trim().to_string()
    }

    pub fn next_vec<T: FromStr>(&mut self, n: usize) -> Vec<T> {
        (0..n).map(|_| self.next::<T>()).collect()
    }

    pub fn next_chars(&mut self) -> Vec<char> {
        self.next::<String>().chars().collect()
    }

    pub fn next_matrix<T: FromStr>(&mut self, h: usize, w: usize) -> Vec<Vec<T>> {
        (0..h).map(|_| self.next_vec(w)).collect()
    }
}

fn main() {
    solve();
}

fn solve() {
    let stdin = std::io::stdin();
    let mut sc = Scanner::new(&stdin);

    let mut error_count = 0;
    let mut is_login = false;
    let n: usize = sc.next();
    for _ in 0..n {
        let s: String = sc.next();
        match s.as_str() {
            "login" => is_login = true,
            "logout" => is_login = false,
            "private" => {
                if !is_login {
                    error_count += 1;
                }
            }
            _ => {}
        }
    }
    println!("{}", error_count);
}
