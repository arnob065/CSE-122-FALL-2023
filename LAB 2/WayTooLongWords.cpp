#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    if(n>=1 && n<=100){
    for(int i=0;i<n;n--)
    {
        cin >> s;
        if (s.length() > 10)
        {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }}
    return 0;
}
