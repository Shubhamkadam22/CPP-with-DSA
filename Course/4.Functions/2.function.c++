#include <iostream> 
using namespace std; 


void sayHello() {
    cout << "Hello, World!" << endl; 
}

void assistant() {
    sayHello(); 
    cout<<"work complete"<<endl;
}
int main() {
    assistant(); 
    return 0; 

}