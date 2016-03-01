// Compare strings
//
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main ()
{
	// char key[] = "apple";
	// char buffer[80];
	// do {
	//    printf ("Guess my favorite fruit? ");
	//    fflush (stdout);
	//    scanf ("%79s",buffer);
	// } while (strcmp (key,buffer) != 0);
	// puts ("Correct answer!");
	// return 0;

	//char key1[] = "below";
	//char key2[] = "below";
	// if (strcmp (key1,key2) != 0){
	// 	std::cout << "iguales \n";
	// } else {
	// 	std::cout << "diferentes \n";
	// 	std::cout << key1 <<" \n";
	// 	std::cout << key2 << "\n";
	// }


	string key1 ("below");

	if (key1 == "below123"){
		std::cout << "iguales \n";	
	}else{
	
		std::cout << "diferentes \n";
		std::cout << key1 <<" \n";
	}


return 0;
}