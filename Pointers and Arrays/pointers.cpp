#include <iostream>
using namespace std;

int main()
{
    /*
    Pointers
    - Pointers are the variables which store the address of other variable.
    - Address are always in the form of HexaDecmail like 0x61ff0c
    - int *p;
    - Here you can say
    - This pointer p contain address of variable and the data type of that variable is integer.
    - So it's pointer to integer
    - It is not a integer pointer.
    - other example
    - float *p --> So it's pointer to float
    - char *c --> pointer to character
    */

    int a1 = 10;
    int *p;
    p = &a1;
    cout << p << endl;
    int **ptr = &p;
    cout << **ptr << endl;
    cout << &a1<<endl;

    int arr1[] = {1, 3, 5, 6, 7, 8, 10};
    int *point = arr1; // --> This is correct because array name itself act as a pointer
    cout<<point<<endl;
    /* 
    int b=10;
    int *q=b;
    - This is wrong we cannot store the address of b in the pointer q like this 
    - For storing the address of b in pointer q we have to use ampersand(&)
    - For example 
    - *q = &b;
    */
    point++; 
    /*
    - Now pointer will point to the next address of the array 
    - For example 
    - The address of array a starting from 100
    - When we do point++;
    - Pointer will points to the next address 104 in the case of integer array 
    - And in the case of character array address will 101 because the size char is 1 btye
    - 1 btye have 8 bits
    - You cannot do a++ because you cannot change the base address of the array .
    */

    /*
    q=a[2];
    - This is not valid because a[2] we are accessing the value are store in a[2] that is 5 
    - This is not allow q is a pointer that only store the address.
    */
    cout<<point<<endl;
    

    int a[]={1,2,4,5,6,7,10};
    int *q=a;
    cout<<"a[2]   = "<<a[2]<<endl;
    cout<<"2[a]   = "<<2[a]<<endl;
    cout<<"*(a+2) = "<<*(a+2)<<endl;
    cout<<"*(q+2) = "<<*(q+2)<<endl;
    cout<<"a+1    = "<<a+1<<endl;
    cout<<"&a+1   = "<<&a+1<<endl;
    cout<<"*a+1   = "<<*a+1<<endl;
    cout<<"*(a+2) = "<<*(a+1)<<endl;

    /*

    *a 
    - a --> Address of the array 
    - asterisk(*) give the value that are store in that address 

    */



    // Code for printing an array using pointer 
    int array[5];
    int *ptrArray = array;
    cout<<"Enter the Elements :";
    for(int i=0;i<5;i++)
    {
        // Also use *(array+1),*(i+array) and *(ptrArray+1)
        cin>>array[i];
    }
    for(int i=0;i<5;i++)
    {
        // Also use array[i],*(array+i),i[array],i[ptrArray]
        cout<<*(ptrArray+i)<<" ";
    }


   return 0;
}