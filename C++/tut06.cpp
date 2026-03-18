// HEADER FILES and OPERATOR :
/*Header files :-
  They are of two types
  1. System defined header file - it comes with compiler . eg */
  #  include <iostream>
  /*2. User defined header file - it is written by the programmmer.eg */
  // # include " this.h " --> This will show an  error if 'this.h'' will not be in current directory'
  using namespace std ;
  int main(){
      cout<<" Hello Ryuk"<<endl;
      cout<<endl;
      
/* Operators :-
Folloing are the type of operator in c++
 
 1. Arithmetic operator - */
 //double a = 6 , b = 9 ;
 double a , b ;
 cout<< " Please ,"<<endl;
 
 cout << " Enter the value of a "<< endl;
 cin>> a;
 cout << " Enter the value of b "<< endl;
 cin>> b;
 double c;
// cout<<" If a = 6 , b = 9 and for c " <<endl;
 cout<<" Enter the value of 'c' " <<endl;
 cin >>    c ;
 cout<<" Than, " <<endl;
 cout<< " The value of a + b + c is " <<a +b + c<< endl;
 cout <<" The value of a - b - c is " <<a-b-c<<endl;
  cout <<" The value of a * b * c is " <<a*b*c<<endl;
  cout <<" The value of b / c is " <<b/c<<endl;
 cout <<" The value of a / c is " <<a/c<<endl;
 cout<<" The value of a++ is "<<a++<<endl;
 cout<<" The value of a-- is "<<a--<<endl;
 cout<<" The value of ++a is "<<++a<<endl;
 cout<<" The value of --a is "<<--a<<endl;
/* 2. Assignment operator ---> used to assign the value of variables
int a = 9 ,b = 0
char d = 'd'*/

// 3. Comparison operators
cout<<" The value of b == c is "<< ( b == c)<<endl;
cout<<" The value of a == c is "<< ( a == c)<<endl;
cout<<" The value of b != c is "<< ( b != c)<<endl;
cout<<" The value of b <= c is "<< ( b <= c)<<endl;
cout<<" The value of b >= c is "<< ( b >= c)<<endl;

// 4. Logical operator
//Folloging are the type of logical operator
cout<<" The value of logical 'and'  operator is "<< (( a==b) &&  ( a<=c))<< endl;
cout<<" The value of logical 'or'  operator is "<< (( a==b) || ( a<=c))<< endl;
cout<<" The value of logical 'not'  operator is "<< (!(( a==b) &&  ( a<=c)))<< endl;
          return 0;
  }