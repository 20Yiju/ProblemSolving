#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int num;
    cin >> num;
    
    vector<int> tree;

    for(int i = 0; i < num; i++){
        int x;
        cin >> x;
        tree.push_back(x);
    }

    sort(tree.rbegin(), tree.rend()); // 내림차순 정렬
    int maxday = 0;

    for(int j = 0; j < num; j++){        
                                           // 2 : 묘목을 심는데 걸리는 날짜 + 다음날 이장님 초대
        maxday = max(maxday, tree[j]+2+j); // tree[j]+2+j : 나무가 자라는데 걸리는 시간 + 2 + 심은 날짜
        // j 가 0 부터 시작하는 이유: 첫번째 묘목은 그 날에 심을 수 있으닌깐 기다리지 않아도 되닌깐 
    }


    cout << maxday;

    

    return 0; 
}
