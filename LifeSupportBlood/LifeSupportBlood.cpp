#include <iostream>
#include <cstring>

using namespace std;

class blood_bank
{
public:
    static int bloodgroup[8];
};

int blood_bank::bloodgroup[] = { 0, 0, 0, 0, 0, 0, 0, 0 };

class admin
{

public:
    void display();

    admin()
    {
        char s[20] = "subiksha";
        char str[20];
        cout << "Enter password:";
        cin >> str;
        if (strcmp(s, str) == 0)
        {
            cout << "Welcome!!!" << endl;
            display();
        }
        else
            cout << "\n" << "Please contact Subiksha to become an admin" << endl;
    }
};

void admin::display()
{
    cout << "A +ve:" << blood_bank::bloodgroup[0] << endl;
    cout << "O +ve:" << blood_bank::bloodgroup[1] << endl;
    cout << "B +ve:" << blood_bank::bloodgroup[2] << endl;
    cout << "AB +ve:" << blood_bank::bloodgroup[3] << endl;

    cout << "A -ve:" << blood_bank::bloodgroup[4] << endl;
    cout << "O -ve:" << blood_bank::bloodgroup[5] << endl;
    cout << "B -ve:" << blood_bank::bloodgroup[6] << endl;
    cout << "AB -ve:" << blood_bank::bloodgroup[7] << endl;
}

class patient
{
    char name[50];
    char blood_group[20];

public:
    void save();
    void show(int);
};

void patient::save()
{
    int c;
    cout << "Enter your name:";
    cin >> name;

    cout << "Enter type of blood group you are looking for:" << endl;

    cout << "0 = A positive" << endl
        << "1 = O positive" << endl
        << "2 = B positive" << endl
        << "3 = AB positive" << endl
        << "4 = A negative" << endl
        << "5 = O negative" << endl
        << "6 = B negative" << endl
        << "7 = AB negative" << endl;

    cin >> c;

    cout << "You will be donated with 1 blood packet" << endl
        << "Please login again to get 1 more blood packet" << endl;

    show(c);
}

