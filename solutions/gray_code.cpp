#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

ll N;

// g++ -std=c++11 -O2 -Wall

/*
CRUX: Start with 01, add its reverse to itself. 0110 and then add opposite string to the current string. repeat N times.
      Useful GIF here: https://japlslounge.com/posts/cses/gray_code/1.htm
*/

int solve(ll x)
{

    return 0;
}

ll powCust(ll x, ll y)
{
    int bg = 1;
    while (y--)
    {
        bg = bg * x;
    }
    return bg;
}

void showOutput(vector<bool> v)
{
    for (auto x : v)
    {
        cout << x;
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /* #ifndef FILE_TEST
        freopen("test_input.txt", "r", stdin);

        freopen("test_output.txt", "w", stdout);

    #endif */

    int n;
    cin >> n;
    vector<string> gray_code;
    gray_code.push_back("");
    for (int i = 0; i < n; i++)
    {
        int size = gray_code.size();
        for (int j = size - 1; j >= 0; j--)
        {
            gray_code.push_back(gray_code[j]);
        }
        size *= 2;
        for (int j = 0; j < size; j++)
        {
            if (j < gray_code.size() / 2)
            {
                gray_code[j] += "0";
            }
            else
            {
                gray_code[j] += "1";
            }
        }
    }
    for (int i = 0; i < gray_code.size(); i++)
    {
        cout << gray_code[i] << endl;
    }

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
