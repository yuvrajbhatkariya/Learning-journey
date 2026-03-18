// stl 

//---> Pair :

#include<bits/stdc++.h>        // Master of all libraries
using namespace std;
int main(){


    pair<int, int > p = {1,2};
    cout<<p.first<<" "<<p.second<<endl;
    pair<char , pair<char,char>> v = {'A',{'B','C'}};
    cout<<v.first<<" "<<v.second.first<<" "<<v.second.second<<endl;
    pair<double, double> d[] = {{2.3,4.4},{4.7,6.8},{4.1,8}};
    cout<<d[2].first<<" "<<d[0].second<<endl;
    return 0;
}