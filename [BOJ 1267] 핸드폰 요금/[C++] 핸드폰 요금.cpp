#include <iostream>

using namespace std;

int main(){
    
    int N;
    cin >> N;

    int Yresult = 0;
    int Mresult = 0;
    
    int call[N];
    for(int i = 0; i < N; i++){
        cin >> call[i];
    }

   for(int i = 0; i < N; i++){

        int Ycall = call[i];
        int Mcall = call[i];
        

        while(1){
            Yresult += 10;
            if(Ycall < 30){
                break;
            }
            else{
                Ycall -= 30;
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

    if(Yresult < Mresult) {
        cout << "Y " << Yresult;
    }
    else if(Yresult > Mresult) {
        cout << "M " << Mresult;
    }
    else{
        cout << "Y M " << Mresult;
    }

    return 0;
}