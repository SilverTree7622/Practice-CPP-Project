
#include <iostream>

using namespace std;

struct Book {
	string title;
	string author;
	int price;

};

int main()
{

	struct Book webBook = {"언어순위", "은빛개구리", 16000};


	cout << "Hello World! book title:" << webBook.title << endl;

	
	return 0;
}
