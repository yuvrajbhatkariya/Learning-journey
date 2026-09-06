#include <iostream>
using namespace std;
int main(){
    int t,n,k;
    string s;
    cin>>t;
    for(int x = 0; x<t;x++){
        cin>>n>>k;
        cin>>s;
        int l = n*2;
        int r = 0;
        int i = 0;
        cout<<"------------"<<endl;
        while(r<k){
            if(s[i] == '1' && s[(i+1)%l] == '0'){
                s[i] = '0';
                s[(i+1)%l] = '1';
                i++;
            }
            i++;
            if(i >= l){
                i = 0;
                r++;
            }
        }
        cout<<" ---------- "<<endl;
        
        for(int j = 0;j<l;j++){
            cout<<s[j]<<" ";
        }

        cout<<" ---------- "<<endl;
        int blue = 0,red =0;
        int y = 1;
        for(int j = 0;j<=l;j++){
            if(s[j] == '1' && (y%2)!=0){
                blue++;
            }
            else if(s[j] == '1' && y%2==0){
                red++;
            }
            y++;
        }
        cout<<endl;
        cout<<s<<endl;
        cout<<red<<" "<<blue<<endl;
    }
    return 0;
}