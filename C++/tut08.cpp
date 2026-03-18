# include <iostream>
# include <iomanip>
using namespace std;
int main(){
    /*
    int a=7, b=4, c=6;
    cout << " The value of a was " <<a<< endl;
    cout << " The value of b was " <<b<< endl;
    cout << " The value of c was " <<c<< endl;
    a = 1,b= 5,c = 9;
    cout<<" The value of a is "<<a<<endl;
    cout<<" The value of b is "<<b<<endl;
    cout<<" The value of c is "<<c<<endl;
    */
    
    // constant --> it gives an error because value is constant 
    /*
     const int a = 7;
    cout << " The value of a was " <<a<< endl;
     a = 5 ; 
     cout<<" The value of a is "<<a<<endl;
     */
     
     // Manipulator in c++
     
    int a= 596, b= 7989, c = 39333, d=77777, e =999999;
    cout<<" The value of a without setw is "<<a<<endl;
    cout<<" The value of b without setw is "<<b<<endl;
    cout<<" The value of c without setw is "<<c<<endl<<endl;
    cout<<" The value of a is "<<setw(5)<<a<<endl;
    cout<<" The value of b is "<<setw(5)<<b<<endl;
    cout<<" The value of c is "<<setw(5)<<c<<endl;
    
    
    // Operator presendence
    // => Go to web site (c++ Refrence )--> 'https://en.cppreference.com/w/cpp/language/operator_precedence'
    
    // int a, b,c;
    // cout<<" Enter the value of a \n ";
    // cin>>a;
    // cout<<" Enter the value of b \n ";
    // cin>>b;
    // cout<<" Enter the value of c \n ";
    // cin>>c;
    // cout<<endl;
    // int x = (a*5)+b;
    // cout<<" The value of (a*5+b) expresion is "<<x<<endl<<endl;
    // int y = a*a +b*b +2*a*b;
    // cout<<" The value of {a^2+ b^2 + 2*a*b} is "<<y<<endl;
    return 0;
}