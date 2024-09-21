#include<iostream>
using namespace std;
main()
{
	int a,b,c,d,e,f,x;
	float y,z;
	cout << " Enter the movie name: " << endl;	
	
	cin >> a;
	
	cout << " Enter the adult ticket price: "<< endl;
	
	cin >> b;
	
	cout << " Enter the child ticket price: " << endl;	
	
	cin >> c;
	
	cout << "Enter the number of adults tickets sold: " << endl;
	
	cin >> d;
	
	cout << "Enter the number of  child tickets sold: " << endl;
	
	cin >> e;
	
	cout << "Enter the percentage of the amount to be donated to charity: " << endl;
	
	cin >> f;
	
	x= (b*d) + (c*e);
	
	y= x*10/100;
	
	z= (x-y);
	
	cout << " Movie : " <<  a << endl;
	
	
	cout << " Totat amount generated from ticket sales : " << x << endl;
	
	
	cout << " Donation to charity (10%) :   " <<  y << endl;
	
	
	cout << " Remaining amount after donation : " << z << endl;
	
}
	
