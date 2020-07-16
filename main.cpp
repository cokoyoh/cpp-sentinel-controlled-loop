#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int total{0};
    unsigned int counter{0};

    int grade;

    cout << "Enter grade or -1 to quit: ";
    cin >> grade;

    while (grade != -1) {
        total += grade;
        counter++;

        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }

    if(counter != 0) {
        double average{static_cast<double>(total) / counter};

        cout << "\nTotal of the " << counter << " grades is " << total;
        cout << setprecision(2) << fixed;
        cout << "\nClass average is " << average << endl;
    }
    else {
        cout << "No grades were entered" << endl;
    }
}
