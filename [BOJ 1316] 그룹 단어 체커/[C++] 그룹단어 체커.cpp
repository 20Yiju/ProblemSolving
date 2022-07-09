#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int N;
    cin >> N;
    int result = 0;

    while(N--){
        string input;
        cin >> input;
        int len = input.length();
        bool isGroup = true;
    

        for(int i = 0; i < len; i++){
            if(input[i] != input[i+1]){
                for(int j = i+1 ; j < len; j++){
                    if(input[i] == input[j]){
                        isGroup = false;
                        break;
                    }
                }
            }
        }
        if(isGroup){
            result++;
        }

    }
    cout << result;

    return 0;
}