#pragma once

#include <iostream>
#include <memory>
#include <vector>
#include <ctime>
#include <algorithm>

class Lotto {
  std::vector<int> nums, nums2;
  size_t max, qtd;
  std::string game;
  int i;

  protected:
    void generate();
    void generate_plus();

  public:
    Lotto();
    void set_max(size_t, size_t);
    void start(char**);
    void run();
};
