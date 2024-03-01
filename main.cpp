# include <iostream>
# include <string>
using namespace std;

struct Person {
    string name;
    int age;
    float height;
    float weight;
    char gender;
    bool zin;
};

void rtBMI(Person person) {
    float bmi = person.weight / ((person.height / 100) * (person.height /100));

    if (bmi < 18.5) {
        cout << person.name << " dang hoi gay";
    } else if (bmi >= 18.5 && bmi <= 22.9) {
        cout << person.name << " dang hoan hao";
    } else if (bmi >= 23) {
        cout << person.name << " dang thua can";
    }
}

int main() {
    Person person;

    cout << "Tinh chi so BMI: " << endl;
    cout << "Nhap ten: " << endl;
    cin >> person.name;

    cout << "Nhap can nang (kg): " << endl;
    cin >> person.weight;

    cout << "Nhap chieu cao (cm): " << endl;
    cin >> person.height;

    rtBMI(person);

    return 0;
}
