#include<iostream>
#include<cmath>
using namespace std;
struct cone
{
    float r;
    float h;
};
void cone_vol(cone);
int main(){
    cone c;
    first:
    cout<<"Enter the radius and height "<<endl;
    cin>>c.r>>c.h;
    cout<<"Radius ="<<c.r<<", Height ="<<c.h<<endl;
    cone_vol(c);
    goto first;
    return 0;
}
void cone_vol (cone c){
    float vol;
    vol=(1.0/3.0)*M_PI*pow(c.r,2)*c.h;
    cout<<"\nThe volumn of the cone is "<<vol<<endl;
}