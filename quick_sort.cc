/* QUICK SORT  */


void printvalues(int numofValues,int *values)
{

        cout<<"\nThe elements in the array are as follows:"<<endl;
        for(int i=0;i<numofValues;i++)
        cout<<values[i]<<endl;

}




int partition (int arr[], int l, int h)
{
    int x = arr[h];
    int i = (l - 1);

    for (int j = l; j <= h- 1; j++)
    {
        if (arr[j] <= x)
        {
            i++;
            swap (&arr[i], &arr[j]);
        }
    }
    swap (&arr[i + 1], &arr[h]);
    return (i + 1);
}

void quickSort(int A[], int l, int h)
{
    if (l < h)
    {
        int p = partition(A, l, h); /* Partitioning index */
        quickSort(A, l, p - 1);
        quickSort(A, p + 1, h);
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
        quickSort(values,0,numofValues);
        printvalues(numofValues,values);
        return 0;
}
