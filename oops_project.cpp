
#include<fstream>
#include<iostream>
#include<ctype.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<iomanip>

using namespace std;

int s1=15, s2=15, s3=15;
int b1=8, b2=8, b3=8;
int t1=8, t2=8, t3=8;
int f1=20, f2=20, f3=20;
int wtl1=20, wtl2=20, wtl3=20;
int wtg1=20, wtg2=20, wtg3=20;
int slot;
char ch;
	
class club
{
	int id, age, amount; 
	char name[50], gender, nm[30], doj[30], doe[30];
	
	public:
		
		char* mname()
		{
			return (name); //returns name of the member 
		}
		
		int retid()
		{
			return id; //returns id of the member 
		}
		
		char* pnm()
		{
			return (nm); //returns program name of the member 
		}
		
		void getd() //input data
		{
			srand(time(0)); //randomly generate id
			id = rand();
			cout<<"ID: ";
			cout<<id<<endl;
			
			cout<<"Enter the Name of the member: ";
			fflush(stdin);
			gets(name);
			
			cout<<"Enter the Gender of the member (M for male and F for female):";
			cin>>gender;
			
			cout<<"Enter the age of member: ";
			cin>>age;
			
			cout<<"Enter the Date of the joining of the member: ";
			fflush(stdin);
			gets(doj);
				
			cout<<"Enter the Date of the end of the member: ";
			fflush(stdin);
			gets(doe);
			
			discount();	//calls discount function
				
			cout<<"\nPrograms available are:\n1)badminton \n2)swimming \n3)football \n4)tennis \n5)weight gain program \n6)weigth loss program	\nEnter the sports/gym program:";
			fflush(stdin);
			gets(nm);
			
			if(strcmp(nm,"badminton") == 0)
				avail_bad(b1,b2,b3); //providing slots for badminton
			if(strcmp(nm,"swimming") == 0)
				avail_swim(s1,s2,s3); //providing slots for swimming
			if(strcmp(nm,"tennis") == 0)
				avail_tennis(t1,t2,t3); //providing slots for tennis
			if(strcmp(nm,"football") == 0)
				avail_football(f1,f2,f3); //providing slots for football
			if(strcmp(nm,"weight gain") == 0)
				avail_wtgain(wtg1,wtg2,wtg3); //providing slots for weight gain program
			if(strcmp(nm,"weight loss") == 0)
				avail_wtloss(wtl1,wtl2,wtl3); //providing slots for weigth loss program	
		}
		
		
		void discount() //assigns amount according to number of month of membership 
		{
			int no_of_months;
			cout<<"Enter the number of months for membership (AVAILABLE MONTHS MEMBERSHIP 1/3/6):\n";
			cin>>no_of_months;
			
			if(no_of_months == 1)
			{
				amount = 1500;
				cout<<"Total amount:"<<amount;
			}
			else if(no_of_months == 3)
			{
				amount = 4000;
				cout<<"Total amount:"<<amount;
			}
			else if(no_of_months == 6)
			{
				amount = 8000;
				cout<<"Total amount:"<<amount;
			}
			else
				cout<<"Enter valid month";		
		}
		
		
		void display() //display function for basic info
		{
			cout<<"\n_______________________\n";
			cout<<"\nGenerated id is: "<<id;
			cout<<"\nName of the member: "<<name;
			cout<<"\nGender of the member: "<<gender;
			cout<<"\nAge of the member: "<<age;
			cout<<"\nDate of the joining of the member: "<<doj;
			cout<<"\nDate of the end of the member: "<<doe;
			cout<<"\nAmount of the membership: "<<amount;
			cout<<"\nProgram: "<<nm<<endl;
			cout<<"\n_______________________\n";
		}
		
		void avail_bad(int &b1,int &b2,int &b3)
		{
			int slot;
			cout<<"Timings:\nslot 1= 5-6pm\nslot 2= 6-7pm\nslot 3= 7-8pm\nWhich slot?\n";
			cin>>slot;
			cout<<endl;
			
			if(slot==1)
				if(b1!=0)
				{
					b1--;
					cout<<"\nBooking done in badminton slot 1";
				}		
			if(slot==2)
				if(b2!=0)
				{
					b2--;
					cout<<"\nBooking done in badminton slot 2";
				}
			if(slot==3)
				if(b3!=0)
				{
					b3--;
					cout<<"\nBooking done in badminton slot 3";
				}
		}
		
		void avail_tennis(int &t1,int &t2,int &t3)
		{
			int slot;
			cout<<"Timings:\nslot 1= 5-6pm\nslot 2= 6-7pm\nslot 3= 7-8pm\nWhich slot?\n";
			cin>>slot;
			cout<<endl;
			
			if(slot==1)
				if(t1!=0)
				{
					t1--;
					cout<<"\nBooking done in tennis slot 1";
				}
			if(slot==2)
				if(t2!=0)
				{
					t2--;
					cout<<"\nBooking done in tennis slot 2";
				}
			if(slot==3)
				if(t3!=0)
				{
					t3--;
					cout<<"\nBooking done in tennis slot 3";
				}
		}
		
