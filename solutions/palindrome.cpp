#include <iostream>
#include <bits/stdc++.h>
#include <math.h>


using namespace std;

typedef long long ll;
typedef vector<int> vi;


ll T;

//g++ -std=c++11 -O2 -Wall

/*
CRUX: Form a palindrome by placing matching chars at start an end of the string.
      If we find a odd count character, we just move it forward by 1 place. 
      The intuition behind this is the no of odd chars or chars with no pair to them is 1. 
      For example, DDD has only 1 D without a pair. So in a valid palindrome, the odd char must be in the middle. 
      If we move it forward at each iteration, it should end up in the middle. 
      Swapped flag is set to true when we have found odd char and moved it forward by 1. If we come back to this step 
      and flag is already set, is proof of more than one odd char. Hence we print NO SOLUTION.
*/

int solve(ll x){
    
    return 0;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /* #ifndef FILE_TEST
        freopen("test_input.txt", "r", stdin);
 
        freopen("test_output.txt", "w", stdout);
    #endif */
    
    string s;

    cin >> s;

    ll startPtr = 0;
    ll endPtr = s.length()-1;
    bool swapped = false;
    while (startPtr<endPtr){
        if (s[startPtr] == s[endPtr]){
            startPtr++;
            endPtr--;
        } else {
            ll swapPos = endPtr;
            while (s[endPtr] != s[startPtr])
            {
                endPtr--;
            }
            if (endPtr <= startPtr){
                if (!swapped){
                    swapped = true;
                    char c = s[startPtr]; 
                    s[startPtr] = s[startPtr+1];
                    s[startPtr + 1] = c;
                    endPtr = swapPos;
                    continue;
                }
                else {
                    cout << "NO SOLUTION";
                    return 0;
                }
            } 
            char c = s[swapPos]; 
            s[swapPos] = s[endPtr];
            s[endPtr] = c;
            swapped = false;
            
            startPtr++;
            endPtr = --swapPos;
        }
    }
    cout << s;

    /* #ifndef DEBUG_FILE
    
        ifstream infile("test_input.txt");
        ifstream my_output("output.txt");
        ifstream correct_ouput("test_output.txt");
        ofstream diff("diff.txt");

        if (!my_output.is_open() || !correct_ouput.is_open()){
            cout << "File not found!" << "\n";
            return -1;
        }

        diff << "LINE NUMBER" << " " << "MY OUTPUT" << " " << "CORRECT OUTPUT" << "\n\n\n";

        string my, their;
        ll TEST_CASES;
        string inputLine;
        infile >> TEST_CASES;
        ll xTests = 0;
        while (xTests < TEST_CASES){
            getline(infile, inputLine);
            my_output >> my;
            correct_ouput >> their;

            if (my != their){
                diff << xTests + 1  << "\n" << inputLine << "\n" << my << " " << their << "\n\n";
            }
            
            xTests++;
        }

        infile.close();
        my_output.close();
        correct_ouput.close();
        diff.close();

    #endif */
    return 0;
}


/*
This is answer that gives correct results but gets TLE
Create a map of frequencies and then build the string from scratch.
Odd count can be obtained during building of map.

string s;

    cin >> s;

    ll N = s.length();
    
    map<char, int> mp;
    int countOdd = 0;
    int diffChars = 0;
    for (ll i =0; i<N; i++){
        auto x = mp.find(s[i]);
        if ( x == mp.end()){
            mp.insert(make_pair(s[i], 1));
            countOdd += 1;
            diffChars += 1;
        } else {
            x->second = x->second + 1;
            if (x->second % 2 == 0){
                countOdd -= 1;
            } else {
                countOdd += 1;
            }
        }
    }

    if (diffChars == 1){
        cout << s;
        return 0;
    }
    
    if (countOdd>1){
        cout << "NO SOLUTION";
        return 0;
    }

    string answer = "";
    char oddChar = NULL;
    int oddCharCount = -1;
    for (auto i=mp.begin(); i!=mp.end(); i++){
        char c = i->first;
        int charCount  = i->second;
        if (i->second % 2 == 0){
            int count = i->second;
            while(count--){
                if(count%2){
                    answer.push_back(c);
                }
                else {
                    answer = c + answer;
                }
            }
            
        } else {
            oddChar = c;
            oddCharCount = charCount;
        }
    }
    if (oddChar != NULL){
        assert(oddCharCount > 0);
        int N = (answer.length())/2;
        if (N==0){
            answer.insert(0,oddCharCount,oddChar);
        } else {
            answer.insert(N, oddCharCount, oddChar);

        }
    }
    cout <<  answer;
*/
