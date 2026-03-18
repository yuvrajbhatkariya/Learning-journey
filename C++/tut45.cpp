#include<iostream>
using namespace std;
class student{
    protected:
        int Roll_number;
    public:
        void set_number(int a){
            Roll_number = a;
        }
        void print_number(void){
            cout<<"The roll number of student is : "<<Roll_number<<endl;
        }
};


class Test : public virtual student{
    protected:
        float maths , chemistry;
    public:
        void setmarks(float m, float c){
            maths = m;
            chemistry = c;
        }
        void getmarks(void){
            cout<<"The Marks obtained in maths is : "<<maths<<endl;
            cout<<"The Marks obtained in chemistry is : "<<chemistry<<endl;
        }
};
class Sports : virtual public student{
    protected:
        float score;
    public :
        void set_score(int s){
            score = s;
        }
        void getscore(void){
            cout<<"The marks obtaines in sports is : "<<score<<endl;
        }
};

class Result : public Test , public Sports{
    protected:
    float Total;
    public:
        void display(void){
            Total = maths + chemistry + score;
            print_number();
            getmarks();
            getscore();
            cout<<"The total marks obtained is : "<<Total<<endl;
        }
};
int main(){
    Result r;
    r.set_number(460);
    r.setmarks(82.5 , 92.5);
    r.set_score(75);
    r.display();
    return 0;
}