#include <iostream>
#include <string>
#include <array>
    int main(){
      std::string text;
      std::getline(std::cin,text);
      int k;
      std::cin»k;
      text.erase(k-1,1);
      std::cout«text;
      return 0;
    }
