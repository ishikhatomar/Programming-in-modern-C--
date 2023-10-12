//Stack: Constructor with default parameters
#include<iostream>
#include<cstring>
using namespace std;
class Stack{
    private:
    char *data_;
    int top_;
    public:
    Stack(size_t=10); //default initial size of Stack
    ~Stack(){delete[] data_;}
    int empty(){
        return (top_==-1);
    }
    void push(char x){data_[++top_]=x;}
    void pop(){
        --top_;
    }
    char top(){
      return  data_[top_];
    }
};
Stack:: Stack(size_t s): data_(new char[s]), top_(-1){
    cout<<"Stack created with max Size= "<<s<<endl;
}
int main(){
    char str[]= "SHIKHA";
    int len= strlen(str);;
    Stack s(len); //Create a stack large enough for the problem
for(int i =0; i<len; ++i)

s.push(str[i]);


while(!s.empty()){
    cout<<s.top();
   s.pop();
}
}