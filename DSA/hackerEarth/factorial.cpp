#include <iostream>
using namespace std;
int main() {
	int num,factorial=1;
	cin >> num;    //Reading input from STDIN
	cout << "Input number is " << num << endl;	// Writing output to STDOUT
	for(int i=1;i<=num;i++)
	{
		factorial=factorial*i;
	}
	cout<<" "<<factorial<<endl;
}
