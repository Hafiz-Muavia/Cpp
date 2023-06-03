#include <iostream>
using namespace std;
int i=0;
class mavi{
	private:
		int *p;
		
	public:
	
		mavi();
		~mavi(){
			cout<<"Destructor.";
			delete p;
			cout<<i++;
		}
			};
			mavi :: mavi(){
				p= new int;
				*p=5;
				cout<<"Constructor."<<endl;
			}
int main(){
	mavi boy;
				{
					mavi shb;
					
				}
			}