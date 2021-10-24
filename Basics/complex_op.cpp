#include <iostream>

using namespace std;

class complex{
    private:
    float r, i;
    public:
    complex(float r, float i){
        this->r=r;
        this->i=i;
    }
    complex(){}
    void displaydata(){
        cout<<"real part = "<<r<<endl;
        cout<<"imaginary part = "<<i<<endl;
    }
    complex operator+(complex &c){
        return complex(r+c.r, i+c.i);
    }
    complex operator-(complex &c){
        return complex(r-c.r, i-c.i);
    }
    complex operator*(complex &c){
        return complex((r*c.r - i*c.i),(r*c.i+i*c.r));
    }
};

int main(){
    float re1, img1, re2, img2;
    cin >> re1 >> img1 >> re2 >> img2; 

    complex c1(re1, img1);
    complex c2(re2, img2);
    complex sum = c1+c2;
    complex diff = c1-c2;
    complex mul = c1*c2;
    sum.displaydata();
    diff.displaydata();
    mul.displaydata();

    return 0;
}