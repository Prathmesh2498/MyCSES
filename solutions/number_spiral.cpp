#include <iostream>
#include <bits/stdc++.h>
#include <math.h>


using namespace std;

typedef long long ll;
typedef vector<int> vi;


ll T;

//g++ -std=c++11 -O2 -Wall


/*
CRUX: Find how to print a N*N spiral grid.
*/

int solve(ll row, ll col){
    ll res = 0;
    if (row == col && row == 1){
        cout << 1 << "\n";
        return 0;
    }
    if (row <= col){
        if (col % 2 == 0){
            res = ((col - 1) * (col - 1)) + row;
        } else {
            res = (col*col) - (row - 1);  
        }
    } else {
        if (row % 2 == 0){
            res = (row * row) - (col - 1);
        } else {
            res = ((row -1) * (row -1)) + col;
        }
    }
    
    cout << res << "\n";
    return 0;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> T;

    ll row, col;

    while(T--){
        cin >> row >> col;
        solve(row, col);
    }

    return 0;
}
