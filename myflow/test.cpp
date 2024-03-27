#include<iostream>
using namespace std;
struct auto_ass{
void sayMyName(auto_ass &var){
  cout<<"wtf"<<endl;
}

};
int main()
{
  auto_ass obj1;
  obj1.sayMyName(obj1);
  return 0;
}
