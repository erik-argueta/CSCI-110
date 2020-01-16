/*
r = 4.0; h = 8.0;
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

double r; // = 4.0;
double h; // = 8.0;

double sphere_volume(double r)
{
    double volume1 = ((4.0 / 3.0) * M_PI * pow(r,3));
    return volume1;
}
    
double sphere_surface(double r)
{
    double volume2 = (4 * M_PI * r);
    return volume2;
}

double cylinder_volume(double r, double h)
{
    double volume3 = (M_PI * pow(r, 2) * h);
    return volume3;
}

double cylinder_surface(double r, double h)
{
    double volume4 = ((2 * M_PI * r * h) + (2 * M_PI * pow(h, 2)));
    return volume4;
}

double cone_volume(double r, double h)
{
    double volume5 = (M_PI * pow(r, 2) * (h / 3));
    return volume5;
}

double cone_surface(double r, double h)
{
    double volume6 = (M_PI * r * (r + sqrt(h * h + r * r)));
    return volume6;
}


int main()
{
    
    cout << "Please enter value r: ";
    cin >> r;
    cout << "Please enter value h: ";
    cin >> h;
    
    double result1 = sphere_volume(r);
    double result2 = sphere_surface(r);
    double result3 = cylinder_volume(r, h);
    double result4 = cylinder_surface(r, h);
    double result5 = cone_volume(r, h);
    double result6 = cone_surface(r, h);
    
    cout << "A sphere with the radius of " << r << " has a volume of: " << result1 << endl;
    cout << "A sphere with the radius of " << r << " has a surface area of: " << result2 << endl;
    cout << "A cylinder with the radius of " << r << "and a height of " << h << " has a volume of: " << result3 << endl;
    cout << "A cylinder with the radius of " << r << " and a height of " << h << " has a volume of: " << result4 << endl;
    cout << "A cone with the radius of " << r << " and a height of " << h << " has a volume of: " << result5 << endl;
    cout << "A sphere with the radius of " << r << " and a height of " << h << " has a volume of: " << result6 << endl;
    
    
    
    return 0;
}
