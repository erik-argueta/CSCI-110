/*

 */

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

/*
Microsoft Visual Studio will not recognize M_PI so I need to input the actual pi
 */

double r; //= 4.0;
double h; //= 8.0;

double sphere_volume(double r)
{
    double volume1 = ((4.0 / 3.0) * 3.1415926535 * pow(r,3));
    return volume1;
}
    
double sphere_surface(double r)
{
    double volume2 = (4 * 3.1415926535 * r);
    return volume2;
}

double cylinder_volume(double r, double h)
{
    double volume3 = (3.1415926535 * pow(r, 2) * h);
    return volume3;
}

double cylinder_surface(double r, double h)
{
    double volume4 = ((2 * 3.1415926535 * r * h) + (2 * 3.1415926535 * pow(h, 2)));
    return volume4;
}

double cone_volume(double r, double h)
{
    double volume5 = (3.1415926535 * pow(r, 2) * (h / 3));
    return volume5;
}

double cone_surface(double r, double h)
{
    double volume6 = (3.1415926535 * r * (r + sqrt(h * h + r * r)));
    return volume6;
}

string cone = "Cone";
string cyl = "Cylinder";
string sphere = "Sphere";

int main()
{
    
    cout << "Please enter value r: ";
    cin >> r;
    cout << "Please enter value h: ";
    cin >> h;
    cout << endl;
    
    double result1 = sphere_volume(r);
    double result2 = sphere_surface(r);
    double result3 = cylinder_volume(r, h);
    double result4 = cylinder_surface(r, h);
    double result5 = cone_volume(r, h);
    double result6 = cone_surface(r, h);
    
    /*
    cout << "A sphere with the radius of " << r << " has a volume of: " << result1 << endl << endl;
    cout << "A sphere with the radius of " << r << " has a surface area of: " << result2 << endl << endl;
    cout << "A cylinder with the radius of " << r << "and a height of " << h << " has a volume of: " << result3 << endl << endl;
    cout << "A cylinder with the radius of " << r << " and a height of " << h << " has a volume of: " << result4 << endl << endl;
    cout << "A cone with the radius of " << r << " and a height of " << h << " has a volume of: " << result5 << endl << endl;
    cout << "A sphere with the radius of " << r << " and a height of " << h << " has a volume of: " << result6 << endl << endl; */
    
    cout << "Shape" << setw(15) << "Volume" << setw(20) << "Surface Area" << endl;
    cout << "_____" << setw(16) << "_______" << setw(19) << "____________" << endl << endl;
    
    cout << sphere << setw(21 - sphere.length()) << result1 << setw(16) << result2 << endl;
    cout <<  cyl << setw(21 - cyl.length()) << result3 << setw(16) << result4 << endl;
    cout << cone << setw(21 - cone.length()) << result5 << setw(16) << result6 << endl << endl;
    
    
    
    return 0;
}
