// Testing a thresholding algorithm
// for AirborneRadarQC code
//
// Raul Valenzuela
// December 2014

#include <iostream>
#include <string.h>

using namespace std;

int main()
{

	int gates = 10;

	int data [10] = {0,10,20,30,40,50,60,70,80,90};

	int threshdata1 [10] = {1,2,2,2,3,5,5,5,8,9};
	int threshdata2 [10] = {6,6,6,7,7,7,8,8,8,9};
	double threshdata3 [10] = {0.5,0.6,0.7,0.8,0.9,0.9,1.1,1.1,1.2,1.3};

	int threshold1 [2] = {1,0};
	int threshold2 [2] = {8,0};
	double threshold3 [2] = {0.5,1.0};

	string direction1 ("below");
	string direction2 ("above");
	string direction3 ("outside");
	


	// Creates a mask using thresholding
	for (int n=0; n < gates; n++) {

		int mask=0;

		// field 1
		if (direction1 == "below"){
			if (threshdata1[n] <= threshold1[0]) mask += 1;
		} 
		else if (direction1 == "above"){
			if (threshdata1[n] >= threshold1[0]) mask += 1;
		}
		else if (direction1 == "outside"){
			if (threshdata1[n] <= threshold1[0] && threshdata1[n] >= threshold1[1]) mask += 1;	
		}
        	//std::cout << threshdata1[n] << "\t" << direction1 << "\t" << threshold1[0] << "\t" << mask1 << "| \t";

        	// field 2
		if (direction2 == "below"){
			if (threshdata2[n] <= threshold2[0]) mask += 1;
		} 
		else if (direction2 == "above")	{
			if (threshdata2[n] >= threshold2[0]) mask += 1;
		}
		else if (direction2 == "outside"){
			if (threshdata2[n] <= threshold2[0] && threshdata2[n] >= threshold2[1]) mask += 1;
		}
		//std::cout << threshdata2[n] << "\t" << direction2 << "\t"  << threshold2[0] << "\t" << mask2 << "| \t";

		// field 3
		if (direction3 == "below"){
			if (threshdata3[n] <= threshold3[0]) mask += 1;
		} 
		else if (direction3 == "above"){
			if (threshdata3[n] >= threshold3[0]) mask += 1;
		}
		else if (direction3 == "outside"){
			if (threshdata3[n] <= threshold3[0] || threshdata3[n] >= threshold3[1]) mask += 1;
		}
		//std::cout << threshdata3[n] << "\t" << threshold3[0] << "\t" <<  threshold3[1] << "\t" << mask3 << "| \n";
        
		if (mask !=0) data[n] = -32768.0;
		
		//std::cout << threshdata1[n] << "\t" <<threshdata2[n] <<"\t" <<threshdata3[n] <<"\t" << mask << "\t" << data[n] << "\n";
		std::cout << data[n] <<  "\n";
	}

return 0;
}