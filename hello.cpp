#include<iostream>
using namespace std;
class singleton 
{
private:
    singleton()
    {
    }
public:
    static singleton& getinstance()
    {
        static singleton obj;
        return obj;
    }
    int add(int a, int b)
    {
        return a + b;

    }
};
int main ()
{
    singleton &obj = singleton::getinstance();
    int sum = obj.add(10, 20);
    // print sum value
    cout << "sum : " << sum << endl;
    return 0;
}
