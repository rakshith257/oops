#include<bits/stdc++.h>
using namespace std;

class Parent{
    vector<int>v;
    public:
    Parent(){
        cout<<"Parent Constructor"<<"\n";
    }

    Parent(vector <int> v){              
        this->v=v;
        cout<<"Parent paramter Construtor"<<"\n";
    }
};

class Child:public Parent{
    vector<int> v;
    public:
    Child(){
        cout<<"Child Constructor"<<"\n";
    }
    Child(vector<int> v1):Parent(v1){
        this->v=v1;
        v.push_back(5);
        cout<<"Child Paramnter constructor with Parent vector of size "<<v1.size()<<" and child vector of size "<<v.size()<<"\n";
    }
};

int main(){
    vector <int>v={1,2,3,4};
    // Parent P(v);
    Child C(v);
}