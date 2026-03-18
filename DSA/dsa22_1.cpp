#include <iostream>
using namespace std;

// convert  into lowercase : -
char lower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char tem = ch - 'A' + 'a';
        return tem;
    }
}


// Reverse an string:-
void reverse(char ch[], int count)
{
    int s = 0, e = count - 1;
    while (s < e)
    {
        swap(ch[s++], ch[e--]);
    }
}

// cheking palindrome :-
bool check(char ch[], int l)
{
    int s = 0, e = l - 1;
    while (s <= e)
    {
        if (lower(ch[s++]) != lower(ch[e--]))
        {
            return false;
        }
    }
    return true;
}

int length(char ch[])
{
    int i; // stop when null character is encountered
    for (i = 0; ch[i] != '\0'; i++)
    {
    }
    return i;
}
int main()
{

    // string :-
    char ch[20];
    cin >> ch;
    // ch[4] = '\0';
    int l = length(ch); // give length
    cout << l << endl;

    reverse(ch, l); // reverse
    cout << ch << endl;

    cout << "it is palindrome or not : " << check(ch, l) << endl; // checking palindrome

    string s = "hello";
    int j = s.size();
    cout<<j<<endl;
}