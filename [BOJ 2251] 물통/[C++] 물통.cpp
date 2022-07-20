#include<iostream>
#include<queue>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> solution(int a, int b, int c);

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    vector<int> result = solution(A, B, C);

    sort(result.begin(), result.end()); // 오름차순 정렬

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;   
}

vector<int> solution(int a, int b, int c){
    
    queue <pair<pair<int, int>, int> > Q; // A B C
    Q.push(make_pair(make_pair(0, 0), c)); // A B 는 빈통으로 시작
    
    vector<int> result; // C에 담겨있는 물의 양을 담을 변수
    bool visit[201][201][201] = {false}; // 이미 거쳐간 것인지 아닌지 판단

    while(!Q.empty()) {
        int curr_a = Q.front().first.first; // A
        int curr_b = Q.front().first.second; // B
        int curr_c = Q.front().second; // C

        Q.pop(); //queue 의 맨위의 값 꺼내서 변수에 저장하였으니 pop

        if(visit[curr_a][curr_b][curr_c]){
            continue;
        }

        visit[curr_a][curr_b][curr_c] = true;

        if(curr_a == 0){ // a 물통이 비어있을 때 c 물통의 값 저장
            result.push_back(curr_c); 
        }

        // a 에서 b 로 물 이동
        if(curr_a + curr_b > b){ // 넘치는지 안넘치는지  확인
            Q.push(make_pair(make_pair(curr_a + curr_b - b, b), curr_c)); // b에 가득 찰 만큼만 옮기기
        }
        else{
            Q.push(make_pair(make_pair(0, curr_a + curr_b), curr_c)); // 안넘치면 a에 있는 걸 b에 다 옮기기
        }

        // a 에서 c 로 물 이동
        if(curr_a + curr_c > c){ // 넘치는지 안넘치는지  확인
            Q.push(make_pair(make_pair(curr_a + curr_c - c, curr_b), c)); // c에 가득 찰 만큼만 옮기기
        }
        else{
            Q.push(make_pair(make_pair(0, curr_b), curr_c + curr_a)); // 안넘치면 a에 있는 걸 b에 다 옮기기
        }

        // b 에서 a 로 물 이동
        if(curr_b + curr_a > a){ // 넘치는지 안넘치는지  확인
            Q.push(make_pair(make_pair(a, curr_b + curr_a - a), curr_c)); // b에 가득 찰 만큼만 옮기기
        }
        else{
            Q.push(make_pair(make_pair(curr_b + curr_a, 0), curr_c)); // 안넘치면 a에 있는 걸 b에 다 옮기기
        }

        // b 에서 c 로 물 이동
        if(curr_b + curr_a > c){ // 넘치는지 안넘치는지  확인
            Q.push(make_pair(make_pair(curr_a, curr_b + curr_c - c), c)); // b에 가득 찰 만큼만 옮기기
        }
        else{
            Q.push(make_pair(make_pair(curr_a, 0), curr_b + curr_c)); // 안넘치면 a에 있는 걸 b에 다 옮기기
        }

        // c 에서 a 로 물 이동
        if(curr_c + curr_a > a){ // 넘치는지 안넘치는지  확인
            Q.push(make_pair(make_pair(a, curr_b), curr_c + curr_a - a)); // b에 가득 찰 만큼만 옮기기
        }
        else{
            Q.push(make_pair(make_pair(curr_c + curr_a, curr_b), 0)); // 안넘치면 a에 있는 걸 b에 다 옮기기
        }

        // c 에서 b 로 물 이동
        if(curr_c + curr_b > b){ // 넘치는지 안넘치는지  확인
            Q.push(make_pair(make_pair(curr_a, b), curr_c + curr_b - b)); // b에 가득 찰 만큼만 옮기기
        }
        else{
            Q.push(make_pair(make_pair(curr_a, curr_c + curr_b), 0)); // 안넘치면 a에 있는 걸 b에 다 옮기기
        }

        
    }
    return result;
}
