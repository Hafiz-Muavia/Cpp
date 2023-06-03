#include<iostream>
#include<iomanip>
using namespace std;
class Marks
{
public:
int roll_no;
string name;
int Markss;
Marks(){};
Marks(int r, string n, int m)
{
roll_no = r;
name = n;
Markss = m;
}
};
class Physics : public Marks

{
public:
Physics(){}
Physics(int r, string n, int m) : Marks(r, n, m) {}
};
class Chemistry : public Marks
{
public:
Chemistry(){}
Chemistry(int r, string n, int m) : Marks(r, n, m) {}
};
class Mathematics : public Marks
{
public:
Mathematics(){}
Mathematics(int r, string n, int m) : Marks(r, n, m) {}
};
int main()
{
int n, average, r = 1;
int tot_sum=0;
float tot_avg=0;
int t_m=0;
int t_p=0;
int t_c=0;
string name;
cout<<"Enter the number of students: ";
cin>>n;
int sum[n];
float avg[n];
Physics p[n];
Chemistry c[n];
Mathematics m[n];
for(int i = 0; i < n; i++)
{
cout<<"Enter the name of the student "<<i+1<<": ";
cin>>name;
cout<<"Enter marks in Physics: ";
cin>>p[i].Markss;
cout<<"Enter marks in Chemistry: ";

cin>>c[i].Markss;
cout<<"Enter marks in Mathematics: ";
cin>>m[i].Markss;
t_p+=p[i].Markss;
t_c+=c[i].Markss;
t_m+=m[i].Markss;
p[i]=Physics(r, name, p[i].Markss);
c[i]=Chemistry(r, name, c[i].Markss);
m[i]=Mathematics(r, name, m[i].Markss);
r++;
cout<<endl;
}
cout<<"| Roll No | Name | Phys | Chem | Math | Total | Avg |"<<endl;
cout<<"|-----------------------------------------------------------|"<<endl;
for(int i = 0; i < n; i++)
{
sum[i] = p[i].Markss + c[i].Markss + m[i].Markss;
avg[i]= sum[i] / 3.0;
tot_sum+=sum[i];
tot_avg+=avg[i];
cout<<"|"<<setw(6)<<p[i].roll_no<<" |"<<setw(8)<<p[i].name<<" |"<<setw(4)<<p[i].Markss<<" |"<<setw(4)<<c[i].Markss<<" |"<<setw(4)<<m[i].Markss<<" |"<<setw(6)<<sum[i]<<" |"<<setw(5)<<setprecision(2)<<avg[i]<<" |"<<endl;
}
tot_avg/=n;
cout<<"|-----------------------------------------------------------|"<<endl;
cout<<"|Total of class |"<<setw(5)<<t_p<<" |"<<setw(5)<<t_c<<" |"<<setw(5)<<t_m<<" |"<<setw(7)<<tot_sum<<" |"<<setw(6)<<setprecision(2)<<tot_avg<<" |"; 
return 0;
}
