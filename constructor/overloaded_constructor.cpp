//Complex: Overloaded Constructor
#include<iostream>
#include<cmath>
using namespace std;
class Complex{
    private:
    double re_, im_;
    public:
    Complex(double re, double im):  //two parameters
    re_(re),im_(im){}
    Complex(double re):  //one parameter
    re_(re), im_(0.0){}
    Complex():re_(0.0), im_(0.0){} //No paramter
    double norm(){
        return sqrt(re_*re_ + im_*im_);
    }
    void print(){
        cout<<"|"<<re_<<" +j"<<im_<<"|= "<<norm()<<endl;
    }


};
int main(){
    Complex c1(4.2,5.3); //Complex::Complex(double, double)
    Complex c2(4.2); //Complex::Complex(double)
    Complex c3; //Complex::Complex()
    c1.print();
    c2.print();
    c3.print();
}