use std::io;
use std::cmp::Ordering;
use rand::Rng;

fn main() {
    // Mostramos información de lo que hace la aplicación
    println!("Guess the number!");

    // Declaramos variable, asignamos un número aleatorio de 1 a 100 y lo mostramos por pantalla
    let secret_number = rand::thread_rng().gen_range(1..=100);
    println!("The secret number is: {secret_number}");

    // Añadimos bucle infinito
    loop {
        // Pedimos al usuario que introduzca un número
        println!("Please input your guess.");

        // Declaramos la variable que almacenará el número del usuario
        let mut guess = String::new();

        // Leemos el número introducido por teclado
        io::stdin()
        .read_line(&mut guess)
        .expect("Failed to read line");

        // Convertimos de String a Integer u32 -> Un número entero si signo de 32bits.
        /*let guess: u32 = guess
        .trim()
        .parse()
        .expect("Please type a number!");*/
        
        // Hacemos que no salga cuando se produce un error al convertir de String a Integer
        let guess: u32 = match guess.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };

        // Mostramos por pantalla el número del usuario
        println!("You guessed: {guess}"); 

        // Realizamos la comprobación para saber si gana o pierde el usuario
        match guess.cmp(&secret_number) {
            Ordering::Less => println!("Too small!"),
            Ordering::Greater => println!("Too big!"),
            Ordering::Equal => {
                println!("YOU WIN!!");
                break;
            }
        }
    }
}
