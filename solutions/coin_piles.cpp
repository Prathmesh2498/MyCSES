#include <iostream>
#include <bits/stdc++.h>
#include <math.h>


using namespace std;

typedef long long ll;
typedef vector<int> vi;


ll T;

//g++ -std=c++11 -O2 -Wall


int solve(ll x){
    
    return 0;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef FILE_TEST
        freopen("test_input.txt", "r", stdin);
 
        freopen("test_output.txt", "w", stdout);

    #endif

    cin >> T;
    ll x,y;
    while(T--){
        cin >> x >> y;
        
        if (max(x, y) > 2 * min(x, y)) {
            cout << "NO\n";
            continue;
        }
    
        if ((x + y) % 3 == 0) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    #ifndef DEBUG_FILE
    
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

    #endif

    return 0;
}
