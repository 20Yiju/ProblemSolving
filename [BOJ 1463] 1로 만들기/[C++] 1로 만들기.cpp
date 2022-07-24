#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int num;
    cin >> num;
    
    int result[10000000] = {0};

    result[0] = 0;
    result[1] = 0;
    
    for(int i = 2; i < num+1; i++){

        result[i] = result[i-1] + 1; // 1을 빼는 경우

        if(i % 3 == 0){ // 3으로 나누어 떨어지는 경우
            result[i] = min(result[i/3]+1, result[i]); // 3으로 나누어 떨어졌을 경우와  1을 빼는 경우의 최솟값
        }

        if(i % 2 == 0){ // 2로 나누어 떨어지는 경우
            result[i] = min(result[i/2]+1, result[i]); // 2로 나누어 떨어졌을 경우와  1을 빼는 경우의 최솟값 (3으로 나누어졌었던 경우;  2로 나누어 떨어졌을 경우와  3으로 나누어 떨어졌을 경우의 최솟값 )
        }

        

    }

    cout << result[num];
    

    return 0;  // return 1 시, runtime error (NZEC)
}
