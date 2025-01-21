#include<bits/stdc++.h>
using namespace std;

class Parent{
    public: 
    Parent(){
        cout<<"Parent Constructor"<<"\n";
    }

    virtual void speak(){
        cout<<"Im Parent"<<"\n";
    }

};

class Child:public Parent{
    public:
    Child(){
        cout<<"Child Constructor"<<"\n";
    }
    void speak(){
        cout<<"Im Child"<<"\n";
    }
};

int main(){
    // Parent* p=new Child(); /// same as below
    Child c;
    Parent* p=&c;

    p->speak();// virtual is used in parent. so child speak is called. Binding is done( run time binding)
}














