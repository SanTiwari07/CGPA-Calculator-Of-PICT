#include<iostream>
#include <cmath>
using namespace std;

int main(){
    char sub[5][5]={"LAC","QP","MFR","IEEE","CPPS"};
    float iks;
    int ise[5],twiks1,twiks2;
    float ese[5];
    float attend[5],grp[5],grp1[5];
    int cie[5],tw[5];
    for(int a = 0 ; a < 5 ; a++){
        cout<<"Enter Mid Sem. marks of "<<sub[a]<<" (out of 20):";
        cin>>ise[a];
    }
    cout<<endl;
    for(int b = 0 ; b < 5 ; b++){
        cout<<"Enter CIE mark of "<<sub[b]<<" (out of 15):";
        cin>>cie[b];
    }
    cout<<"Enter CIE mark of IKS (out of 20):";
    cin>>twiks1;
    cout<<endl;
    for(int c = 0 ; c < 5 ; c++){
        cout<<"Enter TW mark of "<<sub[c]<<" (out of 25):";
        cin>>tw[c];
    }
    cout<<"Enter TW mark of IKS (out of 25):";
    cin>>twiks2;
    cout<<endl;
    for(int d = 0 ; d < 5 ; d++){
        cout<<"Enter Theory attendance of "<<sub[d]<<" (in percentage):";
        cin>>attend[d];
        if(attend[d]>=90.0){
            attend[d]=5.0;
        }
        else if(attend[d]>=85.0){
            attend[d]=4.0;
        }
        else if(attend[d]>=80.0){
            attend[d]=3.0;
        }
        else if(attend[d]>=75.0){
            attend[d]=2.0;
        }
        else if(attend[d]>=0.0){
            attend[d]=0.0;
        }
    }
    cout<<"Enter Theory attendance of IKS (in percentage):";
    cin>>iks;
    if(iks>=90.0){
        iks=5.0;
    }
    else if(iks>=85.0){
        iks=4.0;
    }
    else if(iks>=80.0){
        iks=3.0;
    }
    else if(iks>=75.0){
        iks=2.0;
    }
    else if(iks>=0.0){
        iks=0.0;
    }
    cout<<endl;
    for(int e = 0 ; e < 5 ; e++){
        cout<<"Enter End Sem. mark of "<<sub[e]<<" (out of 70):";
        cin>>ese[e];
        ese[e]= (60*ese[e])/70;
        ese[e]= round(ese[e]);
    }
    cout<<endl;
    float lac = (cie[0]+attend[0]+ese[0]+ise[0])/1;
    lac = round(lac);
    for(int g = 0 ; g < 5 ; g++){
        grp[g] = cie[g]+attend[g]+ese[g]+ise[g];
        grp[g] = round(grp[g]);
    }
    for(int k = 0 ; k < 5 ; k++){
        grp1[k]=tw[k]*4;
    }
    int ikss1 = (iks+twiks1)*4;
    int ikss2 = twiks2*4;
    int fab;
    cout<<"enter fab lab marks (out of 25):";
    cin>>fab;
    
    cout<<endl<<"Enter Your CCA credit:";
    int cca;
    cin>>cca;
    fab = fab*4;
    for(int l = 0 ; l<5 ; l++){
        if(grp[l]>=91){
            grp[l]=10;
        }
        else if(grp[l]>=81){
            grp[l]=9;
        }
        else if(grp[l]>=71){
            grp[l]=8;
        }
        else if(grp[l]>=61){
            grp[l]=7;
        }
        else if(grp[l]>=51){
            grp[l]=6;
        }
        else if(grp[l]>=45){
            grp[l]=5;
        }
        else if(grp[l]>=40){
            grp[l]=4;
        }
        else if(grp[l]>=0){
            grp[l]=0;
        }
    }
    for(int ll = 0 ; ll<5 ; ll++){
        if(grp1[ll]>=91){
            grp1[ll]=10;
        }
        else if(grp1[ll]>=81){
            grp1[ll]=9;
        }
        else if(grp1[ll]>=71){
            grp1[ll]=8;
        }
        else if(grp1[ll]>=61){
            grp1[ll]=7;
        }
        else if(grp1[ll]>=51){
            grp1[ll]=6;
        }
        else if(grp1[ll]>=45){
            grp1[ll]=5;
        }
        else if(grp1[ll]>=40){
            grp1[ll]=4;
        }
        else if(grp1[ll]>=0){
            grp1[ll]=0;
        }
    }
    



    if(ikss1>=91){
        ikss1=10;
    }
    else if(ikss1>=81){
        ikss1=9;
    }
    else if(ikss1>=71){
        ikss1=8;
    }
    else if(ikss1>=61){
        ikss1=7;
    }
    else if(ikss1>=51){
        ikss1=6;
    }
    else if(ikss1>=45){
        ikss1=5;
    }
    else if(ikss1>=40){
        ikss1=4;
    }
    else if(ikss1>=0){
        ikss1=0;
    }

    if(ikss2>=91){
        ikss2=10;
    }
    else if(ikss2>=81){
        ikss2=9;
    }
    else if(ikss2>=71){
        ikss2=8;
    }
    else if(ikss2>=61){
        ikss2=7;
    }
    else if(ikss2>=51){
        ikss2=6;
    }
    else if(ikss2>=45){
        ikss2=5;
    }
    else if(ikss2>=40){
        ikss2=4;
    }
    else if(ikss2>=0){
        ikss2=0;
    }

    if(fab>=91){
        fab=10;
    }
    else if(fab>=81){
        fab=9;
    }
    else if(fab>=71){
        fab=8;
    }
    else if(fab>=61){
        fab=7;
    }
    else if(fab>=51){
        fab=6;
    }
    else if(fab>=45){
        fab=5;
    }
    else if(fab>=40){
        fab=4;
    }
    else if(fab>=0){
        fab=0;
    }
    cout<<endl<<"LAC Grade:"<<grp[0]<<endl<<"QP Grade:"<<grp[1]<<endl<<"MFR Grade:"<<grp[2]<<endl<<"IEEE Grade:"<<grp[3]<<endl<<"CPPS Grade:"<<grp[4]<<endl<<"LAC Lab Grade:"<<grp1[0]<<endl<<"QP Lab Grade:"<<grp1[1]<<endl<<"MFR Lab Grade:"<<grp1[2]<<endl<<"IEEE Lab Grade:"<<grp1[3]<<endl<<"CPPS Lab Grade:"<<grp1[4]<<endl<<"FAB Lab Grade:"<<fab<<endl
    <<"IKS Grade(1):"<<ikss1<<endl<<"IKS Grade(2):"<<ikss2<<endl<<"CCA Grade:"<<cca<<endl<<endl;
    cout<<"Your CGPA is "<<(3*grp[0] + 2*grp[1]+ 2*grp[2]+ 2*grp[3]+ 2*grp[4]+fab+ikss1+ikss2+grp1[0]+grp1[1]+grp1[2]+grp1[3]+grp1[4]+cca)/20; 
}
