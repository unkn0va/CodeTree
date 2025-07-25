#include <iostream>
#include <string>

using namespace std;

string product_name;
int product_code;

class Product {
    public:
        string name;
        int code;

        Product(string name = "codetree", int code = 50) {
            this->name = name;
            this->code = code;
        }
};

int main() {
    cin >> product_name >> product_code;

    // Please write your code here.
    Product product = Product();
    cout << "product " <<  product.code << " is " << product.name << endl; 
    product.code = product_code;
    product.name = product_name;
    cout << "product " <<  product.code << " is " << product.name << endl;
    return 0;
}