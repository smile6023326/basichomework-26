#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(void){
    
    string user_time;
    int m = 0;
    int user_talk = 0;
    double all = 0; 
    
    cout << "�п�J�q�ܰ_�l�ɶ� (0935�N���W�E�I�T�ɤ���)" << endl;
    cin >> user_time; 
    cout << "�п�J�q�ܮɶ����u (���:����)" << endl;
    cin >> user_talk;
    
    m = ((int)user_time[0]-48)*1000+((int)user_time[1]-48)
    *100+((int)user_time[2]-48)*10+((int)user_time[3]-48);
    
    if(m >= 800 && m <= 1800){
         if(user_talk % 5 == 0){
              if(user_talk >= 60){
                  all = (user_talk / 5) * 1.7 * 0.85 * 1.04;
                  cout << "���I�q�ܶO���`�p��:" << all << endl;
              }else{
                  all = (user_talk / 5) * 1.7 * 1.04;
                  cout << "���I�q�ܶO���`�p��:" << all << endl;
              }
         }else{
              if(user_talk >= 60){
                  all = ((user_talk / 5) + 1) * 1.7 * 0.85 *1.04;
                  cout << "���I�q�ܶO���`�p��:" << all << endl;
              }else{
                  all = ((user_talk / 5) + 1) * 1.7 * 1.04;
                  cout << "���I�q�ܶO���`�p��:" << all << endl;
              }
         }
    }else{
         if(user_talk % 5 == 0){
              if(user_talk >= 60){
                  all = ((user_talk / 5) * 0.5) * 1.7 * 0.85 * 1.04;
                  cout << "���I�q�ܶO���`�p��:" << all << endl;
              }else{
                  all = ((user_talk / 5) * 0.5) * 1.7 * 1.04;
                  cout << "���I�q�ܶO���`�p��:" << all << endl;
              }
         }else{
              if(user_talk >= 60){
                  all = (((user_talk / 5) + 1) * 0.5) * 1.7 * 0.85 * 1.04;
                  cout << "���I�q�ܶO���`�p��:" << all << endl;
              }else{
                  all = (((user_talk / 5) + 1)* 0.5) * 1.7 * 1.04;
                  cout << "���I�q�ܶO���`�p��:" << all << endl;
              }
         }
    }
    system("pause");
    return 0;
}
