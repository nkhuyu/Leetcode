/**
Given an array of numbers, nums, return an array of numbers products, where products[i] is the product of all nums[j], j != i.

Input : [1, 2, 3, 4, 5]
Output: [(2*3*4*5), (1*3*4*5), (1*2*4*5), (1*2*3*5), (1*2*3*4)]
      = [120, 60, 40, 30, 24]
You must do this in O(N) without using division.
*/
int a[N] // This is the input
int products_below[N];
p=1;
for(int i=0;i<N;++i) {
  products_below[i]=p;
  p*=a[i];
}

int products_above[N];
p=1;
for(int i=N-1;i>=0;--i) {
  products_above[i]=p;
  p*=a[i];
}

int products[N]; // This is the result
for(int i=0;i<N;++i) {
  products[i]=products_below[i]*products_above[i];
}
If you need to be O(1) in space too you can do this (which is less clear IMHO)

int a[N] // This is the input
int products[N];

// Get the products below the current index
p=1;
for(int i=0;i<N;++i) {
  products[i]=p;
  p*=a[i];
}

// Get the products above the curent index
p=1;
for(int i=N-1;i>=0;--i) {
  products[i]*=p;
  p*=a[i];
}



// recursion solution

int multiply(int *a, int fwdProduct, int indx) {
    int revProduct = 1;
    if (indx < N) {
       revProduct = multiply(a, fwdProduct*a[indx], indx+1);
       int cur = a[indx];
       a[indx] = fwdProduct * revProduct;
       revProduct *= cur;
    }
    return revProduct;
}
