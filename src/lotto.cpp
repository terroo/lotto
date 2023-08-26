#include "lotto.hpp"
#include <cstdlib>

Lotto::Lotto(){
  this->nums = {};
  this->nums2 = {};
  this->max = {};
  this->i = {};
}

void Lotto::run(){
  this->generate();
  for(auto &n : nums){
    if(n <= 9){
      std::cout << '0' << n << ' ';
    }else{
      if(this->i == 25){
        std::cout.put('\n');
      }
      std::cout << n << ' ';
    }
    ++this->i;
  }
  std::cout.put('\n');
}

void Lotto::generate(){
  while( nums.size() < this->qtd){
    int r = std::rand() % this->max;
    if(r == 0){ r += 1; }
    if( std::find( nums.begin(), nums.end(), r ) != nums.end() ){
      continue;
    }else{
      nums.push_back(r);
    }
  }
  std::sort(nums.begin(), nums.end());
}

void Lotto::generate_plus(){
  while( nums2.size() < this->qtd){
    int r = std::rand() % this->max;
    if(r == 0){ r += 1; }
    if( std::find( nums2.begin(), nums2.end(), r ) != nums2.end() ){
      continue;
    }else{
      nums2.push_back(r);
    }
  }
  std::sort(nums2.begin(), nums2.end());
  for(auto &n : nums2){
    if(n <= 9){
      std::cout << '0' << n << ' ';
    }else{
      std::cout << n << ' ';
    }
  }
  std::cout.put('\n');
  std::cout << "Jogo B: ";
}

void Lotto::set_max(size_t qtd, size_t max){
  this->qtd = qtd;
  this->max = max;
}

void Lotto::start(char** argv){
  this->game = argv[1];
  if(this->game == "--mega" || this->game == "-m"){
    this->set_max(6, 60);
  }else if(this->game == "--facil" || this->game == "-f"){
    this->set_max(15, 25);
  }else if(this->game == "--quina" || this->game == "-q"){
    this->set_max(15, 80);
  }else if(this->game == "--mania" || this->game == "-l"){
    this->set_max(50, 100);
  }else if(this->game == "--time" || this->game == "-t"){
    this->set_max(10, 60);
  }else if(this->game == "--dupla" || this->game == "-d"){
    std::cout << "Jogo A: ";
    this->set_max(6, 50);
    this->generate_plus();
  }else if(this->game == "--help" || this->game == "-h"){
    std::cout << "Lotto C++:" << '\n';
    std::cout << "\t--mega,-m       - Gere 6 números de 1 até 60 para : Mega Millions(USA) e Mega-Sena(BRA)." << '\n';
    std::cout << "\t--facil,-f      - Gere 15 números de 1 até 25 para: Lotofácil." << '\n';
    std::cout << "\t--quina,-q      - Gere 5 números de 1 até 80 para : Quina." << '\n';
    std::cout << "\t--mania,-l      - Gere 50 números de 1 até 100 para : Lotomania." << '\n';
    std::cout << "\t--time,-t       - Gere 10 números de 1 até 60 para: Timemania." << '\n';
    std::cout << "\t--dupla,-d      - Gere 2 jogos de 6 números de 1 até 50 para a: Duplasena." << '\n';
    std::cout << "\t--help,-h       - Exibe essa ajuda." << '\n';
    std::cout << "\t--version,-v    - Mostra a versão." << '\n';
  }else if(this->game == "--version" || this->game == "-v"){
    std::cout << "Lotto C++ v0.0.1";
  }else{
    std::cerr << "Jogo inexistente.\n";
    exit(1);
    std::runtime_error("no game.");
  }
}
