/*This program contian one parent and thress child classes.
Inheritance is multiple.Roll no will generate automatically*/
#include <iostream>
#include <string>
using namespace std;
int student;		//global variable to store no. of students
			  //to store marks of individual subjects in array 
int marks_ph[60], marks_ch[60], marks_ma[60];	

class Marks				//*****parent class
{
	private:
    	string name[60];	//data member 
    protected:
    	long marks[60];		//data member, to store total marks
    	long roll_no[60];
    public:
    Marks()					//constructor
    {
    	marks[60]=0;
    	roll_no[60]=0;
    }
    void set_name()
    {
    	for(int i=0; i<student; i++)
    	{
    		cout<<"Name of roll_no "<<i+1<<" : ";
    		cin>>name[i];
		}
	}
    void get()				//to display data on screen
    {
        for(int s=0; s<student; s++)
        {
        	cout<<"\n\nName 	 : "<<name[s];
        	cout<<"\nRoll No   : "<<s+1;
        	cout<<"\nPhysics Marks 		: "<<marks_ph[s];
        	cout<<"\nChemistry Marks 	: "<<marks_ch[s];
        	cout<<"\nMathematics Marks 	: "<<marks_ma[s];
        	marks[s]=marks_ph[s]+marks_ch[s]+marks_ma[s];
        	cout<<"\n------------------------------------";
            cout<<"\nTotal marks of rollno "<<s+1<<" : "<<marks[s];
        	cout<<"\n------------------------------------";
		}
    }
    ~Marks()	//destructor
    {
	}
};
class physics: public Marks		//******child class
{
    protected:
    	double sum_ph;
    public:
    	void set_ph()		//to input and sum physics marks
        {
        	for(int a=0; a<student; a++)		
       		{
            cout<<"Enter marks of Physics for roll_no  "<<a+1<<"     : ";
            cin>>marks_ph[a];
            sum_ph=sum_ph+marks_ph[a];
       		}
   		}
    void cal_ph()		//to calculate physics average
    {
        cout<<"\n\nAverage marks of class in physics     : "<<sum_ph/student;
    }
};
class chemistry: public Marks	//*******child class
{
    protected:
   		 double  sum_ch;			//to store sum of chemistry marks
    public:
    	void set_ch()		//to input and store chemistry marks
    	{
        	for(int a=0; a<student; a++)
        	{
           	cout<<"Enter marks of Chemistry for roll_ no "<<a+1<<"   : ";
           	cin>>marks_ch[a];
           	sum_ch=sum_ch+marks_ch[a];
        	}
    	}
    	void cal_ch()		//to display chemistry average 
    	{
        cout<<"\nAverage marks of class in chemistry   : "<<sum_ch/student;
    	}
};
class mathematics: public Marks		//********mathematics class
{
	protected:
		double sum_ma=0;		//to store mathematics marks
	public:
		void set_ma()		//to input and store mathematics marks
		{
			for(int d=0; d<student; d++)
			{
			cout<<"Enter marks of Mathematics for roll_no "<<d+1<<"  : ";
			cin>>marks_ma[d];
			sum_ma=sum_ma+marks_ma[d];
			}
		}
		void cal_ma()		//to display mathematics average
		{
		cout<<"\nAverage marks of class in mathematics : "<<sum_ma/student;
		}
};
int main()
{
    cout<<"Enter number of  student : ";
    cin>>student;		//store no. of student
    Marks m;		//object as m and calling contructor
    m.set_name();
    physics p;
    chemistry c;
    mathematics ma;
    p.set_ph();		//input physics marks
    c.set_ch();		//input chemistry marks
    ma.set_ma();	//input mathematics marks
    m.get();		//output marks and total marks for individual student
    p.cal_ph();		//output average of physics
    c.cal_ch();		//output average of chemistry 
    ma.cal_ma();	//output average of mathematics
    return 0;
}