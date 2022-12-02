#include <iostream>
using namespace std;

int main (){
    int num ;
    cout << "Enter the grade need checking: ";
    cin >> num;
    
    if (num < 0 || 100 < num)
    {
        cout << "The wrong number";

    }
    else if (0 <= num && num < 50)
    {
        cout << "Fail !!!";
    }
    else if (50 <= num && num < 60)
    {
        cout << "D grade";
    
    }
    else if (60 <= num && num < 70)
    {
        cout << "C grade";
    }
    else if (70 <= num && num < 80)
    {
        cout << "B grade";
    }
    else if (80 <= num && num < 90)
    {
        cout << "A grade";
    }
    else 
    {
        cout << "A+ grade";
    }
    return 0;
}