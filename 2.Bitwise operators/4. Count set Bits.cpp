#include<bits/stdc++.h>      //we just have to count the nu of bits that are one in binary repesentation of n
using namespace std;
 void count(int n){      // naive method   time complexity = theta(total bit in n)
     int res=0;
     while(n>0){
         if((n & 1)==1){
             res++;
         }
         n=n>>1; //right shift by one mens divide by 2
     }
     cout<<res;
 }



void countBits(int n){      // This is Brian Kerningams Theorem  TC = theta(nu of set bits)
    int res=0;
    while(n>0){
        n= (n &(n-1));   //this line work as decrase 1 set bit in number by calling 1 time as example it turn 40 to 32 nd 32 to 0 
        res++;
    }
    cout<< res;
}

//    EFFICIENT METHOD  TC = theta(1);

int table[256];               //video dekle bhai
void initialize(){
    table[0]=0;
    for(int i=0;i<256;i++){
        table[i] =(i & 1) + table[i/2];
    }
}

void Efficient(int n){
    
	    int res = table[n & 0xff] +   
        table[(n >> 8) & 0xff] + 
        table[(n >> 16) & 0xff] + 
        table[n >> 24]; 
       cout<< res;

}






//MAIN FUNCTION
int main(){
    //int n;
    initialize();
    Efficient(41);
    }



