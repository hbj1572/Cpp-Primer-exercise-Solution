#include <iostream>//1.9
int main (){
    int sum = 0;
    for (int i = 50; i <= 100; i++){
        sum += i;
        std::cout << sum << std::endl;
    }
    return 0;
}


#include <iostream>//1.10
int main (){
    int n1 = 10;
    for (int i = n1; i >= 0; i--){
        std::cout << n1 << std::endl;
        n1--;
    }
    return 0;
}


#include <iostream>//1.11
int main (){
    int n1 = 0, n2 = 0, n3;
    std::cin >> n1 >> n2;
    for (int i = n2; i >= n1; i--){
        n3 = n2;
        --n2;
        std::cout << n3 << std::endl;
    }
    return 0;
}
