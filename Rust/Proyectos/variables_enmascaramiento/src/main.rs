fn main() {
    let x = 5;
    let x = x + 1;

    {
        // Aquí vale 12
        let x = x * 2;
        println!("The value of x in the inner scope is: {x}");
    }

    // Aquí vale 6
    println!("The value of x is: {x}");
}
