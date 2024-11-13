#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string name;
    int month, day, year, leapyear;
    
    cout << "Hello, I am Adi !!! Welcome to my first C++ application."; 
    cout << "\n\nHey ! What is your name: ";
    getline(cin, name);
    cout << "\nGood Day " << name << "! It's nice to meet you !";
    cout << "\n\nWhen is Your Birthday?";
    cout << "\n\nMonth: ";
    cin >> month;
    cout << "\nDay: ";
    cin >> day;
    cout << "\nYear: ";
    cin >> year;
    leapyear = year % 4 == 0;
    {
    if (leapyear == 1)
        cout << "\nNice your year is a leap year.";
    else
        cout << "\nNice your year is not a leap year.\n\n";
    }
    
    if (month ==1 && day> 21 || month ==2 && day<19)
        cout << "You are an aquarius.";
    else if (month ==2 && day> 20 || month ==3 && day<20)
        cout << "You are a pisces.";
    else if (month ==3 && day> 21 || month ==4 && day<20)
        cout << "You are a aries.";
    else if (month ==4 && day> 21 || month ==5 && day<21)
        cout << "You are a taurus.";
    else if (month ==5 && day> 22 || month ==6 && day<21)
        cout << "You are a gemini.";
    else if (month ==6 && day> 22 || month ==7 && day<22)
        cout << "You are a cancer.";
    else if (month ==7 && day> 23 || month ==8 && day<23)
        cout << "You are a leo.";
    else if (month ==8 && day> 24 || month ==9 && day<23)
        cout << "You are a virgo.";
    else if (month ==9 && day> 24 || month ==10 && day<23)
        cout << "You are a libra.";
    else if (month ==10 && day> 24 || month ==11 && day<22)
        cout << "You are a scorpio.";
    else if (month ==11 && day> 23 || month ==12 && day<21)
        cout << "You are a saggitarius.";
    else if (month ==12 && day> 22 || month ==1 && day<20)
        cout << "You are a capricorn.";
        
return 0;
}
