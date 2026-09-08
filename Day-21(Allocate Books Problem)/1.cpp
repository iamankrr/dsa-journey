#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Ye function check karta hai ki kya hum books ko
// m students mein aise allocate kar sakte hain ki
// kisi bhi student ko maxAllowedPages se zyada pages na mile.
bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages) {

    int students = 1;  // Pehle student se allocation start karenge
    int pages = 0;     // Current student ko mile total pages

    for (int i = 0; i < n; i++) {

        // Agar kisi ek book ke pages hi limit se zyada hain,
        // toh ye allocation possible nahi hai.
        if (arr[i] > maxAllowedPages) {
            return false;
        }

        // Agar current student ko ye book dene par
        // total pages limit ke andar hain,
        // toh book current student ko de do.
        if (pages + arr[i] <= maxAllowedPages) {
            pages += arr[i];
        }
        else {
            // Agar limit cross ho rahi hai,
            // toh next student ko ye book denge.
            students++;

            // Naye student ke pages mein ye book add hogi.
            pages = arr[i];
        }
    }

    // Agar students m se zyada chahiye,
    // toh allocation possible nahi hai.
    // Warna allocation valid hai.
    return students <= m;
}

int allocateBooks(vector<int> &arr, int n, int m) {

    // Agar books se zyada students hain,
    // toh har student ko kam se kam ek book nahi mil sakti.
    if (m > n) {
        return -1;
    }

    int sum = 0;
    int maxPages = 0;

    // Total pages aur sabse zyada pages wali book find karenge.
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxPages = max(maxPages, arr[i]);
    }

    // Answer ki minimum limit = sabse badi book ke pages.
    // Answer ki maximum limit = saari books ke total pages.
    int st = maxPages;
    int end = sum;

    int ans = -1;

    // Answer par binary search karenge.
    while (st <= end) {

        int mid = st + (end - st) / 2;

        // Agar mid pages ke maximum limit ke saath
        // books allocate ho sakti hain,
        // toh aur chhota answer try karenge.
        if (isValid(arr, n, m, mid)) {

            ans = mid;       // Mid ek possible answer hai
            end = mid - 1;   // Ab left side mein smaller answer search karo
        }
        else {
            // Agar allocation possible nahi hai,
            // toh maximum pages ki limit badhani padegi.
            st = mid + 1;
        }
    }

    return ans;
}

int main() {

    vector<int> arr = {2, 1, 3, 4};
    int n = 4;
    int m = 2;

    cout << allocateBooks(arr, n, m) << endl;

    return 0;
}