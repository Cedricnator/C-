#include <iostream>
#include <vector>
//* palabra reservada para crear un nombre adicional o alias para otro tipo de datos
//* Ayuda a la legibilidad y reduce tipados
//* usalo cuando hay un real beenficio. Puedes reemplazarlo por 'using'

//typedef std::string text_t;
//typedef int number_t;

using text_t   = std::string;
using number_t = int;

int main(){

   text_t firstName = "Bro";
   number_t age = 21;

   std::cout << firstName << '\n';
   std::cout << age << '\n';

   return 0;
}