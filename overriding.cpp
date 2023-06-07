#include<iostream>
using namespace std;

class Student{
	private:
	int x=1;
	int y=2;
	public:
		void add()
		{
			int sum = x+y;
			cout<<sum<<endl;
		}
		void sub(int a,int b)
		{
			int sub=a-b;
			cout<<sub<<endl;
		}
	
	
	
};
class students{
	private:
	int x=1;
	int y=2;
	public:
		void add()
		{
			int sum = x+y;
			cout<<sum<<endl;
		}
		void sub(int a,int b)
		{
			int sub=a-b;
			cout<<sub<<endl;
		}
		
};
int main(){
	Student S;
	S.add();
	S.sub(6,7);
}