
#include<iostream>
using namespace std;
main()
{ 
	int x,digit1,digit2,digit3,digit4,sum;
	cout << " Enter a 4-digit number: " << endl;
	cin >> x;
	digit1=x%10;
	digit2=(x/10)%10;
	digit3=(x/100)%10;
	digit4=(x/1000)%10;
	sum=digit1+digit2+digit3+digit4;
	cout << " The sum of indivisual digits of num is : " << sum << endl;
}
