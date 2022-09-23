#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define spc ' '
#define all(x) x.begin(), x.end()
#define allR(x) x.rbegin(), x.rend()
#define vi(x) vector<x>
#define pii(x, y) pair<x, y>
#define F first
#define S second
#define ll long long
#define pb(x) push_back(x)

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int i, j, cnt = 0, Max;
    cin >> i >> j;

    for (; i <= j; i++){
        int n = i;
        while (n != 1){
            if (n % 2 == 0)
                n /= 2;
            else    
                n = 3 * n + 1;
            cnt++;
        }

        Max = max(cnt, Max);
        cnt = 0;
    }

    cout << i - j << spc << j << spc << Max + 1;
}
