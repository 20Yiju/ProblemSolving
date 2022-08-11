/* 테스트용
#include <cmath>
#include <sstream>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    
    vector <int> digits;
    digits.push_back(9);
    digits.push_back(9);
  
        
//    for(int i = digits.size(); i > 0 ; i--){           // data type 에서 에러 
//        long int digit = pow(10, i-1) * digits[j++];
//        cout << digit << " " << i << endl;
//        result += digit;
//    }

    digits[digits.size() - 1] ++; // +1 부분
    for(int i = digits.size() - 1; i >= 0 ; i--){
        if(digits[i] > 9){
            digits[i] %= 10;
            if(i == 0){
                digits.insert(digits.begin(), 1); //i 가 0이라는 것은 맨앞자리에서 올림이 일어났다는 뜻이므로 push_front
            }
            else{
                digits[i] += 1;
            }
        }
        else{
            break;
        }
    }
        
    for(int i = 0; i < digits.size(); i++){
        cout << digits[i] << endl;
    }


    return 0;
}
*/

// 제출용

#include <cmath>
#include <sstream>

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        digits[digits.size() - 1] ++; // +1 부분
        for(int i = digits.size() - 1; i >= 0 ; i--){
            if(digits[i] > 9){
                digits[i] %= 10;
                if(i == 0){
                    digits.insert(digits.begin(), 1); //i 가 0이라는 것은 맨앞자리에서 올림이 일어났다는 뜻이므로 push_front
                }
                else{
                    digits[i-1]++;
                }
            }
            else{
                break;
            }
        }
        
        return digits;
        
    }
};