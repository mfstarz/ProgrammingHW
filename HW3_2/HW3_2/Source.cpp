#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "¬ведите S:\n";
    double S;
    cin >> S;
    cout << "¬ведите m:\n";
    double m;
    cin >> m;
    cout << "¬ведите n:\n";
    double n;
    cin >> n;
    if (!S || !m || !n)
    {
        cout << "ќшибка!\n";
        return 0;
    }
    double step = 1;
    double p = 0;
    int points_left = 6;
    int infinity_counter = 0;
    double prev_result, result, r, one_plus_r, part_one, part_two;
    result = 0;
    while (points_left)
    {
        p += step;
        r = (p / 100);
        one_plus_r = pow((1 + r), n);
        part_one = S * r * one_plus_r;
        part_two = 12 * (one_plus_r - 1);
        prev_result = result;
        result = part_one / part_two;
        if (result > m)
        {
            result = prev_result;
            p -= step;
            step *= pow(10, -1);
            points_left--;
        }
        else if (result == m) {
            break;
        }
        if (infinity_counter++ == 1000)
        {
            cout << "ќшибка!";
            break;
        }
    }
    cout << p << endl;
    return 0;
}
