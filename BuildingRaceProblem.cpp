#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    float a,b,x,y;
	    cin>>a>>b>>x>>y;
	    float d1=a/x;
	    
	    float d2=b/y;
	    if(d1>d2) cout<<"Chefina"<<endl;
	    else if(d1==d2) cout<<"Both"<<endl;
	    else cout<<"chef"<<endl;
	}
	
	return 0;
}
