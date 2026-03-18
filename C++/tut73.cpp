// MAP : 
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string, float> marks;
    marks["Yuvraj   "] = 88.0 ;
    marks["Tony     "] = 90;
    marks["Friday   "] = 99;

    marks.insert({{"Vednesday", 88}, {"Jarvis   ", 100}});
    map<string , float> :: iterator itr;
    for(itr = marks.begin(); itr != marks.end(); itr++){
        cout<<(*itr).first<<" : "<<(*itr).second<<endl;
    }
    
    cout<<"\nThe size is : "<<marks.size()<<endl;
    cout<<"The max size is : "<<marks.max_size()<<endl;
    cout<<"is this empty : "<<marks.empty()<<endl;        // false , because it is wrong
    return 0;
}