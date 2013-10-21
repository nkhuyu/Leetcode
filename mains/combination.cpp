A simple way using std::next_permutation:

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n, r;
    std::cin >> n;
    std::cin >> r;

    std::vector<bool> v(n);
    std::fill(v.begin() + n - r, v.end(), true);

    do {
        for (int i = 0; i < n; ++i) {
            if (v[i]) {
                std::cout << (i+1) << " ";
            }
        }
        std::cout << "\n";
    } while (std::next_permutation(v.begin(), v.end()));
    return 0;
}
or a slight variation that outputs the results in an easier to follow order:

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
   int n, r;
   std::cin >> n;
   std::cin >> r;

   std::vector<bool> v(n);
   std::fill(v.begin() + r, v.end(), true);

   do {
       for (int i = 0; i < n; ++i) {
           if (!v[i]) {
               std::cout << (i+1) << " ";
           }
       }
       std::cout << "\n";
   } while (std::next_permutation(v.begin(), v.end()));
   return 0;
}
A bit of explanation: It works by creating a "selection array" (v), where we place r selectors, then we create all permutations of these selectors, and print the corresponding set member if it is selected in in the current permutation of v. Hope this helps.[A[A[A[A[A[B[B[B[B[B