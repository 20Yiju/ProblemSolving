#include <iostream>

using namespace std;

int main(){
    
    int N;
    cin >> N;
    
    int Yresult = 0;  // 영식 결과
    int Mresult = 0;  // 민식 결과
    
    int call[N]; // 통화 내역 저장 배열
    for(int i = 0; i < N; i++){
        cin >> call[i];
    }

   for(int i = 0; i < N; i++){

        int Ycall = call[i]; 
        int Mcall = call[i];
        

        while(1){
            Yresult += 10; // 일단 반복문이 돌아간다는 뜻은 요금이 추가되어야한다는 뜻이므로 요금 부과
            if(Ycall < 30){ // 30 보다 작은상태라면 위에서 요금이 추가된 이후에 더 이상 요금 부과가 없어도 되므로 반복문 종료
                break;
            }
            else{
                Ycall -= 30; // 30보다 큰 상태라면 요금 부과가 30 단위이므로 빼기를 해줌
            }
            
        }
        while(1){
            Mresult += 15;
            if(Mcall < 60){
                break;
            }
            else{
                Mcall -= 60;
            }
        }
    }

    if(Yresult < Mresult) { // 민식이의 요금이 더 많다면 영식이 결과 보여주기
        cout << "Y " << Yresult;
    }
    else if(Yresult > Mresult) {  // 영식이의 요금이 더 많다면 민식이 결과 보여주기
        cout << "M " << Mresult;
    }
    else{  // 영식, 민식이의 결과가 같다면 Y M 둘 다 출력
        cout << "Y M " << Mresult; 
    }

    return 0;
}
