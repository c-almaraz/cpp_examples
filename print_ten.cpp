//
//	Example for:
//		printing on screen
//		variable
//		pointer
//
//	Raul Valenzuela
// 2014


#include <iostream>

int main(int argc, char* argv[])
{
	double y=0.0;
	double* p_y;
	for (int i=0; i<10; i++){

		//print different values y using same memory location p_y
		p_y=&y;
		std::cout << y << "\t" << p_y <<"\n";	
		y=*p_y+1.0;
		
	}
	
	return 0;
}
