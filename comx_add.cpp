#include<iostream>
using namespace std;
struct comx
{
    float a;
    float b;
};
void comxadd(comx c,int n){
    float suma = 0.0, sumb=0.0;
    int i=0;
        cout<<"Enter the complex number to add"<<endl;
    while (i<n)
    {
        cin>>c.a>>c.b;
        suma+=c.a;
        sumb+=c.b;
        i++;
    }
    cout<<"The sum is "<<suma<<" + "<<sumb<<" i"<<endl;
}
int main(){
    comx c1;
    int n;
    cout<<"Enter the number of complex numbers for addition:"<<endl;
    cin>>n;
    comxadd(c1,n);
    return 0;
}