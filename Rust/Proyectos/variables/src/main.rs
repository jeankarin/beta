fn main() {
    // Declaración de una variable
    let mut x = 5;
    println!("The value of x is: {x}");

    x = 6; // Si la variable no la hacemos mutable, no funcionará.
    println!("The value of x is: {x}");

    // Declaración de una constante
    const THREE_HOURS_IN_SECONDS: u32 = 60 * 60 * 3;
    println!("El valor de la constante es: {}", THREE_HOURS_IN_SECONDS);
}
