#include <iostream>
#include <bits/stdc++.h>
#include <math.h>


using namespace std;


long long N;

//g++ -std=c++11 -O2 -Wall


int solve(long long N){
    
    return 0;
}


/*
CRUX: Sum of integers 1....N = (N*(N+1)/2) 
*/


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;

    long long sum = 0;
    long long X;
    for (long long i=0; i<N-1; i++){
        cin >> X;
        sum += X;
    }

    long long csum = (N*(N+1))/2; 

    cout <<  csum - sum;
    
    return 0;
    //solve(N);

}

