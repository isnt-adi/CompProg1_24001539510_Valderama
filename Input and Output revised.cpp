#include <iostream>
#include <string.h>
using namespace std;

int main() {

string name, birthday, address;
int age;

cout << "Please Enter Your Name: ";
getline(cin, name);

cout << "Please Enter Your Birthday: ";
getline(cin, birthday);

cout << "Please Enter Your Age: ";
cin >> age;
cin.ignore();

cout << "Please Enter Your Address: ";
getline(cin, address);

cout << "My name is " << name << ", My birthday is on " << birthday << " and currently I am " << age << " years old. I'm from " << address ;

return 0;
}