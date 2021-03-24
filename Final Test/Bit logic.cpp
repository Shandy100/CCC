//C++14
//Bit Logic
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'maxXor' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER lo
 *  2. INTEGER hi
 *  3. INTEGER k
 */

int maxXor(int lo, int hi, int k) 
{
    int s,max=0,i,j;
    for(i=lo;i<=hi;i++)
    {
        for(j=lo;j<=hi;j++)
        {
            s=i^j;
            if(max<s&&s<=k)
            max=s;
        }
    }
    return max;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string lo_temp;
    getline(cin, lo_temp);

    int lo = stoi(ltrim(rtrim(lo_temp)));

    string hi_temp;
    getline(cin, hi_temp);

    int hi = stoi(ltrim(rtrim(hi_temp)));

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    int result = maxXor(lo, hi, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}