		void avail_football(int &f1,int f2,int &f3)
		{
			int slot;
			cout<<"Timings:\nslot 1= 5-6pm\nslot 2= 6-7pm\nslot 3= 7-8pm\nWhich slot?\n";
			cin>>slot;
			cout<<endl;
			
			if(slot==1)
				if(f1!=0)
				{
					f1--;
					cout<<"\nBooking done in football slot 1";
				}
			if(slot==2)
				if(f2!=0)
				{
					f2--;
					cout<<"\nBooking done in football slot 2";
				}
			if(slot==3)
				if(f3!=0)
				{
					f3--;
					cout<<"\nBooking done in football slot 3";
				}
		}
		
		void avail_swim(int &s1,int &s2,int &s3)
		{
			int slot;
			cout<<"Timings:\nslot 1= 5-6pm\nslot 2= 6-7pm\nslot 3= 7-8pm\nWhich slot?\n";
			cin>>slot;
			cout<<endl;
			
			if(slot==1)
				if(s1!=0)
				{
					s1--;
					cout<<"\nBooking done in swimming slot 1";
				}
			if(slot==2)
				if(s2!=0)
				{
					s2--;
					cout<<"\nBooking done in swimming slot 2";
				}
			if(slot==3)
				if(s3!=0)
				{
					s3--;
					cout<<"\nBooking done in swimming slot 3";
				}
		}
		
		void avail_wtloss(int &wtl1,int &wtl2,int &wtl3)
		{
			int slot;
			cout<<"Timings:\nslot 1= 5-6pm\nslot 2= 6-7pm\nslot 3= 7-8pm\nWhich slot?\n";
			cin>>slot;
			cout<<endl;
			
			if(slot==1)
				if(wtl1!=0)
				{
					wtl1--;
					cout<<"\nBooking done in Weight loss training slot 1";
				}
			if(slot==2)
				if(wtl2!=0)
				{
					wtl2--;
					cout<<"\nBooking done in Weight loss training slot 2";
				}
			if(slot==3)
				if(wtl3!=0)
				{
					wtl3--;
					cout<<"\nBooking done Weight loss training slot 3";
				}
		}
		
		void avail_wtgain(int &wtg1,int &wtg2,int &wtg3)
		{
			int slot;
			cout<<"Timings:\nslot 1= 5-6pm\nslot 2= 6-7pm\nslot 3= 7-8pm\nWhich slot?\n";
			cin>>slot;
			cout<<endl;
			
			if(slot==1)
				if(wtg1!=0)
				{
					wtg1--;
					cout<<"\nBooking done in Weight gain training slot 1";
				}
			if(slot==2)
				if(wtg2!=0)
				{
					wtg2--;
					cout<<"\nBooking done in Weight gain training slot 2";
				}
			if(slot==3)
				if(wtg3!=0)
				{
					wtg3--;
					cout<<"\nBooking done Weight gain training slot 3";
				}
		}
		
		void avail(int &b1,int &b2,int &b3,int &s1,int &s2,int &s3,int &t1,int &t2,int &t3,int &f1,int &f2,int &f3,int &wtl1,int &wtl2,int &wtl3,int &wtg1,int &wtg2,int &wtg3)
		{
			cout<<"\n___________________\n";
			cout<<"Available slots of badminton:\n";
			cout<<"Slot 1 "<<b1<<"\nSlot 2 "<<b2<<"\nSlot 3 "<<b3<<"\n\n";
			
			cout<<"Available slots of Swimming:\n";
			cout<<"Slot 1 "<<s1<<"\nSlot 2 "<<s2<<"\nSlot 3 "<<s3<<"\n\n";
			
			cout<<"Available slots of tennis:\n";
			cout<<"Slot 1 "<<t1<<"\nSlot 2 "<<t2<<"\nSlot 3 "<<t3<<"\n\n";
			
			cout<<"Available slots of football:\n";
			cout<<"Slot 1 "<<f1<<"\nSlot 2 "<<f2<<"\nSlot 3 "<<f3<<"\n\n";
			
			cout<<"Available slots of Weight loss training:\n";
			cout<<"Slot 1 "<<wtl1<<"\nSlot 2 "<<wtl2<<"\nSlot 3 "<<wtl3<<"\n\n";
			
			cout<<"Available slots of Weight gain training:\n";
			cout<<"Slot 1 "<<wtg1<<"\nSlot 2 "<<wtg2<<"\nSlot 3 "<<wtg3<<"\n\n";
			cout<<"\n___________________\n";
		}
			
};

char ans;
club c1;
fstream file1,file2;

