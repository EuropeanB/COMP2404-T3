#include<iostream>
//#include "power.cc"

using namespace std;

void power(int, int, int&);

int main(){
    int a, b, c;
    cout << "Please enter two integers:  ";
    cin >> a >> b;
    power(a, b, c);
    cout << a << " to the power " << b << " is " << c << "!" << endl;
    return 0;
}
