#include <iostream>
#include <string>
using namespace std;
struct Node {
    int data;
    string info;
};
class MyClass {
    public:
    int value;
    string name;
};

class Test{
    public:
    void displayList(Node &data) {
        data.data = 5;
        data.info = "Hello";
        cout << "Node Data: " << data.data << ", Info: " << data.info<< endl;
    }

    void showClass(MyClass &obj) {
        obj.value = 20;
        obj.name = "TestName";
        cout << "MyClass Value: " << obj.value << ", Name: " << obj.name<< endl;
    }
};




int main (){
    Test test;
    Node data;
    MyClass myObj;

    myObj.value = 10;
    myObj.name = "Sample";

    data.data = 4;
    data.info = "World";
    test.displayList(data);

    test.showClass(myObj);

    cout << "Node Data: " << data.data << ", Info: " << data.info<< endl;
    cout << "MyClass Value: " << myObj.value << ", Name: " << myObj.name<< endl;
    return 0;
}