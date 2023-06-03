#include <iostream>

class DM; // forward declaration

class DB {
private:
    int feet;
    float inches;
public:
    DB() : feet(0), inches(0) {}
    DB(int ft, float in) : feet(ft), inches(in) {}
    friend DM add(DB db, DM dm);
    void display() {
        std::cout << feet << " feet " << inches << " inches" << std::endl;
    }
};

class DM {
private:
    int meters;
    float centimeters;
public:
    DM() : meters(0), centimeters(0) {}
    DM(int m, float cm) : meters(m), centimeters(cm) {}
    friend DM add(DB db, DM dm);
    void display() {
        std::cout << meters << " meters " << centimeters << " centimeters" << std::endl;
    }
};

DM add(DB db, DM dm) {
    float cm = dm.centimeters + db.inches * 2.54; // convert inches to centimeters
    int m = dm.meters + db.feet / 3.281; // convert feet to meters
    cm += (db.feet % 3.281) * 12 * 2.54; // convert leftover feet to inches and then to centimeters
    if (cm >= 100) {
        m += cm / 100;
        cm = fmod(cm, 100); // get the remainder after division by 100
    }
    return DM(m, cm);
}

int main() {
    DB db(6, 2.5); // 6 feet 2.5 inches
    DM dm(3, 50); // 3 meters 50 centimeters
    DM sum = add(db, dm);
    std::cout << "Sum of distances: ";
    sum.display(); // expected output: 5 meters 87.05 centimeters
    return 0;
}