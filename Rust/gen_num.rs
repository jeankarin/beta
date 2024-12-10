use rand::distributions::{Distribution, Uniform};

fn main(){
    
    // Declaramos las variables
    let mut rng = rand::thread_rng();
    let die = Uniform::from(1..7);

    loop{
        let throw = die.sample(&mut rng);
        println!("Roll the die: {}", throw);
        if throw == 6{
            break;
        }
    }
}