// #include<iostream>
// using namespace std;
// class person 
// {
//     public:
//     person()
//     {
//         cout<<"base class";
//     }
// };
// class child : public person
// {
//     public:
//     child()
//     {
//         cout<<"\nchild class";
//     }
// };
// int main()
// {
//     child c;    
// }


#include<iostream>
using namespace std;
class person 
{
    protected:
    int a=100;
    public:
    person()
    {
        cout<<"base class";
    }
};
class child : public person
{
    public:
    child()
    {
        cout<<"\nchild class";
        cout<<"\n"<<a;
    }
};
int main()
{
    child c;    
}