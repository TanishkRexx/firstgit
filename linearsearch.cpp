#include<iostream>
using namespace std;

class array{
    private:
    int * a;
    int size;
    int length;

    public:
    array(int size){
        size = size;
        this->a = new int[size];
    }
    ~array(){
        delete []a;
         }

    void display();
    void insert(int index , int x);
    void append(int x);
    void deleted(int index);
    int linearsearch(int key);
    int binarysearch(int key);
    int get(int index);
    int set(int index , int x);
    int max();
    int min();
    int sum();
    float avg();
    void isreverse();


    void array :: display(){
        int i ;
        cout<<"elements are :";
        for (int i = 0; i < length; i++)
        {
            cout<<a[i];
        }
    }
    void array :: insert(int index , int x){
        int i ;
        if (index>=0 && index<=length)
        {
            for ( i = 0; i < length; i++)
            {
                a[i] = a[i-1];
            }
            a[index] = x;
            length++;
            
        }
        
    }
    void array :: append(int x){
        if (length<size)
        {
            a[length] = x;
        }
        
    }
    void array :: deleted(int index){
        int x;
        if (index>=0 &&  index<= length)    
        {
            x = a[index];
            for (int i = index ; i < length - 1; i++)
            {
                a[i] = a[i+1];
            }
            length --;
            cout<<"item deleted"<<x;
        }
        
    }

    void swap(int * x , int *y){
        int temp;
        temp = *x ; 
        *x = *y ;
        *y = temp;
    }
   
  int array :: linearsearch(int key){
    for (int i = 0; i < length; i++)
    {
        if (a[i]==key)
        {
            swap(&a[i],&a[0]);
            return 1;
        }
        
    }
    return 0;
    
    
   }

   int array :: binarysearch(int key){
        int h , l , mid;
        while (l<=h)
        {
            mid = (l+h)/2;
            if (key == a[mid])
            {
               return mid;
            }
            else if (key <= mid)
            {
                h = mid -1;
            }
            else
                l = mid + 1;
            
            
        }
        return 0;
   }

   int array :: get(int index){
    int x;
        if (index>= 0 &&  index<=length)
        {
           return a[index] 
        }
        return 0;
        
   }
   int array :: set(int index , int x){
        if (index>=0 && index<length){
            a[index] = x;
            return 1;
        }
        return 0;

   }

   int array ::max(){
    int maximum = a[0];
    for (int i = 0; i < length; i++)
    {
        if (maximum<a[i])
        {
            maximum = a[i];
        }
        return maximum;
    }
    return 0;
    
    

   }

   int min(){
    int minimum = a[0];
    for (int i = 0; i < length; i++)
    {
        if (minimum>a[i])
        {
            minimum = a[i];
        }
        return minimum;
        
    }
    return 0;
   }

   int array::sum(){
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + a[i];

        
    }
    return sum;
   }

   float array :: avg(){
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + a[i];

        
    }
    float avg = sum / length;

    
   }
  void array:: isreverse(){
    int * b;
    b = new int[size];
    int i , j;
    for ( i = length-1 , j = 0; i <=0; i--,j++)
    {
        b[j]=a[i];
    }
    for (int i = 0; i < length; i++)
    {
        a[i]= b[i];
    }
  }


};

int main(){
    
    int size, index , x , ch;
    array *arr1;
    cout<<"enter the size of array :";
    cin>>size;
do
{
    cout<<"\nMenu\n";
    cout<<"1. INSERT\n";
    cout<<"2. DELETE\n";
    cout<<"3. ADD\n";
    cout<<"4. SEARCH\n";
    cout<<"5. SUM\n";
    cout<<"6. AVERAGE\n";
    cout<<"7. MIN\n";
    cout<<"8. MAX\n";
    cout<<"9. LINEARSEARCH\n";
    cout<<"10. BINARYSEARCH\n";
    cout<<"11. REVERSE\n";
    cout<<"12. ENTERTING EXIT\n";
    cout<<"enter your choice :";
    cin>>ch;

    switch (ch)
    {
    case 1:
        cout<<"enter the element and index";
        cin>>x>>index;
        arr1->insert(x ,index);
        break;
    
    case 2:
       cout<<"enter the index which to be deleted ";
       cin>>index;
       arr1->deleted(index);
       break;

    case 3:
         cout<<"enter the element ";
        cin>>x;
        arr1->append(x);
        break;
    
    case 4:
        cout<<"enter the index which is to be searched :";
        cin>>index;
        arr1->get(index);
        break;

    case 5:
        cout<<"sum  is :";
        arr1->sum();
        break;

    case 6:
        cout<<"average is :";
        arr1-> avg();
        break;


    case 7:
        cout<<"minimum element is :";
        arr1->min();
        break;

    case 8:
        cout<<"maximum element is :";
        arr1->max();
        break;


    case 9:
        cout<<"enter the element is to be searched :";
        cin>>x;
        index = arr1->linearsearch(x);
        break;


    case 10:
        cout<<"enter the element is to be searched :";
        cin>>x;
        index = arr1->binarysearch(x);
        break;

    case 11:
        arr1->display();
        break;


    
    }


} while (ch<12);
return 0 ;
}
