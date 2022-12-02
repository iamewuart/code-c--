#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number to check value: ";
    cin >> num;

        switch(num)
        {
            case 10 : cout << "Ten"; break;  
            case 20 : cout << "Twenty"; break;
            case 30 : cout << "Thirty"; break;
            default: cout << "None of them"; break;
        }
        return 1;
}
