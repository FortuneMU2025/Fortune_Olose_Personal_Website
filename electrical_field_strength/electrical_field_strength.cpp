#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class ElectricField {
private:
    const double COULOMB_CONSTANT = 8.99e9; // k in N⋅m²/C²
    double charge;    // Q in Coulombs
    double distance;  // r in meters

public:
    // Constructor
    ElectricField(double q, double r) : charge(q), distance(r) {}

    // Calculate electric field strength
    double calculateFieldStrength() {
        if (distance == 0) 
        {
            throw runtime_error("Distance cannot be zero!");
        }
        return (COULOMB_CONSTANT * charge) / (distance * distance);
    }

    // Setters
    void setCharge(double q) {
        charge = q;
    }

    void setDistance(double r) {
        if (r <= 0) {
            throw runtime_error("Distance must be positive!");
        }
        distance = r;
    }

    // Getters
    double getCharge() const {
        return charge;
    }

    double getDistance() const {
        return distance;
    }
};

int main() {
    try {
        // Test case 1: Standard calculation
        ElectricField field1(1.6e-19, 1.0); // electron charge at 1 meter
        cout << "Test Case 1:" << endl;
        cout << "Charge: " << field1.getCharge() << " Coulombs" << endl;
        cout << "Distance: " << field1.getDistance() << " meters" << endl;
        cout << "Electric Field Strength: " << field1.calculateFieldStrength() << " N/C" << endl;
        cout << endl;

        // Test case 2: Different distance
        ElectricField field2(1.6e-19, 0.5); // electron charge at 0.5 meters
        cout << "Test Case 2:" << endl;
        cout << "Charge: " << field2.getCharge() << " Coulombs" << endl;
        cout << "Distance: " << field2.getDistance() << " meters" << endl;
        cout << "Electric Field Strength: " << field2.calculateFieldStrength() << " N/C" << endl;
        cout << endl;

        // Test case 3: Changing values using setters
        ElectricField field3(0, 0);
        field3.setCharge(3.2e-19);
        field3.setDistance(2.0);
        cout << "Test Case 3:" << endl;
        cout << "Charge: " << field3.getCharge() << " Coulombs" << endl;
        cout << "Distance: " << field3.getDistance() << " meters" << endl;
        cout << "Electric Field Strength: " << field3.calculateFieldStrength() << " N/C" << endl;

    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
