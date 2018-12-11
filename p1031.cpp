#include<iostream>
#include <list>
using namespace std;
int main()
{
	int i,n,w,a,count=0;
	int small,bigger;
	list<int> l;
	list<int>::iterator ps;
	list<int>::iterator pb;
	cin >> w >> n;
	for(i=0;i<n;i++)
	    {
	    	cin >> a;
	    	l.push_back(a);
		}
	 l.sort();
	 while(l.size()>=2)
	 {
	   ps=l.begin();
	   pb=l.end();
	   pb--;
	    while(((*ps+*pb)>w)&&(ps!=pb))
	      pb--;
	    if(pb!=ps)
	      {
	      	l.erase(ps);
	      	l.erase(pb);
	      	count++;
		  }
		  else
		   break;
	 }
    count+=l.size();
    cout<<count;
	return 0;
}
