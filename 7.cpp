#include <iostream>
#include <string>

using namespace std;

// Deklarasi Class
class Person {
  private:
    string name;
    int age;

  public:
    // Constructor
    Person(string _name, int _age) {
      name = _name;
      age = _age;
    }

    // Method untuk menampilkan informasi
    void displayInfo() {
      cout << "Name: " << name << endl;
      cout << "Age: " << age << endl;
    }
};

int main() {
  // Membuat object person1 dari class Person
  Person person1("John", 25);

  // Memanggil method displayInfo()
  person1.displayInfo();

  return 0;
}
