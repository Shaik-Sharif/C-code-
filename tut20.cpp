#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int sums(int a, int b, int c)
{
    return a + b + c;
}
// Calculate the volume of cylinder
int volume(float a, int b)
{
    return 3 * a * a * b;
}
// Calculate the volume of a cube
int volume1(float a)
{
    return a * a * a;
}
// volume of a rectangle
int rec(int l, int b, int h)
{
    return l * b * h;
}
int main()
{
    cout << "The sum of number is " << sum(2, 3) << endl;
    cout << "The sum of number is " << sums(2, 3, 232) << endl;
    cout << "The volume  of number is " << volume(2, 3) << endl;
    cout << "The volume of a cube is " << volume1(2);
    cout << "The volume of a rectangle is " << rec(2, 3, 4);
    return 0;
}