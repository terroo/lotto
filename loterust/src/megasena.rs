use rand::Rng;

pub fn megasena_fn(){
    let mut numeros = Vec::new();
    let mut rng = rand::thread_rng();
    let mut i = 0;
    while i < 6 {
        let temp = rng.gen_range(1..61);
        if numeros.iter().any(|&i| i == temp ) {
            continue;
        }else{
            numeros.push( temp );
            i = i + 1;
        }
    }

    numeros.sort();

    for _all in numeros {
        if _all < 10 {
            print!("0");
            print!("{} ", _all);
        }else{
            print!("{} ", _all);
        }
    }
    println!();
}
