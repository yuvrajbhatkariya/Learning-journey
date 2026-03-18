#include <iostream>
using namespace std;
class Solution
{
private:
	bool valid(char ch)
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	char lower(char ch)
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
		{
			return ch;
		}
		else
		{
			int t = ch - 'A' + 'a';
			return t;
		}
	}

	bool palindrome(string str)
	{
		int s = 0, e = str.length() - 1;
		while (s < e)
		{
			if (str[s++] != str[e--])
			{
				return false;
			}
		}
		return true;
	}

public:
	bool isPalindrome(string s)
	{

		string News = "";
		for (int i = 0; i < s.length(); i++)
		{
			if (valid(s[i]))
			{
				News.push_back(s[i]);
			}
		}
		for (int i = 0; i < News.length(); i++)
		{
			News[i] = lower(News[i]);
		}

		return palindrome(News);
	}
};

int main()
{

	return 0;
}