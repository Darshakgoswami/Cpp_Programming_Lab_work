// #include<iostream>
// using namespace std;
// class parent
// {
//     public:
//     parent(int a)
//     {
//         cout<<a;
//     }
// };
// class child:public parent
// {
//     public:
//     child(int a) : parent(10)
//     {
//         cout<<"\nchild class variable is : "<<a;
//     }
// };

// int main()
// {
//     child(200);
// }


#include <iostream>
using namespace std;

class Parent {
public:
    int a;
    Parent(int x) {
        a = x;
        cout << "first Value: " << a << endl;
    }
};

class Child : public Parent {
public:
    int b;
    Child(int x, int y) : Parent(x) {
        b = y;
        cout << "second Value: " << b << endl;
    }
};

int main() {
    
    Child(20,10);
}