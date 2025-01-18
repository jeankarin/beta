// Para compilar el este código ejecutamos rustc <nombre_fichero>

fn imprimir(mensaje: String){
    println!("{}", mensaje);
}

fn main(){
    let mensaje_usuario = String::from("Hola Mundo");
    imprimir(mensaje_usuario);
}