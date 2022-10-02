#include<bits/stdc++.h>
using namespace std;


stack<char> strt;

string ns;

char insert_at_bottom(char x)
{

	if(strt.size() == 0)
	strt.push(x);

	else
	{
			
		char a = strt.top();
		strt.pop();
		insert_at_bottom(x);

		strt.push(a);
	}
}

char reverse()
{
	if(strt.size()>0)
	{

		char x = strt.top();
		strt.pop();
		reverse();

		insert_at_bottom(x);
	}
}

int main()
{

	strt.push('1');
	strt.push('2');
	strt.push('3');
	strt.push('4');
	
	cout<<"Original Stack"<<endl;
	

	cout<<"1"<<" "<<"2"<<" "
		<<"3"<<" "<<"4"
		<<endl;

	reverse();
	cout<<"Reversed Stack"
		<<endl;
	

	while(!strt.empty())
	{
		char p=strt.top();
		strt.pop();
		ns+=p;
	}
	
	//display of reversed stack
	cout<<ns[3]<<" "<<ns[2]<<" "
		<<ns[1]<<" "<<ns[0]<<endl;
	return 0;
}

