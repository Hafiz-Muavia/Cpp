#include<iostream> 
using namespace std;
//Base class
class Marks{
 protected:
 int* roll_no;
 
 public:
 string name;
 int total;
 int avg;
 Marks(){
 total=0;
 }
 void getdata(){
 cout<<"\nEnter Name : ";
 getline(cin,name);
 }
 void showdata(){
 cout<<"Name: "<<name<<endl;
 }
 ~Marks(){
 delete roll_no;
 }
};
//Derived class
class Physics : public Marks{
 private:
 int physics_marks;
 public:
 void getdata(){
 Marks::getdata();
 cout<<"Enter Physics marks : ";
 cin>>physics_marks;
 total+=physics_marks;
 }
 void showdata(){
 Marks::showdata();
 cout<<"Marks in Physics : "<<physics_marks<<endl;
 }
};
//Derived class
class Chemistry : public Marks{
 private:
 int chemistry_marks;
 public:
 void getdata(){
 Marks::getdata();
 cout<<"Enter Chemistry marks : ";
 cin>>chemistry_marks;
 total+=chemistry_marks;
 }
 void showdata(){
 Marks::showdata();
 cout<<"Marks in Chemistry : "<<chemistry_marks<<endl;
 }
}; 
//Derived class
class Math : public Marks{
 private:
 int math_marks;
 public:
 void getdata(){
 Marks::getdata();
 cout<<"Enter Mathematics marks : ";
 cin>>math_marks;
 total+=math_marks;
 }
 void showdata(){
 Marks::showdata();
 cout<<"Marks in Mathematics : "<<math_marks<<endl;
 }
};
int main(){
 int num;
 cout<<"Enter the number of students : ";
 cin>>num;
 Physics P[num];
 Chemistry C[num];
 Math M[num];
 for(int i=0;i<num;i++){
 cout<<"\n\nEnter information for student "<<i+1;
 P[i].getdata();
 C[i].getdata();
 M[i].getdata();
 }
 cout<<"\n\nDetails of students are as follows : \n";
 for(int i=0;i<num;i++){
 cout<<"\nDetails of student "<<i+1<<"\n";
 P[i].showdata();
 C[i].showdata();
 M[i].showdata();
 cout<<"Total marks of the student : "<<P[i].total<<endl;
 }
 //Calculating average 
 int average=0;
 for(int i=0;i<num;i++){
 average+=P[i].total;
 }
 average/=num;
 cout<<"\nAverage Marks of the class : "<<average<<endl;
 return 0; 
}
