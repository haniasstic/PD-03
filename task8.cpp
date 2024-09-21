#include<iostream>
using namespace std;
main()
{
	float a,b,x;
	int c,d;
	cout << " Enter vegetable price per kilogram ( in coins ):  " << endl;
	cin >> a;
	cout << " Enter fruit price per kilogram ( in coins );  " << endl;
	cin >> b;
	cout << " Enter total kilograms of fruits : " << endl;
	cin >> c;
	cout << " Enter total kilograms of fruits :  " << endl;
	cin >> d;
	x = ((a*c) + ( b*d))/1.94;
	cout << " Total earnings in rupees (Rps): "<< x << endl;

}
