#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int cal(int A, int B);

int main(int argc, char* argv[]){
    
    int N;
    cin >> N;
    vector <int> result;

    while(N--){
        int a, b;
        cin >> a >> b;
        int ans = cal(a, b);
        result.push_back(ans);
    }

    for(int j = 0; j < result.size(); j++){
        cout << result[j] << endl;
    }

    return 0;
}

int cal(int a, int b) {
    
    /* 시간 초과
    for(int i = max(A, B); i <= A * B; i++){
        if(i % A == 0 && i % B == 0){
            ans = i;
            break;
        }
    }
    return ans;*/

    int ans = 0;
    int A = a;
    int B = b;

    while(B != 0){ // 최대 공약수를 구하는 코드 (유클리드 호제법)
        ans = A % B;
        A = B;
        B = ans;
        
    }
     return a * b / A; // 최소 공배수는 두 수를 곱한 값을 최대 공약수로 나눔

}