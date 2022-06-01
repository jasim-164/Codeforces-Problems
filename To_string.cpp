#include <iostream>
#include <string>

int main() {

    std::string str = "ab";
    int num;

    // using stoi() to store the value of str1 to x
    //num = std::stoi(str);
    int k=str[1]-97+1;
    std::cout<<k<<"\n";

    //std::cout << num;

    return 0;
}
