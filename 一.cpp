#include <iostream>
#include <algorithm>
#include <vector>
    int main() {    
    std::vector<int> numbers;
    int num;    
    for (int i = 0; i < 10; ++i){
    std::cin >> num;       
    numbers.push_back(num);  
    }
    std::sort(numbers.begin(), numbers.end());   
    for (int n : numbers) { 
     std::cout << n << " ";
    }    
    std::cout << std::endl;  
    return 0;
}