#include <iostream>
using namespace std;

class Tacka {
private:
    int x, y;

public:
    Tacka(int x = 0, int y = 0) : x(x), y(y) {}

    // TODO: Ovdje napravi preklapanje operatora << (friend ostream&)
    //       Da ispiše tačku u formatu (x, y)
    friend ostream& operator<<(ostream& out, const Tacka& tacka) {
        out << "(" << tacka.x << "." << tacka.y << ")";
        return out;
    }

    // TODO: Ovdje napravi preklapanje operatora + 
    //       Da sabere dvije tačke tako što sabere njihove x i y komponente

    Tacka operator+(const Tacka& other) {
        return Tacka(x + other.x, y + other.y);

    }

    // TODO: Ovdje napravi preklapanje operatora ==
    //       Da poredi da li su x i y vrijednosti dvije tačke jednake

    bool operator==(const Tacka& other) {
        return (x == other.x) && (y == other.y);
    }
};

int main() {
    Tacka t1(3, 4);
    Tacka t2(5, 6);

    // Test operator+
    Tacka t3 = t1 + t2;

    // Test operator==
    if (t1 == t2)
        cout << "Tačke su jednake" << endl;
    else
        cout << "Tačke su različite" << endl;

    // Test operator<<
    cout << "t1: " << t1 << endl;
    cout << "t2: " << t2 << endl;
    cout << "t3 (zbir): " << t3 << endl;

    return 0;
}
