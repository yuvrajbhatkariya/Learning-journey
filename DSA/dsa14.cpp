class Solution
{
public:
    int mySqrt(int x)
    {
        int s = 0, e = x;
        int mid = s + (x - s) / 2;
        int ans = mid * mid;
        while (s <= e)
        {
            if (ans == x)
            {
                return mid;
            }
            else if (ans > x)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (x - s) / 2;
        }
    }
};