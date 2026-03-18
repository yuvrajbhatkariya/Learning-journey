#include<iostream>
using namespace std;
template <class T>
class vector{
    public: 
    int size;
    T* arr;
    vector(int m){
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v){
        T x = 0;
        for(int i = 0; i<size; i++){
            x += this->arr[i] * v.arr[i];
        }
        return x;
    }
};
int main(){
    vector <float>v1(4);
    v1.arr[0] = 2.34;
    v1.arr[1] = 4.86;
    v1.arr[2] = 5;
    v1.arr[3] = 1.00;
    vector <float>v2(4);
    v2.arr[0] = 4.0;
    v2.arr[1] = 2.78;
    v2.arr[2] = 0.00;
    v2.arr[3] = 1.00;

    float a = v1.dotproduct(v2);
    cout<<a;
    return 0;
}