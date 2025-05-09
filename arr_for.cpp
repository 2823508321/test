#include<iostream> 
using namespace std;

int main(int argc, char const *argv[])
{
        int arr[ ] =  {1,2,3,4,5};
        int i = 0;
        while(i<sizeof(arr)/sizeof(arr[0]))
        {
                cout  << "while"<<arr[i]<<endl;
                i++;
        }
        cout<<i<<endl;
        for(int i : arr)
        {
                cout<<"高级for取出内容"<<i<<endl;
        }
        return 0;
}

