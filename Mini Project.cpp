#include<iostream>
#include<stdlib.h>
using namespace std;
void calculateCGPA();
void calculateGPA();
void method();
int main()
{
	system("COLOR FC");
	int input;
cout<<"--------------------------------------------------------------------------"<<endl;
cout<<"\t\t\tWelcome to GPA and CGPA Calculator"<<endl;
cout<<"--------------------------------------------------------------------------\n"<<endl;
cout<<" MENU:"<<endl;
cout<<" 1. Calculate CGPA (Cummulative Grade Point Average)"<<endl;
cout<<" 2. Calculate GPA (Grade Point Average)"<<endl;
cout<<" 3. View the Credits"<<endl;
cout<<" 4. Exit"<<endl;
cout<<"--------------------------------------------------------------------------"<<endl;
cout<<"Enter your choice: ";
cin>>input;
switch(input)
{
case 1:calculateCGPA();
break;
case 2:calculateGPA();
break;
case 3:method();
break;
case 4:exit(0);
break;
default:cout<<"You have entered wrong input.Try again!\n"<<endl;
main();
}
return 0;
}
void calculateCGPA()
{
	int a,b,c,d,e,f,g,h,i,in;
	float cr,cr1,cr2,cr3,cr4,cr5,cr6,cr7,cr8,cr9;
	cout<<"\nEnter BTY100 marks out of 100: ";
	cin>>a;
	cr=(0.7407*a)/100;
	cout<<"\n\nEnter CHE122 marks out of 100: ";
	cin>>b;
	cr1=(0.3703*b)/100;
	cout<<"\n\nEnter CHE124 marks out of 100: ";
	cin>>c;
	cr2=(1.1111*c)/100;
	cout<<"\n\nEnter CSE202 marks out of 100: ";
	cin>>d;
	cr3=(1.8518*d)/100;
	cout<<"\n\nEnter MEC103 marks out of 100: ";
	cin>>e;
	cr4=(1.4815*e)/100;
	cout<<"\n\nEnter MEC108 marks out of 100: ";
	cin>>f;
	cr5=(0.7407*f)/100;
	cout<<"\n\nEnter MTH108 marks out of 100: ";
	cin>>g;
	cr6=(1.1111*g)/100;
	cout<<"\n\nEnter PEV103 marks out of 100: ";
	cin>>h;
	cr7=(1.4815*h)/100;
	cout<<"\n\nEnter PHY108 marks out of 100: ";
	cin>>i;
	cr8=(1.1111*i)/100;
	cr9=cr+cr1+cr2+cr3+cr4+cr5+cr6+cr7+cr8;
	cout<<"\n------------------------------------";
	cout<<"\nYour CGPA is "<<cr9;
	cout<<"\n\nPress 1 to go to the main menu:";
							cout<<"\nPress 2 for exit:\n";
							cin>>in;
							switch(in)
							{
								case 1:
								{
									main();
								}
								break;
								case 2:
									{
										exit(0);
									}
									default:
										{
											cout<<"Invalid Key";
											exit(0);
										}
							}
}
void calculateGPA()
{
	cout<<"****************************************\n";
			cout<<"1: BTY100 \n\n";
			cout<<"2: CHE122 \n\n";
			cout<<"3: CHE124 \n\n";
			cout<<"4: CSE202 \n\n";
			cout<<"5: MEC103 \n\n";
			cout<<"6: MEC108 \n\n";	
			cout<<"7: MTH108 \n\n";
			cout<<"8: PEV103 \n\n";
			cout<<"9: PHY108 \n";
			cout<<"----------------------------------------\n";
			cout<<"Enter your Subject: ";
			int n,in,ca1,ca2,ca3,ca4,ca5,ca6,ca7,ca8,ca9,ca10,ca11,total,att,att1,total1,mid,totalmid,end,totalend,final,sum;
			cin>>n;
			switch(n)
			{
				case 1:
					{
						cout<<"\nEnter the best 2 ca's  marks of Biology out of 3: \n\n";
						cout<<"Enter 1st CA marks: ";
						cin>>ca1;
						cout<<"\nEnter 2nd CA marks: ";
						cin>>ca2;
						total=((ca1+ca2)*20)/60;
						cout<<"\nEnter the % Attendance : ";
						cin>>att;
						if(att>=95&&att<=100)
						{
							att1=5;
						}
						else if(att>=90&&att<95)
						{
							att1=4;
						}
						else if(att>=85&&att<90)
						{
							att1=3;
						}
						else if(att>=80&&att<85)
						{
							att1=2;
						}
						else if(att>=75&&att<80)
						{
							att1=1;
						}
						else
						{
							att1=0;
						}
						total1=att1+total;
						cout<<"\nEnter MID term marks: ";
						cin>>mid;
						totalmid=(mid*25)/40;
						cout<<"out of 50 you got:"<<total1+totalmid;
						cout<<"\nEnter END term Marks: ";
						cin>>end;
						totalend=(end*50)/70;
						final=total1+totalmid+totalend;
						cout<<"\nTotal Marks obtained: "<<final;
						if(final<=100&&final>=90)
						{
							cout<<"\n  A+ grade";
						}
						else if(final<90&&final>=80)
						{
							cout<<"\n  A grade";
						}
						else if(final<80&&final>=70)
						{
							cout<<"\n  B grade";
						}
						else if(final<70&&final>=60)
						{
							cout<<"\n  B- grade";
						}
						else if(final<60&&final>=50)
						{
							cout<<"\n  C grade";
						}
						else if(final<50&&final>=40)
						{
							cout<<"\n  D grade";
						}
						else
						{
						cout<<"  E grade FAIL!";	
						}
							}
							cout<<"\n\nPress 1 to go to the main menu:";
							cout<<"\nPress 2 for exit:\n";
							cin>>in;
							switch(in)
							{
								case 1:
								{
									main();
								}
								break;
								case 2:
									{
										exit(0);
									}
									default:
										{
											cout<<"Invalid Key";
											exit(0);
										}
							}
					case 2:
					{
						cout<<"\nEnter the best 8 experiment marks of Chemistry Laboratory out of 10: \n\n";
						cout<<"Enter 1st experiment marks: ";
						cin>>ca1;
						cout<<"\nEnterr 2nd experiment mark: ";
						cin>>ca2;
						cout<<"\nEnterr 3rd experiment mark: ";
						cin>>ca3;
						cout<<"\nEnterr 4th experiment mark: ";
						cin>>ca4;
						cout<<"\nEnterr 5th experiment mark: ";
						cin>>ca5;
						cout<<"\nEnterr 6th experiment mark: ";
						cin>>ca6;
						cout<<"\nEnterr 7th experiment mark: ";
						cin>>ca7;
						cout<<"\nEnterr 8th experiment mark: ";
						cin>>ca8;
						total=((ca1+ca2+ca3+ca4+ca5+ca6+ca7+ca8)*25)/400;
						cout<<"\nEnter the % Attendance : ";
						cin>>att;
						if(att>=95&&att<=100)
						{
							att1=5;
						}
						else if(att>=90&&att<95)
						{
							att1=4;
						}
						else if(att>=85&&att<90)
						{
							att1=3;
						}
						else if(att>=80&&att<85)
						{
							att1=2;
						}
						else if(att>=75&&att<80)
						{
							att1=1;
						}
						else
						{
							att1=0;
						}
						total1=att1+total;
						cout<<"\nEnter MID term practical marks: ";
						cin>>mid;
						totalmid=(mid*20)/30;
							cout<<"out of 50 you got:"<<total1+totalmid;
						cout<<"\nEnter END term Marks: ";
						cin>>end;
						totalend=(end*50)/100;
						final=total1+totalmid+totalend;
						cout<<"\nTotal Marks obtained: "<<final;
						if(final<=100&&final>=90)
						{
							cout<<"\n  A+ grade";
						}
						else if(final<90&&final>=80)
						{
							cout<<"\n  A grade";
						}
						else if(final<80&&final>=70)
						{
							cout<<"\n  B grade";
						}
						else if(final<70&&final>=60)
						{
							cout<<"\n  B- grade";
						}
						else if(final<60&&final>=50)
						{
							cout<<"\n  C grade";
						}
						else if(final<50&&final>=40)
						{
							cout<<"\n  D grade";
						}
						else
						{
						cout<<"  E grade FAIL!";	
						}
							}
								cout<<"\n\nPress 1 to go to the main menu:";
							cout<<"\nPress 2 for exit:\n";
							cin>>in;
							switch(in)
							{
								case 1:
								{
									main();
								}
								break;
								case 2:
									{
										exit(0);
									}
									default:
										{
											cout<<"Invalid Key";
											exit(0);
										}
							}
					case 3:
					{
						cout<<"\nEnter the best 2 ca's  marks of Chemistry out of 3: \n\n";
						cout<<"Enter 1st CA marks: ";
						cin>>ca1;
						cout<<"\nEnter 2nd CA marks: ";
						cin>>ca2;
						total=((ca1+ca2)*20)/60;
						cout<<"\nEnter the % Attendance : ";
						cin>>att;
						if(att>=95&&att<=100)
						{
							att1=5;
						}
						else if(att>=90&&att<95)
						{
							att1=4;
						}
						else if(att>=85&&att<90)
						{
							att1=3;
						}
						else if(att>=80&&att<85)
						{
							att1=2;
						}
						else if(att>=75&&att<80)
						{
							att1=1;
						}
						else
						{
							att1=0;
						}
						total1=att1+total;
						cout<<"\nEnter MID term marks: ";
						cin>>mid;
						totalmid=(mid*25)/40;
							cout<<"out of 50 you got:"<<total1+totalmid;
						cout<<"\nEnter END term Marks: ";
						cin>>end;
						totalend=(end*50)/70;
						final=total1+totalmid+totalend;
						cout<<"\nTotal Marks obtained: "<<final;
						if(final<=100&&final>=90)
						{
							cout<<"\n  A+ grade";
						}
						else if(final<90&&final>=80)
						{
							cout<<"\n  A grade";
						}
						else if(final<80&&final>=70)
						{
							cout<<"\n  B grade";
						}
						else if(final<70&&final>=60)
						{
							cout<<"\n  B- grade";
						}
						else if(final<60&&final>=50)
						{
							cout<<"\n  C grade";
						}
						else if(final<50&&final>=40)
						{
							cout<<"\n  D grade";
						}
						else
						{
						cout<<"  E grade FAIL!";	
						}
							}
								cout<<"\n\nPress 1 to go to the main menu:";
							cout<<"\nPress 2 for exit:\n";
							cin>>in;
							switch(in)
							{
								case 1:
								{
									main();
								}
								break;
								case 2:
									{
										exit(0);
									}
									default:
										{
											cout<<"Invalid Key";
											exit(0);
										}
							}
					case 4:
					{
						cout<<"\nEnter the best 3 ca's  marks of Object oriented Programming out of 4: \n\n";
						cout<<"Enter 1st CA marks: ";
						cin>>ca1;
						cout<<"\nEnter 2nd CA marks: ";
						cin>>ca2;
						cout<<"\nEnter 3rd CA marks: ";
						cin>>ca3;
						total=((ca1+ca2+ca3)*20)/90;
						cout<<"\nEnter the % Attendance : ";
						cin>>att;
						if(att>=95&&att<=100)
						{
							att1=5;
						}
						else if(att>=90&&att<95)
						{
							att1=4;
						}
						else if(att>=85&&att<90)
						{
							att1=3;
						}
						else if(att>=80&&att<85)
						{
							att1=2;
						}
						else if(att>=75&&att<80)
						{
							att1=1;
						}
						else
						{
							att1=0;
						}
						total1=att1+total;
						cout<<"\nEnter MID term marks: ";
						cin>>mid;
						totalmid=(mid*25)/40;
							cout<<"out of 50 you got:"<<total1+totalmid;
						cout<<"\nEnter END term Marks: ";
						cin>>end;
						totalend=(end*50)/70;
						final=total1+totalmid+totalend;
						cout<<"\nTotal Marks obtained: "<<final;
						if(final<=100&&final>=90)
						{
							cout<<"\n  A+ grade";
						}
						else if(final<90&&final>=80)
						{
							cout<<"\n  A grade";
						}
						else if(final<80&&final>=70)
						{
							cout<<"\n  B grade";
						}
						else if(final<70&&final>=60)
						{
							cout<<"\n  B- grade";
						}
						else if(final<60&&final>=50)
						{
							cout<<"\n  C grade";
						}
						else if(final<50&&final>=40)
						{
							cout<<"\n  D grade";
						}
						else
						{
						cout<<"  E grade FAIL!";	
						}
							}
								cout<<"\n\nPress 1 to go to the main menu:";
							cout<<"\nPress 2 for exit:\n";
							cin>>in;
							switch(in)
							{
								case 1:
								{
									main();
								}
								break;
								case 2:
									{
										exit(0);
									}
									default:
										{
											cout<<"Invalid Key";
											exit(0);
										}
							}
					case 5:
					{
						cout<<"\nEnter the best 10 sheet marks of Engineering Graphics out of 12: \n\n";
						cout<<"Enter 1st sheet marks: ";
						cin>>ca1;
						cout<<"\nEnter 2nd sheet marks: ";
						cin>>ca2;
						cout<<"\nEnter 3rd sheet marks: ";
						cin>>ca3;
						cout<<"\nEnter 4th sheet marks: ";
						cin>>ca4;
						cout<<"\nEnter 5th sheet marks: ";
						cin>>ca5;
						cout<<"\nEnter 6th sheet marks: ";
						cin>>ca6;
						cout<<"\nEnter 7th sheet marks: ";
						cin>>ca7;
						cout<<"\nEnter 8th sheet marks: ";
						cin>>ca8;
						cout<<"\nEnter 9th sheet marks: ";
						cin>>ca9;
						cout<<"\nEnter 10th sheet marks: ";
						cin>>ca10;
						cout<<"\nEnter CA marks best of 2 : ";
						cin>>ca11;
						sum=((ca1+ca2+ca3+ca4+ca5+ca6+ca7+ca8+ca9+ca10)*30)/100;
						total=((sum+ca11)*20)/60;
						cout<<"\nEnter the % Attendance : ";
						cin>>att;
						if(att>=95&&att<=100)
						{
							att1=5;
						}
						else if(att>=90&&att<95)
						{
							att1=4;
						}
						else if(att>=85&&att<90)
						{
							att1=3;
						}
						else if(att>=80&&att<85)
						{
							att1=2;
						}
						else if(att>=75&&att<80)
						{
							att1=1;
						}
						else
						{
							att1=0;
						}
						total1=att1+total;
						cout<<"\nEnter MID term marks: ";
						cin>>mid;
						totalmid=(mid*25)/40;
							cout<<"out of 50 you got:"<<total1+totalmid;
						cout<<"\nEnter END term Marks: ";
						cin>>end;
						totalend=(end*50)/70;
						final=total1+totalmid+totalend;
						cout<<"\nTotal Marks obtained: "<<final;
						if(final<=100&&final>=90)
						{
							cout<<"\n  A+ grade";
						}
						else if(final<90&&final>=80)
						{
							cout<<"\n  A grade";
						}
						else if(final<80&&final>=70)
						{
							cout<<"\n  B grade";
						}
						else if(final<70&&final>=60)
						{
							cout<<"\n  B- grade";
						}
						else if(final<60&&final>=50)
						{
							cout<<"\n  C grade";
						}
						else if(final<50&&final>=40)
						{
							cout<<"\n  D grade";
						}
						else
						{
						cout<<"  E grade FAIL!";	
						}
							}
								cout<<"\n\nPress 1 to go to the main menu:";
							cout<<"\nPress 2 for exit:\n";
							cin>>in;
							switch(in)
							{
								case 1:
								{
									main();
								}
								break;
								case 2:
									{
										exit(0);
									}
									default:
										{
											cout<<"Invalid Key";
											exit(0);
										}
							}
					case 6:
					{
						cout<<"\nEnter the best 8 experiment marks of Engineering Workshop Laboratory out of 10: \n\n";
						cout<<"Enter 1st experiment marks: ";
						cin>>ca1;
						cout<<"\nEnterr 2nd experiment mark: ";
						cin>>ca2;
						cout<<"\nEnterr 3rd experiment mark: ";
						cin>>ca3;
						cout<<"\nEnterr 4th experiment mark: ";
						cin>>ca4;
						cout<<"\nEnterr 5th experiment mark: ";
						cin>>ca5;
						cout<<"\nEnterr 6th experiment mark: ";
						cin>>ca6;
						cout<<"\nEnterr 7th experiment mark: ";
						cin>>ca7;
						cout<<"\nEnterr 8th experiment mark: ";
						cin>>ca8;
						total=((ca1+ca2+ca3+ca4+ca5+ca6+ca7+ca8)*25)/400;
						cout<<"\nEnter the % Attendance : ";
						cin>>att;
						if(att>=95&&att<=100)
						{
							att1=5;
						}
						else if(att>=90&&att<95)
						{
							att1=4;
						}
						else if(att>=85&&att<90)
						{
							att1=3;
						}
						else if(att>=80&&att<85)
						{
							att1=2;
						}
						else if(att>=75&&att<80)
						{
							att1=1;
						}
						else
						{
							att1=0;
						}
						total1=att1+total;
						cout<<"\nEnter MID term practical marks: ";
						cin>>mid;
						totalmid=(mid*20)/30;
							cout<<"out of 50 you got:"<<total1+totalmid;
						cout<<"\nEnter END term Marks: ";
						cin>>end;
						totalend=(end*50)/100;
						final=total1+totalmid+totalend;
						cout<<"\nTotal Marks obtained: "<<final;
						if(final<=100&&final>=90)
						{
							cout<<"\n  A+ grade";
						}
						else if(final<90&&final>=80)
						{
							cout<<"\n  A grade";
						}
						else if(final<80&&final>=70)
						{
							cout<<"\n  B grade";
						}
						else if(final<70&&final>=60)
						{
							cout<<"\n  B- grade";
						}
						else if(final<60&&final>=50)
						{
							cout<<"\n  C grade";
						}
						else if(final<50&&final>=40)
						{
							cout<<"\n  D grade";
						}
						else
						{
						cout<<"  E grade FAIL!";	
						}
							}
								cout<<"\n\nPress 1 to go to the main menu:";
							cout<<"\nPress 2 for exit:\n";
							cin>>in;
							switch(in)
							{
								case 1:
								{
									main();
								}
								break;
								case 2:
									{
										exit(0);
									}
									default:
										{
											cout<<"Invalid Key";
											exit(0);
										}
							}
					case 7:
					{
						cout<<"\nEnter the best 2 ca's  marks of Mathematics out of 3: \n\n";
						cout<<"Enter 1st CA marks: ";
						cin>>ca1;
						cout<<"\nEnter 2nd CA marks: ";
						cin>>ca2;
						total=((ca1+ca2)*20)/60;
						cout<<"\nEnter the % Attendance : ";
						cin>>att;
						if(att>=95&&att<=100)
						{
							att1=5;
						}
						else if(att>=90&&att<95)
						{
							att1=4;
						}
						else if(att>=85&&att<90)
						{
							att1=3;
						}
						else if(att>=80&&att<85)
						{
							att1=2;
						}
						else if(att>=75&&att<80)
						{
							att1=1;
						}
						else
						{
							att1=0;
						}
						total1=att1+total;
						cout<<"\nEnter MID term marks: ";
						cin>>mid;
						totalmid=(mid*25)/40;
							cout<<"out of 50 you got:"<<total1+totalmid;
						cout<<"\nEnter END term Marks: ";
						cin>>end;
						totalend=(end*50)/70;
						final=total1+totalmid+totalend;
						cout<<"\nTotal Marks obtained: "<<final;
						if(final<=100&&final>=90)
						{
							cout<<"\n  A+ grade";
						}
						else if(final<90&&final>=80)
						{
							cout<<"\n  A grade";
						}
						else if(final<80&&final>=70)
						{
							cout<<"\n  B grade";
						}
						else if(final<70&&final>=60)
						{
							cout<<"\n  B- grade";
						}
						else if(final<60&&final>=50)
						{
							cout<<"\n  C grade";
						}
						else if(final<50&&final>=40)
						{
							cout<<"\n  D grade";
						}
						else
						{
						cout<<"  E grade FAIL!";	
						}
							}
								cout<<"\n\nPress 1 to go to the main menu:";
							cout<<"\nPress 2 for exit:\n";
							cin>>in;
							switch(in)
							{
								case 1:
								{
									main();
								}
								break;
								case 2:
									{
										exit(0);
									}
									default:
										{
											cout<<"Invalid Key";
											exit(0);
										}
							}
					case 8:
					{
						cout<<"\nEnter the marks of VERBAL ABILITY \n\n";
						cout<<"Enter 1st CA marks: ";
						cin>>ca1;
						cout<<"\nEnter 2nd CA marks: ";
						cin>>ca2;
						cout<<"\nEnter 3rd CA marks: ";
						cin>>ca3;
						cout<<"\nEnter 3rd CA marks: ";
						cin>>ca4;
						total=((ca1+ca2+ca3+ca4)*30)/120;
						cout<<"\nEnter the % Attendance : ";
						cin>>att;
						if(att>=95&&att<=100)
						{
							att1=15;
						}
						else if(att>=90&&att<95)
						{
							att1=12;
						}
						else if(att>=85&&att<90)
						{
							att1=9;
						}
						else if(att>=80&&att<85)
						{
							att1=6;
						}
						else if(att>=75&&att<80)
						{
							att1=3;
						}
						else
						{
							att1=0;
						}
						total1=att1+total;
						cout<<"\nEnter MID term marks: ";
						cin>>mid;
						totalmid=(mid*15)/50;
							cout<<"out of 50 you got:"<<total1+totalmid;
						cout<<"\nEnter END term Marks: ";
						cin>>end;
						totalend=(end*40)/100;
						final=total1+totalmid+totalend;
						cout<<"\nTotal Marks obtained: "<<final;
						if(final<=100&&final>=90)
						{
							cout<<"\n  A+ grade";
						}
						else if(final<90&&final>=80)
						{
							cout<<"\n  A grade";
						}
						else if(final<80&&final>=70)
						{
							cout<<"\n  B grade";
						}
						else if(final<70&&final>=60)
						{
							cout<<"\n  B- grade";
						}
						else if(final<60&&final>=50)
						{
							cout<<"\n  C grade";
						}
						else if(final<50&&final>=40)
						{
							cout<<"\n  D grade";
						}
						else
						{
						cout<<"  E grade FAIL!";	
						}
							}
								cout<<"\n\nPress 1 to go to the main menu:";
							cout<<"\nPress 2 for exit:\n";
							cin>>in;
							switch(in)
							{
								case 1:
								{
									main();
								}
								break;
								case 2:
									{
										exit(0);
									}
									default:
										{
											cout<<"Invalid Key";
											exit(0);
										}
							}
					case 9:
					{
						cout<<"\nEnter the best 2 ca's  marks of APPLIED PHYSICS-ll out of 3: \n\n";
						cout<<"Enter 1st CA marks: ";
						cin>>ca1;
						cout<<"\nEnter 2nd CA marks: ";
						cin>>ca2;
						total=((ca1+ca2)*20)/60;
						cout<<"\nEnter the % Attendance : ";
						cin>>att;
						if(att>=95&&att<=100)
						{
							att1=5;
						}
						else if(att>=90&&att<95)
						{
							att1=4;
						}
						else if(att>=85&&att<90)
						{
							att1=3;
						}
						else if(att>=80&&att<85)
						{
							att1=2;
						}
						else if(att>=75&&att<80)
						{
							att1=1;
						}
						else
						{
							att1=0;
						}
						total1=att1+total;
						cout<<"\nEnter MID term marks: ";
						cin>>mid;
						totalmid=(mid*25)/40;
							cout<<"out of 50 you got:"<<total1+totalmid;
						cout<<"\nEnter END term Marks: ";
						cin>>end;
						totalend=(end*50)/70;
						final=total1+totalmid+totalend;
						cout<<"\nTotal Marks obtained: "<<final;
						if(final<=100&&final>=90)
						{
							cout<<"\n  A+ grade";
						}
						else if(final<90&&final>=80)
						{
							cout<<"\n  A grade";
						}
						else if(final<80&&final>=70)
						{
							cout<<"\n  B grade";
						}
						else if(final<70&&final>=60)
						{
							cout<<"\n  B- grade";
						}
						else if(final<60&&final>=50)
						{
							cout<<"\n  C grade";
						}
						else if(final<50&&final>=40)
						{
							cout<<"\n  D grade";
						}
						else
						{
						cout<<"  E grade FAIL!";	
						}
							}
								cout<<"\n\nPress 1 to go to the main menu:";
							cout<<"\nPress 2 for exit:\n";
							cin>>in;
							switch(in)
							{
								case 1:
								{
									main();
								}
								break;
								case 2:
									{
										exit(0);
									}
									default:
										{
											cout<<"Invalid Key";
											exit(0);
										}
							}
							break;
							default:
								{
									cout<<"WRONG INPUT\n";
									calculateGPA();
								}
									
			}
		}

void method()
{
	int in;
	cout<<"Course code                          Credits"<<endl<<endl;
	cout<<" BTY100                                 2   "<<endl<<endl;
	cout<<" CHE122                                 1   "<<endl<<endl;
	cout<<" CHE124                                 3   "<<endl<<endl;
	cout<<" CSE202                                 5   "<<endl<<endl;
	cout<<" MEC103                                 4   "<<endl<<endl;
	cout<<" MEC108                                 2   "<<endl<<endl;
	cout<<" MTH108                                 3   "<<endl<<endl;
	cout<<" PEV103                                 4   "<<endl<<endl;
	cout<<" PHY108                                 3   "<<endl<<endl;
	cout<<"\n\nPress 1 to go to the main menu:";
							cout<<"\nPress 2 for exit:\n";
							cin>>in;
							switch(in)
							{
								case 1:
								{
									main();
								}
								break;
								case 2:
									{
										exit(0);
									}
									default:
										{
											cout<<"Invalid Key";
											exit(0);
										}
							}
}
