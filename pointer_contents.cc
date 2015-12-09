#include <iostream>
using namespace std;

void display_pointer_contents(int *ptr)
{
        cout<<ptr<<endl;
        cout<<*ptr<<endl;
        cout<<&ptr<<endl;
        cout<<"\nEnd of Function"<<endl;
}

int main()
{
        int *ptr, a;
        a = 5;
        ptr =&a;
        display_pointer_contents(ptr);


        cout<<ptr<<endl;
        cout<<*ptr<<endl;
        cout<<&ptr<<endl;

}
