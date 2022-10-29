#include<bits/stdc++.h>
using namespace std;

int main()
{

int number,reverse,temp,sum = 0;
cout<<"Enter number to check : ";
cin>>number;
temp = number;
while(number>0){
  reverse = number%10;
  sum = (sum*10)+reverse;
  number = number/10;
}

if(temp == sum){
  cout<<"Is Palindrome";
}
else{
  cout<<"NOt Palindrome";
}
}