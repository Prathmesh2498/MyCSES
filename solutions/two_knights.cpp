#include <iostream>
#include <bits/stdc++.h>
#include <math.h>


using namespace std;

typedef long long ll;
typedef vector<int> vi;


ll T;

//g++ -std=c++11 -O2 -Wall


int solve(ll x){
    
    return 0;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> T;
    
    cout << 0 << endl;
    for (ll i = 2 ; i <= T ; i++) {
      cout << (i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1)) << endl;
    }
    return 0;
}
