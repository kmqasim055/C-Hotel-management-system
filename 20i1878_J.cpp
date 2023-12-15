//**********************************************Semester Project OOP********************************************
//Project Designed by: Muhammad Qasim Khan
//Roll no: i20-1878
//Class: BS_AI-JK
//HAVE A GOOD DAY!🌚️


#include<iostream>
#include<fstream>
#include <string>
using namespace std;
struct Hotel
{
	
	Hotel()
	{
		cout<<"[		HOTEL MANAGEMENT SYSTEM		 -> Menu		]"<<endl;
		
	}
	~Hotel()
	{}

	
		
};

class date
{
	int in_month;
	int in_year;
	int in_day;
	int out_day;
	int out_month;
	public:
		date()
		{}
		void Date()
		{
			cout<<"Enter the customer's check in year: "<<endl;
			cin>>in_year;
			cout<<"Enter the customer's check in month(as integer): "<<endl;
			cin>>in_month;
			cout<<"Enter the customer's check in day(as integer): "<<endl;
			cin>>in_day;
			cout<<"Enter the customer's checking out month(as integer): "<<endl;
			cin>>out_month;
			cout<<"Enter the customer's checking out day(as integer): "<<endl;
			cin>>out_day;
			
		}
};
class times
{
	int mins;
	int hours;
	int out_hours;
	int out_mins;
	public:
		times()
		{}
		void Time()
		{
			cout<<"Enter the customer's check in hour: "<<endl;
			cin>>hours;
			cout<<"Enter the customer's check in minutes(as integer): "<<endl;
			cin>>mins;
			cout<<"Enter the customer's checking out hour: "<<endl;
			cin>>out_hours;
			cout<<"Enter the customer's checking out minutes(as integer): "<<endl;
			cin>>out_mins;
		}	
};
class customers
{
	string name;
	int age;
	char gender;
	int ID_num;
	public:
		customers()
		{}
		
		customers(int x)
		{
			cout<<"Enter the customer's name: "<<endl;
			cin>>name;
			cout<<"Enter the customers's age: "<<endl;
			cin>>age;
			cout<<"Enter the customers's gender(m or f): "<<endl;
			cin>>gender;
			cout<<"Enter the customers's ID number: "<<endl;
			cin>>ID_num;
		}
		customers(string x, int y)
		{
			cout<<"Enter the customer's name: "<<endl;
			cin>>name;
		}
		void customers_checkin()
		{
			cout<<"Enter the customer's name: "<<endl;
			cin>>name;
			cout<<"Enter the customers's age: "<<endl;
			cin>>age;
			cout<<"Enter the customers's gender(m or f): "<<endl;
			cin>>gender;
			cout<<"Enter the customers's ID number: "<<endl;
			cin>>ID_num;
		}
		/*customers(string name, int age, char gender, int ID_num)
		{
			this->name=name;
			this->age=age;
			this->gender=gender;
			this->ID_num=ID_num;
		}  */
		string getName()
		{
			return name;
		}
		int getAge()
		{
			return age;
		}
		char getGender()
		{
			return gender;
		}
		int getID_num()
		{
			return ID_num;
		}
	
	
};
class Rooms
{
	
	int price;
	int room_num;   //1 to 10 rooms on 1st floor, 11 to 20 pn 2nd floor,...
	bool room_status;
	customers *c;
	times t;
	date d;
	int floor_no;
	string room_type;
	//int reser_days;
	
	public:
		Rooms():t(),d()
		{
			c=new customers;
		}
		Rooms(int i)
		{
			price=i;
		}
		Rooms(int floor, int room, customers*cust, string room_type)
		{
			c=cust;
			floor_no=floor;
			room_num=room;
			room_status=1;
			this->room_type=room_type;
			d.Date();
			//t.Time();
			//reser_days=reservedDays;
		}
		void set_Status(int status)
		{
			room_status=status;
		}
		
		bool get_Status()
		{
			return room_status;
		}
		int get_roomNo()
		{
			return room_num;
		}
		
	
	
};

class Standard:public Rooms
{
	int num2;
	int num3;
	public:
	Standard():Rooms(300)
	{
		cout<<"Enter the floor no from 1 to 5: "<<endl;
		cin>>num2;
	
		cout<<"Enter room no from 1 to 10 only: "<<endl;
		cin>>num3;
	}
	int getfloorNo()
	{
		return num2;
	}
	int getroomNo()
	{
		return num3;
	}	
	
};

class Moderate:public Rooms
{
	
	int num2;
	int num3;
	public:
	Moderate():Rooms(500)
	{
		cout<<"Enter the floor no from 1 to 5: "<<endl;
		cin>>num2;
	
		cout<<"Enter room no from 11 to 20 only: "<<endl;
		cin>>num3;
	}
	int getfloorNo()
	{
		return num2;
	}
	int getroomNo()
	{
		return num3;
	}	
};

class Superior:public Rooms
{
	int num2;
	int num3;
	public:
	Superior():Rooms(1000)
	{
		cout<<"Enter the floor no from 1 to 5: "<<endl;
		cin>>num2;
	
		cout<<"Enter room no from 21 to 30 only: "<<endl;
		cin>>num3;
	}
	int getfloorNo()
	{
		return num2;
	}
	int getroomNo()
	{
		return num3;
	}	
};

class Junior_Suite:public Rooms
{
	int num2;
	int num3;
	public:
	Junior_Suite():Rooms(2000)
	{
		cout<<"Enter the floor no from 1 to 5: "<<endl;
		cin>>num2;
	
		cout<<"Enter room no from 31 to 40 only: "<<endl;
		cin>>num3;
	}
	int getfloorNo()
	{
		return num2;
	}
	int getroomNo()
	{
		return num3;
	}	
};

