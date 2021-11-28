//Question to practise-> https://codeforces.com/problemset/problem/199/A

ll fib(ll n) {
  double phi = (1 + sqrt(5)) / 2;
  return round(pow(phi, n) / sqrt(5));
}

//o(logn) as phi^n takes logn time
