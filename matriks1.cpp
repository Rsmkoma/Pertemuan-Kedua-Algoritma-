#include <iostream> 
using namespace std; 

int main (){
	int M [3] [3];
	
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cin >> M [i] [j];
			}
		}
		cout << " Molla " << M [1] [1] << endl;
		return 0;
}