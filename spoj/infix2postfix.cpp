#include<bits/stdc++.h>

#define ll long long int
#define watch(x) cout << (#x) << " is " << (x) << endl  //watch function print variable and value for debugging
#define count_ones __builtin_popcountll                  // count_ones(9) is equal to 2 valid for ll also
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define fo(i,n) for(ll i=0;i<n;i++)
using namespace std;
 
int prec(char c)
{
	if(c=='^')
		return 3;
	else if(c=='*' || c=='/')
		return 2;
	else if(c=='+' || c=='-')
		return 1;
	else 
		return -1;
}

void infix2postfix(string s)
{
	stack<char> st;
	st.push('N');
	int l=s.length();
	string ns;

	for(int i=0;i<l;i++)
	{
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
			ns+=s[i];
		else if(s[i]=='(')
			st.push('(');
		else if(s[i]==')')
		{
			while(st.top()!='N' && st.top()!='(')
			{
				char c=st.top();
				st.pop();
				ns+=c;
			}
			if(st.top()=='(')
			{
				char c=st.top();
				st.pop();
			}
		}
		else
		{
			while(st.top()!='N' && prec(s[i])<=prec(st.top()))
			{
				char c=st.top();
				st.pop();
				ns+=c;
			}
			st.push(s[i]);
		}
	}
	//pop whatever remains
	while(st.top()!='N')
	{
		char c=st.top();
		st.pop();
		ns+=c;
	}
	cout<<ns<<"\n";
}

int main() {
 #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
 #endif
       fast_io

       int n;cin>>n;
       while(n--)
       {
       	string exp="";
       cin>>exp;
       infix2postfix(exp);
       }
   return 0;
 }