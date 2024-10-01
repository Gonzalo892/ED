```c++
  
#include <iostream>
#include <vector>
using namespace std;
//Funcion 
void imprime(vector<int> v);


int main()
{

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	imprime(v);
}
//Definiciones de la funcion
void imprime(vector<int> v)
{
	for (auto elemento : v)
	{
		cout << elemento << " , ";
	}
	cout << endl;
	system("pause");
	system("cls");

}
