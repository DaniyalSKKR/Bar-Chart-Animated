#include <iostream>
#include "barchartanimate.h"
using namespace std;


bool testBarDefaultConstructor() {
	Bar b;
    if (b.getName() != "NoName") {
    	cout << "testBarDefaultConstructor: getName failed" << endl;
    	return false;
    } else if (b.getValue() != -1) {
    	cout << "testBarDefaultConstructor: getValue failed" << endl;
    	return false;
    } else if (b.getCategory() != "NoCateg") {
    	cout << "testBarDefaultConstructor: getCategory failed" << endl;
    	return false;
    }
    cout << "testBarDefaultConstructor: all passed!" << endl;
    return true;
}

bool testBarParamConstructor() {
	Bar b("Chicago", 9234324, "US");
    if (b.getName() != "Chicago") {
    	cout << "testBarParamConstructor: getName failed" << endl;
    	return false;
    } else if (b.getValue() != 9234324) {
    	cout << "testBarParamConstructor: getValue failed" << endl;
    	return false;
    } else if (b.getCategory() != "US") {
    	cout << "testBarParamConstructor: getCategory failed" << endl;
    	return false;
    }
    cout << "testBarParamConstructor: all passed!" << endl;
    return true;
}
//-------------------------------------------------------------
bool testBarCharDefaultConstructor() {
	BarChart bc;
    if (bc.getSize() != 0) {
    	cout << "testBarCharDefaultConstructor: getSize failed" << endl;
    	return false;
     } //else if (b.getValue() != 0) {
    // 	cout << "testBarCharDefaultConstructor: getValue failed" << endl;
    // 	return false;
    // } else if (b.getCategory() != "NoCateg") {
    // 	cout << "testBarDefaultConstructor: getCategory failed" << endl;
    // 	return false;
    // }
    // cout << "testBarDefaultConstructor: all passed!" << endl;
    // return true;
}
bool testBarCharParamConstructor() {
	Bar b("Chicago", 9234324, "US");
  BarChart bc(5);
  if (bc.getSize() != 5) {
    	cout << "testBarCharDefaultConstructor: getSize failed" << endl;
    	return false;
     }  //else if (b.getValue() != 9234324) {
    // 	cout << "testBarParamConstructor: getValue failed" << endl;
    // 	return false;
    // } else if (b.getCategory() != "US") {
    // 	cout << "testBarParamConstructor: getCategory failed" << endl;
    // 	return false;
    // }
    // cout << "testBarParamConstructor: all passed!" << endl;
    // return true;
}


int main() {
	testBarDefaultConstructor();
	testBarParamConstructor();
	
    return 0;
}