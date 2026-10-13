#include <iostream>

using std::cout;
using std::endl;

// Lab 7 — Isaiah Salvatierra
// CIS 5 Week 07 · Two arrays


int main() {
const int N = 5;
int quiz[N] = { 100, 80, 75, 80 ,97};
int lab[N] = { 88, 76, 89, 100, 60};
int sum = 0;
int summ = 0;
int hi = quiz[0];
int hii = lab[0];

cout << "Quiz " << endl;
 
for (int i = 0; i < N; ++i) {
 sum += quiz[i];
 if (quiz[i] > hi) {
   hi = quiz[i];
   }
    cout << "[" << i << "]" << quiz[i] << endl;
   } 
  cout << "Sum: " << sum << endl << "High: " << hi << "\n";
 
cout << "Lab " << endl;
 
for (int i = 0; i < N; ++i) {
 summ += lab[i];
 if (lab[i] > hii) {
  hii = lab[i];
   }
   cout << "[" << i << "]" << lab[i] << endl;
   } 
  cout << "Sum: " << summ << endl << "High: " << hii << "\n";

return 0;
}