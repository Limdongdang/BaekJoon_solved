#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int j = 0; j < n; j++){
        for(int i = 0; i < j + 1; i++){
            cout << "*";
        }
        for(int i = 0; i < 2 * n - 2 * (j + 1); i++){
            cout << " ";
        }
        for(int i = 0; i < j + 1; i++){
            cout << "*";
        }
        cout << "\n";
    }
    for(int j = 1; j < n; j++){
        for(int i = 0; i < n - j; i++){
            cout << "*";
        }
        for(int i = 0; i < 2 * j; i++){
            cout << " ";
        }
        for(int i = 0; i < n - j; i++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}