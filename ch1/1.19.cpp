#include <iostream>

int main()
{
    int n1 = 0, n2 = 0, n3;
    std::cin >> n1 >> n2;
    while (n1 <= n2){
        n3 = n2;
        n2--;
        std::cout << n3 << std::endl;
    }
    return 0;
}
