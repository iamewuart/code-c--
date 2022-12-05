#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int i, j;
    
 
    for(i =  1; i <= 91; i += 10){
        for(j = i; j <= i+9; j += 1){
            cout<< setw(4) << j;
        }
        cout<< endl;
    }                                                                                                                                                                                                                                                                                          
    return 0;
}
