#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    vector<int>:: iterator itr = arr.begin();

    for(; itr != arr.end(); itr++) {
        if(*itr % divisor == 0){
            answer.push_back(*itr);
        }
    }
    if (answer.empty()){
        answer.push_back(-1);
    }
    else{
        sort(answer.begin(), answer.end());
    }
    
    return answer;
}