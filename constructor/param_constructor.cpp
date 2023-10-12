//Complex: Parameterized Constructor
#include<iostream>
#include<cmath>
using namespace std;
class Complex{
    private:
    double re_, im_;
    public:
    Complex(double re, double im): // Constructor with parameters
     re_(re), im_(im){}     //Initializer list: to initialize data members
   double norm(){
        return sqrt(re_*re_ +im_*im_);
    }
    double print(){
        cout<<"|"<<re_<<" +j"<<im_<<"|="<<norm()<<endl;
    }
};
int main(){
    Complex c(4.2,5.3), d(1.6,2.9);
    c.print();
    d.print();
}