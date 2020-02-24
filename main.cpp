#include <iostream>

using namespace std;

//the merge function
void Merge(int array[],int left, int mid , int a)
{
int i=left;
int j=mid+1;
int k=left;
    int temp[6];

    while( i<=mid &&  j<= a)
    {
        if(array[i]<=array[j])
        {
            temp[k]=array[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=array[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        temp[k]=array[i];
            i++;
            k++;
    }
    while(j<=a)
    {
        temp[k]=array[j];
            j++;
            k++;
    }
     for(int s=left; s<=a; s++)
    {
        array[s] = temp[s];
    }

}

//the merge sort function
void mergeSort(int array[], int left , int r)
{
    if(left<a)
    {
        int mid = (left+a)/2;
        mergeSort(array,left,mid);
        mergeSort(array,mid+1,a);
        Merge(array,left,mid,a);
        }
}

int main()
{

    cout << "Enter the 8 elements in the array : " << endl;  //int my_array[8] = {4,5,2,6,10,8,9};
    int my_array[5];
    for(int i=0; i<5; i++)
    {
        cin >> my_array[i];
    }
    cout << "Initial array : " <<endl;
    for(int i=0; i<8; i++)
    {
        cout << my_array[i] << "  ";
    }

    mergeSort(my_array,0,4);     //Mergesort function

 cout <<endl<< "The result is : " <<endl;
    for(int i=0; i<5; i++)
    {
        cout << my_array[i] << "..... ";
    }

    return 0;
}
