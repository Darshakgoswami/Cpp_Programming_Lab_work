#include <iostream>
using namespace std;
class Calculator 
{
    public:
    int add(int a, int b) {
        return a + b;
    }
};

int main() {
    Calculator ans;
    int result = ans.add(5, 3);
    cout << "Sum: " << result << endl;
    return 0;
}