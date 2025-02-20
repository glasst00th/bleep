#include <iostream>
#include <string>
#include "functions.hpp"

int main() {

  std::string word = "brocolli";
  std::string text = "Aaron is a stinky nasty brocollihead.";

  std::cout << text << "\n";
  bleep(word, text);
  std::cout << text << "\n";


return 0;

}
