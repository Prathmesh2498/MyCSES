#include <iostream>
#include <bits/stdc++.h>
#include <math.h>


using namespace std;

typedef long long ll;
typedef vector<int> vi;


ll N;

//g++ -std=c++11 -O2 -Wall

/*
CRUX: For N>3 print even first then odd, be definition diff between any i,j (i<j) is not 1.
      Even -> Odd order will not require the ugly N==4 special case.
*/

int solve(ll N){
    if (N == 1){
        cout << 1;
        return 0;
    }
    if (N==2 || N==3){
        cout << "NO SOLUTION";
        return 0;
    }
    if (N==4){//Ugly :/
        cout << "2 4 1 3";
        return 0;
    }

    for(ll i=1; i<N+1; i=i+2){
        cout << i << " ";
    }

    for(ll i=2; i<N+1; i=i+2){
        cout << i << " ";
    }

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
