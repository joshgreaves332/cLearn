//Simple Function

#include <iostream>
#include <string>
#include <sstream>


using namespace std; //this contains the cout cin variables

int getSum(int a, int b){
		int result;
		result = a+b; // + '\n';
		return result;
	}


int main() {
	
	stringstream strOutput;
	stringstream strSize;
	int input1;
	int input2;
	int intOutput;
	int intSizeOutput;
	
	printf("Please input starting number: \n");
	cin>>input1;
	printf("Please input number to add to it: \n");
	cin>>input2;
	
	intOutput = getSum(input1, input2);
	intSizeOutput = sizeof(short int);
	
	strOutput << intOutput;
	strSize << intSizeOutput;  //It seems int is equivalent to long int
	
	cout << "Total is: " << strOutput.str() << "\n";
	cout <<  "Size of Datatype is: " << strSize.str() << "\n";

	
	return 0;
	
}


