#include <iostream>

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
    void displayList(Node data) { // Pass by value
        data.data = 5;
        data.info = "Hello";
        cout << "Node Data: " << data.data << ", Info: " << data.info<< endl;
    }

    void showClass(MyClass obj) { // Pass by value
        obj.value = 20;
        obj.name = "TestName";
        cout << "MyClass Value: " << obj.value << ", Name: " << obj.name<< endl;
    }

    void displayList1(Node &data) { // Pass by reference
        data.data = 5;
        data.info = "Hello";
        cout << "Node Data: " << data.data << ", Info: " << data.info<< endl;
    }

    void showClass1(MyClass &obj) { // Pass by reference
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
    cout << "Node Data: " << data.data << ", Info: " << data.info<< endl; // data will remain unchanged here
    test.displayList1(data);
    cout << "Node Data: " << data.data << ", Info: " << data.info<< endl; // data will change here


    test.showClass(myObj);
    cout << "MyClass Value: " << myObj.value << ", Name: " << myObj.name<< endl; // value will remain unchanged here
    test.showClass1(myObj);
    cout << "MyClass Value: " << myObj.value << ", Name: " << myObj.name<< endl; // value will change here
    return 0;
}