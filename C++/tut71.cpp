//  Example of vector : -
#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T> &vec){
    cout<<"Displaying vector :- "<<endl;
    for(int i = 0;i<vec.size();i++){
        cout<<vec[i]<< " ";
    }
    cout<<endl;
    // cout<<"The value of vector at position two is : "<<vec.at(2);    
}
int main(){
    vector<int> V;
    // Differnet way to create vector :-

    vector<int> vec1;           // zero vector
    vector<char> vec2(3);       // 3 elememt vector
    vec2.push_back('5');
    vector<char> vec3(vec2);    // one vector element to other.
    vector<int> vec4(4,13);     // coping a vector
    display(vec1);
    display(vec2);
    display(vec3);
    display(vec4);




    // int element, size;
    // cout<<"Enter the size of vector : ";
    // cin>>size;
    // for(int i = 0; i<size; i++){
    //     cout<<"Enter element : ";
    //     cin>>element;
    //     V.push_back(element);                // here it add elements int vector or add at the end end of vector
    // }
    // display(V);
    // cout<<endl;
    // vector<int> :: iterator itr = V.begin();   // here itrator is act like pointer with the help of these we insert value at any place which we want .
    // V.insert(itr+2, 2,106);                    // her we can copy value and insert.
    // display(V);


    
    return 0;
}