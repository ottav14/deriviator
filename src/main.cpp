#include <iostream>
#include <string>
#include "../include/Function.h"
using namespace std;

int main() {

  string function_statement;

  cout << "Enter a function to derivate:" << endl;
  getline(cin, function_statement);
  Function f = Function(function_statement);
  cout << "Your function is " << f.statement << endl;

  return 0;

}
