#include<iostream>
using namespace std;
class person{
    public:
    // default constructor
    person(){
        cout<<"Default constructor called"<<endl;
    }
    person(int a){
        cout<<a;

}
};
int main(){
    // make object(run d...c)
    person p;
    person a(10);
}