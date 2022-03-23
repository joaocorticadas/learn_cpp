#include <iostream>
#include <vector>

int main(){
    std::vector<int> g1;

    for(int i = 1; i <= 5; i++){
        g1.push_back(i);
    }

    for (int i = 0; i < g1.size(); i++) {
        std::cout << g1[i] << std::endl;
    }

    std::cout << "\n";

    for(auto i = g1.begin(); i != g1.end(); ++i) {
        std::cout << *i << std::endl;
    }

    std::cout << "\n";

    for(auto i = g1.rbegin(); i != g1.rend(); ++i) {
        std::cout << *i << std::endl;
    }

    return 0;
}