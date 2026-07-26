// Decode a binary number into a normal number e.x. 1001 -> 9

fn main() {
    let binary = String::from("1000"); // binary here

  
    let bits: Vec<char> = binary.chars().collect(); // get all bits

  
    let mut count: u32 = bits.len().try_into().unwrap(); // set the counter to the size of all the bits.
    // define necessary variables
    let mut result = 0;
    let power: i32 = 2;

    // loop all bjts
    for bit in &bits{

        // remove 1 from count
        count -= 1;

        // calculate value of bit based on position (counter) and add to the result
        result += bit.to_string().parse::<i32>().unwrap() * power.pow(count);
    }
    // print result
    println!("{}", result);
}
