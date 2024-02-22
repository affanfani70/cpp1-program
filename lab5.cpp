//------>Problem_1
#include <iostream>
using namespace std;
class Publication
{
private:
    string title;
    float price;

public:
    void getdata()
    {
        cout << "Enter  title " << endl;
        cin >> title;
        cout << "Enter Price" << endl;
        cin >> price;
    };
    void putdata()
    {
        cout << title << endl;
        cout << price << endl;
    };
};
class Book : public Publication
{
private:
    int pgcount;

public:
    void getdata()
    {
        Publication ::getdata();
        cout << "pgcount" << endl;
        cin >> pgcount;
    };
    void putdata()
    {
        Publication ::putdata();
        cout << pgcount << endl;
    };
};
class Tape : public Publication
{
private:
    float ptime;

public:
    void getdata()
    {
        Publication ::getdata();

        cout << "ptime" << endl;
        cin >> ptime;
    };
    void putdata()
    {
        Publication ::putdata();

        cout << ptime;
    };
};
class sales : public Publication
{
private:
    int sale[3];

public:
    void getdata()
    {
        Publication::getdata();
        cout << "Enter Sale of first month " << endl;
        cin >> sale[0];
        cout << "Enter Sale of second month " << endl;
        cin >> sale[1];
        cout << "Enter of third month " << endl;
        cin >> sale[2];
    };
    void putdata()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Sales of Month: " << i + 1 << endl;
            cout << sale[i] << endl;
        }
    };
};

class Disk : public Publication
{
    enum Disks
    {
        CD,
        DVD
    };
    Disks userinp;

public:
    void getdata()
    {
        char inp;
        cout << "Enter c or d";
        cin >> inp;
        if (inp == 'c')
        {
            userinp = CD;
            cout << userinp;
        }
        else
        {
            userinp = DVD;
            cout << userinp;
        };
    }
};
int main()
{

    Disk d1;
    d1.getdata();

    return 0;
};

