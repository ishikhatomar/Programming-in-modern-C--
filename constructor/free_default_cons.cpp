//Complex: Default Constructor: Free
#include<iostream>
#include<cmath>
using namespace std;
class Complex{
    private:
    double re_, im_;
    public:  //No constructor given be user. So compiler provides a free default one
    double norm() {
        return sqrt(re_*re_ + im_*im_);
    }
    void print(){
     cout<<"|"<<re_<<" +j"<<im_<<"| = "<<norm()<<endl;
    }
    void set(double re, double im)
    {
       re_ = re;
       im_ = im;
    }
};

int main(){
    Complex c; // Free constructor from compiler, Initializer with garbage
    c.print();
    c.set(4.2, 5.3);
    c.print();
}  // Free destructor from compiler