#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        
        for(int i=1;i<=n;i++){
            int temp=sqrt(i);
            if(temp*temp==i){
                cout<<"1"<<" ";
            }
                
            else {
                cout<<"0"<<" ";
                
            }
           
        }
        cout<<endl;
    }
	//code
	return 0;
}
