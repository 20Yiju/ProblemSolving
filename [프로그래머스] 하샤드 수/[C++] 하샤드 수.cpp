#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool solution(int x) {
    bool answer = true;
    string input;

    // 각 문자를 string을 변환하여 하나씩 접근 하고자
    stringstream ss;
    ss << x;
    ss >> input;

    // 각 자리 수의 합 구하기
    int result = 0;
    for(int i = 0; i < input.length(); i++) {
        result += input[i] - '0';
    }
    
    // 나누어 떨어진 다면 true 아니면 false
    if(x%result == 0){
        answer = true;
    }
    else{
        answer = false;
    }
    
    return answer;
}
