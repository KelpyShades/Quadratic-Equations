#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Declare variables for coefficients
    double a, b, c;

    // Prompt user for coefficients
    cout << "Enter coefficients a, b, and c: "<<endl;
    cin >> a;
    cin >> b;
    cin >> c;

    // Calculate the discriminant
    double discriminant = b*b - 4*a*c;
    double realPart, imaginaryPart;

    if (discriminant > 0) {
        // Two distinct real roots
        double root1 = (-b + sqrt(discriminant)) / (2*a);
        double root2 = (-b - sqrt(discriminant)) / (2*a);

        // Store roots in an array
        double roots[2] = {root1, root2};

        // Output the roots
        cout << "Two distinct real roots: " << roots[0] << " and " << roots[1] << endl;
    }
    else if (discriminant == 0) {
        // One real root
        double root = -b / (2*a);

        // Store root in an array
        double roots[1] = {root};

        // Output the root
        cout << "One real root: " << roots[0] << endl;
    }
    else {
        // Complex roots
        realPart = -b / (2*a);
        imaginaryPart = sqrt(-discriminant) / (2*a);

        // Store roots in an array
        double roots[2] = {realPart, imaginaryPart};

        // Output the complex roots
        cout << "Complex roots: " << roots[0] << " + " << roots[1] << "i and " << roots[0] << " - " << roots[1] << "i" << endl;
    }

    return 0;
}
