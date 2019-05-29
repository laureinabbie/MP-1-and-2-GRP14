#include <iostream>
#include <cmath> // for set of functions to perform mathematical operations
#define PI 3.14159265
using namespace std;
 
double angle(double a,double b,double c)
{
	double theta = acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b))*180/PI;
	return theta;
//this will determine the value of theta
}
int main()
{
	double a,b,c;
	double A,B,C;
	double perim, area, p;
	double apothem, circumcenter;
	cout<<"Input 1st side: "; cin>>a;
	cout<<"Input 2nd side: "; cin>>b;
	cout<<"Input 3rd side: "; cin>>c;
	if(a+b>c && b+c>a && c+a>b){
		A=angle(b,c,a);
		B=angle(c,a,b);
		C=180-A-B;
		cout<<"Angle A: "<<A<<endl;
		cout<<"Angle B: "<<B<<endl;
		cout<<"Angle C: "<<C<<endl;
		if(a == b && a == c && b == c)
		  cout<<"Equilateral Triangle"<<endl;
		else if(a != b && a != c && b != c)
		  cout<<"Scalene Triangle"<<endl;
		else
		  cout<<"Isosceles Triangle"<<endl; 
// this will determine the side type of the triangle according to the given value of sides
		perim = a + b + c;
		p=.5*perim;
		area=sqrt(p *(p - a)*(p - b)*(p - c)); 
		cout<<"Area: "<<area<<endl;
		cout<<"Perimiter: "<<perim<<endl;
// this will determine the value of the perimeter 
		if(A>0 && A<90 && B>0 && B<90 && C>0 && C<90)
			cout<<"Acute Triangle"<<endl;
		else if(A>90 || B>90 || C>90)
			cout<<"Obtuse Triangle"<<endl;
		else if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
			cout<<"Right Triangle"<<endl;
// this will determine the angle type of the triangle
		circumcenter = (a*b*c) / sqrt(((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c)));
		apothem = 2*area/perim;
		cout<<"Length of Apothem: "<<apothem<<endl;
		cout<<"Circumcenter: "<<circumcenter<<endl;
// this will determine the circumcenter and apothem of the triangle based on the given values of sides
	}
	else
		cout<<"Not a triangle";
	return 0;
}
