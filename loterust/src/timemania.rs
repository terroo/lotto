use rand::Rng;

pub fn timemania_fn(){
    let mut numeros = Vec::new();
    let mut rng = rand::thread_rng();
    let mut i = 0;
    while i < 10 {
        let temp = rng.gen_range(1..81);
        if numeros.iter().any(|&i| i == temp ) {
            continue;
        }else{
            numeros.push( temp );
            i = i + 1;
        }
    }

    numeros.sort();

    let mut newline = 0;
    for _all in numeros {
        if _all < 10 {
            print!("0");
            print!("{} ", _all);
        }else{
            print!("{} ", _all);
        }
        newline = newline + 1;
        if newline % 5 == 0 {
            println!("");
        }else{
            continue;
        }
    }
}
