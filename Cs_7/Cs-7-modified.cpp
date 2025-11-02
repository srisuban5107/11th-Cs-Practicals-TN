#include <iostream>
using namespace std;

void printBoundary(int a[][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
                cout << a[i][j] << "\t";
            else
                cout << "\t";
        }
        cout << endl;
    }
}

int main() {
    int a[10][10];
    int m, n;

    cout << "Enter the number of rows and columns (max 10 each, and at least 3): ";
    cin >> m >> n;

    if (m < 3 || n < 3 || m > 10 || n > 10) {
        cout << "Invalid size! Must be between 3 and 10." << endl;
        return 0;
    }

    cout << "\nEnter the elements of the array:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> a[i][j];
        }
    } 
    //This scrolls old text out of view, giving the same effect//
    cout << string(50, '\n');  // remove system("cls"); it olny work on windows and It’s a system call, so it’s slow and not safe //
    cout << "\n\nOriginal Array:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nBoundary Elements:\n";
    printBoundary(a, m, n);

    return 0;
}
