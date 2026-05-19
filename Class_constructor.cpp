#include <iostream>
using namespace std;
class emp
{
 public:
  int id;
  string name;
  double sal;
  emp(int lid, string lname, double lsal)
  {
    id = lid;
    name = lname;
    sal = lsal;
  }
  ~emp(){};
  void disp()
  {
    cout << "Id\t" << id << "\tName\t" << name << "\tsallary\t" << sal << endl;
  }
};
int main()
{
  emp s1(10, "Ram", 10000);
  emp s2(15, "Shyam", 20000);
  emp s3(28, "Sujoy", 15000);
  emp s4(34, "Avik", 25000);
  s1.disp();
  s2.disp();
  s3.disp();
  s4.disp();
  return 0;
}