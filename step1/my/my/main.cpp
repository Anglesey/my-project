#include <iostream>
using namespace std;

int main() {
    double a, b, c, x_start, x_end, dx;

    cout << "Enter a: "; cin >> a;
    cout << "Enter b: "; cin >> b;
    cout << "Enter c: "; cin >> c;
    cout << "Enter X started: "; cin >> x_start;
    cout << "Enter X ended: "; cin >> x_end;
    cout << "Enter step dx: "; cin >> dx;


    int a_int = a;
    int b_int = b;
    int c_int = c;


    int temp1 = a_int & b_int;
    int temp2 = a_int & c_int;
    int final_temp = temp1 | temp2;

    bool use_real_number = (final_temp != 0);

    cout << "\nTable of results:" << endl;
    cout << "X\tF\tType" << endl;
    cout << "-------------------" << endl;

    for (double x = x_start; x <= x_end; x += dx) {
        double result;

        if (c < 0 && b != 0) {
            result = a*x*x + b*b*x + c;
        }
        else if (c > 0 && b == 0) {
            result = x + a;
        }
        else {
            result = x + c;
        }

        cout << x << "\t";

        if (use_real_number) {
            cout << result << "\tvalid" << endl;
        } else {
            cout << (int)result << "\twhole" << endl;
        }
    }

    return 0;
}
