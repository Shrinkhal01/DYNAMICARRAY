#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the array size : ";
    cin>>size;
    if(size>0){
        int *P,*Ar;
        Ar=new int[size];
        P=Ar;//we make the pointer point the array which is empty right now
        for(int i=0;i<size;i++){
            cout<<"Enter the "<<(i+1)<<"th element :";
            cin>>*P;//the element is stored in the array
            P++;//incrementing the pointer to point the next position in the array
        }
        P=Ar;//here i made the pointer to point the beginning o the array again and thus now the array is no longer empty
        cout<<"The array elements are : ";
        for(int i=0;i<size;i++){
            cout<<*P<<"  ";//printing the array elements
            P++;
        }
    }
    else{
        cout<<"Invalid array size entered!!";
    }
    return 0;
}
