#include <iostream>
#include <bits/stdc++.h>
#include <math.h>


using namespace std;


long long N;

//g++ -std=c++11 -O2 -Wall

/*
CRUX:
X * 2 = 1 bit shift left
X / 2 = 1 bit shift right
X * 3 = shift left 1 bit and then add X

Use long long, int will not cut it!
*/

int solve(long long N){
    const long long ONE = 1;
    while(N!=ONE){
        cout << N << " ";

        if (N % 2 == 0){
            N = N >> 1;
        } else {
            N = (N << 1) + N;
            N++;
        }

    }
    
    cout << N;
    return 0;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;
    solve(N);

    return 0;
}
