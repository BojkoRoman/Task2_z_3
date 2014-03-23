#include "header_task2_z_3.h"
#include <iostream>
#include <string>
using namespace std;
int size;
struct WORK1 
{
	int month;
	int plan;
	int actual_output;
};

void welcome()
{
	 cout <<" Програма, яка зчитує послiдовнiсть даних про  мiсячнi результати роботи цеху: \n"; 
	 cout<<"  <Номер мiсяця>, <План>, <Відсоток виконання плану>. \n";
	 cout<<" Та виводить введенi данi у виглядi таблицi, \n"; 
	 cout<<" вiдсортувавши їх у порядку зменшення вiдсотку виконання плану. \n\n";
	 cout <<"\t\t Copyright 2014 by Roman Bojko\n\n";
}
void enter()
{
	 int a,b,c,d;
	 string  month []  ={ "Сiчень","Лютий","Березень","Квiтень","Травень","Червень","Липень","Серпень","Вересень","Жовтень",
	"Листопад","Грудень"};
	 WORK1 *wk,TMP; 
	 
	cout <<"Введiть кiлькiсть даних про щомiсячнi результати роботи цеху : ";
	error();
	wk= (WORK1 *) malloc(sizeof(WORK1)*size);

	for(int i = 0; i < size; ++i) 
	{
		cout <<"Введiть Номер Місяця : ";
		while ((!(cin >> wk[i].month)) || (wk[i].month < 0 ) || (wk[i].month > 12) || cin.peek() != '\n')
	   {
		   if(wk[i].month > 12)
		   {
			   cout << ("\n\n\tПомилка !");
				cout << "\n\n\tРiк має 12 мiсяцiв!\n";
				cout << "\n\tЗапустити програму ще раз..?\n\n";
				cout << "\n\t1 ТАК ---- 2 Ні\n\n";
		   }else
		   {
			    cout << ("\n\tПомилка !");
				cout << "\n\n\tНевiрно введено число!\n";
				cout << "\n\tПродовжити програму..?\n\n";
			    cout << "\n\t1 ТАК ---- 2 Ні\n\n";
		   }
		    cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
			
			cin >> a;
			switch(a)
			{
			case 1:
				enter();
			case 2:
				cout << "\t\t\t\t~Па-Па~"<<endl;
				for(int i = 0; i < 40; ++i)
				{
					cout << "*-";
				}
				system("pause");
				exit(1);
				break;
			default:
				error();
			}
	   }
		cout<<"Введiть План(в цифрах) : ";
		while ((!(cin >> wk[i].plan)) || (wk[i].plan < 0 ) || (wk[i].plan > 214748364) || cin.peek() != '\n')
	   {
		   	    cout << ("\n\tПомилка !");
				cout << "\n\n\tНевiрно введено число!\n";
				cout << "\n\tПродовжити програму..?\n\n";
			    cout << "\n\t1 ТАК ---- 2 Ні\n\n";
		   
		    cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
			
			cin >> b;
			switch(b)
			{
			case 1:
				enter();
			case 2:
				cout << "\t\t\t\t~Па-Па~"<<endl;
				for(int i = 0; i < 40; ++i)
				{
					cout << "*-";
				}
				system("pause");
				exit(1);
				break;
			default:
				error();
			}
	   }
		cout<<"Введiть Відсоток Виконання Плану(в цифрах) : ";
		  while ((!(cin >> wk[i].actual_output)) || (wk[i].actual_output < 0 ) || (wk[i].actual_output > 214748364) || cin.peek() != '\n')
	   {
		   	    cout << ("\n\tПомилка !");
				cout << "\n\n\tНевiрно введено число!\n";
				cout << "\n\tПродовжити програму..?\n\n";
			    cout << "\n\t1 ТАК ---- 2 Ні\n\n";
		   
		    cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
			
			cin >> c;
			switch(c)
			{
			case 1:
				enter();
			case 2:
				cout << "\t\t\t\t~Па-Па~"<<endl;
				for(int i = 0; i < 40; ++i)
				{
					cout << "*-";
				}
				system("pause");
				exit(1);
				break;
			default:
				error();
			}
	   }
		  if( i < size)
		  {
			  for( int i = 0; i < 80; ++i )
				{
					cout << "-";
				}
			  //cout<<endl;
		  }
	
	}
	for( int i = 0; i < size-1; ++i ) 
		for( int j = i + 1; j < size; ++j )
		{
			if( ( (double)wk[i].actual_output/(double)wk[i].plan)*100 < ( (double)wk[j].actual_output/(double)wk[i].plan ) * 100 )
			{
				TMP = wk[i];
				wk[i] = wk[j];
				wk[j] = TMP;
			}
		}

	  cout<<"\nРезультат : \n";
	  for( int i = 0; i < 80; ++i )
				{
					cout << "-";
				}

	for( int i = 0; i < size; ++i) 
	{
		cout <<"Місяць : ";
		cout <<month[wk[i].month - 1] << " | ";
		cout <<" План : "; 
		cout <<wk[i].plan << " | ";
		cout <<" Виконання Плану : ";
		cout <<wk[i].actual_output<<" %\n";
	}

	cout << "\n\tЗапустити програму ще раз..?\n\n";
	cout << "\n\t1 ТАК ---- 2 Ні\n\n";

	cin >> d;
			switch(d)
			{
			case 1:
				enter();
				cout <<"Введiть кiлькiсть даних про щомiсячнi результати роботи цеху : ";
				break;
			case 2:
				cout << "\t\t\t\t~Па-Па~"<<endl;
				for(int i = 0; i < 40; ++i)
				{
					cout << "*-";
				}
				system("pause");
				exit(1);
				break;
			default:
				error();

			}
	free(wk);
}

void error()
{
	int a;
	while ((!(cin >> size)) || (size < 0 ) || (size > 4) || cin.peek() != '\n')
    {
        
		if(size > 4)
			{
			cout << ("\n\n\tПомилка !");
            cout << "\n\n\tПрограма зчитує небiльше 4 даних для зручностi!\n";
		    cout << "\n\tЗапустити програму ще раз..?\n\n";
		    cout << "\n\t1 ТАК ---- 2 Ні\n\n";
		}else{
			cout << ("\n\n\tПомилка !");
			cout << "\n\n\tНевiрно введено число!\n";
			cout << "\n\tЗапустити програму ще раз..?\n\n";
			cout << "\n\t1 ТАК ---- 2 Ні\n\n";
		}
			
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cin >> a;

			switch(a)
			{
			case 1:
				enter();
				cout <<"Введiть кiлькiсть даних про щомiсячнi результати роботи цеху : ";
				break;
			case 2:
				cout << "\t\t\t\t~Па-Па~"<<endl;
				for(int i = 0; i < 40; ++i)
				{
					cout << "*-";
				}
				system("pause");
				exit(1);
				break;
			default:
				error();
			}
              
    }

}