#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    uint32_t num = 43261596;
    uint32_t result = 0;

    for(int i = 0; i < 32; i++){
        int digit = num & 1;  
        result = result << 1; 
        result = result | digit; 
        num = num >> 1;       
    }

    cout << result;
    return 0;
}
