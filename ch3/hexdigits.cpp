#include <iostream>
#include <string>
using std::string;
using namespace std;
int main(){
    const string hexdigits = "0123456789ABCEDF";
    cout << "Enter a series of numbers between 0 and 15"
         << "separated by spaces. Hit ENTER when finished: "
         << endl;
    string result;
    string::size_type n;
    while (cin >> n)
        if (n < hexdigits.size())
            result += hexdigits[n];
    cout << "Your hex number is: " << result << endl;
    return 0;
}
