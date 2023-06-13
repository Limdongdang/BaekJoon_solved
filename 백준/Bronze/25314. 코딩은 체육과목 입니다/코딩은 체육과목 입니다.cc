#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    short count;
    cin >> count;
    
    
    for (int i = 0; i < count / 4; i++)
    {
        cout << "long ";
    }
    
    cout << "int" << endl;

    return 0;
}


 