void create_file() //creates record file and adds 1st record
{
	char ans;
	club c1;
	fstream file1;
	int k=1;
	file1.open("member_record.dat", ios::out | ios::binary);
	do{
		c1.getd();
		file1.write((char *)&c1, sizeof(c1));
		k++;
	}while(k==1);
	
	file1.close();
}

void create_file1() //creates availability file
{
	club c1;
	fstream file1;
	file1.open("availability.dat", ios::out | ios::binary);
	c1.avail(b1,b2,b3,s1,s2,s3,t1,t2,t3,f1,f2,f3,wtl1,wtl2,wtl3,wtg1,wtg2,wtg3);
	file1.write((char *)&c1, sizeof(c1));
	file1.close();	
}

void showfile() //displays slots
{
	club c1;
	fstream file1;
	file1.open("availability.dat", ios::in | ios::binary);
	while(file1.read((char *)&c1,sizeof(c1)))
	{
		c1.avail(b1,b2,b3,s1,s2,s3,t1,t2,t3,f1,f2,f3,wtl1,wtl2,wtl3,wtg1,wtg2,wtg3);
	}
	file1.close();
}

void show_file() //displays record
{
	club c1;
	fstream file1;
	file1.seekp(0, ios::beg);
	file1.open("member_record.dat", ios::in | ios::binary);
	while(file1.read((char *)&c1,sizeof(c1)))
	{
		c1.display();
	}
	file1.close();
}

void append_file() //adds record
{
	club c1;
	fstream file1;
	char ans;
	file1.open("member_record.dat", ios::app | ios::binary);
	do{
		c1.getd();
		file1.write((char *)&c1, sizeof(c1));
		cout<<"\nDo you want to enter another record(y/n):-";
		cin>>ans;
	}while(ans == 'y' || ans == 'Y');
	file1.close();
}

void search_id() //search according to id
{
	club c1;
	fstream file1;
	file1.open("member_record.dat",ios::in | ios::binary);
	int f = 0;
	int s;
	cout<<"\nEnter id of member to be searched: ";
	cin>>s;
	
	file1.seekp(0, ios::beg);
	while(file1.read((char*)&c1, sizeof(c1)))
	{
		if(c1.retid() == s)
		{
			c1.display();
			f++;
			break;
		}
	}
	if(f == 0)
  	{ 
    	cout<<"\nApplicant not found!";
  	}

	file1.close();
}

void search_name() //search according to name
{
	club c1;
	fstream file1;
	file1.open("member_record.dat",ios::in | ios::binary);
	int f = 0;
	char s[30];
	cout<<"\nEnter name of member to be searched: ";
	fflush(stdin);
	gets(s);
	
	file1.seekp(0, ios::beg);
	while(file1.read((char*)&c1, sizeof(c1)))
	{
		if(strcmp(s,c1.mname()) == 0)
		{
			c1.display();
			f++;
			break;
		}
	}
	if(f == 0)
  	{ 
    	cout<<"\nApplicant not found!";
  	}

	file1.close();
}

void edit()
{
  	club c1,c2;
  	fstream file1,file2;

  	file1.open("member_record.dat",ios::binary | ios::in);
  	file2.open("temp.dat",ios::binary | ios::out);

  	cout<<"\nEnter id of the record to be replaced: ";
  	int s;
  	cin>>s;
	cout<<"\nEnter new details: ";
	c2.getd();
	
	while(file1.read((char*)&c1, sizeof(c1)))
	{
	    if(c1.retid() == s)
	      	file2.write((char*)&c2,sizeof(c2));
	    else
	     	file2.write((char*)&c1,sizeof(c1));
	}
	file1.close();
	file2.close();
	
	remove("member_record.dat");
	rename("temp.dat","member_record.dat");
	cout<<"\n**Records updated!*\n";
}

int main()
{
	int choice;
	char ch;
	do
	{
		cout<<"\n___________________\n";
		cout<<"1.Stores 1st records:\n2.Total slots Available when there is no member\n3.Add new applicant\n4.Displays Availability of slots\n";
		cout<<"5.Display for available member\n6.Search for available member according to id \n7.Search for available member according to name";
		cout<<"\n8.Edit a record";
		cout<<"\n___________________\n";
		cout<<"\nEnter the choice:";
		cin>>choice;
	
		switch(choice)
		{
			case 1:
				create_file();
				break;
			case 2:
				create_file1();
				break;
			case 3:
				append_file();
				break;
			case 4:
				showfile();
				break;
			case 5:
				show_file();
				break;
			case 6:
				search_id();
				break;
			case 7:
				search_name();
				break;
			case 8: 
				edit();
				break;
			default:
				cout<<"Wrong choice......Enter again\n";
		}
		cout<<"\nWish to continue?(y/n)";
		cin>>ch;
	}while(ch == 'y' || ch == 'Y');
	
	return 0;
}