void patient::show(int c)
{
    cout << "Available blood groups compatible with the entered blood group:" << endl;
    if (c == 0)
    {
        cout << "A +ve:" << blood_bank::bloodgroup[0] << endl;
        cout << "A -ve:" << blood_bank::bloodgroup[4] << endl;
        cout << "O +ve:" << blood_bank::bloodgroup[1] << endl;
        cout << "O -ve:" << blood_bank::bloodgroup[5] << endl;

        if (blood_bank::bloodgroup[0] > 0)
            blood_bank::bloodgroup[0]--;
        else if (blood_bank::bloodgroup[4] > 0)
            blood_bank::bloodgroup[4]--;
        else if (blood_bank::bloodgroup[1] > 0)
            blood_bank::bloodgroup[2]--;
        else if (blood_bank::bloodgroup[5] > 0)
            blood_bank::bloodgroup[6]--;
        else
            cout << "Compatible blood group not available";

    }

    else if (c == 1)
    {
        cout << "O +ve:" << blood_bank::bloodgroup[1] << endl;
        cout << "O -ve:" << blood_bank::bloodgroup[5] << endl;


        if (blood_bank::bloodgroup[1] > 0)
            blood_bank::bloodgroup[1]--;
        else if (blood_bank::bloodgroup[5] > 0)
            blood_bank::bloodgroup[5]--;
        else
            cout << "Compatible blood group not available";


    }

    else if (c == 2)
    {
        cout << "B +ve:" << blood_bank::bloodgroup[2] << endl;
        cout << "B -ve:" << blood_bank::bloodgroup[6] << endl;
        cout << "O +ve:" << blood_bank::bloodgroup[1] << endl;
        cout << "O -ve:" << blood_bank::bloodgroup[5] << endl;

        if (blood_bank::bloodgroup[2] > 0)
            blood_bank::bloodgroup[2]--;
        else if (blood_bank::bloodgroup[6] > 0)
            blood_bank::bloodgroup[6]--;

        else if (blood_bank::bloodgroup[1] > 0)
            blood_bank::bloodgroup[1]--;
        else if (blood_bank::bloodgroup[5] > 0)
            blood_bank::bloodgroup[5]--;
        else
            cout << "Compatible blood group not available";

    }

    else if (c == 3)
    {
        cout << "A +ve:" << blood_bank::bloodgroup[0] << endl;
        cout << "A -ve:" << blood_bank::bloodgroup[4] << endl;
        cout << "B +ve:" << blood_bank::bloodgroup[2] << endl;
        cout << "B -ve:" << blood_bank::bloodgroup[6] << endl;
        cout << "AB +ve:" << blood_bank::bloodgroup[3] << endl;
        cout << "AB -ve:" << blood_bank::bloodgroup[7] << endl;
        cout << "O +ve:" << blood_bank::bloodgroup[1] << endl;
        cout << "O -ve:" << blood_bank::bloodgroup[5] << endl;

        if (blood_bank::bloodgroup[0] > 0)
            blood_bank::bloodgroup[0]--;
        else if (blood_bank::bloodgroup[4] > 0)
            blood_bank::bloodgroup[4]--;
        else if (blood_bank::bloodgroup[2] > 0)
            blood_bank::bloodgroup[2]--;
        else if (blood_bank::bloodgroup[6] > 0)
            blood_bank::bloodgroup[6]--;
        else if (blood_bank::bloodgroup[3] > 0)
            blood_bank::bloodgroup[3]--;
        else if (blood_bank::bloodgroup[7] > 0)
            blood_bank::bloodgroup[7]--;
        else if (blood_bank::bloodgroup[1] > 0)
            blood_bank::bloodgroup[1]--;
        else if (blood_bank::bloodgroup[5] > 0)
            blood_bank::bloodgroup[5]--;
        else
            cout << "Compatible blood group not available";


    }
    else if (c == 4)
    {
        cout << "A -ve:" << blood_bank::bloodgroup[4] << endl;
        cout << "O -ve:" << blood_bank::bloodgroup[5] << endl;

        if (blood_bank::bloodgroup[4] > 0)
            blood_bank::bloodgroup[4]--;

        else if (blood_bank::bloodgroup[5] > 0)
            blood_bank::bloodgroup[5]--;

        else
            cout << "Compatible blood group not available";

    }

    else if (c == 5)
    {
        cout << "B -ve:" << blood_bank::bloodgroup[6] << endl;
        cout << "O -ve:" << blood_bank::bloodgroup[5] << endl;

        if (blood_bank::bloodgroup[6] > 0)
            blood_bank::bloodgroup[6]--;
        else if (blood_bank::bloodgroup[5] > 0)
            blood_bank::bloodgroup[5]--;
        else
            cout << "Compatible blood group not available";


    }

    else if (c == 6)
    {
        cout << "A +ve:" << blood_bank::bloodgroup[0] << endl;
        cout << "A -ve:" << blood_bank::bloodgroup[4] << endl;
        cout << "B +ve:" << blood_bank::bloodgroup[2] << endl;
        cout << "B -ve:" << blood_bank::bloodgroup[6] << endl;
        cout << "AB +ve:" << blood_bank::bloodgroup[3] << endl;
        cout << "AB -ve:" << blood_bank::bloodgroup[7] << endl;
        cout << "O +ve:" << blood_bank::bloodgroup[1] << endl;
        cout << "O -ve:" << blood_bank::bloodgroup[5] << endl;


        if (blood_bank::bloodgroup[0] > 0)
            blood_bank::bloodgroup[0]--;
        else if (blood_bank::bloodgroup[4] > 0)
            blood_bank::bloodgroup[4]--;
        else if (blood_bank::bloodgroup[2] > 0)
            blood_bank::bloodgroup[2]--;
        else if (blood_bank::bloodgroup[6] > 0)
            blood_bank::bloodgroup[6]--;
        else if (blood_bank::bloodgroup[3] > 0)
            blood_bank::bloodgroup[3]--;
        else if (blood_bank::bloodgroup[7] != 0)
            blood_bank::bloodgroup[7]--;
        else if (blood_bank::bloodgroup[1] > 0)
            blood_bank::bloodgroup[1]--;
        else if (blood_bank::bloodgroup[5] > 0)
            blood_bank::bloodgroup[5]--;
        else
            cout << "Compatible blood group not available";

    }

    else if (c == 7)
    {
        cout << "A -ve:" << blood_bank::bloodgroup[4] << endl;
        cout << "B -ve:" << blood_bank::bloodgroup[6] << endl;
        cout << "O -ve:" << blood_bank::bloodgroup[5] << endl;
        cout << "AB -ve:" << blood_bank::bloodgroup[7] << endl;


        if (blood_bank::bloodgroup[4] > 0)
            blood_bank::bloodgroup[4]--;

        else if (blood_bank::bloodgroup[6] > 0)
            blood_bank::bloodgroup[6]--;

        else if (blood_bank::bloodgroup[5] > 0)
            blood_bank::bloodgroup[5]--;

        else if (blood_bank::bloodgroup[7] > 0)
            blood_bank::bloodgroup[7]--;
        else
            cout << "Compatible blood group not available";


    }

}

