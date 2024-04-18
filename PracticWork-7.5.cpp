#include <iostream>

using namespace std;

int main()
{
    int roomSize[2] = { 30, 15 };

    /*do {
        cout << "Задайте размер комнаты: ";
        cin >> roomSize[0] >> roomSize[1];
        cin.ignore(100, '\n');
        if (roomSize[0] < 1 || roomSize[1] < 1) {
            cout << "Укажите положительные значения!!!\n";
        }
    } while (roomSize[0] < 1 || roomSize[1] < 1);*/

    for (int y = -roomSize[1]; y <= roomSize[1]; y++) {
        for (int x = -roomSize[0]; x <= roomSize[0]; x++) {
            if (x == 0 && y == 0) {
                cout << "+";
            }
            else if (x == 0 && y == -roomSize[1]) {
                cout << "^";
            }
            else if (x == roomSize[0] && y == 0) {
                cout << ">";
            }
            else if (x == 0) {
                cout << "|";
            }
            else if (y == 0) {
                cout << "-";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }
}