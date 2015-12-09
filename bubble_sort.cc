/* HEADER FILES */

#include <iostream>
using namespace std;


void printvalues(int numofValues,int *values)
{

        cout<<"\nThe elements in the array are as follows:"<<endl;
        for(int i=0;i<numofValues;i++)
        cout<<values[i]<<endl;

}


void swap(int *a, int *b)
{
        int temp=*a;
        *a=*b;
        *b=temp;
}

void doSort(int numofValues, int *values)
{
        for(int i=0;i<numofValues;i++)
        {
                for(int j=0;j<numofValues-i-1;j++)
                {
                        if(values[j]>values[j+1])
                        swap(&values[j],&values[j+1]);

                }
        }
}


int main(int argc, char*argv[])
{

        int numofValues;
        cout<<"\nEnter the number of elements in the array"<<endl;
        cin>>numofValues;

        int *values = new int[numofValues];

        cout<<"\nEnter the elements in the Array";
        for(int j=0;j<numofValues;j++)
        cin>>values[j];
        doSort(numofValues,values);
        printvalues(numofValues,values);
        return 0;
}
