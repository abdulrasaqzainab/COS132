#include <iostream>
using namespace std;

struct DepartureTime
{
    int hour; // between 0 and < 24
    int minu; // between 0 and < 60
};

struct Carriages
{
    int wagonNumber;
    Carriages* tail;
};

struct GauTrain
{
    DepartureTime t;
    Carriages front;
};

void trainManagement(GauTrain& dest, char c)
{
    if (c == 'T')
    {
        // Update departure time
        int h, m;
        cout << "Enter the amount of hours: ";
        cin >> h;
        while (h < 0 || h >= 24)
        {
            cout << "Enter a value between 0 and 24 for hours: ";
            cin >> h;
        }

        cout << "Enter the amount of minutes: ";
        cin >> m;
        while (m < 0 || m >= 60)
        {
            cout << "Enter a value between 0 and 60 for minutes: ";
            cin >> m;
        }

        dest.t.hour = h;
        dest.t.minu = m;
    }
    else if (c == 'L')
    {
        // Count the number of carriages
        int count = 0;
        Carriages* current = dest.front.tail;

        while (current != nullptr)
        {
            count++;
            current = current->tail;
        }

        cout << "The number of carriages available is: " << count << endl;
    }
    else if (c == 'C')
    {
        // Add new carriages
        int n;
        cout << "Enter the number of carriages to add: ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cout << "Enter carriage ID: ";
            int id;
            cin >> id;

            Carriages* newCarriage = new Carriages;
            newCarriage->wagonNumber = id;
            newCarriage->tail = nullptr;

            if (dest.front.tail == nullptr)
            {
                // If the train has no carriages yet
                dest.front.tail = newCarriage;
            }
            else
            {
                Carriages* current = dest.front.tail;

                while (current->tail != nullptr)
                {
                    current = current->tail;
                }

                current->tail = newCarriage;
            }
        }
    }
}

int main()
{
    GauTrain toHatfield;
    toHatfield.t.hour = 0;
    toHatfield.t.minu = 0;
    toHatfield.front.wagonNumber = 0;
    toHatfield.front.tail = nullptr;

    GauTrain toRosebank;
    toRosebank.t.hour = 0;
    toRosebank.t.minu = 0;
    toRosebank.front.wagonNumber = 0;
    toRosebank.front.tail = nullptr;

    char opCode;
    char destination;

    cout << "Enter the opCode (T/L/C): ";
    cin >> opCode;
    cout << "Enter your destination (H/R): ";
    cin >> destination;

    if (destination == 'H')
    {
        trainManagement(toHatfield, opCode);
       
    }
    else if (destination == 'R')
    {
        trainManagement(toRosebank, opCode);
    }

    return 0;
}
