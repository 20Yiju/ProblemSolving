#include<iostream>
#include<algorithm>
#include <cmath>
using namespace std;


int main(){
    int num, mood;
    cin >> num >> mood;
    
    double gg, gb, bg, bb;
    cin >> gg >> gb >> bg >> bb;

    double gpercent, bpercent;

    if(mood == 0) {
        gpercent = gg;
        bpercent = gb;
    }
    else{
        gpercent = bg;
        bpercent = bb;
    }

    for(int i = 0; i < num-1; i++){
        double g = gpercent;
        double b = bpercent;

        gpercent = (g * gg) + (b * bg);
        bpercent = (g * gb) + (b * bb);
    }
    
    cout << round(gpercent * 1000) << endl;
    cout << round(bpercent * 1000) << endl;
    return 0;  
}