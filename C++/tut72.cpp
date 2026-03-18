// refrence from C++ list

#include<iostream>
#include<list>
using namespace std;
void display(list<int> &ls){
    list<int> :: iterator itr;
    for(itr = ls.begin(); itr != ls.end(); itr++){
        cout<<*itr<<" ";
    } 
    cout<<endl;
}
int main(){
    list <int> list1;      // zero lengh list
    list1.push_back(5); 
    list1.push_back(02); 
    list1.push_back(10); 
    list1.push_back(02); 
    list1.push_front(1);            // add to front

    // Removing elements :- 
    // list1.pop_back();            // last element is removed.
    // list1.pop_front();           // front elenent is removed.
    // list1.remove(02);            // remove any element.

    list1.sort();                   // arrange in order 
     
    display(list1);

    list <int> list2(3);            // list having lenth or space 3
    list<int> :: iterator itr;
    itr = list2.begin();
    *itr = 13;
    itr++;
    *itr = 4;
    itr++;
    *itr = 9;
    itr++;

    display(list2);

    // swaping : -
    list1.swap(list2);
    display(list1);
    display(list2);

    // merging two list : -
    list1.merge(list2);
    list1.sort();
    display(list1);

    return 0;
}