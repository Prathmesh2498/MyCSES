#include <iostream>
#include <bits/stdc++.h>
#include <math.h>


using namespace std;

typedef long long ll;
typedef vector<int> vi;


ll N;

//g++ -std=c++11 -O2 -Wall

/*
CRUX: To make the array non-strictly increasing (e[i] == elem[i-1] allowed), 
      for every elem[i] < elem[i-1], no of incr req are abs(elem[i]-elem[i-1])
*/

int solve(vi v){
    const ll vsize = v.size();

    ll moves = 0;
    ll curr = v[0];
    
    for (ll i = 1; i< vsize; i++){
        if (v[i] < curr){
            moves += abs(v[i] - curr);
            v[i] = curr;
        }
        curr = v[i];
    }
    
    cout << moves;
    
    return 0;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vi v;
    ll x;
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> x; 
        v.push_back(x);
    }

    solve(v);

    return 0;
}
