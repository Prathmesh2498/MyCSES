#include <iostream>
#include <bits/stdc++.h>
#include <math.h>


using namespace std;


long long N;

//g++ -std=c++11 -O2 -Wall


int solve(long long N){
    
    return 0;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;

    long long sum = 0;
    long long X;
    for (long long i=0; i<N; i++){
        cin >> X;
        sum += X;
    }

    return (N*(N-1))/2 - sum;
    
    //solve(N);

}

