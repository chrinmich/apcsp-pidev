#include <iostream>
#define PI 3.14159
using namespace std;

float AreaOfCircle(float radius);

int main()
{
    float radius,diameter,circleArea;
    char choice='0';
    cout<<"\n\t\t\tFind Area Of Circle:"<<endl;

    {
    cout <<"\n\t\tEnter Radius To Find Area: ";
    cin>>radius;
    circleArea=AreaOfCircle(radius);
    }

    cout<<"\n\n\t\tArea of Circle is:->> "<<circleArea<<endl;
  //  return 0;
}

float AreaOfCircle(float radius)
{
    return (PI*(radius*radius));

}