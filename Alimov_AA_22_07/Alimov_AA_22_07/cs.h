#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Checking.h"
using namespace std;

class cs
{
private:
    string name;
    int workshops;
    int working_workshops;
    int efficiency;


public:
    static int MaxID;
    cs()
    {
        name = "";
        workshops = 0;
        working_workshops = 0;
        efficiency = 0;
        ++MaxID;
    }

    void EditCS();

    string GetName() const;
    int GetWorkshop() const;
    int GetWorkingWorkshops() const;

    static int GetID();

    void EditingWorkshop();
    bool StartWorkshop();
    bool StopWorkshop();

    template<typename T>
    friend void ChangingID(T Object);
    friend istream& operator >> (istream& in, cs& NewCS);
    friend ostream& operator << (ostream& out, const cs& NewCS);
    friend ifstream& operator >> (ifstream& fin, cs& NewCS);
    friend ofstream& operator << (ofstream& fout, const cs& NewCS);
};

