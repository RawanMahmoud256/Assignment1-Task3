// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 3 - Problem 14
// Program: Task3-5
// Purpose: implement the function split to split one string to vector of strings
// Author:  Rawan Mahmoud
// Date:   6 October 2018
// Version: 3.0

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> split(string target, string delimiter);

int main()
{
    vector<string> str;
    //str=split("10,20,30", ",");
    str=split("do re mi fa so la ti do", " ");
    for(int i=0 ; i<str.size() ; i++){
        cout<<"'"<< str[i] <<"' ";
    }
    return 0;
}
//this function split to divide one string into a vector of the strings by the string delimiter.
vector<string> split(string target, string delimiter){
    string str="";
    vector<string> strings ;
    char Delimiter[delimiter.size()];
    delimiter.copy(Delimiter, delimiter.size()); //convert string into array of char
    for(int i=0 ; i<target.size() ; i++){
        if(target[i] == Delimiter[0]){ //check if there's a delimiter
            strings.push_back(str);
            str="";
        }
        else{
            str+=target[i];
        }
    }
    strings.push_back(str);

    return strings;
}

/*
Given the following header:
vector<string> split(string target, string delimiter);
implement the function split so that it returns a vector of the strings in
target that are separated by the string delimiter. For example:
split("10,20,30", ",")
should return a vector with the strings "10", "20", and "30". Similarly,
split("do re mi fa so la ti do", " ")
504 ChAPTER 8 / Strings and Vectors
solution to Programming
Project 8.14
VideoNote
should return a vector with the strings "do", "re", "mi", "fa", "so", "la",
"ti", and "do".
*/
