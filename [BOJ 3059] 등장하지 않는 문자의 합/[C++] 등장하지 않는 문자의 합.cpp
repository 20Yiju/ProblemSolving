#include<iostream>
#include<string>
using namespace std;


int main(){

    int num;
    cin >> num;

    for(int i = 0; i < num; i++){
        string input;
        cin >> input;

        int result[26] = {0};

        for(int j = 0; j < input.length(); j++){
            int n = input[j] - 'A';
            result[n] = 1;            
        }
        
        int total = 0;

        for(int k = 0; k < 26; k++){
            if(result[k] == 0){
                total += k + 'A';
            }         
        }

        cout << total << endl;

    }
    
    
    

    return 0;  
}
