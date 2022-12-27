#include <iostream>
#include <bits/stdc++.h>
#include <math.h>


using namespace std;

typedef long long ll;
typedef vector<int> vi;


ll T;

//g++ -std=c++11 -O2 -Wall

/*
CRUX: return (2^N)%(10^9 + 7) in C++ esque way.
*/

int solve(ll x){
    
    return 0;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> T;
 
    const unsigned int mod = 1e9 + 7;


    ll answer = 2;
    while(T>1){
        answer = (answer * 2) % mod;
        T--;
    }
    cout << answer % mod;

    return 0;
}
