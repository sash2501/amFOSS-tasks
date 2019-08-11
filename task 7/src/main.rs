extern crate regex;
use regex::Regex;

fn main() {
    use std::io::{stdin,stdout,Write};
    println!("Hello, user!!");
    let re = Regex::new(r"^(?i)[[a-z]+[:digit:]]+@[a-z]+.[a-z]{2,}$").unwrap();
let mut hay =String::new() ;
print!("Please enter email  ");
    let _=stdout().flush();
    stdin().read_line(&mut hay).expect("Did not enter a correct string");
    if let Some('\n')=hay.chars().next_back() {
        hay.pop();
    }
    if let Some('\r')=hay.chars().next_back(){
        hay.pop();
    }

 println!("Correct email? {}", re.is_match(&hay));
}
