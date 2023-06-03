#include <iostream>
using namespace std;
template <class t1, class t2, class t3>
class mavi{
	public:
	t1 a;
	t2 b;
	t3 x;
	mavi(){
		cin>>a>>b>>x;
	}
	t3 mv();
};
template <class t1, class t2, class t3>
t3 mavi<t1,t2,t3>::mv(){
		cout<<a<<b;
	return x;
	}
int main(){
	mavi <int, char, string> tr;
	mavi <char, int, string> fl;
	cout<<tr.mv();
}