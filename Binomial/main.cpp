//
//  main.cpp
//  Binomial
//
//  Created by Jason Mansfield on 2/26/12.


#include <iostream>
#include <math.h>

double Factorial(double fact,double lim);
double GetBinomialCoefficient(double n, double k);

using namespace std;

int main ()
{
    double n = 1;
    double k = 0;
    double binomialCoefficient = 0;
    
    while (n > 0) {
        cout << "Enter object n element for C(n,k): " << endl;
        cin >> n;
        cout << "Enter object k-combination for C(n,k): " << endl;
        cin >> k;
        binomialCoefficient = GetBinomialCoefficient(n, k);
        cout << "Binomial Coefficent: " << binomialCoefficient << endl;
    }
   
          
    
    
          return 0;
}
double Factorial(double fact,double lim){
    double total = 0;
    
    do {
        total = total + (fact * (fact - 1));
        fact--;
    }while((fact - 1) > lim);
    
    return total;
   }
double GetBinomialCoefficient(double n, double k){
    
    double lim = n - k;
    double numerator = n;
    double denominator = k;
    double BC = 0;
    
    if(k <= 0){
        return BC = 1;
    }
    else{
    numerator = Factorial(numerator,lim);
    denominator = Factorial(denominator,0);
    BC = numerator/denominator;
    return BC;
    }
    }
    

