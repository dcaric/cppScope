#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	string inputVariable;
	printf("************************************ \n");
	printf("Upisi neki podatak: ");
	//cin >> inputVariable;
	getline(cin, inputVariable);

	printf("************************************ \n");
	printf("Super upisala si u inputVariable:[%s] \n", inputVariable.c_str());

	if (inputVariable == "dalje" ) {
		// this is block of code
		string inputVariable;
		printf("************************************ \n");
		printf("Upisi jos jedan podatak: ");
		//cin >> inputVariable;
		getline(cin, inputVariable);
		printf("Super upisala si u inputVariable:[%s] \n", inputVariable.c_str());
	}


	printf("************************************ \n");
	printf("Da vidimo sto je u sada nputVariable:[%s] \n", inputVariable.c_str());


}