class donor
{
    char name[50];
    char sex[15];

    struct date
    {
        int day;
        int month;
        int year;
    } date;

    char blood_group[20];
    int phone_no[15];
    int x, c;

public:
    void save();
    void display();
};

void donor::save()
{
    cout << "Enter your name:";
    cin >> name;

    cout << "Enter your sex:";
    cin >> sex;

    cout << "Enter date(DD MM YY):";
    cin >> date.day >> date.month >> date.year;

    cout << "Enter type of blood group you are donating:" << endl;

    cout << "0 = A positive" << endl
        << "1 = O positive" << endl
        << "2 = B positive" << endl
        << "3 = AB positive" << endl
        << "4 = A negative" << endl
        << "5 = O negative" << endl
        << "6 = B negative" << endl
        << "7 = AB negative" << endl;

    cin >> c;

    cout << "How many packets of blood are you donating:";
    cin >> x;

    blood_bank::bloodgroup[c] += x;

    char ch;
    cout << "Do you want your information to be displayed now (Y/N):";
    cin >> ch;

    if (ch == 'Y' || ch == 'y')
        display();
}

void donor::display()
{
    cout << "name:";
    cout << name << endl;

    cout << "Date(DD MM YY):";
    cout << date.day << " ";
    cout << date.month << " ";
    cout << date.year << endl;

    cout << "Blood group:";

    switch (c)
    {
        // A, O+, B+, AB+, A-, O-, B-, AB-
    case 0:
        cout << "0 = A positive" << endl;
        break;
    case 1:
        cout << "1 = O positive" << endl;
        break;
    case 2:
        cout << "2 = B positive" << endl;
        break;
    case 3:
        cout << "3 = AB positive" << endl;
        break;
    case 4:
        cout << "4 = A negative" << endl;
        break;
    case 5:
        cout << "5 = O negative" << endl;
        break;
    case 6:
        cout << "6 = B negative" << endl;
        break;
    case 7:
        cout << "7 = AB negative" << endl;
    }

    cout << "Packets of blood:" << x << endl;
}

int main()
{
    cout << "\n\t\t\t\t=================================================";
    cout << "\n\t\t\t\t|   Life Support Blood Bank Management System   |" << endl;
    cout << "\t\t\t\t=================================================";

    int c = 0;

    while (c != 4)
    {
        cout << "\n" << endl;
        cout << "Enter 1 if you are the admin,\n      2 if you are a donor,\n      3 if you are a patient, or\n      4 if you want to exit:   ";
        cin >> c;
        switch (c)
        {
        case 4:
            break;

        case 1:
        {
            admin t;
            char c;
            break;
        }

        case 2:
        {
            cout << "Welcome donor!!!" << endl;
            donor d;
            d.save();
            break;
        }

        case 3:
        {
            cout << "Welcome patient!!!" << endl;
            patient p;
            p.save();
            break;
        }
        }
    }

    return 0;
}
