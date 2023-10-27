#include <iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;

};
class Employee
{

private:
   
    string Comapny;
    int Age;
protected: 
 string Name;
public:
    void setName(string name)
    {
        this->Name = name;
    }

    string getName()
    {

        return this->Name;
    }

    void setAge(int age)
    {
        if (age >= 18)
        {
            this->Age = age; /* code */
        }
    }

    int getAge()
    {

        return this->Age;
    }

    void setCompany(string company)
    {
        this->Comapny = company;
    }

    string getCompany()
    {

        return this->Comapny;
    }

    // In C++, you can call getters and setters within the same class
    // by using the this pointer. The this pointer is a special pointer
    // that points to the instance of the class on which the member function is operating.
    // Here's how you can call getters and setters from
    // within member functions of the same class using the this pointer:

    // Model for employee;

    void IntroduceYourSelf()
    {
        cout << "Name -" << this->getName() << endl;
        cout << "Age -" << this->getAge() << endl;
        cout << "company -" << this->getCompany() << endl;
    }

    Employee(string name, int age, string company)
    {
        Name = name;
        Age = age;
        Comapny = company;
    }


    void AskForPromotion(){
        if (Age > 30 )
        cout << Name << "  You can apply for promotion " << endl;


        else 
        cout << Name <<" You cannot apply for promotion  " << endl;


    }




};

class Developer : public Employee {
public: 
string FavProgrammingLanguage;

Developer (string name,string company,int age,string favprogramminglanguage):Employee(name,age,company){
    string FavProgrammingLanguage = favprogramminglanguage;


}

void FixBug(){
    cout << Name << " fix bug using" << FavProgrammingLanguage << endl;
}



};

class Teacher : public Employee{
public : 
string Subject ; 


 Teacher(string name,int age,string company,string subject)
        : Employee(name,age,company)
 {
    Subject= subject;


 }

    void PrepareLesson(){
 cout << Name << " is preparing " << Subject << "lesson" << endl;   


}


};



int main()
{
    Employee employee1 = Employee("Srijith yaparathna", 23, "Apple");

    employee1.setAge(83);
    employee1.IntroduceYourSelf();
    employee1.AskForPromotion();
   Developer d = Developer("srijith","apple",23,"c++");
     d.FixBug();
     d.AskForPromotion();
     Teacher t = Teacher("Kasun",23,"apple", "Science");
     t.PrepareLesson();
    t.AskForPromotion(); 
    return 0;
}