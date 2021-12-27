/**
@mainpage

This is a test application.

@author Test
@date 10/21/2021
@version 1.0
*/

/** @file */


#include <iostream>

using namespace std;

/**
* This is a brief doxygen description
*
* Long Description
*/
int test_function (int test);

int test_function (int test){
  if (test == 1) return 2;
  else return 0;
}

int main () {
  cout << "Test" << endl;
}
