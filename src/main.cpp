#include "lotto.hpp"

int main(int argc, char** argv){
  if(argc > 1){
    std::srand(std::time(0));
    auto lotto = std::make_unique<Lotto>();
    lotto->start(argv);
    lotto->run();
  }else{
    std::cerr << "Use: " << argv[0] << " [game]\n";
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}

