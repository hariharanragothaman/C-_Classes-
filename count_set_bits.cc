#include <iostream>
using namespace std;

int countbits(int value)
{
        int flag,a = 0;
        while(value > 0)
        {
                a = value%2;
                if(a>0)
                flag++;
                value/=2;
        }

        return flag;
}
int countsetbits(int num)
{
        int sum = 0;
        for(int i=0;i<num;i++)
        sum+=countbits(i);
        return sum;
}


int main()
{
        int num=0;
        cout<<"\nEnter the number"<<endl;
        cin>>num;
        int result = countsetbits(num);
        cout<<"\nThe number of bits set equals"<<result<<endl;
}
