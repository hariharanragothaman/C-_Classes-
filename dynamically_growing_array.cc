/* This program is about a dynamically growing array using realloc()
 * Accept a set of Integers dynamically, keep growing arrray isze and until needede
 * User knwos that to exit - He has to key in a negative number */

//HEADER FILE DECLARATIONS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Array
{
        int *Elements;
        size_t used;
        size_t size;
};


void get_array(Array *Arr, size_t intialsize)
{
        Arr->Elements = (int*)malloc(intialsize * sizeof(int));
        Arr->used = 0;
        Arr->size = intialsize;
}

void insert_array(Array *Arr, int value)
{
        if(Arr->used == Arr->size)
        {
                Arr->size = Arr->size * 2;
                Arr->Elements = (int*)realloc(Arr->Elements,Arr->size * sizeof(int));
        }

        Arr->Elements[Arr->used++] = value;
}

void free_array(Array *Arr)
{

        free(Arr->Elements);
        Arr->Elements = NULL;
        Arr->used = Arr->size = 0;

}


void display_array(Array *Arr)
{

        for(int i=0;i<Arr->used;i++)
        cout<<Arr->Elements[i]<<endl;

}


/* Definition of Main*/
int main(int argc, char *argv[])
{
        Array A1;
        int temp;
        get_array(&A1, 5);
        while(1)
        {
                cin>>temp;
                if(temp<0)
                break;

                insert_array(&A1,temp);
        }

        cout<<"\nYes, you have finished Entering"<<endl;
        cout<<"The values you entered is as follows"<<endl;
        display_array(&A1);
        return 0;
}
                            
