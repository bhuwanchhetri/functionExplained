
#include <iostream>
using namespace std;


int add(int x, int y){
	return x + y;
}
double add(double x, double y) {
	return  x + y;
}


int main()
{

	cout << add(3,5); //function called outside main.
	
	cout << "\n";
	cout << add(5.10, 6.13);


	return 0;

}
