#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;
#define pi 3.14159

int main(){
    double k,h,t,x=0,c;
    double y[10001],a[10001];
    int l,m,n;
    a[0]=0;
    cin>>k>>h>>l>>t>>c;

    for(m=0;m<=(l*100);m++){

        for(n=1;n<=100;n++){
            a[n]= (double)(((2*k*l*l)/(h*(l-h)*pi*pi*n*n)) * sin((n*pi*h)/l) * sin((n*pi*x)/l) * cos((n*pi*c*t)/l));
            a[n]=a[n]+a[n-1];
        }

        y[m]= a[100];
        x+=0.01;

        cout<<x<<"    "<<y[m]<<endl;
    }

    return 0;
}
