#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    for (int i = 0; i <= 10; i++) {
        cout << "Pi z dokladnoscia " << i << " miejsc: "
             << fixed << setprecision(i) << M_PI << endl;
    }

    return 0;
}
