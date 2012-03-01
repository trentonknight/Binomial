//
//  main.cpp
//  Binomial
//
//  Created by Jason Mansfield on 2/26/12.
//

#include <iostream>

int Factorial(int fact,int lim);
int GetBinomialCoefficient(int n, int k);

using namespace std;

int main ()
{
    int n = 1;
    int k = 0;
    int binomialCoefficient = 0;
    
    while (n > 0) {
        cout << "This program runs from a 0 index to object n. " << endl;
        cout << "Enter object n element for C(n,k): " << endl;
        cin >> n;
        cout << "Enter object k-combination for C(n,k): " << endl;
        cin >> k;
        binomialCoefficient = GetBinomialCoefficient(n, k);
        cout << "Binomial Coefficent: " << binomialCoefficient << endl;
    }
    
    return 0;
}
int Factorial(int fact,int lim){
    int sumOne = 0;
    int sumTwo = 0;
    int limitOne = lim;
    int limitTwo = lim;
    int traverse = 0;
    double total = 0;
    
    traverse = fact;
    while(limitOne != 1){
        sumOne = (fact * (--traverse));
        limitOne--;
        fact = sumOne;
    }
    traverse = lim;
    while(limitTwo != 1){
        sumTwo = (lim * (--traverse));
        limitTwo--;
        lim = sumTwo;
    }
    
    total = (sumOne)/(sumTwo);
    
    return total;
}
//n!/k!(n-k)!
int GetBinomialCoefficient(int n, int k){
    int factoralOne = k;
    int factoralTwo = (n - k);
    int fact = 0;
    
    //0 or final index
    if(factoralTwo == 0 || k == 0 || n == 0){
        fact = 1;   
    }
    else if(factoralTwo == 1 || factoralOne == 1){
        fact = n;
    }
    else if(factoralOne < factoralTwo){
        fact = Factorial(n,factoralOne);
    }
    else if(factoralOne > factoralTwo){
        fact = Factorial(n,factoralTwo);
    }
    else if(factoralOne == factoralTwo){
        fact = Factorial(n,factoralOne);
    }
    return fact;
    }

