// C++ Program to illustrate how we can serialize and
// deserialize an object
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Serializable {
private:
    string name;
    int age;

public:
    Serializable(){};
    // Constructor to initialize the data members
    Serializable(const string& name, int age)
        : name(name)
        , age(age)
    {
    }

    // Getter methods for the class
    string getName() const { return name; }
    int getAge() const { return age; }

    //  Function for Serialization
    void serialize(const string& filename)
    {
        ofstream file(filename, ios::binary);
        if (!file.is_open()) {
            cerr
                << "Error: Failed to open file for writing."
                << endl;
            return;
        }
        file.write(reinterpret_cast<const char*>(this),
                   sizeof(*this));
        file.close();
        cout << "Object serialized successfully." << endl;
    }

    //  Function for Deserialization
    static Serializable deserialize(const string& filename)
    {
        Serializable obj("", 0);
        ifstream file(filename, ios::binary);
        if (!file.is_open()) {
            cerr
                << "Error: Failed to open file for reading."
                << endl;
            return obj;
        }
        file.read(reinterpret_cast<char*>(&obj),
                  sizeof(obj));
        file.close();
        cout << "Object deserialized successfully." << endl;
        return obj;
    }
};

int main()
{
    // Create and serialize an object
    Serializable original("Alice", 25);
    original.serialize("data.bin");

    cout << "OName: " << original.getName() << endl;
    cout << "OAge: " << original.getAge() << endl;

    // Deserialize the object
    Serializable restored
        = Serializable::deserialize("data.bin");

    // Test the  deserialized object
    cout << "Deserialized Object:\n";
    cout << "Name: " << restored.getName() << endl;
    cout << "Age: " << restored.getAge() << endl;

    return 0;
}
