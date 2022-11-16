#include<iostream>
using namespace std ;

//Here the step count is n-2 .
void fibb(int n){    
    static int n1=0, n2=1, n3;    
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         cout<<n3<<" ";    
         fibb(n-1);    
    }    
}


int main(){
    int n ;
    cout<<"Enter the number";
    cin>>n;
    cout<<endl;

    if(n<0){
        cout<<"Please enter positive interger"<<endl;
    }else{
        cout<<"0"<<" "<<"1"<<" ";
        fibb(n-2);
    }
}