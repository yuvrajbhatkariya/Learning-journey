// #include<iostream>
// using namespace std;
// char max_ch(string s){

//     int arr[26] = {0};

//     for(int i = 0; i<s.length(); i++){
//         char ch = s[i];
//                 int num = 0;
//         num = ch - 'a';
//         arr[num]++;

//     }

//     int maxi = -1, ans = 0;
//     for(int i = 0; i<26;i++){

//         if(maxi<arr[i]){
//             ans = i;
//             maxi = arr[i];

//         }
//     }
//     return 'a' + ans;
// }
// int main(){
//     string s;
//     cin>>s;
//     cout<<max_ch(s);
//     return 0;
// }


// 2.
#include <bits/stdc++.h> 
using namespace std;
// string replaceSpaces(string &str){
// 	// Write your code here.
// 	string s = "";
// 	for(int i = 0; i<str.length() ;i++){
// 		if(str[i] == ' '){
// 			s.push_back('@');
// 			s.push_back('4');
// 			s.push_back('0');
// 		}
// 		else{
// 			s.push_back(str[i]);
// 		}
// 	}
// 	return s;
// }

int main(){
    string str ;
    getline(cin,str);
    cout<<replaceSpaces(str);
    cout<<str;
}

















