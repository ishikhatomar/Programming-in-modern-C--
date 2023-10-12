
//Complex: Constrcutor with default parameters
#include<iostream>
#include<cmath>
using namespace std;
class Complex{
  private:
  double re_, im_;
  public:
  Complex(double re=0.0, double im=0.0): //constructor with default parameters
     re_(re), im_(im){}   //Initializer list: Parameters to initialize
  double norm(){
    return sqrt(re_*re_ + im_*im_);
  }
  void print(){
    cout<<"|"<<re_<<" +j"<<im_<<"|= "<<norm()<<endl;
  }
};
int main(){
    Complex c1(4.2, 5.3); //Complex::Complex(4.2,5.3)--both parameters explicit
    Complex c2(4.2); //Complex::Complex(4.2,0.0)--second  parameter default
    Complex c3; //Complex::Complex(0.0,0.0)--both parameters default
c1.print();
c2.print();
c3.print();
}
