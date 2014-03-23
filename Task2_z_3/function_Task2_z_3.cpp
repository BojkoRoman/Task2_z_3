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
	 cout <<" ��������, ��� ����� ����i����i��� ����� ���  �i����i ���������� ������ ����: \n"; 
	 cout<<"  <����� �i����>, <����>, <³������ ��������� �����>. \n";
	 cout<<" �� �������� ������i ���i � ������i ������i, \n"; 
	 cout<<" �i����������� �� � ������� ��������� �i������ ��������� �����. \n\n";
	 cout <<"\t\t Copyright 2014 by Roman Bojko\n\n";
}
void enter()
{
	 int a,b,c,d;
	 string  month []  ={ "�i����","�����","��������","��i����","�������","�������","������","�������","��������","�������",
	"��������","�������"};
	 WORK1 *wk,TMP; 
	 
	cout <<"����i�� �i���i��� ����� ��� ���i����i ���������� ������ ���� : ";
	error();
	wk= (WORK1 *) malloc(sizeof(WORK1)*size);

	for(int i = 0; i < size; ++i) 
	{
		cout <<"����i�� ����� ̳���� : ";
		while ((!(cin >> wk[i].month)) || (wk[i].month < 0 ) || (wk[i].month > 12) || cin.peek() != '\n')
	   {
		   if(wk[i].month > 12)
		   {
			   cout << ("\n\n\t������� !");
				cout << "\n\n\t�i� �� 12 �i���i�!\n";
				cout << "\n\t��������� �������� �� ���..?\n\n";
				cout << "\n\t1 ��� ---- 2 ͳ\n\n";
		   }else
		   {
			    cout << ("\n\t������� !");
				cout << "\n\n\t���i��� ������� �����!\n";
				cout << "\n\t���������� ��������..?\n\n";
			    cout << "\n\t1 ��� ---- 2 ͳ\n\n";
		   }
		    cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
			
			cin >> a;
			switch(a)
			{
			case 1:
				enter();
			case 2:
				cout << "\t\t\t\t~��-��~"<<endl;
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
		cout<<"����i�� ����(� ������) : ";
		while ((!(cin >> wk[i].plan)) || (wk[i].plan < 0 ) || (wk[i].plan > 214748364) || cin.peek() != '\n')
	   {
		   	    cout << ("\n\t������� !");
				cout << "\n\n\t���i��� ������� �����!\n";
				cout << "\n\t���������� ��������..?\n\n";
			    cout << "\n\t1 ��� ---- 2 ͳ\n\n";
		   
		    cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
			
			cin >> b;
			switch(b)
			{
			case 1:
				enter();
			case 2:
				cout << "\t\t\t\t~��-��~"<<endl;
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
		cout<<"����i�� ³������ ��������� �����(� ������) : ";
		  while ((!(cin >> wk[i].actual_output)) || (wk[i].actual_output < 0 ) || (wk[i].actual_output > 214748364) || cin.peek() != '\n')
	   {
		   	    cout << ("\n\t������� !");
				cout << "\n\n\t���i��� ������� �����!\n";
				cout << "\n\t���������� ��������..?\n\n";
			    cout << "\n\t1 ��� ---- 2 ͳ\n\n";
		   
		    cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
			
			cin >> c;
			switch(c)
			{
			case 1:
				enter();
			case 2:
				cout << "\t\t\t\t~��-��~"<<endl;
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

	  cout<<"\n��������� : \n";
	  for( int i = 0; i < 80; ++i )
				{
					cout << "-";
				}

	for( int i = 0; i < size; ++i) 
	{
		cout <<"̳���� : ";
		cout <<month[wk[i].month - 1] << " | ";
		cout <<" ���� : "; 
		cout <<wk[i].plan << " | ";
		cout <<" ��������� ����� : ";
		cout <<wk[i].actual_output<<" %\n";
	}

	cout << "\n\t��������� �������� �� ���..?\n\n";
	cout << "\n\t1 ��� ---- 2 ͳ\n\n";

	cin >> d;
			switch(d)
			{
			case 1:
				enter();
				cout <<"����i�� �i���i��� ����� ��� ���i����i ���������� ������ ���� : ";
				break;
			case 2:
				cout << "\t\t\t\t~��-��~"<<endl;
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
			cout << ("\n\n\t������� !");
            cout << "\n\n\t�������� ����� ���i���� 4 ����� ��� ��������i!\n";
		    cout << "\n\t��������� �������� �� ���..?\n\n";
		    cout << "\n\t1 ��� ---- 2 ͳ\n\n";
		}else{
			cout << ("\n\n\t������� !");
			cout << "\n\n\t���i��� ������� �����!\n";
			cout << "\n\t��������� �������� �� ���..?\n\n";
			cout << "\n\t1 ��� ---- 2 ͳ\n\n";
		}
			
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cin >> a;

			switch(a)
			{
			case 1:
				enter();
				cout <<"����i�� �i���i��� ����� ��� ���i����i ���������� ������ ���� : ";
				break;
			case 2:
				cout << "\t\t\t\t~��-��~"<<endl;
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