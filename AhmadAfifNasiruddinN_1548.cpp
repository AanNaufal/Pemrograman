#include <iostream>
#include <conio.h>
#include <cstring>
#include <windows.h>
using namespace std;

void login(){
}

class Speaker
{
private :
      int  jumlah, Merk;
      char jenis [10];
	  char warna [10];
public :
	
      void data(int jumlah_sound,char jenis_speaker [10], char warna_speaker [10]);
      void info();
};

	
int main()
{
	
      //mendeklarasikan objek
    Speaker Dolby;
    Speaker Simbada;
		
	cout<<"+++Daftar Macam-macam Speaker+++\n";
	cout<<"+++login untuk bisa melihat daftar Speaker!!\n";
	char user[20];
	char pass[4];
	cout<<"Username : "; cin>>user;
                cout<<"Password : "; cin>>pass;
                if(strcmp(pass,"1234")==0&&strcmp(user,"speaker	")) {  
                                cout<<"User Berhasil Login\n";
                                cout<<endl;
                                
                                                                                           
                }else{
                                cout<<"Password Salah atau User Salah\n";
                                cout<<endl;
                                login();
                                
                }
				system ("cls");
    
	
    cout<<"Speaker Dolby :"<<endl;
    cout<<"==============="<<endl;
    Dolby.data(3,"aktif","Putih"); //memanggil fungsi data()
    Dolby.info(); //memanggil fungsi info();

    cout<<endl;
    cout<<"Speaker Simbada :"<<endl;
    cout<<"================="<<endl;
    Simbada.data(1,"pasif","Silver"); //memanggil fungsi data()
    Simbada.info(); //memanggil fungsi info();
         _getche();
    return 0;
}

void Speaker::data( int jumlah_sound,char jenis_speaker[10], char warna_speaker [10])
{
      strcpy(jenis, jenis_speaker);
      jumlah = jumlah_sound;
      strcpy(warna, warna_speaker);
}

void Speaker::info()
{
      cout<<"Jenis        : "<<jenis<<endl;
      cout<<"Jumlah Sound : "<<jumlah<<endl;
      cout<<"Warna        : "<<warna<<endl;
} 
