// p1
// #include <iostream>
// using namespace std;
//
// int largestDigit(int n);
//
// int main() {
//     int n;
//     cin >> n;
//     cout << largestDigit(n) << "\n";
//     return 0;
// }
//
// int largestDigit(int n) {
//     return (n < 10)
//         ? n
//         : ((n % 10 > largestDigit(n / 10)) ? (n % 10) : largestDigit(n / 10));
// }
// p3
// #include <iostream>
// using namespace std;
// int sumBase(int n , int k);
//
// int main() {
//     int n, k ;
//     cin >> n >> k ;
//     cout << sumBase(n, k);
//     return 0;
// }
// int sumBase(int n, int k) {
//     if (n==0)  return 0 ;
//     return  (n%k)+sumBase(n/k, k);
// }
// p4
// #include <iostream>
// using namespace std;
//
// int countDiv(int n, int d);
// bool isThree(int n);
//
// int main() {
//     int n;
//     cin >> n;
//     cout << (isThree(n) ? "true" : "false") << endl;
//     return 0;
// }
//
// int countDiv(int n, int d) {
//     if (d == 0) {
//         return 0;
//     }
//     return (n % d == 0 ? 1 : 0) + countDiv(n, d - 1);
// }
//
// bool isThree(int n) {
//     bool alpha = (countDiv(n, n) == 3);
//     return alpha;
// }
// p5
// #include <iostream>
// using namespace std;
//
// bool play(int n, int take, bool aliceTurn);
// bool canAliceWin(int n);
//
// int main() {
//     int n;
//     cin >> n;
//     cout << (canAliceWin(n) ? "true" : "false") ;
//     return 0;
// }
//
// bool play(int n, int take, bool aliceTurn) {
//     if (n < take) {
//         return !aliceTurn;
//     }
//     return play(n - take, take - 1, !aliceTurn);
// }
//
// bool canAliceWin(int n) {
//     return play(n, 10, true);
// }




