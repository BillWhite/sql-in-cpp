#include "sql-in-cpp/sql-in-cpp.hpp"
#include <iostream>

int main(){
  int result = sqlincpp::add_one(1);
  std::cout << "1 + 1 = " << result << std::endl;
}