//# include <iostream>
//# include <iomanip>
//using namespace std;
//int main(){
    
    // LOOPS IN C++ :
 /*
    There are three types of loops -
          1. for loop
          2. while loop
          3. do-while loop
  
    #1 for loop    :-
       //syntax //
    for ( initialisation ; condition ; updation) 
 {
   c++ code
   }
   example :- 
   
   for ( int i = 1;  i  <=  70 ; i++ )
   {
    cout<<i<<endl;
   }
  */
  
   
   // #. 2  while loop :-
       // syntax //
       /* initalisation
       while ( condition ){
           c++ code
           }
           example :-
   */   
    /*  
       int a = 1;
       while ( a <11){
           cout<<a<<endl;
           a++;
           
           }
    */
           // # 3 do-while loop
    /*
           int a =1;
           do{
               cout<<a<<endl;
               a++;
               }while( a<10);
               return 0;
               }
     */
              // Home work 
              # include <iostream>
              using namespace std ;
              int main(){
              int a = 1;
              do{
                  cout <<a*6<< endl;
                  a++;
              }while ( a<=10);
    return 0;
    }