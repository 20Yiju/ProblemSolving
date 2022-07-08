#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char* argv[]){
    
    string input;

    cin >> input;

    char c;

    for(int i = 0 ; i < input.length(); i++){
        char a = input[i];
        int ati = int(a);
        
        if (ati <= 67 && ati >= 65){                 // A B C
            c = ati + 23;
        }
        else{                           // D ~ Z
            c =  ati - 3;
        }

        cout << c;
    }

    return 0;
}