class Suite:public Rooms
{
	int num2;
	int num3;
	public:
	Suite():Rooms(5000)
	{
		cout<<"Enter the floor no from 1 to 5: "<<endl;
		cin>>num2;
	
		cout<<"Enter room no from 41 to 50 only: "<<endl;
		cin>>num3;
	}
	int getfloorNo()
	{
		return num2;
	}
	int getroomNo()
	{
		return num3;
	}
	
	
		
};






int main() 
{
	Hotel Menu;  
	ofstream out_cust, out_reserv;
	ifstream in_reserv, in_cust;
	out_reserv.open("reserved.txt",ios::app);
	out_cust.open("customers.txt",ios::app);
	in_reserv.open("reserved.txt");
	in_cust.open("customers.txt");
	
	Rooms **arr;
	arr= new Rooms*[5];
	for(int i=0; i<5;i++)
	{
		arr[i]= new Rooms[50];
		
	}
	int num, num2, num3, age, ID_num, temp, x, count=0;
	string name, temp_name;
	char gender;
	string room_type;
	bool flag,flag2;             //checks for the room's availability.
	
	cout<<"Press 0 to proceed"<<endl;
	cin>>flag;
	while(flag==false)
	{
		cout<<"1 . Press 1 to reserve the room"<<endl;
		cout<<"2 . Press 2 to check in the hotel>>"<<endl;
		//cout<<"Press 3 to check out the hotel>>"<<endl;
		cout<<"3 . Press 3 to view the reserved seats in the hotel>>"<<endl;
		cout<<"4 . Press 4 to check the detailed reports of the hotel>>"<<endl;
		cout<<"5 . Press 5 to exit the hotel menu😉️>>"<<endl;
		cin>>num;
		switch(num)
		{
			case 1:
				{
					cout<<"Enter room type: S for standard, M for moderate, SP for superior, JS for junior suite, SU for suite: "<<endl;
					cin>>room_type;
					if(room_type=="S")
					{
						Standard S;
						num2=S.getfloorNo();
						num3=S.getroomNo();
						
					}
					else if(room_type=="M")
					{
						Moderate M;
						num2=M.getfloorNo();
						num3=M.getroomNo();
					}
					else if(room_type=="SP")
					{
						Superior Sp;
						num2=Sp.getfloorNo();
						num3=Sp.getroomNo();
					}
					else if(room_type=="JS")
					{
						Junior_Suite JS;
						num2=JS.getfloorNo();
						num3=JS.getroomNo();
					}
					else if(room_type=="SU")
					{
						Suite SU;
						num2=SU.getfloorNo();
						num3=SU.getroomNo();
					}
					
					arr[num2-1][num3-1];
				
					cout<<"Enter 1 if you are new customer or else press 0 for old customer: "<<endl;
					cin>>flag2;
					customers c1;
					
					count=0;
					
					while(!in_reserv.eof())
					{
						in_reserv>>x;
						if(x==num2)
						{
							count++;
							in_reserv>>x;
							if(x==num3)
							{
								count++;
								if(count==2)
								{
						
									break;
								} 
							}
							else
								count=0;
						}	
					}
					if(count==2)
						cout<<"Sorry but room is already occupied. Come Back Later.🚀️"<<endl;
					else
					{
						if(flag2==1)
						{
							customers c1(count);
							name=c1.getName();
							age=c1.getAge();
							gender=c1.getGender();
							ID_num=c1.getID_num();
					
							out_cust<<name<<" "<<age<<" "<<gender<<" "<<ID_num<<" "<<" "<<room_type<<" "<<endl;
						}
						else
						{
							customers c1(name,temp);
							while(!in_cust.eof())
							{
								in_cust>>temp_name;
								if(temp_name==c1.getName())
								{
								getline(in_cust,temp_name,'\n');
								cout<<temp_name;
								}
							}
						}
						
						arr[num2-1][num3-1] = Rooms(num2,num3, &c1, room_type);
						flag=arr[num2-1][num3-1].get_Status();
						out_reserv<<num2<<" "<<num3<<endl;
					}
					break;
				}
			case 2:
				{
					customers c1;
					c1.customers_checkin();
					name=c1.getName();
					age=c1.getAge();
					gender=c1.getGender();
					ID_num=c1.getID_num();
					
					times t;
					t.Time();
					cout<<"Customer successfully alloted his/her choice of room.\n";
					break;
				}
			case 3:
				{
					cout<<"***********************Reserved rooms****************************"<<endl;
					while(!in_reserv.eof())
					{
						in_reserv>>x;
						cout<<"floor No: "<<x<<" ";
						in_reserv>>x;
						cout<<"Room No: "<<x<<endl;
							
					}
					break;
				}
			case 4:
				{
					int counter_res=0, counter_emp=0;
					string type_res, type_emp;
					cout<<"*********************Total reserved rooms*******************"<<endl;
					while(!in_reserv.eof())
					{
						in_reserv>>x;
						in_reserv>>x;
						counter_res++;
					}
					cout<<counter_res<<endl;
					cout<<"*********************reserved rooms type respectively*******************"<<endl;
					while(!in_cust.eof())
					{
						for(int i=0;i<5;i++)
						{		
							in_cust>>type_res;
						}
						cout<<"Room types: "<<type_res<<endl;
					}
					cout<<"*********************Total empty rooms*******************"<<endl;
					cout<<250-counter_res<<endl;
					cout<<"*********************empty rooms type respectively*******************"<<endl;
					break;
				 } 
			case 5:
				{
					cout<<"*************************EXIT***************************"<<endl;
					cout<<"Press 5 again to exit the program: ";
					break;
				}
		}
		cout<<"Enter 0 to see menu again or 5 to exit the menu: "<<endl;
		cin>>flag;
	}
	return 0;
}
