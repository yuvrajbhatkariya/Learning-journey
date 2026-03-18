//  Move zero :-
#include <iostream>
#include <vector>
// void moveZerosToLeft(int *arr, int n)
// {
//     int i = n-1;
//     for(int j = n-1;j>=0; j--){
//         if(arr[j] != 0){
//             int temp = arr[j];
//             arr[j] = arr[i];
//             arr[i] = temp;
//             i--;
//         }
//     }
// }
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    // nums1.at[2] =
    int i = 0, j = 0;
    while ((nums1[i] != 0) && (j < n))
    {
        if (nums1[i] > nums2[j])
        {
            nums1.insert(nums1.begin() + i, nums2[j]);
            j++;
            nums1.pop_back();
        }
        i++;
    }
    while (j < n)
    {
        nums1.insert(nums1.begin() + i, nums2[j]);
        nums1.pop_back();
        j++;
        i++;
    }
}
int main()
{
    int m = 3, n = 3;
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    // moveZerosToLeft(arr, n);
    merge(nums1, m, nums2, n);
    // nums1.pop_back();
    for (int i = 0; i <nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }

    return 0;
}