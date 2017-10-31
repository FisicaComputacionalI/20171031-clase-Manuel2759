#include <iostream>
#include <vector>
using namespace std;
int main()
{
  size_t talla=16;
  vector<int> edad(talla);
  int sum=0;
  for (int i=0; i<16; i++)
    {
      cout <<"¿Qué edad tienes?" <<endl;
      cin>>edad[i];
    }
  for (int j=0; j<16; j++)
    sum+=(edad[j]+3);
  for (int j=0; j<16; j++)
    cout<<edad[j]<<",";
  cout<<endl;
  cout<<"El promedio de edad a la que se graduará este grupo es "<<sum/16<<\
    endl;
  return 0;

}
