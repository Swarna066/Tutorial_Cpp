#include <iostream>
#include<math.h>
using namespace std;

void patern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << "*";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
void patern3(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
        {
            star = 2 * n - i;
        }
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void patern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int start = 0;
        if (i % 2 == 1)
            start = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start = 1-start;
        }
        cout << endl;
    }
}
void patern5(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int k = 0; k <2*(n-i); k++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        
    }
    

}
void patern6(int n){
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++, count++)
        {
            cout << count << " ";
        }
        cout << endl;
        
    }
    
}
void patern7(int n){
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j <'A'+ i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
        
    }
}
void patern8(int n){
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'+(n-i); j <='A'+ (n - 1); j++)
        {
            cout << j << " ";
        }
        cout << endl;
        
    }
}
void patern9(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j >= 1; j--)
        {
            cout << "*";
        }

        for (int k = 1; k <= 2*(i-1); k++)
        {
            cout << " ";
        }

        for (int l = n - i + 1; l >= 1; l--)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int k = 1; k <= 2*(n - i) ; k++)
        {
            cout << " ";
        }

        for (int l = 1; l <=i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void patern10(int n){
    for (int i = 1; i <= 2*n - 1; i++)
    {
        int star = i;
        int gap = 2*(n-i);
        if(i>n) {
            gap = 2*(i-n);
            star = 2*n - i;
        }
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= gap ; k++)
        {
            cout << " ";
        }

        for (int l = 1; l <=star; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}
void patern11(int n){
    for (int i = 0; i < n; i++)
    {   
        for (int j = 0; j < n; j++)
        {
            if(i == 0 || i == n-1 || j ==0 || j == n-1)
                cout<< "*";
            else cout << " ";
        }
        cout << endl;
        
    }
    
}
void patern12(int n){
    for (int i = 0; i < 2*n-1; i++)
    {   
        for (int j = 0; j < 2*n-1; j++)
        {
            int top = i;
            int down = 2*n -2-i;
            int right = 2*n-2 - j;
            int left = j;
            cout << min(min(top, down), min(right, left));
        }
        cout << endl;
        
    }
    
}

int main()
{
    int n;
    cin >> n;
    patern2(n);
    return 0;
}