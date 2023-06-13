#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M, target;
    bool found;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> target;
        cout << binary_search(arr.begin(), arr.end(), target) << "\n";
    }
    return 0;
}


