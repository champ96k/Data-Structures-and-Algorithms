int main(){
    int t;
    cin>>t;
    
    while(t-->0){
        int n1,n2;
        cin>>n1>>n2;
        vector<int> v1;
        vector<int> v2;
        int in ;
        for(int i=0;i<n1;i++)
        {
            cin>>in;
            v1.push_back(in);
        }
        for(int i=0;i<n2;i++)
        {
            cin>>in;
            v2.push_back(in);
        }
        
        int gap=(n1+n2)/2 +(n1+n1)%2;
        bool flag1;  // to decide pointers points to which array
        bool flag2;
        
        while(true){
            
            flag1=true;
            flag2=true;
            int ptr1=0;
            int ptr2=ptr1+gap;
            
            while(ptr2<n2 || flag2){
                
                if(ptr1>=n1 && flag1)
                {
                    flag1=false;
                    ptr1-=n1;
                }
                if(ptr2>=n1 && flag2){
                    flag2=false;
                    ptr2-=n1;
                }
                
                if(flag1==true && flag2==true){
                    if(v1[ptr1]>v1[ptr2]){
                        swap(v1[ptr1],v1[ptr2]);
                    }
                }
                else if(flag1==true && flag2==false){
                    if(v1[ptr1]>v2[ptr2]){
                        swap(v1[ptr1],v2[ptr2]);
                    }
                }
                else{
                    if(v2[ptr1]>v2[ptr2]){
                        swap(v2[ptr1],v2[ptr2]);
                    }
                }
                ptr1++;
                ptr2++;
            }

            if(gap==1){
                
                break;
            }
            gap=gap/2+gap%2;

        }
        for(int x:v1)
		{
			cout<<x<<" ";
		}
		for(int x:v2)
		{
			cout<<x<<" ";
		}
		cout<<"\n";
    }
}
