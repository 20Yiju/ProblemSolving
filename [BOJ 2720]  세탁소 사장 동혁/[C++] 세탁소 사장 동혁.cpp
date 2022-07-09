#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int change[4] = {25, 10, 5, 1};
    int N;

    cin >> N;

  
    int input[N];
    for(int i = 0 ; i < N; i++){
        cin >> input[i];
    }


    int j = 0;
    while(N--){
        for(int i = 0; i < 4; i++){
            cout << input[j] / change[i] << " "; 
            input[j] = input[j] % change[i];
        }
        j++;
        cout << endl;
    }

    return 0;
}