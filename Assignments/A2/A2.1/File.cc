#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "File.h"

File::File(string name, string content, Date& date)
    : name(name), content(content), date(date) {
}

bool File::lessThan(Date& date){
    return date.lessThan(date);
}

void File::print(){
    cout << "File name: " << name << endl;
    cout << "Date Added: " << end;
    date.print();
}

void File::printContents(){
    cout << "File name: " << name << endl;
    cout << "Date Added: " << end;
    date.print();
    cout << "File Contents: " << content << endl;
}




