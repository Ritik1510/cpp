#include <iomanip>
#include <ios>
#include <iostream>
using namespace std; 
int main(){
    int num = 50; 
    // display before setting the setw function 
    cout 
        << "Number before using setw function :- " 
        << num 
        << endl; 
    
    // display after using setw function 
    cout 
        << "Number after using setw function :- "
        << setw(10)<< num << endl; 

    string str; 

    // case 1: limit the input using setw() fnc 
    // cin >> setw(6) >> str; 
    cin >> str; 

    // cout << "display string using setw(6) fnc :-" 
        // << str << endl;  

    // case 2: set character limit the output using setw() fnc
    cout << "display the word with character limit in increasing odr using setw() fnc :-"
        << setw(25) << str << endl; 

    cout << "display the word with character limit in decreasing odr using setw() fnc :-"
        << setw(5) << str << endl; 
    return 0; 
}
