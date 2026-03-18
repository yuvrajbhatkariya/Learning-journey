// 1.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x ;
//     cin>>x;
//     int y= 0;
//     while(x != 0){
//         if((y>INT_MAX/10) || (y<INT_MIN/10)){
//             cout<<0;
//             return 0;
//         }
//         y = (y*10) + (x %10);
//         x = x/10;
//     }
//     cout<<y;
//     return 0;
// }

//2.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int m = n;
//     int magic = 0;
//     if(m == 0){
//         return 1;
//     }
//     while (m != 0)
//     {
//         m = m >> 1;
//         magic = (magic << 1) | 1;
//     }
//     cout<<magic<<endl;
//     cout<<~n<<endl;
//     int ans = magic & (~n);
//     cout<<ans;
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<(30/20)*20;


}