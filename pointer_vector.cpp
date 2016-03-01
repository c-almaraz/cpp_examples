//
//	Example for:
// 		vector pointers
//
//	Raul Valenzuela
// 2014


#include <iostream>

int main(int argc, char* argv[])
{

	// & <-- this symbol calls address of a variable

	double* p_x;  // <-- declare double precision pointer
	double* p_y;
	p_x=new double [10]; // <-- creates 10 new memory addresses of double precision
	p_y=new double [10];
	
	for (int i=0;i<10;i++){
		p_x[i]=((double)(i)); // assigns elements to array
		p_y[i]=2.0*p_x[i];
		std::cout << p_x[i] << "\t" << &p_x[i] << "\t" << p_y[i] << "\t"<< &p_y[i] <<"\n";	
	}
	delete[] p_x;
	delete[] p_y;

	return 0;
}
