#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// arr 숫자 배열 divisor 은 나누는 수
vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    // 숫자 배열을 처음 부터 끝까지 탐색
    vector<int>:: iterator itr = arr.begin();   
    
    for(; itr != arr.end(); itr++) {
        if(*itr % divisor == 0){    // 나누어 떨어진다면 answer 배열에 저장
            answer.push_back(*itr);
        }
    }
    if (answer.empty()){ // 나누어 떨어지는 수가 하나도 없어 answer 배열이 비어있다면 배열에 -1 저장
        answer.push_back(-1);
    }
    else{ // 비어있지 않다면 배열의 값들을 오름차순 정렬
        sort(answer.begin(), answer.end());
    }
    
    return answer;
}
