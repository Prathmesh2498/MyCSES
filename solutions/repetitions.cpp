#include <iostream>
#include <bits/stdc++.h>
#include <math.h>


using namespace std;

typedef long long ll;

string N;

//g++ -std=c++11 -O2 -Wall


/*
CRUX: Keep track of the element you are checking for current count.
      Update answer everytime you find a mismatch between char value for current count and char value of curr iteration.
      The last answer update is for the edge case where all letters in sequence are the same or the last substring sequence is the largest.
*/

int solve(string N){
    ll count=1;
    ll answer = 1;
    
    char curr = N[0];
    for (int i=1;i<N.length();i++){
        if (curr == N[i]){
            count++;
        } else {
            curr = N[i];
            answer = max(answer, count);
            count = 1;
        }
    }
    answer = max(answer, count);
    cout << answer;
    
    return 0;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    getline(cin, N);
    solve(N);

    return 0;
}
