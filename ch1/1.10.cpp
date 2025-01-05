#include <iostream>
int main (){
   int n1 = 10, n2;
   while (n1 >= 0){
    n2 = n1--;
    std::cout << n2 << std::endl;
   }
   return 0;
}
