#include<iostream>
using namespace std;
float area(int);
int area(int,int);
int main()
{
     int r;
    cout<<"Enter the radius of a circle :";
    cin>>r;
    cout<<"Area of circle is"<<area(r)<<endl;

    int l,b;
    cout<<"Enter the length of rectangle:";
    cin>>l;
	cout<<"Enter the breath of rectangle:";
    cin>>b;
    cout<<"Area of rectangle is "<<area(l,b);
}
float area(int r)
{

    return(3.141*r*r);

}
int area (int l,int b)
{

    return(l*b);
}
