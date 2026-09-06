#include<iostream>
using namespace std;
template <class T>
class Vector{
    public: 
    int size;
    T* arr;
    Vector(int m){
        size = m;
        arr = new T[size];
    }
    T dotproduct(Vector &v){
        T x = 0;
        for(int i = 0; i<size; i++){
            x += this->arr[i] * v.arr[i];
        }
        return x;
    }
};
int main(){
    Vector <float>v1(4);
    v1.arr[0] = 2.34;
    v1.arr[1] = 4.86;
    v1.arr[2] = 5;
    v1.arr[3] = 1.00;
    Vector <float>v2(4);
    v2.arr[0] = 4;
    v2.arr[1] = 2;
    v2.arr[2] = 0;
    v2.arr[3] = 1;

    float a = v1.dotproduct(v2);
    cout<<a<<endl;
    return 0;
}