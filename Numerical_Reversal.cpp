#include <iostream>
#include <string>
#include <cmath>
#include <vector>
 
int main() {
    int size;
    std::cin >> size;
    //siZe  of the cevtor
    
    std::vector<int> numbers(size); //vecter of ints with size given
    
    for (int i = 0; i < size; i++) {
        std::cin >> numbers[i]; // read then store nums in array
    }

//print decending nums
for (int i = size - 1; i>=0; i--) {
    std::cout << numbers[i] << " ";
}


                   
  return 0;
}


