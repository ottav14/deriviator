#include <iostream>
#include <string>
#include "../include/Function.h"

int main() {

  std::string function_statement;

  std::cout << "Enter a function to derivate:" << std::endl;
  std::getline(std::cin, function_statement);

  Function f = Function(function_statement);

  for(const std::string& term : f.terms) {
    std::cout << term << std::endl;
  }

  return 0;

}
