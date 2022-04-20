
/* 
    Copyright Pavel Matusevich, 2022.
    Licensed under MIT License.
*/

#include <iostream>
#include <string>
#include <sysexits.h>

#define ERROR_CODE EX_USAGE
#define OK_CODE EX_OK
#define CANCEL_CODE 1

using namespace std;

int main(int argc, char *argv[]){
	if(argc != 2){
		cerr << "No more than one and no less than one argument is allowed"<<endl;
		return ERROR_CODE; 
	}
	string prompt(argv[1]);
	cout << prompt << " [y/N]: ";
	string consent;
	getline(cin, consent);
	if(consent == "y" || consent == "Y"){
		cout << "Confirmed." << endl;
		return OK_CODE; // Return "OK"
	} else {
		cout << "Cancelled." << endl;
		return CANCEL_CODE; // Return "not aggreed"
	}
}
