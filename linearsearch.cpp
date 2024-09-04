#include<iostream>
using namespace std;

class array{
    int * A;
    int size;
    int length;

    public:
    array(int size){
        this-> size = size;
        A = new int[size];
    }
    void create(){
        cout<<"enter the length of array :";
        cin>>length;
        cout<<"enter the array element :"<<endl;
        for (int i = 0; i < length; i++)
        {
            cout<<"array element :"<<i<<"=";
            cin>>A[i];
        }
        
    }
    void display(){
        cout<<"array elements are :"<<endl;
        for (int i = 0; i < length; i++)
        {
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
    void linearsearch(){
        int key;
        cout<<"enter the key is to be searched :";
        cin>>key;
        for (int i = 0; i < length; i++)
        {
            if (key == A[i])
            {
                cout<<"element found at index "<<i<<endl;
            }
           
            
        }
        
    }

};


int main(){
    array arr(100);
    arr.create();
    arr.display();
    arr.linearsearch();
    
    return 0;
}