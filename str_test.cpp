#include<iostream> 
using namespace std;

int main(int argc, char const *argv[])
{
        int *p = new int;
        *p = 10;
        cout << "*p="<<*p<<endl;
        
        int *arr= new int [10];
        int j=1;
        for (size_t i = 0; i < 10; i++)
        {
                arr[i]=j++;
                cout<<arr[i]<<endl;
        }
        for(int i = 0;i<10;i++)
        {
                cout <<i<<endl;
                cout << "*i="<<arr[i]<<endl;      
        }  
        delete p;
        delete[] arr ;
        return 0;
}
