int beautifulBinaryString(string b)
{
    int result = 0;
    
    for (int i = 0; i < b.size(); ++i)
    {
        if (b.substr(i, 3) == "010")
        {
            result++;
            i += 2;#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'beautifulBinaryString' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING b as parameter.
 */

int beautifulBinaryString(string b)
{
    int result = 0;
    
    for (int i = 0; i < b.size(); ++i)
    {
        if (b.substr(i, 3) == "010")
        {
            result++;
            i += 2;
        }
    }    

    return result;
}

