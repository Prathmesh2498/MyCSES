#include <iostream>
#include <bits/stdc++.h>
#include <math.h>


using namespace std;

typedef long long ll;
typedef vector<int> vi;


ll T;

//g++ -std=c++11 -O2 -Wall

/*
CRUX: 5*2 is 1 zero.
*/


int solve(ll x){
    
    return 0;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> T;

    ll count = 0;

    for (ll i=5;T/i>=1;i*=5){
        count += T/i;
    } 

    cout << count;

    return 0;
}
