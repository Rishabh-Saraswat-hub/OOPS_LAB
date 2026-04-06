#include <iostream>
using namespace std;
template <class T> ;
void swap( T a , T b){
   T temp =  a ;
    a=b;
    b=temp;
    cout<<"New value of a is : "<< a<< endl;
      cout<<"New value of b is : "<< b;
}
int main(){
    int a , b ;
    cout << "Enter the value of a : ";
    cin>>a;
    cout<<" Enter the value of b : ";
    cin>>b;
    swap(a,b);
    

}

