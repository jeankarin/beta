use rand::Rng;

/*
Instalar librería rand: cargo add rand
*/

fn main() {

    // Declaramos variables
    let mut rng = rand::thread_rng();

    /* 
    Mostramos los números por pantalla
    Generamos 1 número aleatorio de 0 a 9 (10 no incluido)
    */
    println!("Integer: {}", rng.gen_range(0..10));
    println!("Float: {}", rng.gen_range(0.0..10.0));
}
