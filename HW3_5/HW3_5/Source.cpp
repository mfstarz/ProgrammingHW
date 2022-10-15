#include<iostream>  
using namespace std;
int main()
{
    int i, j, temp;
    char a[] = "sretydft78y78977t6&*(*)(#r80y798)#UI_r0ol";
    cout << "Unsorted text: ";
    for (i = 0; i < sizeof(a); i++) {
        cout << a[i];
    }
    cout << endl;
    for (i = 0; i < sizeof(a); i++) {
        for (j = i + 1; j < sizeof(a); j++)
        {
            if (a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "Sorted text: ";
    for (i = 0; i < sizeof(a); i++) {
        cout << a[i];
    }
    return 0;
}