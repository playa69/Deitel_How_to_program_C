#include <iostream>
#include <string>

using namespace std;

int f(char low, char mid, char hi, int p, const string &s, unsigned &i);

int main()
{
    string s("MMCDXXI");
    // string s("MCM");
    //string s("M");

    getline(cin,s);

    //cout << s << endl;

    int x = 0;

    unsigned i = 0;

    x += f('M', '!', '!', 1000, s, i);
    x += f('C', 'D', 'M', 100, s, i);
    x += f('X', 'L', 'C', 10, s, i);
    x += f('I', 'V', 'X', 1, s, i);

    cout << x << endl;

    return 0;
}


int f(char low, char mid, char hi, int p,
          const string &s, unsigned &i) {

    int x = 0;

    if (s.size()>i+1 and s[i] == low and s[i+1] == mid){
        x+=4*p;
        i += 2;
    } else if (s.size()>i+1 and s[i]== low and s[i+1] == hi){
        x+=9*p;
        i += 2;
    } else while (s.size() > i and
                  (s[i]==low or s[i]==mid)){
        if (s[i] == low)
            x += p;
        else
            x += 5 * p;
        i++;
    }

    return x;
}
