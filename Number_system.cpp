#include <iostream>
#include <cmath>
using namespace std;

int decimalTobinaryMethod1(int n){
  // Division method
  int binaryno=0;
  int i=0;
  
  while(n!=0){
    int bit=n%2; //remainder
    //  binary no.= bit*power of b=i +binary no
    binaryno= bit*pow(10,i++) +binaryno;
    n=n/2;
  }
  
  return binaryno;
  }

int decimalTobinaryMethod2(int n){
  int binaryno=0;
  int i=0;

  while(n!=0){
    int bit= n&1;
    binaryno= bit*pow(10,i++)+binaryno;
    n=n>>1;
  }
  return binaryno;
}

int binaryTodecimal(int n){
  int decimal=0;
  int i=0;

  while(n!=0){
    int bit= n%10;  
    decimal= bit*pow(2,i++)+decimal;
    n=n/10;
  }
  return decimal;
}

  int main(){
    // 20000
    int m;
    // cout<<"Enter the decimal number:- ";
    cout<<"Enter the binary number:-";
    cin>>m;

    // int binary= decimalTobinaryMethod2(n); 
    int decimal= binaryTodecimal(m);
    // cout<<"Binary of "<<n<<" is:- "<<binary<<endl;
    cout<<"Decimal of "<<m<<" is:- "<<decimal<<endl;
  }

  
