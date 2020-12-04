
#include <iostream>

using namespace std;

struct Book {
	auto title = "순위";
	auto author = "미상";
	auto price = 10000;

};

int main()
{

	Book webBook = {};


	cout << "Hello World! book title:" << webBook.title << endl;

	
	return 0;
}
