#include<iostream>
#include <map>
#include "SingleOccuring.h"

using namespace std;



void SingleOccuring::acceptdata(){
    cout<<"enter the length-";
    cin>>n;
        for(i=0;i<n;i++){
        cin>>a[i];
        } 
    }

void Maxoccurance::displaydata(){
        for(i=0;i<n;i++){
        cout<<a[i];
        } 
        cout<<endl;
    }
void Maxoccurance::singleoccurance(){
    int j,z=0,m=0,max=1;
    int flag[10];
    int flag1=0;
    int flag2=0;
    for(i=0;i<10;i++)
       flag[i]=0;
       
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
              if(flag[i]!=1){
                   if(a[i]==a[j]){
                       flag[j]=1;
                       flag2=1;
                      // m++;
                   }
              }
              else{
                     flag2 = 2;
              }
        }
        if(flag2==0){
              h[z].key = a[i];
              z++;
              flag2=0;
        }
        else if(flag2==1){
              h[z].key = a[i];
              z++;
              flag2=0;
        }
        else{
              flag2 = 0;
        }
    }
    for(i=0;i<z;i++){
       cout<<"\nh[i].key->";
       cout<<"\t"<<h[i].key;
    }
    cout<<endl;
 for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[j]==h[i].key){
                h[i].val=h[i].val+1;
                cout<<"h[i].key->"<<h[i].key<<"\t"<<"h[i].val->"<<h[i].val<<endl;
            }
    }
    }
 for(i=0;i<5;i++){
      if(h[i].val==1){
      cout<<h[i].key<<"\t"<<h[i].val<<endl;
      }
       
 }      
    
}

