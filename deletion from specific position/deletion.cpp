#include<iostream>
using namespace std;

int main()
{
    int arr[50],size,pos;
    cout<<"Enter the Size : ";
    cin>>size;
    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"From what position you want to delete : ";
    cin>>pos;

    // loop for deletion from the specific position
    // From deleted the last value just simple do size-- no need to write for loop
    if(pos<=0||pos>size)
    {
        cout<<"Invalid Position";
    }
    else{
        // for deletion from the starting you have to initial i=0;
        for(int i=pos-1;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    // For unsorted array put last data and put it where user want to delete data because it take less time 
    // For sorted array must have to use for loop algo

    

    return 0;
}