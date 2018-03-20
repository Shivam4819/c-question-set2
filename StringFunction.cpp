#include <iostream>
#include <string>
#include <stack>
#include "../ques_set2/StringFunction.h"
using namespace std;

stack <char> c;

void StringOperation::accept(){
    int flag =0;
    cout<<"\nEnter the string:-";
getline(cin,name); 
}
void StringOperation::display(){
cout<<name;
for(i=0;i<name.length();i++){
    
    c.push(name[i]);
}
}
void StringOperation::remove_duplicate(){
    
    int flag=0,j=0;
    
    b[j]=c.top();
    c.pop();
    j++;
    while(!c.empty()){
    for(i=j;i>=0;i--){
        if(a[i]==c.top()){
        flag=1;
        }
    }
    if(flag==1){
        c.pop();
        flag=0;
    }
    else{
        b[j]=c.top();
        c.pop();
        j++;
        flag=0;
    }
   }     
    cout<<"the string is-";
    for(i=j;i>=0;i--){
        cout<<b[i];
    }
    cout<<endl;
}
void StringOperation::remove_space(){
    char a[]="sh iv am";
    int j=0,i,n=0;
    for(i=0;a[i];i++){
        if(a[i]!=' '){
            a[j++]=a[i];
        }
    }
    a[j]='\0';
    cout<<a;
}
