#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long result = 0;
    string color, resistance;

    for (int i = 0; i < 3; i++) {
        cin >> color;
        if (color == "black") {
            if (i == 1) {
                resistance += "0";
            }
            else if (i == 2) {
                result = stoll(resistance) * 1;
            }
        }
        else if (color == "brown") {
            if (i == 2) {
                result = stoll(resistance) * 10;
            }
            else {
                resistance += "1";
            }
        }
        else if (color == "red") {
            if (i == 2) {
                result = stoll(resistance) * 100;
            }
            else {
                resistance += "2";
            }
        }
        else if (color == "orange") {
            if (i == 2) {
                result = stoll(resistance) * 1000;
            }
            else {
                resistance += "3";
            }
        }
        else if (color == "yellow") {
            if (i == 2) {
                result = stoll(resistance) * 10000;
            }
            else {
                resistance += "4";
            }
        }
        else if (color == "green") {
            if (i == 2) {
                result = stoll(resistance) * 100000;
            }
            else {
                resistance += "5";
            }
        }
        else if (color == "blue") {
            if (i == 2) {
                result = stoll(resistance) * 1000000;
            }
            else {
                resistance += "6";
            }
        }
        else if (color == "violet") {
            if (i == 2) {
                result = stoll(resistance) * 10000000;
            }
            else {
                resistance += "7";
            }
        }
        else if (color == "grey") {
            if (i == 2) {
                result = stoll(resistance) * 100000000;
            }
            else {
                resistance += "8";
            }
        }
        else if (color == "white") {
            if (i == 2) {
                result = stoll(resistance) * 1000000000;
            }
            else {
                resistance += "9";
            }
        }
    }
    cout << result;

    return 0;
}