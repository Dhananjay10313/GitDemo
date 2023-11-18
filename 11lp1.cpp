#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<string> inp{"START 200 ","MOVR AREG,ONE ","MOVR BREG,TWO ","ADD AREG,BREG ","ONE DC 10 ","TWO DC 20 ","END "};
    int n=inp.size();
    map<string,int> mot;
    //Inserting values
    mot["START"]=1, mot["MOVR"]=1, mot["AREG"]=1, mot["BREG"]=1, mot["ADD"]=1, mot["DC"]=1, mot["20"]=1, mot["END"]=1, mot["10"]=1, mot["200"]=1 ;
    map<string,int> sym; int cnt;
    for(auto i:inp){
        string s="";
        for(char j:i){
            if(j==' ' || j==','){
                if(mot.find(s)==mot.end()){
                    if(sym.find(s)!=sym.end()){
                        sym[s]=cnt; 
                    }else {sym[s]=1;}
                }else if(s=="START"){
                    cnt=199;
                }
                 s="";
            }
            if(j!=' '&&j!=','){
                s+=j;
            }else s="";
        }
        cnt+=1;
    }
    for(auto i:sym){
        cout<<i.first<<" "<<i.second<<endl;
    }
}