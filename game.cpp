#include <iostream>
using namespace std;
char arr[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkone();
void interface();
void interface(){
   cout<<"...TIC...TAC...TOE...."<<endl;
   cout<<" participant 1(x)"<<endl;
   cout<<" participant 2(0)"<<endl;
   cout<<"x---------x-----------x"<<endl;
   cout<<" |     |     |     | "<<endl;
   cout<<" |  "<<arr[1]<<"  |  "<<arr[2]<<"  |  "<<arr[3]<<"  | "<<endl;
   cout<<" |     |     |     | "<<endl;
   cout<<"-----------------------"<<endl;
   cout<<" |     |     |     | "<<endl;
   cout<<" |  "<<arr[4]<<"  |  "<<arr[5]<<"  |  "<<arr[6]<<"  | "<<endl;
   cout<<" |     |     |     | "<<endl;
   cout<<"-----------------------"<<endl;
   cout<<" |     |     |     | "<<endl;
   cout<<" |  "<<arr[7]<<"  |  "<<arr[8]<<"  |  "<<arr[9]<<"  | "<<endl;
   cout<<" |     |     |     | "<<endl;
   cout<<"x---------x-----------x"<<endl;
   }
   int checkone(){
   if(arr[1]==arr[2]&& arr[2]==arr[3])
    return 1;
   else if(arr[4]==arr[5] && arr[5]==arr[6])
    return 1;
    else if(arr[7]==arr[8] && arr[8]==arr[9])
    return 1;
    else if (arr[1]==arr[4]&& arr[4]==arr[7])
    return 1;
    else if(arr[2]==arr[5]&& arr[5]==arr[8])
    return 1;
    else if(arr[3]==arr[6] && arr[6]==arr[9])
    return 1;
    else if(arr[1]==arr[5]&& arr[5]==arr[9])
    return 1;
    else if(arr[3]==arr[5] && arr[5]==arr[7])
    return 1;
    else if(arr[1]!='1'&& arr[2]!='2'&&arr[3]!='3'&&arr[4]!='4'&&arr[5]!='5'&&arr[6]!='6'&&arr[7]!='7'&&arr[8]!='8'&&arr[9]!='9')
    return 0;
    else{
        return -1;
    }}
int main(){
    int participant =1;
    int i,chance;
    char sign;
    do{
        interface();
        if(participant%2==1){
            participant=1;
        }else{
        participant=2;
        }cout<<" Participant "<<participant<<" Enter a number";
        cin>>chance;
        if(participant==1){
            sign='x';
        }else{
        sign='0';
        }if(chance==1 && arr[1]=='1')
         arr[1]=sign;
         else if(chance==2 && arr[2]=='2')
         arr[2]=sign;
         else if(chance==3 && arr[3]=='3')
         arr[3]=sign;
         else if(chance==4 && arr[4]=='4')
         arr[4]=sign;
         else if(chance==5 && arr[5]=='5')
         arr[5]=sign;
         else if(chance==6 && arr[6]=='6')
         arr[6]=sign;
         else if(chance==7 && arr[7]=='7')
         arr[7]=sign;
         else if(chance==8 && arr[8]=='8')
         arr[8]=sign;
         else if(chance==9 && arr[9]=='9')
         arr[9]=sign;
         else{
            cout<<"INOPERATIVE NUMBER!!!";
            participant--;
            cin.ignore();
            cin.get();
         }
         i=checkone();
         participant++;

    }while(i==-1);
    interface();
    if(participant==1)
    cout<<" PARTICIPANT "<<--participant<<" WINS "<<endl;
    else
    cout<<"GAME DRAW";
    cin.ignore();
    cin.get();




return 0;
}
