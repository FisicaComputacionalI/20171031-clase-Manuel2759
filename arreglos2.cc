#include <iostream>
using namespace std;
int main()
{
  size_t talla=16;
  int sum=0;
  int *edad=new int[talla];
  for (int i=0; i<talla; i++)
    {
      cout <<"¿Qué edad tienes?" <<endl;
      cin>>edad[i];
    }
  for (int j=0; j<talla; j++)
    sum+=(edad[j]+3);
  for (int j=0; j<talla; j++)
    cout<<edad[j]<<",";
  cout<<endl;
  cout<<"El promedio de edad a la que se graduará este grupo es "<<sum/talla<<\
    endl;
  return 0;

}
