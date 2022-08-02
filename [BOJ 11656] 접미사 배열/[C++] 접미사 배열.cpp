#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]){
    
    string input;
    cin >> input;

    int N = input.length();
    vector<string> arr;

    for(int i = 0; i < N; i++) {
        string suffix = input.substr(i, N);
        arr.push_back(suffix);
    }

    sort(arr.begin(), arr.end());
    
    for(int j = 0; j < arr.size(); j++){
        cout << arr[j] << endl;
    }

    

    return 0;
}