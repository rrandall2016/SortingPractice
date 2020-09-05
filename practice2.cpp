#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter a 4 digit number: \n" << endl;
    cin  >> number;

    //convert number into digits
    //4 digits require 4 variables

    int n1,n2,n3,n4,n5;

    n1 = number%10; // remainder of division by ten is one's place
    number /= 10;  // divide by ten, forget old one's place digit 

    n2 = number%10;
    number /= 10;

    n3 = number%10;
    number /= 10;

    n4 = number%10;
    number /= 10;

    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    cout << n4 << endl;

}