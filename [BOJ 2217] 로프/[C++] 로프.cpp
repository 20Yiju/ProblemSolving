#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char* argv[]){
    
    int N;
    cin >> N;
    vector <int> input;
    vector <int> result;

    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        input.push_back(a);
    }
    sort(input.rbegin(), input.rend()); // 내림차순 정렬

    for(int j = 0; j < N; j++){
        int b = input[j] * (j+1); // 연결된 로프의 갯수에 따른 최대 중량
        result.push_back(b);
    }

    int max = *max_element(result.begin(), result.end());

    cout << max;


    return 0;
}
