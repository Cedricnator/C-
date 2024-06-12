
#include <iostream>

namespace first{
   int number1 = 1;
}

namespace second{
   int number2 = 2;
}

int main(){
   using namespace first;
   using namespace second;
   
   std::cout << number1 << '\n';
   std::cout << number2 << '\n';

   return 0;
}