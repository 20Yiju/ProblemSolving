#include<iostream>
#include <cmath>
using namespace std;


int main(){
    int num;
    cin >> num;

    double result[num];
    int j = 0;

    for(int i = 0; i < num; i++){
        int student;
        cin >> student;

        int score[student];

        for(int i = 0; i < student; i++){
            cin >> score[i];
        }

        int sum = 0;
        for(int j = 0; j < student; j++){
            sum += score[j];
        }

        double avg = sum / student;
        int over = 0;
        for(int k = 0 ; k < student; k++){
            if(avg < score[k]){
                over++;
            }
        }
        

        result[j++] = ((double)over / (double)student) * 100;

    }
    
    for(int k = 0; k < num; k++){
         printf("%.3f%%\n", (float)result[k]);
    }
    

    return 0;  // return 1 시, runtime error (NZEC)
}
