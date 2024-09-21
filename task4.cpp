#include<iostream>
using namespace std;
main()
{ 
	int name;
	float days;
	int weight;
	cout << "Enter name of the person" << endl;
	cin >> name;
	cout << "Enter the target weight loss in kilograms: "<< endl;
	cin >> weight;
	days= weight*15;
	cout << name << "will lose" << weight << "kgs in" << days << "by following the doctor's suggestion." << endl;

}
	