//Complex: Obect Lifetime: Automatic
#include<iostream>
#include<cmath>
using namespace std;
class Complex{
    private: double re_, im_;
    public:
    Complex(double re=0.0, double im=0.0):
    re_(re), im_(im)
    {
        cout<<"constructor: ("<<re_<<", "<<im_<<")"<<endl;
    }
    ~Complex(){
        cout<<"Destructor: ("<<re_<<", "<<im_<<")"<<endl;
    }
    double norm(){
        return sqrt(re_*re_ + im_*im_);
    }
    void print(){
        cout<<"|"<<re_<<" +j"<<im_<<"| = "<<norm()<<endl;
    }
};

int main(){
    Complex c(4.2,5.3), d(2.4); //Complex::Complex() called -- c, the d -- object ready
    c.print();
    d.print();
}//scope over, Objects no more available, Complex::~Complex() called --d then c in the reverse order