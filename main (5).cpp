#include<iostream>
using namespace std;
int main(){
    double x;
    int y;
    char operation ;
    cout<<"please enter the vlaue of x:"<<endl;
    cin>>x;
    cout<<"choose operation from (+,-,X,/)"<<endl;
    cin>>operation;
     cout<<"please enter the vlaue of y:"<<endl;
     cin>>y;
    
     switch(operation){
     case '+':
     cout<<"x+y= "<<x+y<<endl;
     break;
     case '-':
     cout<<"x-y= "<<x-y<<endl;
     break;
  
     case '*':
     cout<<"x*y= "<<x*y<<endl;
     break;
     case '/':
     cout<<"x/y= "<<x/y<<endl;
     break;
}
     return 0;
}