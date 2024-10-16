//
//  Haley Melson
// 00104712
// Assignment 4 P 3
// 10/13/2022

#include <iostream>
using namespace std;

int main()
{
int i, num, sum=0;
    
cout << "Please enter a positive integer " << endl;
cin >> num;
    
if (num<0)
    cout << "The integer can't be negative" << endl;
else if (num >0)
{
for (i=1;i<=num;i++)
{
if(i%2==0)
{
sum = sum +i;
}}}
    cout <<"The sum of even integers up to "<< num << " is " << sum << endl;
    return 0;
}
