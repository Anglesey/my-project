#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, x_start, x_end, dx;


    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    cout << "Введите c: ";
    cin >> c;
    cout << "Введите Xнач: ";
    cin >> x_start;
    cout << "Введите Xкон: ";
    cin >> x_end;
    cout << "Введите шаг dX: ";
    cin >> dx;


    int a_int = static_cast<int>(a);
    int b_int = static_cast<int>(b);
    int c_int = static_cast<int>(c);


    bool use_real = ((a_int & b_int) | (a_int & c_int)) != 0;

    cout << "\nРезультаты:\n";
    cout << "-------------------------------------------------\n";
    cout << "|     X     |        F        |      Тип       |\n";
    cout << "-------------------------------------------------\n";


    for (double x = x_start; x <= x_end + 1e-9; x += dx) {
        double result;


        if (c < 0 && b != 0) {
            result = a * x * x + b * b * x + c;
        } else if (c > 0 && b == 0) {
            result = x + a;
        } else {
            result = x + c;
        }

               cout << "| " << setw(9) << fixed << setprecision(3) << x << " | ";

        if (use_real) {
            cout << setw(14) << fixed << setprecision(6) << result << " | действительное |";
        } else {
            cout << setw(14) << fixed << setprecision(0) << static_cast<int>(result) << " |    целое      |";
        }
        cout << endl;
    }

    cout << "-------------------------------------------------\n";

    return 0;
}
