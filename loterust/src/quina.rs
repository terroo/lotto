use rand::Rng;

pub fn quina_fn(){
    let mut numeros = Vec::new();
    let mut rng = rand::thread_rng();
    let mut i = 0;
    while i < 5 {
        let temp = rng.gen_range(1..81);
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
