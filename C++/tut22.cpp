//***********/NESTING OF MEMBER FUNCTION/**************
#include <iostream>
#include <string>
using namespace std;
class binary
{
    private:                // here we write private or not, this part is private part it not call by main function 
    string s;
    void check(void);      // if we write this in private part than it can not call by main function

public:
    void read(void);
    // void check(void);
    void once_Compliment(void);
    void display(void);
};
void binary ::read()
{
    cout << "Enter a binary number : " << endl;
    cin >> s;
}
void binary :: check(){
    for(int i=0 ; i<s.length(); i++){
        if (s.at(i) != '0' && s.at(i) != '1'){
            cout<<"It is not a binary number."<<endl;
            exit(0);
        }
    }
}
void binary :: once_Compliment(){
    check();                                            // If we write this hear is automatically call when ones compliment is call
    cout<<"Its 1's compliment is : "<<endl;
    for(int i= 0;i<s.length();i++){
        if(s.at(i) == '0'){
            cout<<(s.at(i) = '1');
        }
        else {
            cout<<(s.at(i) ='0');  
        }
    }
}
void binary :: display(){
    cout<<"Displaying binary number : "<<endl;
    for (int  i = 0; i < s.length(); i++){
        cout<<s.at(i);
    }
}
int main()
{
    binary B;
    B.read();
    // B.check();      // This give an error if function is in private part  
    cout<<"It is binary number"<<endl;
    B.display();
    cout<<endl;
    B.once_Compliment();
    cout<<endl;
    B.display();
    return 0;
}
