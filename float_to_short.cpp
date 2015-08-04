
#include <iostream>
using namespace std;

int main()
{
	float array[5];
	array[0]=1.1;
	array[1]=1.4;
	array[2]=1.4;
	array[3]=1.5;
	array[4]=1.3;

	float val=10.0;

	float* data=array;

	for (int n=0;n<5;n++)
		data[n]=data[n]*val;

	for (int n=0;n<5;n++)
		cout << data[n] << "\n";

	return 0;

}