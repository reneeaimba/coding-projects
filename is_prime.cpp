#include <iostream>

using namespace std;

int main(){

	int choice;	
	do{
		int input;
		int difference;
		int number;
		//int choice;
		cout << "Enter a number greater than 0: " << endl;
		cin >> input;
		if (input < 0){
			int input;
			cout << "You have entered a number less than 0!" << endl;
		}
		else if(input == 5){
			cout << "This is a prime number!" << endl;
		}
		else if(input == 0){
			cout << "This is a prime number!" << endl;
		}
		else{
			for (difference = 2; difference <= input/2 ; difference++){
				if(input%difference == 0){
					number ++;
				}
			}
		}

		if(number > 1){
			cout << "the number is not prime" << endl;
		}
		else{
			cout << "The number is prime" << endl;
		}
		//int choice;	
		cout << "do you want to check again? type 0 for yes and 1 for no: " << endl;
		cin >> choice;
	}while(choice == 0);

	return 0;
}
