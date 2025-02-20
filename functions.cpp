#include <iostream>
#include <string>

void bleep(std::string word, std::string &text) {
  //iterates through text
  for (int i = 0; i < text.size(); i++) {
    // initializes 0 counter
    int counter = 0;

    // iterates through i and counts how many letters match with word
    for (int j = 0; j < word.size(); j++) {
      if (text[i + j] == word [j]) counter++;
    }

    // iterates through text at i and replaces if the word was found
    if (counter == word.size()) {
      for (int k = 0; k < word.size(); k++) {
        text[i + k] = '*';
      }
    }
  }
}
