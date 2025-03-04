use std::env;
mod megasena;
mod quina;
mod lotofacil;
mod lotomania;
mod timemania;
mod duplasena;

fn main() {
    let args: Vec<String> = env::args().collect();
    
    if args.len() > 1 {
        parametros( &args[1] );
    }else{
        aviso( &args[0] );
    }
}

fn aviso( programa: &str ){
    println!("Rode: '{} help' para mais detalhes", programa);
}

fn help(){
    println!("Uso: loterust [opções]\n\tversion   → para obter a versão.");
    println!("\thelp      → para essa ajuda.");
    println!("\tmegasena  → gera 6 números para a Mega-sena.");
    println!("\tquina     → gera 5 números para a Quina.");
    println!("\tlotofacil → gera 15 números para a Lotofácil.");
    println!("\tlotomania → gera 50 números para a Lotomania.");
    println!("\ttimemania → gera 10 números para a Timemania.");
    println!("\tduplasena → gera 2 vezes 6 números para a Dupla-Sena.");
}

fn version(){
    println!("loterust 1.0.0\nDesenvolvido por Marcos Olivera\nhttps://terminalroot.com.br/");
}

fn parametros( argumento: &str ){
        match argumento {
            "help" => help(),
            "version" => version(),
            "megasena" => megasena::megasena_fn(),
            "quina" => quina::quina_fn(),
            "lotofacil" => lotofacil::lotofacil_fn(),
            "lotomania" => lotomania::lotomania_fn(),
            "timemania" => timemania::timemania_fn(),
            "duplasena" => duplasena::duplasena_fn(),
            _ => help(),
        } 
}
