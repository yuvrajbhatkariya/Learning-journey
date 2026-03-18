# include <iostream>
# include <iomanip>
using namespace std;
int main(){
    
    // SELECTION CONTROL STRUCTURE:
    
    //       1. else if , if , else:
    
    /*
    cout<<" Hello Buddy ! \n" <<endl;
    cout<< " I am here to help you to suggest you that you can watch anime or not. \n "<<endl;
    int age;
    cout<<" Enter your age : \n ";
    cin>> age;
    if(( age<55) && (age>14)){
       cout<< " You can watch anime. \n ";
       }
      else if ( age == 18){
       cout<< "Why you waiting for ? Go and watch anime. \n ";
      }
      else if (age <1){ 
      cout<< " You are not yet born. \n ";
     }
     else if(( age < 14) and ( age >5)){
      cout << " Go and watch POGO.";
     }
      else {
       cout << " You can not watch anime. \n";
      }
     
     */
     
     //  2. Switch ,case :
     
     int age;
     cout<< "I am here to suggest you which anime you should watch. \n";
     cout << "Tell me your age : \n";
     cin>>age;
     
     switch (age)
     {
         case 18:
         cout<< "I will suggest you to watch ' Naruto' \n";
         break;
         case 19:
         cout << "You can watch 'Susume'. Its a type of love story. \n";
         break;
         
         default:
         cout<<"No special suggestion ";
         break;
     }
    return 0;
}