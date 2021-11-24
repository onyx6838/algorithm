
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> split(string str, char delimiter)
{
    vector<string> internal;
    stringstream ss(str); // Turn the string into a stream.
    string tok;

    while (getline(ss, tok, delimiter)) {
        internal.push_back(tok);
    }

    return internal;
}

int main(int argc, char** argv)
{
    string myCSV = "A-20:B-15 C-6 D-7";
    vector<string> sep = split(myCSV, ':');

    // If using C++11 (which I recommend)
    /* for(string t : sep)
   *  cout << t << endl;
   */
    vector<string> sub = split(sep[1], ' ');
    for (int i = 0; i < sub.size(); ++i)
        cout << sub[i] << endl;
}

