#include<iostream>
#include<string>
using namespace std;

class Marks{
protected:
    int roll_number;
    string name;
    int marks;
public:
    Marks(){
        static int count = 0;
        count++;
        roll_number = count;
    }
    void set_name(string n){
        name = n;
    }
    void set_marks(int m){
        marks = m;
    }
    int get_roll_number(){
        return roll_number;
    }
    string get_name(){
        return name;
    }
    int get_marks(){
        return marks;
    }
};

class Physics:public Marks{
public:
    void set_physics_marks(int pm){
        set_marks(pm);
    }
    int get_physics_marks(){
        return get_marks();
    }
};

class Chemistry:public Marks{
public:
    void set_chemistry_marks(int cm){
        set_marks(cm);
    }
    int get_chemistry_marks(){
        return get_marks();
    }
};

class Mathematics:public Marks{
public:
    void set_math_marks(int mm){
        set_marks(mm);
    }
    int get_math_marks(){
        return get_marks();
    }
};

int main(){
    int num_students;
    cout<<"Enter the number of students: ";
    cin>>num_students;
    
    Physics physics[num_students];
    Chemistry chemistry[num_students];
    Mathematics math[num_students];
    
    for(int i=0;i<num_students;i++){
        string name;
        int physics_marks, chemistry_marks, math_marks;
        cout<<"Enter the name of student "<<i+1<<": ";
        cin>>name;
        physics[i].set_name(name);
        chemistry[i].set_name(name);
        math[i].set_name(name);
        
        cout<<"Enter marks in Physics: ";
        cin>>physics_marks;
        physics[i].set_physics_marks(physics_marks);
        
        cout<<"Enter marks in Chemistry: ";
        cin>>chemistry_marks;
        chemistry[i].set_chemistry_marks(chemistry_marks);
        
        cout<<"Enter marks in Mathematics: ";
        cin>>math_marks;
        math[i].set_math_marks(math_marks);
    }
    
    // calculating total and average marks
    int total_physics=0, total_chemistry=0, total_math=0;
    for(int i=0;i<num_students;i++){
        total_physics += physics[i].get_physics_marks();
        total_chemistry += chemistry[i].get_chemistry_marks();
        total_math += math[i].get_math_marks();
    }
    float avg_physics = (float)total_physics/num_students;
    float avg_chemistry = (float)total_chemistry/num_students;
    float avg_math = (float)total_math/num_students;
    float avg_total = (avg_physics + avg_chemistry + avg_math)/3;
    
    // printing results
    cout<<"Roll No.\tName\tPhysics\tChemistry\tMathematics\n";
    for(int i=0;i<num_students;i++){
        cout<<physics[i].get_roll_number()<<"\t\t"<<physics[i].get_name()<<"\t"<<physics[i].get_physics_marks()<<"\t"<<chemistry[i].get_chemistry_marks()<<"\t\t"<<math[i].get_math_marks()<<endl;
    }
    cout<<"--------------------------------------------------------\n";
    cout<<"Total Marks:\t\t"<<total_physics<<"\t"<<total_chemistry<<"\t\t"<<total_math<<endl;
    cout<<"Average Marks:\t\t"<<avg_physics<<"\t"<<avg_chemistry<<"\t\t"<<avg_math<<"\t\t"<<avg_total<<endl;
    return 0;
}
