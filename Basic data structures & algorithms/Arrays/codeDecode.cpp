#include <bits/stdc++.h>

#define s() size()

using namespace std;

vector<int> decode(vector<int> encoded, int first) {
    size_t encode_size = encoded.size();
    
    vector<int> original(encode_size + 1);
    original[0] = first;
    
    for(size_t i = 0; i < encode_size; i++){
        original[i + 1] = original[i] ^ encoded[i];
    }
    
    return original;
}

int main() {
    vector<int> encoded = {1, 2, 3};
    int first = 1;
    
    vector<int> decoded = decode(encoded, first);
    
    size_t d_size = decoded.size();
    
    for(size_t i = 0; i < d_size; i++){
        cout << decoded[i] << " ";
    }
}
