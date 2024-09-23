#ifndef DEFS_H
#define DEFS_H

#include "Date.h"

class File{
    public:
        // Constructors
        File(string name, string content, Date& date);

        // print
        void print();
        void printContents();

        // others
        bool lessThan(Date& d);

    private:
        string name;
        string content;
        Date date;

};

#endif
