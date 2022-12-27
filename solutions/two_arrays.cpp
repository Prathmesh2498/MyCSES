#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

ll T;

// g++ -std=c++11 -O2 -Wall

/*
CRUX: 1. N or N+1 should be divisible by 4. Since sum of first N ints is S = ((N)(N+1))/2 and we have to 
         divide S in 2 equal halves.
      2. If N is even, divide in two sets such that each pair sums to N+1, if N is odd, divide in two sets such that
         each pair is N-1 and add N to the set with 1 less pair.
         Eg: 1 2 3 4 5 6 7 8
             Add pairs (1,8), (2,7)... alternatively to two sets

             1 2 3 4 5 6 7
             Add pairs (1,6), (2,5)... alternatively to two sets and add 7 to the set with 1 less pair.
              
*/

void printVec(vector<int> v){
    cout << v.size() << "\n";

    for (auto const& x: v){
        cout << x << " ";
    }
    cout << "\n";
}

int solve(ll x)
{

    if (x%4!=0 && (x+1)%4!=0)
    {
        cout << "NO";
        return 0;
    }

    vi v1;
    vi v2;
    int limit = x/2;
    bool isEvenX = x%2==0;

    for (ll i = 1; i <= limit; i++){
        if (i%2==0){
            v2.push_back(i);
            if (isEvenX) {
                v2.push_back(x);
                x--;
            } else {
                v2.push_back(x-i);
            }
            
        } else {
            v1.push_back(i);
            if (isEvenX){
                v1.push_back(x);
                x--;
            } else {
                v1.push_back(x-i);
            }
        }
    }

    if(!isEvenX){
        (v1.size() > v2.size() ? v2.push_back(x) : v1.push_back(x));
    }

    cout << "YES" << "\n";
    printVec(v1);
    printVec(v2);
    

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;

    solve(T);

    return 0;
}
