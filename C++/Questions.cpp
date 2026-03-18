// Question : -

// #1.  two dimensional array: -
/*
#include <iostream>
using namespace std;
int main()
{
    int T,i, j;
    float x;
    cin >> T;
    float A[T][3];
    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < T; i++)
    {
        x = (A[i][0] + A[i][1]) / 2;
        if (x > A[i][2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
*/

// 2. Finding a prime number :-
/*
#include <iostream>
using namespace std;
int main()
{
    int T, N;
    int count;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        count = 0;
        cin >> N;
        for (int j = 2; j <= N - 1; j++)
        {
            if ((N % j == 0))
            {
                count++;
                cout << "no" << endl;
                break;
            }
        }
        if ((N == 1) || (N == 0))
        {
            count++;
            cout << "no" << endl;
        }
        else if (count == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
        }
    }
    return 0;
}
*/




// 3. finding a ,b,c in matrix
/*
#include <iostream>
using namespace std;
int main()
{
    int T, i, j, a, b;
    cin >> T;
    char A[3][3];
    for (int k = 0; k < T; k++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> A[i][j];
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (A[i][j] == '?')
                {
                    a = i;
                    b = j;
                }
                else
                {
                }
            }
        }
        // cout << a << " " << b << endl;
        if (A[a][0] == '?')
        {
            if (A[a][1] != 'A' && A[a][2] != 'A')
            {
                cout << 'A' << endl;
            }
            else if (A[a][1] != 'B' && A[a][2] != 'B')
            {
                cout << 'B' << endl;
            }
            else
            {
                cout << 'C' << endl;
            }
        }
        else if (A[a][1] == '?')
        {
            if (A[a][0] != 'A' && A[a][2] != 'A')
            {
                cout << 'A' << endl;
            }
            else if (A[a][0] != 'B' && A[a][2] != 'B')
            {
                cout << 'B' << endl;
            }
            else
            {
                cout << 'C' << endl;
            }
        }

        else
        {
            if (A[a][0] != 'A' && A[a][1] != 'A')
            {
                cout << 'A' << endl;
            }
            else if (A[a][0] != 'B' && A[a][1] != 'B')
            {
                cout << 'B' << endl;
            }
            else
            {
                cout << 'C' << endl;
            }
        }
    }
    return 0;
}
*/