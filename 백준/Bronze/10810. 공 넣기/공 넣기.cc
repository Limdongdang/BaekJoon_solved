#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    short n, m;
    int i,j,k;
    cin >> n >> m;
    vector<int> arr(n, 0);
    
    for (int z = 0; z < m; z++)
    {
        cin >> i >> j >> k;
        for (int x = i-1; x < j; x++)
        {
            arr[x] = k;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}


 