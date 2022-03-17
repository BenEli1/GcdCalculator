#include <iostream>
#include "gcdCalculator.cpp"
using namespace std;
#include<windows.h>

int main() {
    long long result=0, a=0, b=0, dec=2;
    cout << "Welcome,\nEnter 1 in order to compute GCD between 2 numbers\nEnter 2 in order to compute LCM \nEnter 0 in order to terminate the program\n"<< endl;
    cin >> dec;
    while (dec == 1||dec==2) {
        try {
            cout << "please enter the first number" << endl;
            scanf("%lld",&a);
            if (a >= LONG_LONG_MAX)
                throw 0;
            if (a < 0)
                throw 0;
            cout << "please enter the second number" << endl;
            scanf("%lld",&b);
            if (b >= LONG_LONG_MAX)
                throw 0;
            if (b < 0)
                throw 0;
        }
        catch(int){
            cout << "Overflow/Underflow Error!\n"<<endl;
            Sleep(500);
            return 0;
        }
        result = GCDCalc(a, b);
        if(dec==1) {
            cout << "\nThe GCD between the 2 numbers is : " << result << endl;
            Sleep(500);
        }
        else{
            cout << "\nThe LCM between the 2 numbers is : " << (a*b)/result << endl;
            Sleep(500);
        }
        cout << "\nEnter 1 - GCD\nEnter 2 - LCM\nEnter 0 - exit" << endl;
        cin >> dec;
    }
    cout << "\nGoodbye!" << endl;
    Sleep(1000);

    return 0;
}
