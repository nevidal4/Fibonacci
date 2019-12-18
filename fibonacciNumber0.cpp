//Andrews Samuel
//Sun 24/11/2019

#include <iostream>
#include <vector>

using namespace std;
/*
//Naive recursive
long long fibonacci(int n, vector<long long>& numbers){
  if (n == 0){
    return 0;
  }
  else if (n == 1){
    return 1;
  }
  else{
    return (fibonacci(n - 1, numbers) + fibonacci(n - 2, numbers));
  }
}
//*/
/*
//Efficient recursive
long long fibonacci(int n, vector<long long>& numbers){
  if (n == 0){
    return 0;
  }
  // if n == 1 then return 1
  else if (n == 1){
    return 1;
  }
  else {
    if (numbers[n] == 0){
      numbers[n] = fibonacci(n - 1, numbers) + fibonacci(n - 2, numbers);
    }
    return numbers[n];
  }
}
//*/
//Iterative
long long fibonacci(int n){
  long long one = 0, two = 1, sum = 0; // n = 7,
  for (int i = 0; i < n; ++i){ // i = 0, 1 < 7; i = 1
    sum = one + two; // sum = 1
    one = two; //one = 1
    two = sum; // two = 1
  }
  return one;
}
int main(){
  //for (int n = 1; n < 50; ++n)
    int n = 0;
    cin >> n;
    //vector<long long> numbers(n, 0);
    cout << fibonacci(n) << endl;
  //}
  return 0;
}
