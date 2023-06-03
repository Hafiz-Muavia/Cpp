#include <iostream>
using namespace std;
class mv{
	private:
		int x;
		string m;
	public:
		mv(){
			cin>>x>>m;
		}
		mv(const mv &p){
			x=p.x;
			m=p.m;
			
		}
		void change(){
			x=1;
			m="joy";
		}
	
void set(){
	cout<<x<<endl<<m<<endl;
}		
};
int main(){
	mv slmn;
	mv *ptr;
	
	ptr=&slmn;

	
	cout<<&slmn<<endl;
	cout<<ptr<<endl;
	slmn.change();
	slmn.set();
	*ptr.set();
	
}