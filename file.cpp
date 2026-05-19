#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x[500], y[500];
    int i = 0;
    for (int i = 0; i < 500; i++)
    {
        x[i] = double(rand() / (RAND_MAX + 1.0));
        y[i] = log(1 + cos(2 * x[i]) + sin(3 * x[i]));
        cout << "i= " << i << "\t" << x[i] << "\t" << y[i] << endl;
    }

    ofstream myfile;
    myfile.open("Graph.txt");
    for (i = 0; i < 500; i++)
    {
        myfile << "i= " << i << "\t" << x[i] << "\t" << y[i] << endl;
    }
    myfile.close();
    return 0;
}
