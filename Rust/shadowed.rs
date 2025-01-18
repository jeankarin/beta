use std::io;

fn main() {
    let x = 5;

    let x = x + 1;

    println!("The value of x in the inner scope is: {x}");

    
    println!("Escribe algo: ");
    let mut x = String::new();

    // Leer la entrada del usuario
    io::stdin()
        .read_line(&mut x) // Pasa una referencia mutable a la función
        .expect("Error al leer la entrada");

    println!("El valor ahora de x es: {}", x);
}