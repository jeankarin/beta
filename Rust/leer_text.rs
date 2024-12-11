use std::io;

fn main() {
    // Crear un String mutable para almacenar la entrada del usuario
    let mut entrada = String::new();

    println!("Por favor, escribe algo:");

    // Leer la entrada del usuario
    io::stdin()
        .read_line(&mut entrada) // Pasa una referencia mutable a la función
        .expect("Error al leer la entrada");

    println!("Ingresaste: {}", entrada);
}