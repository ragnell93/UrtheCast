//Rust Language
pub fn fib(v: &mut Vec<i32>, current: usize, n:i32) -> i32 {
    v.push(v[current-1] + v[current-2]);
    if current as i32 == n {
        return v[current];
    }
    fib(v,current+1,n)
}

fn main() {
    let mut v = vec![0,1];
    let N = 30; // this is the fib number to calculate
    let ans = fib(&mut v,2,30);
    println!("ans {}",ans);
}
