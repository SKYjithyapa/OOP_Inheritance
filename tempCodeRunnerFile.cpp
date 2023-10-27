class Teacher : public Employee{
public : 
string Subject ; 
void PrepareLesson(){
 cout << getName << " is preparing " << Subject << "lesson" << endl;   


}

 Teacher(string name,int age,string company,string subject)
        : Employee(name,age,company)
 {
    Subject= subject;


 }

};
