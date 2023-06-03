#include<iostream>
#include<string>
using namespace std;
class StringFormatter
{
private:
 string text;
public:
 StringFormatter(string line)
 {
    text=line;
 }
 void printLeftAligned(int n)
 {
    int i=0;
    while(i<text.length())
    {
        if(i%n==0)
        {
            cout<<"\n";
        }
        cout<<text[i];
        i++;
    }
 }
void printRightAligned(int n) {
    int i = 0;
    int length = text.length();
    while (i < length) {
        cout<<"                    ";
        if (length - i >= n) 
        {
 cout<< text.substr(i, n) << endl;
        } 
        else 
        {
            int j=0;
            while(j<n-text.substr(i).length())
            {
                cout<<" ";
                j++;
            }
            cout<< text.substr(i) << endl;
        }
        i += n;
    }
}

};
 
int main()
{
    StringFormatter obj(" The world is indeed full of peril and in it there are many dark places But still there is much that is fair And though in all lands love is now mingled with grief it still grows perhaps the greater");
    obj.printRightAligned(20); 
    obj.printLeftAligned(20);
return 0;
}