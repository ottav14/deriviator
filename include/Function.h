#pragma once

#include <string>
#include <sstream>
#include <vector>

class Function {
public:
  
  std::string statement;
  std::vector<std::string> terms;

  Function(std::string& s);

  std::vector<std::string> get_terms(); 
  std::string derivate();
    

};
