#include <iostream>
#include <string>
#include <bitset>

using namespace std;

//convert binary to decimal
int bin_to_dec(int bin) {
    int dec = 0, i = 0, rem;

    while (bin != 0) {
        rem = bin % 10;
        bin /= 10;
        dec += rem * pow(2, i);
        ++i;
    }

    return dec;
}

int oct_to_dec(int oct_num)
{
    int dec = 0, i = 0, rem;
    while (oct_num != 0)
    {
        rem = oct_num % 10;
        oct_num /= 10;
        dec += rem * pow(8, i);
        ++i;
    }
    return dec;
}

int hex_to_dec(string hex_num)
{
    int len = hex_num.size();
    int base = 1;
    int dec = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (hex_num[i] >= '0' && hex_num[i] <= '9') {
            dec += (int(hex_num[i]) - 48) * base;
            base = base * 16;
        }
        else if (hex_num[i] >= 'A' && hex_num[i] <= 'F') {
            dec += (int(hex_num[i]) - 55) * base;
            base = base * 16;
        }
    }
    return dec;
}

int main() {
    string i;
    int i_int{};
    int num_system;
    cout << "Enter a number: ";
    cin >> i;
    cout << "Enter a number's system (2, 8, 10, 16): ";
    cin >> num_system;

    if (num_system != 2 && num_system != 8 && num_system != 10 && num_system != 16) {
        cout << "System not supported";
        return 0;
    }

    if (num_system != 16) {
        i_int = stoi(i);
    }
    
    int i_to_dec;

    i_to_dec = i_int;

    if (num_system == 2) {
        i_to_dec = bin_to_dec(i_int);
    }

    if (num_system == 8) {
        i_to_dec = oct_to_dec(i_int);
    }

    if (num_system == 16) {
        i_to_dec = hex_to_dec(i);
    }

    cout << "Decimal: " << i_to_dec << "\nBinary: " << bitset<8>(i_to_dec).to_string() << "\nOctal: " << oct << i_to_dec << "\nHexadecimal: " << hex << i_to_dec;

    return 0;
}