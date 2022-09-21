#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,als[3],bcount;
    for(int j = 0; j < 3; j++){
        bcount = 0;
        for(int i = 0; i < 4; i++){
            cin >> a;
            if(a == 0){
                bcount++;
            }
        }
        als[j] = bcount;
    }
    for(int i = 0; i < 3; i++){
        if(als[i] == 0){
            cout << 'E';
        }else if(als[i] == 1){
            cout << 'A';
        }else if(als[i] == 2){
            cout << 'B';
        }else if(als[i] == 3){
            cout << "C";
        }else{
            cout << "D";
        }
        cout << "\n";
    }
    return 0;
}