#include<iostream>
using namespace std;

void name_p(string name, int count){
    if(count > 3)
        return;
    cout<< name<<endl;
    count++;
    name_p(name, count);

}

int main(){
    int count= 1;
    string name;
    cin >> name;
    name_p(name, count);
    return 0;
}