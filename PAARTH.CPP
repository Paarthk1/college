#include<iostream.h>
#include<math.h>
#include<conio.h>
int fact(int num)
{
int fact = 1;
for (int i =1;i <= num; i++)
{
fact *=i;
}
return fact;
}
int sum(int a , int b)
{
return a + b;
}
int sumofdigits(int num)
{
int sum =0;
while (num !=0)
{
sum += num% 10;
sum += num % 10;
num /= 10;
}
}
int sumoffirstandlastdigits(int num)
{
int firstdigit = num;
while (firstdigit >=10)
{
firstdigit /=10;
}
return firstdigit + (num % 10);
}
void printreverse (int num)
{
do{
cout<<num%10;
num/=10;
}while(num>0);
}
int ano(int num)
{
int ono = num, sum = 0, count = 0;
while (ono != 0)
{
count++;
ono /= 10;
}
ono = num;
while (num != 0)
{
int digit = num % 10;
sum +=pow(digit, count);
num /=10;
}
return sum == ono;
}
int main()
{
int choice,num,n1,n2;
do
{
clrscr();
cout<<"Menu \n 1. Factor in 1\n 2. Sum of two numbers\n 3. Sum of digit\n 4. Sum of first & last digit\n5. armstrong number\n6. exit\n";
cin>>choice;
switch(choice)
{
case 1: cout<<"Enter n number: ";
cin>>num;
cout<<"Factorial of "<<num<<" is "<<fact(num)<<endl;
break;
case 2: cout<<"Enter two numbers: ";
cin>>n1>>n2;
cout<<"Sum of "<<n1<<" and "<<n2<<" is "<<sum(n1, n2)<<endl;
break;
case 3: cout<<"Enter a numbe: ";
cin>>num;
cout<<"Sum of digits of "<<num<<" is "<<sumofdigits(num)<<endl;
break;
case 4: cout <<"Enter a number: ";
cin>>num;
cout<<"sum of first and last digit of"<<num<<" is "<<sumoffirstandlastdigits(num);
break;
case 5: cout<<"Enter a number: ";
cin>>num;
cout<<"Number in reverse: ";
printreverse(num);
cout<<endl;
break;
case 6: cout<<"Enter a number: ";
cin>>num;
if(ano(num)){
cout<<num<<" Is an amstong number."<<endl;
}
else
{
cout<<num<<"Isn't an armstrong number."<<endl;
}
break;
case 7: cout<<"Exiting....."<<endl;
break;
default:
cout<<"Invalid choice. Please try again."<<endl;
}
getch();
}
while (choice != 7);
return 0;
}