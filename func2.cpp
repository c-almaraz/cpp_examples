#include <cstdio>
#include <string>
using namespace std;

// this func returns a constant reference
const string & func()
{
	/* avoid storing value in stack (automatic storage, default);
	   instead store in heap (static storage, more secure)
	*/

	/* this is automatic storage; it works if
	   func returns a string value instead of 
	   a constant reference (bad practice) */
	// string s = "This is a static string"; 
	
	// this static storage
	static string s = "This is a static string";
	return s;
}

int main( int argc, char ** argv)
{
	string s = "Hello I'm a string";
	puts("this is main()");
	printf("returned value is %s\n", func().c_str());
	return 0;
}