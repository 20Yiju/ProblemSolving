#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool solution(int x) {
    bool answer = true;
    string input;

    stringstream ss;
    ss << x;
    ss >> input;

    int result = 0;
    for(int i = 0; i < input.length(); i++) {
        result += input[i] - '0';
    }
    if(x%result == 0){
        answer = true;
    }
    else{
        answer = false;
    }
    
    return answer;
}