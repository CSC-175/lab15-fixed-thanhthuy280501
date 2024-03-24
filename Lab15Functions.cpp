#include <iostream>
//function propotypes
void getInfor(int &pickFrom, int &numPicks);
double computeWays(int n, int k);
double factorial (int n);

int main(){
    int pickFrom, numPicks;
    getInfo (pickFrom, numPicks); //Get information about the lottery
    double ways= computeWays (pickFrom, numPicks); //Calculate the number of possible combinations
    std::cout << "Number if possible combinations: " << ways << std::end;
    return 0;
}

//gets and validates lottery info from the user and places it in reference parameteres
void getInfo(int &pickFrom, int &numPicks){
    std::cout << "Enter the toal number of numbers to pick from: ";
    std::cin >>pickfrom;
    std::cout << "Enter the number of numbers to pick: ";
    std::cin >>numPicks;
}
//computes and returns the number of different possible sets of k numbers that can be chosen from a set of n numbers.
double computeWays(int n, int k){
    //using the formula: n!/(k!*(n-k)!)
    double ways= factorial(n)/(factorial(k)*factorial(n-k));
    return ways;
}
//recursive function to compute factorials 
double factorial(int n){
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}
