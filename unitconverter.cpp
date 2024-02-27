#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main(int nNumbersofArgs, char* pszArgs[])
{
    string var, var1;
    float cm, mile,kilometer, inch, meter, AU, fahrenheit, celsius, foot, quit, i, pounds, kilograms;

    i = 1;
    while (i <= 1000000000) {
        cout << "Enter the starting unit, For a list of all units and commands, type 'list'. To exit, type 'quit'. " << endl;
        cin >> var;
        cout << endl;

        if (var == "quit"){
            return 0;
        }
        if (var == "list"){
                   cout << "For cm to inches type 'centimeter'." << endl;
                   cout << "For inch to cm type 'inch'." << endl;
                   cout << "For miles to km type 'mile'." << endl;
                   cout << "For km to miles type 'kilometer'." << endl;
                   cout << "For meters to AU or feet type 'meter'." << endl;
                   cout << "For AU to meters type 'AU'." << endl;
                   cout << "For feet to meters type 'feet'." << endl;
                   cout << "For fahrenheit to celsius type 'fahrenheit'." << endl;
                   cout << "For celsius to fahrenheit type 'celsius'." << endl;
                   cout << "For pounds to kilograms type 'pounds'." << endl;
                   cout << "For kilograms to pounds type 'kilograms'."  << endl;
        }
        if (var == "inch"){
            cout << "Please enter the number of inches" << endl;
            cin >> inch;
            cm = inch * 2.54;
            cout << inch <<" inches is equal to " << cm <<"cm"<< endl;
        }
        if (var == "centimeter"){
            cout << "Please enter number of centimeters" << endl;
            cin >> cm;
            inch = cm / 2,54;
            cout << cm << " centimeters is equal to " << inch << " inches" << endl;
        }
        if (var == "miles"){
            cout << "PLease enter number of miles" << endl;
            cin >> mile;
            kilometer = mile * 1.609344;
            cout << mile << " miles is equal to " << kilometer << " kilometers" << endl;
        }
        if (var == "kilometer"){
            cout << "Please enter number of kilometers" << endl;
            cin >> kilometer;
            mile = kilometer / 1.609344;
            cout << kilometer << " kilometers is equal to " << mile << " miles" << endl;
        }
    }
        if(var == "meter"){
            cout << "Please select which unit you would like to convert meters to, 'AU' or 'feet'. " << endl;
            if(var1 == "AU"){
                cout << "Please enter number of meters" << endl;
                cin >> meter;
                AU = meter / 149598000000;
                cout << meter << " meters is equal to " << AU << " astronaumical units " << endl;
             if(var1 == "feet"){
                 cout << "PLease enter number of meters" << endl;
                 cin >> meter;
                 foot = meter * 3.2808399;
                 cout << meter << " meters is equal to " << foot << " feet" << endl;
             }
            }
        }

        if(var == "AU"){
            cout << "Please enter the number of astronaumical units" << endl;
            cin >> AU;
            meter = AU * 149598000000;
            cout << AU << " astronaumical units is equal to " << meter << " meters" << endl;
        }
        if(var == "feet"){
            cout << "Please enter the number of feet" << endl;
            cin >> foot;
            meter = foot / 3.2808399;
            cout << foot << " feet is equal to " << meter << " meters" << endl;
        }

        if(var == "fahrenheit"){
        cout << "Please enter the degrees in fahrenheit" << endl;
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * ( 5 /9);
        cout << fahrenheit << " degrees fahrenheit is equal to " << celsius << " degrees celsius" << endl;
        }

        if(var == "celsius"){
            cout << "Please enter the degrees in celsius" << endl;
            cin >> celsius;
            fahrenheit = ( celsius * (9 / 5)) + 32;
            cout << celsius << " celsius is equal to " << fahrenheit << " degrees fahrenheit" << endl;
        }

        if(var == "pounds"){
            cout << "Please enter the number of pounds" << endl;
            cin >> pounds;
            kilograms = pounds * 0.45359237;
            cout << pounds << " pounds is equal to" << kilograms << " kilograms" << endl;
        }

        if(var == "kilograms"){
            cout << "Please enter the number of kilograms" << endl;
            cin >> kilograms;
            pounds = kilograms * 2.2;
            cout << kilograms << " kilograms is equal to" << pounds << " pounds" << endl;
        }

        i++;

    return 0;
    }
