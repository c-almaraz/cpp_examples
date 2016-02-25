#include <cstdio>
#include <string>
using namespace std;

// void func( int & i)
// {
// 	i = 73;
// 	printf("value is %d\n", i);
// }

// int main( int argc, char ** argv)
// {
// 	int x=42;
// 	puts("this is main()");
// 	func(x);
// 	printf("x is %d\n", x);
// 	return 0;
// }

void func( const string & fs)
{
	/* passing function parameters by reference 
	   like this avoids overflow of stack, 
	   it's the preferred method; 
	   almost always constant
	*/
	printf("value is %s\n", fs.c_str());
}

int main( int argc, char ** argv)
{
	string s = "Hello I'm a string";
	puts("this is main()");
	func(s);
	printf("string is %s\n", s.c_str());
	return 0;
}