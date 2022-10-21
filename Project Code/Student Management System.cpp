///////////////////////////////////////////////////////////////STUDENT MANAGEMENT SYSTEM OF NUML///////////////////////////////////////////////
///////////////////////////////////////////////////////////////GOROUP MEMBERS//////////////////////////////////////////////////////////////////
///////////////////////////////////////////////Name:ABDUL SAMI BUTT 		ROLL NO:BS_CS_160/////////////////////////////////////////////////////
///////////////////////////////////////////////Name:KASHIF NAWAZ KHATTAK	ROLL NO:BS_CS_164/////////////////////////////////////////////////////
///////////////////////////////////////////////Name:NIMRA AKRAM         	ROLL NO:BS_CS_173/////////////////////////////////////////////////////

//This is our main header file 
#include<iostream>
//This header file is used some window API .API stand for Application Progamming Interface
#include<windows.h>
#include<conio.h>
//This Header is used to take a string value so we use thisw header file in it
#include<string>
//This heade  is used to read and write file 
#include<fstream>
using namespace std;
//This function is used to check the list of student record is empty or not
bool listempty();
void beforemainscreen();
//This is over main function to use to check tall the fucntionality of this project
void mainmenu();

//This is over all function that we used for over admin user 
void admins();
void adminsignup();
void adminlogin();
void studentrecordmainscreen();
void swap();
void addrecord();
void addrecordatfront();
void addrecordatend();
void addbeforespecificrollno();
void addafterspecificrollno();
void updaterecord();
void searchrecord();
void deleterecord();
void deleteatend();
void deleteatfront();
void deleteatbeforespecificvalue();
void deleteatafterspeicifiicvalue();
void deleterecordatnposition();
void deleteallrecord();
void showallrecordforward();
void showallrecordbackward();
void asemester1();
void asemester2();
void asemester3();
void asemester4();
void asemester5();
void asemester6();
void asemester7();
void asemester8();
void gpa();
void cgpa();
void instruction();

//This is over all function that which we are used for student user
void student();
void studentsignup();
void studentlogin();
void studentmainscreen();
void addcourse();
void studentcourse();
void showallcourseforward();
void showallcoursebackward();
void ssemester1();
void ssemester2();
void ssemester3();
void ssemester4();
void ssemester5();
void ssemester6();
void ssemester7();
void ssemester8();

//These fucntion is used for file handling in this project
void savedatainnotepadforward();
void savedatainnotepadbackward();

//This is over all global variable that which we are using in this Project
string subject,subject1,subject2,subject3,subject4,subject5,subject6;
string adminusernamesignup,adminpasswordsignup,adminusernamelogin,adminpasswordlogin,studentusernamesignup,confathers,studentpasswordsignup,studentusernamelogin,studentpasswordlogin;
string sname,fname,emialid,deptstudent,stuaddress,sdob,scampus,sextraca,cns,constudent;
int smarks,srollno,semstudent,semcourse,semsubject,sfees;
int total,marksofsubject1,marksofsubject2,marksofsubject3,marksofsubject4,marksofsubject5,marksofsubject6;
float per,SCGPA,SGPA;
char scgpa,sgpa,sinst;
int count=0;


//This is is over user defined  data types which we using to make circular doubly linked list
struct node
{
    node *prev;
    string ssubject,studentname,fathername,emialid,deparment,studentaddress,studentdob,studentcampus,sextracurricular,cinicno,contactofstudent,contactoffather;
    int semestermarks,studentsemester,studentrollno,studentfees;
    float studentcgpa,studentper,studentgpa;
    node *next;
};
//This is over user defined data type that which we are using in it
struct node *tail=NULL;
struct node *location=NULL;
struct node *predlocation=NULL;

//This is over empty fucntion to check list is empty or not
bool listempty()
{
	system("cls");
    system("color 47");
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t\t\t   OF "<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES      ";
    cout<<"\n\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t======================"<<endl;
    cout<<"\t\t\t\t\t\t      MAIN MENU       "<<endl;
    cout<<"\t\t\t\t\t\t======================"<<endl<<endl;
    if(tail==NULL)
    {
    	cout<<"================================"<<endl;
        cout<<"RECORD LIST OF STUDENT IS EMPTY!"<<endl;
        cout<<"================================"<<endl;
        return true;
    }
    else
    {
        cout<<"================================"<<endl;
        cout<<"RECORD LIST OF STUDENT IS EMPTY!"<<endl;
        cout<<"================================"<<endl;
        return false;
    }
}

//THIS FUNCTION IS USED BEFORE MAIN SCREEN
void beforemainscreen()
{
	system("cls");
    system("color 57");
    cout<<endl<<endl;
    cout<<"\t\t\t\t\t=============================================================================="<<endl;
    cout<<"\t\t\t\t\t                      WELCOME TO STUDENT MANAGEMENT SYSTEM				       "<<endl;
    cout<<"\t\t\t\t\t=============================================================================="<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t    OF "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t==============================================================================="<<endl;
    cout<<"\t\t\t\t\t                    NAIONAL UNIVERSITY OF MODERN LANGUAGES                     "<<endl;
    cout<<"\t\t\t\t\t==============================================================================="<<endl;
    cout<<"\t\t\t\t\t==============================================================================="<<endl;
    cout<<"\t\t\t\t\t                                 GROUP MEMEBRS 		                    	";
    cout<<"\n\t\t\t\t\t==============================================================================="<<endl;
    cout<<"\t\t\t\t\t\t  =========================================================="<<endl;
    cout<<"\t\t\t\t\t\t             1.ABDUL SAMI BUTT (BSCS-RC-160)   	           "<<endl;
    cout<<"\t\t\t\t\t\t  =========================================================="<<endl;
    cout<<"\t\t\t\t\t\t  =========================================================="<<endl;
    cout<<"\t\t\t\t\t\t            2.MUHAMMAD KASHIF NAWAZ KHATTAK (BSCS-RC-160)   "<<endl;
    cout<<"\t\t\t\t\t\t  =========================================================="<<endl;
    cout<<"\t\t\t\t\t\t  =========================================================="<<endl;
    cout<<"\t\t\t\t\t\t            3.NIMRA AKRAM (BSCS-RC-173)   		           "<<endl;
    cout<<"\t\t\t\t\t\t  =========================================================="<<endl<<endl;
    cout<<"\n\t\t============================YOUR WORKING IS IN PROCESS PLEASE WAIT!========================="<<endl;
    cout<<"\t\t";
        for(int i=0; i<4 ;i++)
        {

            cout<<".";
            Sleep(1000);
        }
        cout<<"\n\t\t\t============================THANKS FOR GOING TO MAIN SCREEN!=============================="<<endl;
        cout<<"\t\t\t";
        for(int i=0; i<4 ;i++)
        {
            cout<<".";
            Sleep(2000);
        }
        cout<<"\n\t\t==================WELL DONE ALL THE GROUP MEMEBERS FOR COPORATING IN THIS PROJECT!======================"<<endl;
        cout<<"\t\t\t";
        for(int i=0; i<4 ;i++)
        {

            cout<<".";
            Sleep(3000);
        }
        mainmenu();
}
//This is over main function
void mainmenu()
{
    int ch;
    while(1)
    {
    system("cls");
    system("color 60");
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t\t\t   OF "<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES      ";
    cout<<"\n\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t======================"<<endl;
    cout<<"\t\t\t\t\t\t      MAIN MENU       "<<endl;
    cout<<"\t\t\t\t\t\t======================"<<endl;
    cout<<"\t\t\t\t\t\t   =============="<<endl;
    cout<<"\t\t\t\t\t\t      1.ADMIN    "<<endl;
    cout<<"\t\t\t\t\t\t   =============="<<endl;
    cout<<"\t\t\t\t\t\t   =============="<<endl;
    cout<<"\t\t\t\t\t\t      2.STUDENT  "<<endl;
    cout<<"\t\t\t\t\t\t   =============="<<endl;
    cout<<"\t\t\t\t\t\t   =============="<<endl;
    cout<<"\t\t\t\t\t\t      3.CLOSE    "<<endl;
    cout<<"\t\t\t\t\t\t   =============="<<endl<<endl;
    cout<<"\t=================="<<endl;
    cout<<"\tENTER YOUR OPTION "<<endl;
    cout<<"\t=================="<<endl<<endl;
    cout<<"\t\t";
    cin>>ch;
    switch(ch)
    {
    case 1:
        cout<<"\n\t\t============================YOUR WORKING IS IN PROCESS PLEASE WAIT!================================"<<endl;
        cout<<"\t\t";
        for(int i=0; i<4 ;i++)
        {

            cout<<".";
            Sleep(1000);
        }
        cout<<"\n\t\t\t============================THANKS FOR CHOOSING ADMIN!=============================="<<endl;
        cout<<"\t\t\t";
        for(int i=0; i<4 ;i++)
        {
            cout<<".";
            Sleep(1000);
        }
        system("cls");
        admins();
        system("pause");
        break;
    case 2:
        cout<<"\n\t\t============================YOUR WORKING IS IN PROCESS PLEASE WAIT!================================"<<endl;
        cout<<"\t\t";
        for(int i=0; i<4 ;i++)
        {
            cout<<".";
            Sleep(1000);
        }
        cout<<"\n\t\t\t============================THANKS FOR CHOOSING ADMIN!=============================="<<endl;
        cout<<"\t\t\t";
        for(int i=0; i<3 ;i++)
        {
            cout<<"\t"<<".";
            Sleep(1000);
        }
        system("cls");
        student();
        system("pause");
        break;
    case 3:
       exit(0);
    default :
        cout<<"You enter an wrong choice!"<<endl;
    }

    }
}


//this is over admin screen fucntion
void admins()
{
    int ch;
    while(1)
    {
    system("cls");
    system("color B0");
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t\t\t   OF "<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES      ";
    cout<<"\n\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t   =================="<<endl;
    cout<<"\t\t\t\t\t\t         ADMIN       "<<endl;;
    cout<<"\t\t\t\t\t\t   =================="<<endl<<endl;
    cout<<"\t\t================================="<<endl;
    cout<<"\t\t1.TO GO TO SIGN  UP FORM OF ADMIN"<<endl;
    cout<<"\t\t================================="<<endl;
    cout<<"\t\t================================="<<endl;
    cout<<"\t\t2.TO GO TO LOGIN IN FORM OF ADMIN"<<endl;
    cout<<"\t\t================================="<<endl;
    cout<<"\t\t========================="<<endl;
    cout<<"\t\t3.       LOGOUT          "<<endl;
    cout<<"\t\t========================="<<endl;
    cout<<"\t\t========================="<<endl;
    cout<<"\t\t4.       CLOSE           "<<endl;
    cout<<"\t\t========================="<<endl<<endl;
    cout<<"\t===================="<<endl;
    cout<<"\t ENTER YOUR OPTION! "<<endl;
    cout<<"\t===================="<<endl<<endl;
    cout<<"\t\t";
    cin>>ch;
    switch(ch)
    {
    case 1:
        cout<<"\n\t\t=====================YOUR WORKING IS IN PROCESSOR PLEASE WAIT!======================================="<<endl;
        cout<<"\t\t";
        for(int i=0; i<4 ;i++)
        {

            cout<<".";
            Sleep(1000);
        }
        cout<<"\n\t\t\t=============THANKS FOR CHOOSING SIGN UP SCREEN OF ADMIN!=================="<<endl;
        cout<<"\t\t\t";
        for(int i=0; i<3 ;i++)
        {
            cout<<".";
            Sleep(1000);
        }
        system("cls");
        adminsignup();
        system("pause");
        break;
    case 2:
         cout<<"\n\t\t=================YOUR WORKING IS IN PROCESSOR PLEASE WAIT!======================"<<endl;
        cout<<"\t\t";
        for(int i=0; i<4 ;i++)
        {

            cout<<".";
            Sleep(1000);
        }
        cout<<"\n\t\t\t============THANKS FOR CHOOSING LOGIN SCREEN OF ADMIN!================"<<endl;
        cout<<"\t\t\t";
        for(int i=0; i<3 ;i++)
        {
            cout<<".";
            Sleep(1000);
        }
        system("cls");
        adminlogin();
        system("pause");
        break;
    case 3:
        cout<<"\n\t\t===================YOUR WORKING IS IN PROCESSOR PLEASE WAIT!========================"<<endl;
        cout<<"\t\t";
        for(int i=0; i<5 ;i++)
        {

            cout<<".";
            Sleep(1000);
        }
        cout<<"\n\t\t\t==============THANKS FOR CHOOSING MAIN SCREEN!========================"<<endl;
        cout<<"\t\t\t";
        for(int i=0; i<3 ;i++)
        {
            cout<<".";
            Sleep(1000);
        }
        system("cls");
        mainmenu();
        system("pause");
        break;
    case 4:
        exit(0);
        break;
    default :
        cout<<"======================"<<endl;
        cout<<"YOU ENTER WRONG OPTION!"<<endl;
        cout<<"======================"<<endl;
    }

    }
}

//this is over admin signup function
void adminsignup()
{
   int len;
  char admingender;
  system("color DF");
  cout<<"\n\t\t\t\t\t========================================"<<endl;
  cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
  cout<<"\n\t\t\t\t\t========================================"<<endl;
  cout<<"\t\t\t\t\t\t\t  ===="<<endl;
  cout<<"\t\t\t\t\t\t\t   OF "<<endl;
  cout<<"\t\t\t\t\t\t\t  ===="<<endl;
  cout<<"\t\t\t\t\t========================================="<<endl;
  cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES      ";
  cout<<"\n\t\t\t\t\t========================================="<<endl;
  cout<<"\t\t\t\t\t\t======================"<<endl;
  cout<<"\t\t\t\t\t\t  ADMIN SIGN UP FORM  "<<endl;
  cout<<"\t\t\t\t\t\t======================"<<endl<<endl;
  cout<<"\t\t============================"<<endl;
  cout<<"\t\tENTER 000 TO GO TO BACK OR C"<<endl;
  cout<<"\t\t============================"<<endl<<endl;
  username:
  cout<<"\t====================="<<endl;
  cout<<"\tENTER ADMIN USERNAME:"<<endl;
  cout<<"\t====================="<<endl;
  cout<<"\t";
  cin>>adminusernamesignup;
 len=adminusernamesignup.length();
 if(len>12)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 12 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     goto username;
 }
  if(adminusernamesignup=="000")
  {
      admins();
  }
  cout<<endl;
  cout<<"\t=============="<<endl;
  cout<<"\tENTER PASSWORD:"<<endl;
  cout<<"\t=============="<<endl;
  for(int i=1 ; i<=5 ; i++)
  {

  cout<<"\t";adminpasswordsignup+=getch();
  cout<<"*";
  }
   if(adminpasswordsignup=="000")
  {
      admins();
  }
  gender:
  cout<<endl;
  cout<<"\t==================="<<endl;
  cout<<"\tENTER GENDER M/F/O:"<<endl;
  cout<<"\t==================="<<endl;
  cout<<"\t";
  cin>>admingender;
 if(admingender=='c' || admingender=='C')
  {
      admins();
  }
  else if(admingender=='m'||admingender=='M'|| admingender=='f'||admingender=='F'|| admingender=='O'||admingender=='o')
  {
  cout<<"\n\t\t==================YOUR ID IS CREATING PLEASE WAIT!===================="<<endl;
  cout<<"\t\t";
  for(int i=0; i<3 ;i++)
  {
      cout<<".";
      Sleep(1000);
  }
  cout<<"\n\t\t\t===========YOUR ID IS CREATED SUCESSFULLY!=================="<<endl;
  cout<<"\t\t\t";
  for(int i=0; i<3 ;i++)
  {
      cout<<".";
      Sleep(1000);
  }
  }
  else
  {
      cout<<"========================================"<<endl;
      cout<<"USER M FOR MALE F FOR FEMALE O FOR OTHER"<<endl;
      cout<<"========================================"<<endl;
      goto gender;
  }
}

//This is over adminlogin function
void adminlogin()
{
int len;
    system("Color 47");
    cout<<endl;
    cout<<"\n\t\t\t\t==================================================="<<endl;
    cout<<"\t\t\t\t        WELCOME TO STUDENT MANAGEMENT SYSTEM         ";
    cout<<"\n\t\t\t\t==================================================="<<endl;
    cout<<"\t\t\t\t\t\t\t======"<<endl;
    cout<<"\t\t\t\t\t\t\t  OF   "<<endl;
    cout<<"\t\t\t\t\t\t\t======"<<endl;
    cout<<"\t\t\t\t==================================================="<<endl;
    cout<<"\t\t\t\t       NAIONAL UNIVERSITY OF MODERN LANGUAGES      ";
    cout<<"\n\t\t\t\t==================================================="<<endl;
    cout<<"\t\t\t\t\t\t========================"<<endl;
    cout<<"\t\t\t\t\t\t  ADMIN LOGIN IN FORM!  "<<endl;
    cout<<"\t\t\t\t\t\t========================"<<endl;
    cout<<"\t\t======================="<<endl;
    cout<<"\t\tENTER 000 TO GO TO BACK"<<endl;
    cout<<"\t\t======================="<<endl<<endl;
    username:
    cout<<"\t====================="<<endl;
    cout<<"\tENTER ADMIN USERNAME:"<<endl;
    cout<<"\t====================="<<endl;
    cout<<"\t";
    cin>>adminusernamelogin;
    len=adminusernamelogin.length();
 if(len>12)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 12 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto username;
 }
    if(adminusernamelogin=="000")
    {
     admins();
    }
    pass:
    cout<<endl;
    cout<<"\t==============="<<endl;
    cout<<"\tENTER PASSWORD:"<<endl;
    cout<<"\t==============="<<endl;
    cout<<"\t"<<endl;
   for(int i=1 ; i<=5 ; i++)
    {
      cout<<"\t";
     adminpasswordlogin+=getch();
     cout<<"*";
    }
    if(adminpasswordlogin=="000")
    {
     admins();
    }
    if(adminusernamelogin==adminusernamesignup && adminpasswordlogin==adminpasswordsignup)
    {
    cout<<"\n\t\t==================YOUR ID IS LOGIN IN PLEASE WAIT!===================="<<endl;
  	cout<<"\t\t";
 	 for(int i=0; i<3 ;i++)
  	{
      cout<<".";
      Sleep(1000);
 	 }
 	 cout<<"\n\t\t\t===========THANKS FOR  CHOOSIN ADMIN YOU ARE LOGIN SUCCESSFULY!!=================="<<endl;
  	cout<<"\t\t\t";
 	 for(int i=0; i<3 ;i++)
 	 {
      cout<<".";
      Sleep(1000);
  	}
      studentrecordmainscreen();
    }
    else if(adminusernamelogin!=adminusernamesignup && adminpasswordlogin!=adminpasswordsignup)
    {
        cout<<endl;
        cout<<"==============================================="<<endl;
        cout<<"YOUR USERNAME AND PASSWORD BOTH ARE IN CORRECT!"<<endl;
        cout<<"==============================================="<<endl;
        Sleep(3000);
        goto username;

    }
     else if(adminusernamelogin!=adminusernamesignup)
    {
        cout<<endl;
        cout<<"============================"<<endl;
        cout<<"YOUR USERNAME IS IN CORRECT!"<<endl;
        cout<<"============================"<<endl;
        Sleep(3000);
        goto username;

    }
     else if(adminpasswordlogin!=adminpasswordsignup)
    {
        cout<<endl;
        cout<<"============================"<<endl;
        cout<<"YOUR PASSWORD IS IN CORRECT!"<<endl;
        cout<<"============================"<<endl;
        Sleep(3000);
        goto pass;

    }
    }


//This is over studentmainscreen function
void studentrecordmainscreen()
{
   int ch;

    while(1)
    {
        system("cls");
        system("Color DF");
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t\t\t ===="<<endl;
        cout<<"\t\t\t\t\t\t\t  OF "<<endl;
        cout<<"\t\t\t\t\t\t\t ===="<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES      ";
        cout<<"\n\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t\t  ================="<<endl;
        cout<<"\t\t\t\t\t\t   STUDENT RECORDS "<<endl;
        cout<<"\t\t\t\t\t\t  ================="<<endl;
        cout<<"\t======================="<<endl;
        cout<<"\tENTER 000 TO GO TO BACK"<<endl;
        cout<<"\t======================="<<endl<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"       	                1.TO CHECK THE DATA OF STUDENT IS ADDED OR NOT            		   "<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"       	                2.TO ADD DATA OF STUDENT IN SORTED ORDER            			   "<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<" 		        3.TO ADD DATA OF STUDENT AT FRONT OF THE LIST   	    	    	  	   "<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<" 		        4.TO ADD DATA OF STUDENT AT END OF THE LIST     	    	    	 	   "<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<" 		        5.TO ADD DATA OF STUDENT AT BEFORE SPECIFIC ROLL NO   	    	    	   "<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<" 		        6.TO ADD DATA OF STUDENT AT AFTER SPECIFIC ROLL NO   	    	    	   "<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"          		7.TO SEARCH THE DATA OF STUDENT       			    					   "<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"         		8.TO UPDATE DATA OF STUDENT        				    					   "<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"         		9.TO SWAP THE DATA OF STUDENT        				    				    "<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"     			10.TO DELETE DATA OF STUDENT IN LIST     		    					   "<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<" 	    	        11.TO DELETE DATA OF STUDENT FROM FRONT OF THE LIST 	    			   "<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"     			12.TO DELETE DATA OF STUDENT FROM END OF THE LIST     			    	   "<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"     			13.TO DELETE DATA OF STUDENT FROM BEFORE SPECIFIC ROLL NO     			   "<<endl;
        cout<<"\t=========================================================================================="<<endl;
	    cout<<"\t=========================================================================================="<<endl;
        cout<<"     			14.TO DELETE DATA OF STUDENT FROM AFTER SPECIFIC ROLL NO     			   "<<endl;
        cout<<"\t=========================================================================================="<<endl;
	    cout<<"\t=========================================================================================="<<endl;
        cout<<"     			15.TO DELETE DATA OF STUDENT AT ANY POSITION    			    	       "<<endl;
        cout<<"\t=========================================================================================="<<endl;
		cout<<"\t=========================================================================================="<<endl;
        cout<<" 		        16.TO SHOW DATA OF LIST IN FORWARD WAY      		        			   "<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<" 		        17.TO SHOW DATA OF LIST IN BACKWARD WAY     		 					   "<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<" 		        18.TO SHOW ALL THE COURSE THAT STUDENT ADDED     		 				   "<<endl;
        cout<<"\t=========================================================================================="<<endl;
		cout<<"\t=========================================================================================="<<endl;
        cout<<"    		        19.TO SAVE YOUR DATA OF STUDENT IN NOTEPAD IN FORWARD DIRECTION			   "<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"     		        20.TO SAVE YOUR DATA OF STUDENT IN NOTEPAD IN BACKWARD DIRECTION       "<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"\t=========================================================================================="<<endl;
        cout<<"     		        21.LOGOUT													            "<<endl;
        cout<<"\t=========================================================================================="<<endl<<endl;
	    cout<<"\t=================="<<endl;
        cout<<"\tENTER YOUR OPTION:"<<endl;
        cout<<"\t=================="<<endl;
        cout<<"\t\t\t";
        cin>>ch;

        switch(ch)
        {

		case 1:
			system("cls");
			listempty();
            system("pause");
            break;
         case 2:
            system("cls");
            addrecord();
            system("pause");
            break;
         case 3:
            system("cls");
            addrecordatfront();
            system("pause");
            break;
         case 4:
            system("cls");
            addrecordatend();
            system("pause");
            break;
        case 5:
            system("cls");
            addbeforespecificrollno();
            system("pause");
            break;
        case 6:
            system("cls");
            addafterspecificrollno();
            system("pause");
            break;
        case 7:
            system("cls");
            searchrecord();
            system("pause");
            break;
        case 8:
            system("cls");
            updaterecord();
            system("pause");
            break;
        case 9:
            system("cls");
            swap();
            system("pause");
            break;
        case 10:
            system("cls");
            deleterecord();
            system("pause");
            break;
        case 11:
            system("cls");
            deleteatfront();
            system("pause");
            break;
        case 12:
            system("cls");
            deleteatend();
            system("pause");
            break;
        case 13:
            system("cls");
            deleteatbeforespecificvalue();
            system("pause");
            break;
        case 14:
            system("cls");
            deleteatafterspeicifiicvalue();
            system("pause");
            break;
        case 15:
            system("cls");
            deleterecordatnposition();
            system("pause");
            break;
        case 16:
            system("cls");
            showallrecordforward();
            system("pause");
            break;
        case 17:
            system("cls");
            showallrecordbackward();
            system("pause");
            break;
        case 18:
        system("cls");
        showallcourseforward();
        system("pause");
        break;
        case 19:
           	system("cls");
            savedatainnotepadforward();
            system("pause");
            break;
         case 20:
           	system("cls");
            savedatainnotepadbackward();
            system("pause");
            break;
        case 21:
        cout<<"\n\t\t===================YOUR WORKING IS IN PROCESSOR PLEASE WAIT!========================"<<endl;
        cout<<"\t\t";
        for(int i=0; i<5 ;i++)
        {

            cout<<".";
            Sleep(1000);
        }
        cout<<"\n\t\t\t==============THANKS FOR CHOOSING MAIN SCREEN!========================"<<endl;
        cout<<"\t\t\t";
        for(int i=0; i<3 ;i++)
        {
            cout<<".";
            Sleep(1000);
        }
        system("cls");
        mainmenu();
        system("pause");
        break;
        default :
        cout<<"=========================="<<endl;
        cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
        cout<<"=========================="<<endl;
        }
        }
        }
        

//This is over swap function in which just we are swapping the roll no
void swap()
{
	int num,r1,r2;
		system("Color 67");
        cout<<endl;
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t\t\t ===="<<endl;
        cout<<"\t\t\t\t\t\t\t  OF "<<endl;
        cout<<"\t\t\t\t\t\t\t ===="<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t\t\t\t\t\t    STUDENT RECORDS "<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t======================="<<endl;
        cout<<"\tENTER 000 TO GO TO BACK"<<endl;
        cout<<"\t======================="<<endl<<endl;
if(tail==NULL)
{
cout<<"=================="<<endl;
cout<<"YOUR LIST IS EMPTY"<<endl;
cout<<"=================="<<endl;
cout<<"\t\t\t\t\t===========PRESS ANY TO GO TO BACK========"<<endl;
getch();
}

   else
   {
   	
	cout<<"===================="<<endl;
	cout<<"ENTER FIRST ROLL NO:"<<endl;
	cout<<"===================="<<endl;
	cin>>r1;
	    if(r1==000)
        {
            studentrecordmainscreen();
        }
	cout<<"====================="<<endl;
	cout<<"ENTER SECOND ROLL NO:"<<endl;
    cout<<"====================="<<endl;
    cin>>r2;
        if(r2==000)
        {
            studentrecordmainscreen();
        }
	predlocation=location=tail->next;
	   do
    {
    	
    	location=location->next;
      
    }
    while(location->studentrollno!=r1);
       do
    {
      predlocation=predlocation->next;
      
    }
    while(predlocation->studentrollno!=r2);
   
    num=location->studentrollno;
    location->studentrollno=predlocation->studentrollno;
    predlocation->studentrollno=num;
    cout<<"======================================="<<endl;
	cout<<"YOU VALUED IS SWAPPED PLEASE CHECK IT!:"<<endl;
    cout<<"======================================="<<endl;
}
}


//This function is used to create an list of student
void addrecord()
{

   int num=1,len;
   while(num)
   {
        system("Color 5F");
        cout<<endl;
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t\t\t ===="<<endl;
        cout<<"\t\t\t\t\t\t\t  OF "<<endl;
        cout<<"\t\t\t\t\t\t\t ===="<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t\t\t\t\t\t    STUDENT RECORDS "<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t======================="<<endl;
        cout<<"\tENTER 000 TO GO TO BACK"<<endl;
        cout<<"\t======================="<<endl<<endl;
   		cout<<"========================="<<endl;
        cout<<"ENTER ROLL NO OF STUDENT:"<<endl;
        cout<<"========================="<<endl;
        cin>>srollno;
         cin.ignore();
        if(srollno==000)
        {
            studentrecordmainscreen();
        }
        snam:
        cout<<"====================="<<endl;
        cout<<"ENTER NAME OF STUDENT:"<<endl;
        cout<<"====================="<<endl;
        getline(cin,sname);
        len=sname.length();
    if(len>20)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 20 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto snam;
 }
else if(sname=="000")
{
            studentrecordmainscreen();
}

        date:
        cout<<"======================"<<endl;
        cout<<"ENTER D.O.B OF STUDENT:"<<endl;
        cout<<"======================"<<endl;
        cin>>sdob;
        cin.ignore();
        len=sdob.length();
    if(len>10)
 {
     cout<<"\t============================================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 10 CHARACTER DATE As 12-03-2002"<<endl;
     cout<<"\t============================================================"<<endl;
     Sleep(3000);
     goto date;
 }
    else if(sdob=="000")
        {
            studentrecordmainscreen();
        }
        constu:
        cout<<"========================================"<<endl;
        cout<<"ENTER PHONE NO OF STUDENT (max 11 digit)"<<endl;
        cout<<"========================================"<<endl;
        cin>>constudent;
        len=constudent.length();
    if(len>11)
 {
     cout<<"\t==========================================================================="<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 11 CHARACTER YOUR PHONE NO LOOK AS 03xx-xxxxxxx"<<endl;
     cout<<"\t==========================================================================="<<endl;
     Sleep(3000);
     goto constu;
 }
    else if(constudent=="000")
        {
            studentrecordmainscreen();
        }
        cnicstu:
        cout<<"========================================"<<endl;
        cout<<"ENTER CNIC NO OF STUDENT (max 13 digit)"<<endl;
        cout<<"========================================"<<endl;
        cin>>cns;
        cin.ignore();
        len=cns.length();
if(len>13)
 {
     cout<<"\t============================================================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 13 CHARACTER YOUR PHONE NO LOOK AS 3xxxx-xxxxxxx"<<endl;
     cout<<"\t============================================================================"<<endl;
     Sleep(3000);
     goto cnicstu;
 }
else if(cns=="000")
{
    studentrecordmainscreen();
}
        fnam:
        cout<<"============================"<<endl;
        cout<<"ENTER FATHER NAME OF STUDENT:"<<endl;
        cout<<"============================"<<endl;
        getline(cin,fname);
        len=fname.length();
    if(len>20)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 20 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto fnam;
 }
else if(fname=="000")
{
studentrecordmainscreen();
}
        conf:
        cout<<"=========================="<<endl;
        cout<<"ENTER CONTACT NO OF FATHER:"<<endl;
        cout<<"=========================="<<endl;
        cin>>confathers;
        cin.ignore();
        len=confathers.length();
    if(len>11)
 {
     cout<<"\t==========================================================================="<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 11 CHARACTER YOUR PHONE NO LOOK AS 03xx-xxxxxxx"<<endl;
     cout<<"\t==========================================================================="<<endl;
     Sleep(3000);
     goto conf;
 }
    else if(confathers=="000")
        {
            studentrecordmainscreen();
        }
        em:
        cout<<"=========================="<<endl;
        cout<<"ENTER EMAIL ID OF STUDENT:"<<endl;
        cout<<"=========================="<<endl;
        getline(cin,emialid);
        len=emialid.length();
if(len>30)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 30 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto em;
 }
        else if(emialid=="000")
        {
            studentrecordmainscreen();
        }
        deptstu:
        cout<<"=========================="<<endl;
        cout<<"ENTER DEPARMENT OF STUDENT:"<<endl;
        cout<<"=========================="<<endl;

        getline(cin,deptstudent);
        len=deptstudent.length();

if(len>25)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 25 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto deptstu;
 }
       else if(deptstudent=="000")
        {
            studentrecordmainscreen();
        }
        sems:
        cout<<"=========================="<<endl;
        cout<<"ENTER SEMESTER  OF STUDENT:"<<endl;
        cout<<"=========================="<<endl;
        cin>>semstudent;
          if(semstudent==000)
        {
            studentrecordmainscreen();
        }
        if(semstudent>8)
        {
            cout<<"================================================"<<endl;
            cout<<"PLEASE CHECK YOUR SEMESTER NO IT IS LESS THAN 8!"<<endl;
            cout<<"================================================"<<endl;
            goto sems;
        }
        sem:
        cout<<"======================================================"<<endl;
        cout<<"ENTER SEMESTER NO AGAIN TO CALCULATE  MARKS OF STUDENT:"<<endl;
        cout<<"======================================================="<<endl;
        cin>>smarks;
        if(smarks==000)
        {
            studentrecordmainscreen();
        }
        else if(semstudent==smarks)
        {
        switch(smarks)
        {
        case 1:
            system("cls");
            asemester1();
            system("pause");
            break;
        case 2:
            system("cls");
            asemester2();
            system("pause");
            break;
        case 3:
            system("cls");
            asemester3();
            system("pause");
            break;
        case 4:
            system("cls");
            asemester4();
            system("pause");
            break;
        case 5:
            system("cls");
            asemester5();
            system("pause");
            break;
        case 6:
            system("cls");
            asemester6();
            system("pause");
            break;
        case 7:
            system("cls");
            asemester7();
            system("pause");
            break;
        case 8:
            system("cls");
            asemester8();
            system("pause");
            break;
        default :
              cout<<"=========================="<<endl;
              cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
              cout<<"=========================="<<endl;

        }
        }
        else
        {
          cout<<"=================================================================="<<endl;
          cout<<"PLEASE CHECK YOUR SEMESTER NO MUST BE EQUAL SEMESTER NO FOR MARKS!"<<endl;
          cout<<"=================================================================="<<endl;
            goto sem;
        }

        cout<<endl;
        GPA:
        cout<<"======================================================"<<endl;
        cout<<"ENTER G TO CALCULATE GPA OR I FOR HOW TO CALULATE GPA?"<<endl;
        cout<<"======================================================"<<endl;
        cin>>sgpa;
        if(sgpa==000)
        {
            studentrecordmainscreen();
        }
        else if(sgpa=='g'|| sgpa=='G')
        {
            system("cls");
            gpa();
            system("pause");

        }
         else if(sgpa=='i'|| sgpa=='I')
        {

            system("cls");
            instruction();
            system("pause");

        }
       else
        {
            cout<<"=========================="<<endl;
            cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
            cout<<"=========================="<<endl;
            goto GPA;
        }
        CGPA:
        cout<<"========================================================="<<endl;
        cout<<"ENTER C TO CALCULATE CGPA OR I FOR HOW TO CALULATE GPA?"<<endl;
        cout<<"========================================================="<<endl;
        cin>>scgpa;
         cin.ignore();
        if(scgpa==000)
        {
            studentrecordmainscreen();
        }
        else if(scgpa=='c'|| scgpa=='C')
        {

            system("cls");
            cgpa();
            system("pause");

        }
          else if(scgpa=='i'|| scgpa=='I')
         {
            system("cls");
            instruction();
            system("pause");
         }
          else
        {
            cout<<"=========================="<<endl;
            cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
            cout<<"=========================="<<endl;
            goto CGPA;
        }
    
        cout<<"====================="<<endl;
        cout<<"ENTER FEES OF STUDENT:"<<endl;
        cout<<"====================="<<endl;
      	cin>>sfees;
      	cin.ignore();

 if(sfees==000)
{
            studentrecordmainscreen();
}
        stuadd:
        cout<<"========================"<<endl;
        cout<<"ENTER ADDRESS OF STUDENT:"<<endl;
        cout<<"========================"<<endl<<endl;
        getline(cin,stuaddress);
        len=stuaddress.length();

if(len>10)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 10 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto stuadd;
 }
else if(stuaddress=="000")
        {
            studentrecordmainscreen();
        }
        scamp:
        cout<<"========================"<<endl;
        cout<<"ENTER CAMPUS OF STUDENT:"<<endl;
        cout<<"========================"<<endl<<endl;
        getline(cin,scampus);
        len=scampus.length();
if(len>10)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 10 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto scamp;
 }
else if(scampus=="000")
        {
            studentrecordmainscreen();
        }
        sext:
        cout<<"============================================="<<endl;
        cout<<"ENTER EXTRACURRICULAR ACTIIVITIES OF STUDENT:"<<endl;
        cout<<"============================================="<<endl;
        getline(cin,sextraca);
        len=sextraca.length();
if(len>20)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 20 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto sext;
 }
       else if(sextraca=="000")
        {
            studentrecordmainscreen();
        }

	    node *newnode =new node;
        newnode->prev=newnode;
        newnode->studentrollno=srollno;
        newnode->studentname=sname;
        newnode->studentdob=sdob;
        newnode->contactofstudent=constudent;
        newnode->cinicno=cns;
        newnode->fathername=emialid;
        newnode->contactoffather=confathers;
        newnode->emialid=fname;
        newnode->deparment=deptstudent;
        newnode->studentsemester=semstudent;
        newnode->semestermarks=smarks;
        newnode->semestermarks=total;
        newnode->studentper=per;
        newnode->studentgpa=SGPA;
        newnode->studentcgpa=SCGPA;
        newnode->studentfees=sfees;
        newnode->studentaddress=stuaddress;
        newnode->studentcampus=scampus;
        newnode->sextracurricular=sextraca;
        newnode->next=newnode;

        if(tail==NULL)
        {
        tail=newnode;
        cout<<"==================="<<endl;
        cout<<"RECORD IS INSERTED!"<<endl;
        cout<<"==================="<<endl;
        }
        else
        {
        if(srollno < tail->studentrollno)
        {
        location=tail->next;
        newnode->next=location;
        newnode->prev=tail;
        location->prev=newnode;
        tail->next=newnode;
        cout<<"==================="<<endl;
        cout<<"RECORD IS INSERTED!"<<endl;
        cout<<"==================="<<endl;
        }
        else if(srollno > tail->studentrollno)
        {
        location=tail->next;
        newnode->prev=tail;
        newnode->next=location;
        tail->next=newnode;
        location->prev=newnode;
        tail=newnode;
        cout<<"==================="<<endl;
        cout<<"RECORD IS INSERTED!"<<endl;
        cout<<"==================="<<endl;
        }
        else
        {
            cout<<"======================================="<<endl;
            cout<<"ROLL NO IS ALREADY PRESENT IN THE LIST!"<<endl;
            cout<<"======================================="<<endl;
        }
        }
        newrecord:
        cout<<endl<<endl;
        cout<<"===================================================================="<<endl;
        cout<<"DO YOU WANT TO ADD NEW RECORD PRESS 1 TO ADD 0 FOR NO NEW ADD RECORD"<<endl;
        cout<<"===================================================================="<<endl;
        cin>>num;
        cout<<endl<<endl;
        if(num>1)
        {
            cout<<"========================="<<endl;
            cout<<"PLEASE CHECK YOUR CHOICE!"<<endl;
            cout<<"========================="<<endl;
          for(int i=0; i<4 ;i++)
          {

             cout<<".";
             Sleep(1000);
          }
            goto newrecord;
        }
        cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
        getch();
    }

}


//this function is used to the insert the record at front
void addrecordatfront()
{
	int len;
      	    system("Color 57");
        cout<<endl;
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t\t\t ===="<<endl;
        cout<<"\t\t\t\t\t\t\t  OF "<<endl;
        cout<<"\t\t\t\t\t\t\t ===="<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t\t\t\t\t\t    STUDENT RECORDS "<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t======================="<<endl;
        cout<<"\tENTER 000 TO GO TO BACK"<<endl;
        cout<<"\t======================="<<endl<<endl;
if(tail==NULL)
{
cout<<"=================="<<endl;
cout<<"YOUR LIST IS EMPTY"<<endl;
cout<<"=================="<<endl;
cout<<"\t\t\t\t\t===========PRESS ANY TO GO TO BACK========"<<endl;
getch();
}

   else
   {
   	    location=tail->next;
   		cout<<"========================="<<endl;
        cout<<"ENTER ROLL NO OF STUDENT:"<<endl;
        cout<<"========================="<<endl;
        cin>>srollno;
         cin.ignore();
        if(srollno==000)
        {
            studentrecordmainscreen();
        }
        snam:
        cout<<"====================="<<endl;
        cout<<"ENTER NAME OF STUDENT:"<<endl;
        cout<<"====================="<<endl;
        getline(cin,sname);
        len=sname.length();
    if(len>20)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 20 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto snam;
 }
else if(sname=="000")
{
            studentrecordmainscreen();
}

        date:
        cout<<"======================"<<endl;
        cout<<"ENTER D.O.B OF STUDENT:"<<endl;
        cout<<"======================"<<endl;
        cin>>sdob;
        len=sdob.length();
    if(len>10)
 {
     cout<<"\t============================================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 10 CHARACTER DATE As 12-03-2002"<<endl;
     cout<<"\t============================================================"<<endl;
     Sleep(3000);
     goto date;
 }
    else if(sdob=="000")
        {
            studentrecordmainscreen();
        }
        constu:
        cout<<"========================================"<<endl;
        cout<<"ENTER PHONE NO OF STUDENT (max 11 digit)"<<endl;
        cout<<"========================================"<<endl;
        cin>>constudent;
        len=constudent.length();
    if(len>11)
 {
     cout<<"\t==========================================================================="<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 11 CHARACTER YOUR PHONE NO LOOK AS 03xx-xxxxxxx"<<endl;
     cout<<"\t==========================================================================="<<endl;
     Sleep(3000);
     goto constu;
 }
    else if(constudent=="000")
        {
            studentrecordmainscreen();
        }
        cnicstu:
        cout<<"========================================"<<endl;
        cout<<"ENTER CNIC NO OF STUDENT (max 13 digit)"<<endl;
        cout<<"========================================"<<endl;
        cin>>cns;
        cin.ignore();
        len=cns.length();
if(len>13)
 {
     cout<<"\t============================================================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 13 CHARACTER YOUR PHONE NO LOOK AS 3xxxx-xxxxxxx"<<endl;
     cout<<"\t============================================================================"<<endl;
     Sleep(3000);
     goto cnicstu;
 }
else if(cns=="000")
{
    studentrecordmainscreen();
}
        fnam:
        cout<<"============================"<<endl;
        cout<<"ENTER FATHER NAME OF STUDENT:"<<endl;
        cout<<"============================"<<endl;
        getline(cin,fname);
        len=fname.length();
    if(len>20)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 20 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto fnam;
 }
else if(fname=="000")
{
studentrecordmainscreen();
}
        conf:
        cout<<"=========================="<<endl;
        cout<<"ENTER CONTACT NO OF FATHER:"<<endl;
        cout<<"=========================="<<endl;
        cin>>confathers;
        len=confathers.length();
    if(len>11)
 {
     cout<<"\t==========================================================================="<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 11 CHARACTER YOUR PHONE NO LOOK AS 03xx-xxxxxxx"<<endl;
     cout<<"\t==========================================================================="<<endl;
     Sleep(3000);
     goto conf;
 }
    else if(confathers=="000")
        {
            studentrecordmainscreen();
        }
        em:
        cout<<"=========================="<<endl;
        cout<<"ENTER EMAIL ID OF STUDENT:"<<endl;
        cout<<"=========================="<<endl;
        getline(cin,emialid);
        len=emialid.length();
if(len>30)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 30 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto em;
 }
        else if(emialid=="000")
        {
            studentrecordmainscreen();
        }
        deptstu:
        cout<<"=========================="<<endl;
        cout<<"ENTER DEPARMENT OF STUDENT:"<<endl;
        cout<<"=========================="<<endl;

        getline(cin,deptstudent);
        len=deptstudent.length();

if(len>25)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 25 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto deptstu;
 }
       else if(deptstudent=="000")
        {
            studentrecordmainscreen();
        }
        sems:
        cout<<"=========================="<<endl;
        cout<<"ENTER SEMESTER  OF STUDENT:"<<endl;
        cout<<"=========================="<<endl;
        cin>>semstudent;
          if(semstudent==000)
        {
            studentrecordmainscreen();
        }
        if(semstudent>8)
        {
            cout<<"================================================"<<endl;
            cout<<"PLEASE CHECK YOUR SEMESTER NO IT IS LESS THAN 8!"<<endl;
            cout<<"================================================"<<endl;
            goto sems;
        }
        sem:
        cout<<"======================================================"<<endl;
        cout<<"ENTER SEMESTER NO AGAIN TO CALCULATE  MARKS OF STUDENT:"<<endl;
        cout<<"======================================================="<<endl;
        cin>>smarks;
        if(smarks==000)
        {
            studentrecordmainscreen();
        }
        else if(semstudent==smarks)
        {
        switch(smarks)
        {
        case 1:
            system("cls");
            asemester1();
            system("pause");
            break;
        case 2:
            system("cls");
            asemester2();
            system("pause");
            break;
        case 3:
            system("cls");
            asemester3();
            system("pause");
            break;
        case 4:
            system("cls");
            asemester4();
            system("pause");
            break;
        case 5:
            system("cls");
            asemester5();
            system("pause");
            break;
        case 6:
            system("cls");
            asemester6();
            system("pause");
            break;
        case 7:
            system("cls");
            asemester7();
            system("pause");
            break;
        case 8:
            system("cls");
            asemester8();
            system("pause");
            break;
        default :
              cout<<"=========================="<<endl;
              cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
              cout<<"=========================="<<endl;

        }
        }
        else
        {
          cout<<"=================================================================="<<endl;
          cout<<"PLEASE CHECK YOUR SEMESTER NO MUST BE EQUAL SEMESTER NO FOR MARKS!"<<endl;
          cout<<"=================================================================="<<endl;
            goto sem;
        }

        cout<<endl;
        GPA:
        cout<<"======================================================"<<endl;
        cout<<"ENTER G TO CALCULATE GPA OR I FOR HOW TO CALULATE GPA?"<<endl;
        cout<<"======================================================"<<endl;
        cin>>sgpa;
        if(sgpa==000)
        {
            studentrecordmainscreen();
        }
        else if(sgpa=='g'|| sgpa=='G')
        {
            system("cls");
            gpa();
            system("pause");

        }
         else if(sgpa=='i'|| sgpa=='I')
        {

            system("cls");
            instruction();
            system("pause");

        }
       else
        {
            cout<<"=========================="<<endl;
            cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
            cout<<"=========================="<<endl;
            goto GPA;
        }
        CGPA:
        cout<<"========================================================="<<endl;
        cout<<"ENTER C TO CALCULATE CGPA OR I FOR HOW TO CALULATE GPA?"<<endl;
        cout<<"========================================================="<<endl;
        cin>>scgpa;
        cin.ignore();
        if(scgpa==000)
        {
            studentrecordmainscreen();
        }
        else if(scgpa=='c'|| scgpa=='C')
        {

            system("cls");
            cgpa();
            system("pause");

        }
          else if(scgpa=='i'|| scgpa=='I')
         {
            system("cls");
            instruction();
            system("pause");
         }
          else
        {
            cout<<"=========================="<<endl;
            cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
            cout<<"=========================="<<endl;
            goto CGPA;
        }
     
        cout<<"====================="<<endl;
        cout<<"ENTER FEES OF STUDENT:"<<endl;
        cout<<"====================="<<endl<<endl;
  		cin>>sfees;
  	   cin.ignore();

 if(sfees==000)
{
            studentrecordmainscreen();
}
        stuadd:
        cout<<"========================"<<endl;
        cout<<"ENTER ADDRESS OF STUDENT:"<<endl;
        cout<<"========================"<<endl<<endl;
        getline(cin,stuaddress);
        len=stuaddress.length();

if(len>10)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 10 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto stuadd;
 }
else if(stuaddress=="000")
        {
            studentrecordmainscreen();
        }
        scamp:
        cout<<"========================"<<endl;
        cout<<"ENTER CAMPUS OF STUDENT:"<<endl;
        cout<<"========================"<<endl<<endl;
        getline(cin,scampus);
        len=scampus.length();
if(len>10)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 10 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto scamp;
 }
else if(scampus=="000")
        {
            studentrecordmainscreen();
        }
        sext:
        cout<<"============================================="<<endl;
        cout<<"ENTER EXTRACURRICULAR ACTIIVITIES OF STUDENT:"<<endl;
        cout<<"============================================="<<endl;
        getline(cin,sextraca);
        len=sextraca.length();
if(len>20)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 20 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto sext;
 }
       else if(sextraca=="000")
        {
            studentrecordmainscreen();
        }

	    node *newnode =new node;
        newnode->prev=newnode;
        newnode->studentrollno=srollno;
        newnode->studentname=sname;
        newnode->studentdob=sdob;
        newnode->contactofstudent=constudent;
        newnode->cinicno=cns;
        newnode->fathername=emialid;
        newnode->contactoffather=confathers;
        newnode->emialid=fname;
        newnode->deparment=deptstudent;
        newnode->studentsemester=semstudent;
        newnode->semestermarks=smarks;
        newnode->semestermarks=total;
        newnode->studentper=per;
        newnode->studentgpa=SGPA;
        newnode->studentcgpa=SCGPA;
        newnode->studentfees=sfees;
        newnode->studentaddress=stuaddress;
        newnode->studentcampus=scampus;
        newnode->sextracurricular=sextraca;
        newnode->next=newnode;

        newnode->next=location;
        newnode->prev=tail;
        location->prev=newnode;
        tail->next=newnode;

        cout<<"==================="<<endl;
        cout<<"RECORD IS INSERTED!"<<endl;
        cout<<"==================="<<endl;

    }
}

//this function is used to insert the data the end
void addrecordatend()
{
		int len;
      	    system("Color 57");
        cout<<endl;
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t\t\t ===="<<endl;
        cout<<"\t\t\t\t\t\t\t  OF "<<endl;
        cout<<"\t\t\t\t\t\t\t ===="<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t\t\t\t\t\t    STUDENT RECORDS "<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t======================="<<endl;
        cout<<"\tENTER 000 TO GO TO BACK"<<endl;
        cout<<"\t======================="<<endl<<endl;
if(tail==NULL)
{
cout<<"=================="<<endl;
cout<<"YOUR LIST IS EMPTY"<<endl;
cout<<"=================="<<endl;
cout<<"\t\t\t\t\t===========PRESS ANY TO GO TO BACK========"<<endl;
getch();
}

   else
   {
   	    location=tail->next;
   		cout<<"========================="<<endl;
        cout<<"ENTER ROLL NO OF STUDENT:"<<endl;
        cout<<"========================="<<endl;
        cin>>srollno;
         cin.ignore();
        if(srollno==000)
        {
            studentrecordmainscreen();
        }
        snam:
        cout<<"====================="<<endl;
        cout<<"ENTER NAME OF STUDENT:"<<endl;
        cout<<"====================="<<endl;
        getline(cin,sname);
        len=sname.length();
    if(len>20)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 20 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto snam;
 }
else if(sname=="000")
{
            studentrecordmainscreen();
}

        date:
        cout<<"======================"<<endl;
        cout<<"ENTER D.O.B OF STUDENT:"<<endl;
        cout<<"======================"<<endl;
        cin>>sdob;
        len=sdob.length();
    if(len>10)
 {
     cout<<"\t============================================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 10 CHARACTER DATE As 12-03-2002"<<endl;
     cout<<"\t============================================================"<<endl;
     Sleep(3000);
     goto date;
 }
    else if(sdob=="000")
        {
            studentrecordmainscreen();
        }
        constu:
        cout<<"========================================"<<endl;
        cout<<"ENTER PHONE NO OF STUDENT (max 11 digit)"<<endl;
        cout<<"========================================"<<endl;
        cin>>constudent;
        len=constudent.length();
    if(len>11)
 {
     cout<<"\t==========================================================================="<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 11 CHARACTER YOUR PHONE NO LOOK AS 03xx-xxxxxxx"<<endl;
     cout<<"\t==========================================================================="<<endl;
     Sleep(3000);
     goto constu;
 }
    else if(constudent=="000")
        {
            studentrecordmainscreen();
        }
        cnicstu:
        cout<<"========================================"<<endl;
        cout<<"ENTER CNIC NO OF STUDENT (max 13 digit)"<<endl;
        cout<<"========================================"<<endl;
        cin>>cns;
        cin.ignore();
        len=cns.length();
if(len>13)
 {
     cout<<"\t============================================================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 13 CHARACTER YOUR PHONE NO LOOK AS 3xxxx-xxxxxxx"<<endl;
     cout<<"\t============================================================================"<<endl;
     Sleep(3000);
     goto cnicstu;
 }
else if(cns=="000")
{
    studentrecordmainscreen();
}
        fnam:
        cout<<"============================"<<endl;
        cout<<"ENTER FATHER NAME OF STUDENT:"<<endl;
        cout<<"============================"<<endl;
        getline(cin,fname);
        len=fname.length();
    if(len>20)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 20 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto fnam;
 }
else if(fname=="000")
{
studentrecordmainscreen();
}
        conf:
        cout<<"=========================="<<endl;
        cout<<"ENTER CONTACT NO OF FATHER:"<<endl;
        cout<<"=========================="<<endl;
        cin>>confathers;
        cin.ignore();
        len=confathers.length();
    if(len>11)
 {
     cout<<"\t==========================================================================="<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 11 CHARACTER YOUR PHONE NO LOOK AS 03xx-xxxxxxx"<<endl;
     cout<<"\t==========================================================================="<<endl;
     Sleep(3000);
     goto conf;
 }
    else if(confathers=="000")
        {
            studentrecordmainscreen();
        }
        em:
        cout<<"=========================="<<endl;
        cout<<"ENTER EMAIL ID OF STUDENT:"<<endl;
        cout<<"=========================="<<endl;
        getline(cin,emialid);
        len=emialid.length();
if(len>30)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 30 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto em;
 }
        else if(emialid=="000")
        {
            studentrecordmainscreen();
        }
        deptstu:
        cout<<"=========================="<<endl;
        cout<<"ENTER DEPARMENT OF STUDENT:"<<endl;
        cout<<"=========================="<<endl;

        getline(cin,deptstudent);
        len=deptstudent.length();

if(len>25)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 25 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto deptstu;
 }
       else if(deptstudent=="000")
        {
            studentrecordmainscreen();
        }
        sems:
        cout<<"=========================="<<endl;
        cout<<"ENTER SEMESTER  OF STUDENT:"<<endl;
        cout<<"=========================="<<endl;
        cin>>semstudent;
          if(semstudent==000)
        {
            studentrecordmainscreen();
        }
        if(semstudent>8)
        {
            cout<<"================================================"<<endl;
            cout<<"PLEASE CHECK YOUR SEMESTER NO IT IS LESS THAN 8!"<<endl;
            cout<<"================================================"<<endl;
            goto sems;
        }
        sem:
        cout<<"======================================================"<<endl;
        cout<<"ENTER SEMESTER NO AGAIN TO CALCULATE  MARKS OF STUDENT:"<<endl;
        cout<<"======================================================="<<endl;
        cin>>smarks;
        if(smarks==000)
        {
            studentrecordmainscreen();
        }
        else if(semstudent==smarks)
        {
        switch(smarks)
        {
        case 1:
            system("cls");
            asemester1();
            system("pause");
            break;
        case 2:
            system("cls");
            asemester2();
            system("pause");
            break;
        case 3:
            system("cls");
            asemester3();
            system("pause");
            break;
        case 4:
            system("cls");
            asemester4();
            system("pause");
            break;
        case 5:
            system("cls");
            asemester5();
            system("pause");
            break;
        case 6:
            system("cls");
            asemester6();
            system("pause");
            break;
        case 7:
            system("cls");
            asemester7();
            system("pause");
            break;
        case 8:
            system("cls");
            asemester8();
            system("pause");
            break;
        default :
              cout<<"=========================="<<endl;
              cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
              cout<<"=========================="<<endl;

        }
        }
        else
        {
          cout<<"=================================================================="<<endl;
          cout<<"PLEASE CHECK YOUR SEMESTER NO MUST BE EQUAL SEMESTER NO FOR MARKS!"<<endl;
          cout<<"=================================================================="<<endl;
            goto sem;
        }

        cout<<endl;
        GPA:
        cout<<"======================================================"<<endl;
        cout<<"ENTER G TO CALCULATE GPA OR I FOR HOW TO CALULATE GPA?"<<endl;
        cout<<"======================================================"<<endl;
        cin>>sgpa;
        if(sgpa==000)
        {
            studentrecordmainscreen();
        }
        else if(sgpa=='g'|| sgpa=='G')
        {
            system("cls");
            gpa();
            system("pause");

        }
         else if(sgpa=='i'|| sgpa=='I')
        {

            system("cls");
            instruction();
            system("pause");

        }
       else
        {
            cout<<"=========================="<<endl;
            cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
            cout<<"=========================="<<endl;
            goto GPA;
        }
        CGPA:
        cout<<"========================================================="<<endl;
        cout<<"ENTER C TO CALCULATE CGPA OR I FOR HOW TO CALULATE GPA?"<<endl;
        cout<<"========================================================="<<endl;
        cin>>scgpa;
        cin.ignore();
        if(scgpa==000)
        {
            studentrecordmainscreen();
        }
        else if(scgpa=='c'|| scgpa=='C')
        {

            system("cls");
            cgpa();
            system("pause");

        }
          else if(scgpa=='i'|| scgpa=='I')
         {
            system("cls");
            instruction();
            system("pause");
         }
          else
        {
            cout<<"=========================="<<endl;
            cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
            cout<<"=========================="<<endl;
            goto CGPA;
        }
    
        cout<<"====================="<<endl;
        cout<<"ENTER FEES OF STUDENT:"<<endl;
        cout<<"====================="<<endl<<endl;
  		cin>>sfees;
  		cin.ignore();

 if(sfees==000)
{
            studentrecordmainscreen();
}
        stuadd:
        cout<<"========================"<<endl;
        cout<<"ENTER ADDRESS OF STUDENT:"<<endl;
        cout<<"========================"<<endl<<endl;
        getline(cin,stuaddress);
        len=stuaddress.length();

if(len>10)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 10 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto stuadd;
 }
else if(stuaddress=="000")
        {
            studentrecordmainscreen();
        }
        scamp:
        cout<<"========================"<<endl;
        cout<<"ENTER CAMPUS OF STUDENT:"<<endl;
        cout<<"========================"<<endl<<endl;
        getline(cin,scampus);
        len=scampus.length();
if(len>10)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 10 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto scamp;
 }
else if(scampus=="000")
        {
            studentrecordmainscreen();
        }
        sext:
        cout<<"============================================="<<endl;
        cout<<"ENTER EXTRACURRICULAR ACTIIVITIES OF STUDENT:"<<endl;
        cout<<"============================================="<<endl;
        getline(cin,sextraca);
        len=sextraca.length();
if(len>20)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 20 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto sext;
 }
       else if(sextraca=="000")
        {
            studentrecordmainscreen();
        }

	    node *newnode =new node;
        newnode->prev=newnode;
        newnode->studentrollno=srollno;
        newnode->studentname=sname;
        newnode->studentdob=sdob;
        newnode->contactofstudent=constudent;
        newnode->cinicno=cns;
        newnode->fathername=emialid;
        newnode->contactoffather=confathers;
        newnode->emialid=fname;
        newnode->deparment=deptstudent;
        newnode->studentsemester=semstudent;
        newnode->semestermarks=smarks;
        newnode->semestermarks=total;
        newnode->studentper=per;
        newnode->studentgpa=SGPA;
        newnode->studentcgpa=SCGPA;
        newnode->studentfees=sfees;
        newnode->studentaddress=stuaddress;
        newnode->studentcampus=scampus;
        newnode->sextracurricular=sextraca;
        newnode->next=newnode;

        newnode->next=location;
        newnode->prev=tail;
        location->prev=newnode;
        tail->next=newnode;
        tail=newnode;
        cout<<"==================="<<endl;
        cout<<"RECORD IS INSERTED!"<<endl;
        cout<<"==================="<<endl;

    }
}

//This function is used to insert the data before a specific roll no
void addbeforespecificrollno()
{
    int len,r;
        system("Color 8F");
        cout<<endl;
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t\t\t   OF "<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES      ";
        cout<<"\n\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t\t\t\t\t\t    STUDENT RECORDS  "<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t======================="<<endl;
        cout<<"\tENTER 000 TO GO TO BACK"<<endl;
        cout<<"\t======================="<<endl<<endl;

if(tail==NULL)
{
cout<<"=================="<<endl;
cout<<"YOUR LIST IS EMPTY"<<endl;
cout<<"=================="<<endl;
cout<<"\t\t\t\t\t===========PRESS ANY TO GO TO BACK========"<<endl;
getch();
}
else
{


	    location=tail->next;
	    cout<<"======================================"<<endl;
        cout<<"ENTER ROll NO FOR SEARCH IN THE LIST!:"<<endl;
        cout<<"======================================"<<endl;
        cin>>r;
      do
        {
            if(location->studentrollno==r)
            {
            cout<<"=========================="<<endl;
            cout<<"VALUE IS FOUND IN THE LIST"<<endl;
            cout<<"=========================="<<endl;
            break;
            }
            else
            {
            predlocation=location;
            location=location->next;
            }

        }while(location!=tail->next && location->studentrollno!=r);

   if(location==tail->next && location->studentrollno!=r)
        {
        	cout<<"=============================="<<endl;
            cout<<"VALUE IS NOT FOUND IN THE LIST"<<endl;
            cout<<"=============================="<<endl;

        }
        else
        {
    	cout<<endl;
        cout<<"========================="<<endl;
        cout<<"ENTER ROLL NO OF STUDENT:"<<endl;
        cout<<"========================="<<endl;
        cin>>srollno;
         cin.ignore();
        if(srollno==000)
        {
            studentrecordmainscreen();
        }
        snam:
        cout<<"====================="<<endl;
        cout<<"ENTER NAME OF STUDENT:"<<endl;
        cout<<"====================="<<endl;
        getline(cin,sname);
        len=sname.length();
    if(len>20)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 20 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto snam;
 }
else if(sname=="000")
{
            studentrecordmainscreen();
}

        date:
        cout<<"======================"<<endl;
        cout<<"ENTER D.O.B OF STUDENT:"<<endl;
        cout<<"======================"<<endl;
        cin>>sdob;
        len=sdob.length();
    if(len>10)
 {
     cout<<"\t============================================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 10 CHARACTER DATE As 12-03-2002"<<endl;
     cout<<"\t============================================================"<<endl;
     Sleep(3000);
     goto date;
 }
    else if(sdob=="000")
        {
            studentrecordmainscreen();
        }
        constu:
        cout<<"========================================"<<endl;
        cout<<"ENTER PHONE NO OF STUDENT (max 11 digit)"<<endl;
        cout<<"========================================"<<endl;
        cin>>constudent;
        len=constudent.length();
    if(len>11)
 {
     cout<<"\t==========================================================================="<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 11 CHARACTER YOUR PHONE NO LOOK AS 03xx-xxxxxxx"<<endl;
     cout<<"\t==========================================================================="<<endl;
     Sleep(3000);
     goto constu;
 }
    else if(constudent=="000")
        {
            studentrecordmainscreen();
        }
        cnicstu:
        cout<<"========================================"<<endl;
        cout<<"ENTER CNIC NO OF STUDENT (max 13 digit)"<<endl;
        cout<<"========================================"<<endl;
        cin>>cns;
        cin.ignore();
        len=cns.length();
if(len>13)
 {
     cout<<"\t============================================================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 13 CHARACTER YOUR PHONE NO LOOK AS 3xxxx-xxxxxxx"<<endl;
     cout<<"\t============================================================================"<<endl;
     Sleep(3000);
     goto cnicstu;
 }
else if(cns=="000")
{
    studentrecordmainscreen();
}
        fnam:
        cout<<"============================"<<endl;
        cout<<"ENTER FATHER NAME OF STUDENT:"<<endl;
        cout<<"============================"<<endl;
        getline(cin,fname);
        len=fname.length();
    if(len>20)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 20 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto fnam;
 }
else if(fname=="000")
{
studentrecordmainscreen();
}
        conf:
        cout<<"=========================="<<endl;
        cout<<"ENTER CONTACT NO OF FATHER:"<<endl;
        cout<<"=========================="<<endl;
        cin>>confathers;
        cin.ignore();
        len=confathers.length();
    if(len>11)
 {
     cout<<"\t==========================================================================="<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 11 CHARACTER YOUR PHONE NO LOOK AS 03xx-xxxxxxx"<<endl;
     cout<<"\t==========================================================================="<<endl;
     Sleep(3000);
     goto conf;
 }
    else if(confathers=="000")
        {
            studentrecordmainscreen();
        }
        em:
        cout<<"=========================="<<endl;
        cout<<"ENTER EMAIL ID OF STUDENT:"<<endl;
        cout<<"=========================="<<endl;
        getline(cin,emialid);
        len=emialid.length();
if(len>30)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 30 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto em;
 }
        else if(emialid=="000")
        {
            studentrecordmainscreen();
        }
        deptstu:
        cout<<"=========================="<<endl;
        cout<<"ENTER DEPARMENT OF STUDENT:"<<endl;
        cout<<"=========================="<<endl;

        getline(cin,deptstudent);
        len=deptstudent.length();

if(len>25)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 25 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto deptstu;
 }
       else if(deptstudent=="000")
        {
            studentrecordmainscreen();
        }
        sems:
        cout<<"=========================="<<endl;
        cout<<"ENTER SEMESTER  OF STUDENT:"<<endl;
        cout<<"=========================="<<endl;
        cin>>semstudent;
          if(semstudent==000)
        {
            studentrecordmainscreen();
        }
        if(semstudent>8)
        {
            cout<<"================================================"<<endl;
            cout<<"PLEASE CHECK YOUR SEMESTER NO IT IS LESS THAN 8!"<<endl;
            cout<<"================================================"<<endl;
            goto sems;
        }
        sem:
        cout<<"======================================================"<<endl;
        cout<<"ENTER SEMESTER NO AGAIN TO CALCULATE  MARKS OF STUDENT:"<<endl;
        cout<<"======================================================="<<endl;
        cin>>smarks;
        if(smarks==000)
        {
            studentrecordmainscreen();
        }
        else if(semstudent==smarks)
        {
        switch(smarks)
        {
        case 1:
            system("cls");
            asemester1();
            system("pause");
            break;
        case 2:
            system("cls");
            asemester2();
            system("pause");
            break;
        case 3:
            system("cls");
            asemester3();
            system("pause");
            break;
        case 4:
            system("cls");
            asemester4();
            system("pause");
            break;
        case 5:
            system("cls");
            asemester5();
            system("pause");
            break;
        case 6:
            system("cls");
            asemester6();
            system("pause");
            break;
        case 7:
            system("cls");
            asemester7();
            system("pause");
            break;
        case 8:
            system("cls");
            asemester8();
            system("pause");
            break;
        default :
              cout<<"=========================="<<endl;
              cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
              cout<<"=========================="<<endl;

        }
        }
        else
        {
          cout<<"=================================================================="<<endl;
          cout<<"PLEASE CHECK YOUR SEMESTER NO MUST BE EQUAL SEMESTER NO FOR MARKS!"<<endl;
          cout<<"=================================================================="<<endl;
            goto sem;
        }

        cout<<endl;
        GPA:
        cout<<"======================================================"<<endl;
        cout<<"ENTER G TO CALCULATE GPA OR I FOR HOW TO CALULATE GPA?"<<endl;
        cout<<"======================================================"<<endl;
        cin>>sgpa;
        if(sgpa==000)
        {
            studentrecordmainscreen();
        }
        else if(sgpa=='g'|| sgpa=='G')
        {
            system("cls");
            gpa();
            system("pause");

        }
         else if(sgpa=='i'|| sgpa=='I')
        {

            system("cls");
            instruction();
            system("pause");

        }
       else
        {
            cout<<"=========================="<<endl;
            cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
            cout<<"=========================="<<endl;
            goto GPA;
        }
        CGPA:
        cout<<"========================================================="<<endl;
        cout<<"ENTER C TO CALCULATE CGPA OR I FOR HOW TO CALULATE GPA?"<<endl;
        cout<<"========================================================="<<endl;
        cin>>scgpa;
        cin.ignore();
        if(scgpa==000)
        {
            studentrecordmainscreen();
        }
        else if(scgpa=='c'|| scgpa=='C')
        {

            system("cls");
            cgpa();
            system("pause");

        }
          else if(scgpa=='i'|| scgpa=='I')
         {
            system("cls");
            instruction();
            system("pause");
         }
          else
        {
            cout<<"=========================="<<endl;
            cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
            cout<<"=========================="<<endl;
            goto CGPA;
        }
      
        cout<<"====================="<<endl;
        cout<<"ENTER FEES OF STUDENT:"<<endl;
        cout<<"====================="<<endl<<endl;
  		cin>>sfees;
  		cin.ignore();

 if(sfees==000)
{
            studentrecordmainscreen();
}
      stuadd:
        cout<<"========================"<<endl;
        cout<<"ENTER ADDRESS OF STUDENT:"<<endl;
        cout<<"========================"<<endl<<endl;
        getline(cin,stuaddress);
        len=stuaddress.length();

if(len>10)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 10 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto stuadd;
 }
else if(stuaddress=="000")
        {
            studentrecordmainscreen();
        }
        scamp:
        cout<<"========================"<<endl;
        cout<<"ENTER CAMPUS OF STUDENT:"<<endl;
        cout<<"========================"<<endl<<endl;
        getline(cin,scampus);
        len=scampus.length();
if(len>10)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 10 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto scamp;
 }
else if(scampus=="000")
        {
            studentrecordmainscreen();
        }
        sext:
        cout<<"============================================="<<endl;
        cout<<"ENTER EXTRACURRICULAR ACTIIVITIES OF STUDENT:"<<endl;
        cout<<"============================================="<<endl;
        getline(cin,sextraca);
        len=sextraca.length();
if(len>20)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 20 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto sext;
 }
       else if(sextraca=="000")
        {
            studentrecordmainscreen();
        }

	    node *newnode =new node;
        newnode->prev=newnode;
        newnode->studentrollno=srollno;
        newnode->studentname=sname;
        newnode->studentdob=sdob;
        newnode->contactofstudent=constudent;
        newnode->cinicno=cns;
        newnode->fathername=emialid;
        newnode->contactoffather=confathers;
        newnode->emialid=fname;
        newnode->deparment=deptstudent;
        newnode->studentsemester=semstudent;
        newnode->semestermarks=smarks;
        newnode->semestermarks=total;
        newnode->studentper=per;
        newnode->studentgpa=SGPA;
        newnode->studentcgpa=SCGPA;
        newnode->studentfees=sfees;
        newnode->studentaddress=stuaddress;
        newnode->studentcampus=scampus;
        newnode->sextracurricular=sextraca;
        newnode->next=newnode;

  	    newnode->next=location;
		newnode->prev=location->prev;
		location->prev->next=newnode;
		location->prev=newnode;
        cout<<"==================="<<endl;
        cout<<"RECORD IS INSERTED!"<<endl;
        cout<<"==================="<<endl;
        }
}
}

//this function is used to insert the data of student after a specific roll no
void  addafterspecificrollno()
{
    int len,r;
        system("Color 8F");
        cout<<endl;
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t\t\t   OF "<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES      ";
        cout<<"\n\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t\t\t\t\t\t    STUDENT RECORDS  "<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t======================="<<endl;
        cout<<"\tENTER 000 TO GO TO BACK"<<endl;
        cout<<"\t======================="<<endl<<endl;

if(tail==NULL)
{
cout<<"=================="<<endl;
cout<<"YOUR LIST IS EMPTY"<<endl;
cout<<"=================="<<endl;
cout<<"\t\t\t\t\t===========PRESS ANY TO GO TO BACK========"<<endl;
getch();
}
else
{


	    location=tail->next;
	    cout<<"======================================"<<endl;
        cout<<"ENTER ROll NO FOR SEARCH IN THE LIST!:"<<endl;
        cout<<"======================================"<<endl;
        cin>>r;
      do
        {
            if(location->studentrollno==r)
            {
            cout<<"=========================="<<endl;
            cout<<"VALUE IS FOUND IN THE LIST"<<endl;
            cout<<"=========================="<<endl;
            break;
            }
            else
            {

            location=location->next;
            }

        }while(location!=tail->next && location->studentrollno!=r);

   if(location==tail->next && location->studentrollno!=r)
        {
        	cout<<"=============================="<<endl;
            cout<<"VALUE IS NOT FOUND IN THE LIST"<<endl;
            cout<<"=============================="<<endl;

        }
        else
        {
    	cout<<endl;
           		cout<<"========================="<<endl;
        cout<<"ENTER ROLL NO OF STUDENT:"<<endl;
        cout<<"========================="<<endl;
        cin>>srollno;
         cin.ignore();
        if(srollno==000)
        {
            studentrecordmainscreen();
        }
        snam:
        cout<<"====================="<<endl;
        cout<<"ENTER NAME OF STUDENT:"<<endl;
        cout<<"====================="<<endl;
        getline(cin,sname);
        len=sname.length();
    if(len>20)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 20 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto snam;
 }
else if(sname=="000")
{
            studentrecordmainscreen();
}

        date:
        cout<<"======================"<<endl;
        cout<<"ENTER D.O.B OF STUDENT:"<<endl;
        cout<<"======================"<<endl;
        cin>>sdob;
        len=sdob.length();
    if(len>10)
 {
     cout<<"\t============================================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 10 CHARACTER DATE As 12-03-2002"<<endl;
     cout<<"\t============================================================"<<endl;
     Sleep(3000);
     goto date;
 }
    else if(sdob=="000")
        {
            studentrecordmainscreen();
        }
        constu:
        cout<<"========================================"<<endl;
        cout<<"ENTER PHONE NO OF STUDENT (max 11 digit)"<<endl;
        cout<<"========================================"<<endl;
        cin>>constudent;
        len=constudent.length();
    if(len>11)
 {
     cout<<"\t==========================================================================="<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 11 CHARACTER YOUR PHONE NO LOOK AS 03xx-xxxxxxx"<<endl;
     cout<<"\t==========================================================================="<<endl;
     Sleep(3000);
     goto constu;
 }
    else if(constudent=="000")
        {
            studentrecordmainscreen();
        }
        cnicstu:
        cout<<"========================================"<<endl;
        cout<<"ENTER CNIC NO OF STUDENT (max 13 digit)"<<endl;
        cout<<"========================================"<<endl;
        cin>>cns;
        cin.ignore();
        len=cns.length();
if(len>13)
 {
     cout<<"\t============================================================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 13 CHARACTER YOUR PHONE NO LOOK AS 3xxxx-xxxxxxx"<<endl;
     cout<<"\t============================================================================"<<endl;
     Sleep(3000);
     goto cnicstu;
 }
else if(cns=="000")
{
    studentrecordmainscreen();
}
        fnam:
        cout<<"============================"<<endl;
        cout<<"ENTER FATHER NAME OF STUDENT:"<<endl;
        cout<<"============================"<<endl;
        getline(cin,fname);
        len=fname.length();
    if(len>20)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 20 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto fnam;
 }
else if(fname=="000")
{
studentrecordmainscreen();
}
        conf:
        cout<<"=========================="<<endl;
        cout<<"ENTER CONTACT NO OF FATHER:"<<endl;
        cout<<"=========================="<<endl;
        cin>>confathers;
        cin.ignore();
        len=confathers.length();
    if(len>11)
 {
     cout<<"\t==========================================================================="<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 11 CHARACTER YOUR PHONE NO LOOK AS 03xx-xxxxxxx"<<endl;
     cout<<"\t==========================================================================="<<endl;
     Sleep(3000);
     goto conf;
 }
    else if(confathers=="000")
        {
            studentrecordmainscreen();
        }
        em:
        cout<<"=========================="<<endl;
        cout<<"ENTER EMAIL ID OF STUDENT:"<<endl;
        cout<<"=========================="<<endl;
        getline(cin,emialid);
        len=emialid.length();
if(len>30)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 30 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto em;
 }
        else if(emialid=="000")
        {
            studentrecordmainscreen();
        }
        deptstu:
        cout<<"=========================="<<endl;
        cout<<"ENTER DEPARMENT OF STUDENT:"<<endl;
        cout<<"=========================="<<endl;

        getline(cin,deptstudent);
        len=deptstudent.length();

if(len>25)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 25 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto deptstu;
 }
       else if(deptstudent=="000")
        {
            studentrecordmainscreen();
        }
        sems:
        cout<<"=========================="<<endl;
        cout<<"ENTER SEMESTER  OF STUDENT:"<<endl;
        cout<<"=========================="<<endl;
        cin>>semstudent;
          if(semstudent==000)
        {
            studentrecordmainscreen();
        }
        if(semstudent>8)
        {
            cout<<"================================================"<<endl;
            cout<<"PLEASE CHECK YOUR SEMESTER NO IT IS LESS THAN 8!"<<endl;
            cout<<"================================================"<<endl;
            goto sems;
        }
        sem:
        cout<<"======================================================"<<endl;
        cout<<"ENTER SEMESTER NO AGAIN TO CALCULATE  MARKS OF STUDENT:"<<endl;
        cout<<"======================================================="<<endl;
        cin>>smarks;
        if(smarks==000)
        {
            studentrecordmainscreen();
        }
        else if(semstudent==smarks)
        {
        switch(smarks)
        {
        case 1:
            system("cls");
            asemester1();
            system("pause");
            break;
        case 2:
            system("cls");
            asemester2();
            system("pause");
            break;
        case 3:
            system("cls");
            asemester3();
            system("pause");
            break;
        case 4:
            system("cls");
            asemester4();
            system("pause");
            break;
        case 5:
            system("cls");
            asemester5();
            system("pause");
            break;
        case 6:
            system("cls");
            asemester6();
            system("pause");
            break;
        case 7:
            system("cls");
            asemester7();
            system("pause");
            break;
        case 8:
            system("cls");
            asemester8();
            system("pause");
            break;
        default :
              cout<<"=========================="<<endl;
              cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
              cout<<"=========================="<<endl;

        }
        }
        else
        {
          cout<<"=================================================================="<<endl;
          cout<<"PLEASE CHECK YOUR SEMESTER NO MUST BE EQUAL SEMESTER NO FOR MARKS!"<<endl;
          cout<<"=================================================================="<<endl;
            goto sem;
        }

        cout<<endl;
        GPA:
        cout<<"======================================================"<<endl;
        cout<<"ENTER G TO CALCULATE GPA OR I FOR HOW TO CALULATE GPA?"<<endl;
        cout<<"======================================================"<<endl;
        cin>>sgpa;
        if(sgpa==000)
        {
            studentrecordmainscreen();
        }
        else if(sgpa=='g'|| sgpa=='G')
        {
            system("cls");
            gpa();
            system("pause");

        }
         else if(sgpa=='i'|| sgpa=='I')
        {

            system("cls");
            instruction();
            system("pause");

        }
       else
        {
            cout<<"=========================="<<endl;
            cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
            cout<<"=========================="<<endl;
            goto GPA;
        }
        CGPA:
        cout<<"========================================================="<<endl;
        cout<<"ENTER C TO CALCULATE CGPA OR I FOR HOW TO CALULATE GPA?"<<endl;
        cout<<"========================================================="<<endl;
        cin>>scgpa;
        if(scgpa==000)
        {
            studentrecordmainscreen();
        }
        else if(scgpa=='c'|| scgpa=='C')
        {

            system("cls");
            cgpa();
            system("pause");

        }
          else if(scgpa=='i'|| scgpa=='I')
         {
            system("cls");
            instruction();
            system("pause");
         }
          else
        {
            cout<<"=========================="<<endl;
            cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
            cout<<"=========================="<<endl;
            goto CGPA;
        }
     
        cout<<"====================="<<endl;
        cout<<"ENTER FEES OF STUDENT:"<<endl;
        cout<<"====================="<<endl<<endl;
  		cin>>sfees;
  		cin.ignore();

 if(sfees==000)
{
            studentrecordmainscreen();
}


        stuadd:
        cout<<"========================"<<endl;
        cout<<"ENTER ADDRESS OF STUDENT:"<<endl;
        cout<<"========================"<<endl<<endl;
        getline(cin,stuaddress);
        len=stuaddress.length();

if(len>10)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 10 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto stuadd;
 }
else if(stuaddress=="000")
        {
            studentrecordmainscreen();
        }
        scamp:
        cout<<"========================"<<endl;
        cout<<"ENTER CAMPUS OF STUDENT:"<<endl;
        cout<<"========================"<<endl<<endl;
        getline(cin,scampus);
        len=scampus.length();
if(len>10)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 10 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto scamp;
 }
else if(scampus=="000")
        {
            studentrecordmainscreen();
        }
        sext:
        cout<<"============================================="<<endl;
        cout<<"ENTER EXTRACURRICULAR ACTIIVITIES OF STUDENT:"<<endl;
        cout<<"============================================="<<endl;
        getline(cin,sextraca);
        len=sextraca.length();
if(len>20)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 20 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto sext;
 }
       else if(sextraca=="000")
        {
            studentrecordmainscreen();
        }

	    node *newnode =new node;
        newnode->prev=newnode;
        newnode->studentrollno=srollno;
        newnode->studentname=sname;
        newnode->studentdob=sdob;
        newnode->contactofstudent=constudent;
        newnode->cinicno=cns;
        newnode->fathername=emialid;
        newnode->contactoffather=confathers;
        newnode->emialid=fname;
        newnode->deparment=deptstudent;
        newnode->studentsemester=semstudent;
        newnode->semestermarks=smarks;
        newnode->semestermarks=total;
        newnode->studentper=per;
        newnode->studentgpa=SGPA;
        newnode->studentcgpa=SCGPA;
        newnode->studentfees=sfees;
        newnode->studentaddress=stuaddress;
        newnode->studentcampus=scampus;
        newnode->sextracurricular=sextraca;
        newnode->next=newnode;

        newnode->prev=location;
		newnode->next=location->next;
		location->next->prev=newnode;
		location->next=newnode;
        cout<<"==================="<<endl;
        cout<<"RECORD IS INSERTED!"<<endl;
        cout<<"==================="<<endl;
        
        if(location==tail)
        {

         tail=tail->next;
        } 
        }
        }
}

//this is over function to search the data of the student with its roll no
void searchrecord()
{
        system("Color C7");
        cout<<endl;
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t\t\t   OF "<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t\t ==================="<<endl;
        cout<<"\t\t\t\t\t\t   STUDENT RECORDS  "<<endl;
        cout<<"\t\t\t\t\t\t ==================="<<endl;
        cout<<"\t======================="<<endl;
        cout<<"\tENTER 000 TO GO TO BACK"<<endl;
        cout<<"\t======================="<<endl<<endl;
    if(tail==NULL)
    {
        cout<<"=================="<<endl;
        cout<<"YOUR LIST IS EMPTY"<<endl;
        cout<<"=================="<<endl;
        cout<<"\t\t\t\t\t===========PRESS ANY TO GO TO BACK========="<<endl;
        getch();
    }
    else
    {
    int r;
    cout<<"============================"<<endl;
    cout<<"ENTER YOUR ROLL NO TO SEARCH"<<endl;
    cout<<"============================"<<endl;
    cin>>r;
    if(r==000)
        {
            studentrecordmainscreen();
        }

    location=tail->next;
    do
    {
        if(location->studentrollno==r)
        {
        cout<<endl;
        cout<<"============================"<<endl;
        cout<<"ROLL NO IS FOUND IN THE LIST"<<endl;
        cout<<"============================"<<endl;
        break;
        }
        location=location->next;
    }while(location!=tail->next  && location->studentrollno!=r);
    if(location==tail->next && location->studentrollno!=r)
    {
        cout<<"====================================="<<endl;
        cout<<"YOUR ROLL NO IS NOT FOUND IN THE LIST"<<endl;
        cout<<"====================================="<<endl;
        cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
	    getch();
    }
    else
    {
        cout<<endl;
        cout<<"\t======="<<endl;
        cout<<"\tROLL NO:"<<location->studentrollno<<endl;
        cout<<"\t========"<<endl;
        cout<<"\t==============="<<endl;
        cout<<"\tNAME OF STUDENT:"<<location->studentname<<endl;
        cout<<"\t================"<<endl;
        cout<<"\t==================="<<endl;
        cout<<"\tPHONE NO OF STUDENT:"<<location->contactofstudent<<endl;
        cout<<"\t===================="<<endl;
        cout<<"\t======="<<endl;
        cout<<"\tCNIC NO:"<<location->cinicno<<endl;
        cout<<"\t======="<<endl;
        cout<<"\t============"<<endl;
        cout<<"\tFATHER NAME:"<<location->fathername<<endl;
        cout<<"\t============"<<endl;
        cout<<"\t=================="<<endl;
        cout<<"\tPHONE NO OF FATHER:"<<location->contactoffather<<endl;
        cout<<"\t=================="<<endl;
        cout<<"\t========="<<endl;
        cout<<"\tEMAIL ID:"<<location->emialid<<endl;
        cout<<"\t========="<<endl;
        cout<<"\t==========="<<endl;
        cout<<"\tDEPARTMENT:" <<location->deparment<<endl;
        cout<<"\t==========="<<endl;
        cout<<"\t========="<<endl;
        cout<<"\tSEMESTER:"<<location->studentsemester<<endl;
        cout<<"\t========="<<endl;
        cout<<"\t==============="<<endl;
        cout<<"\tSEMESTER MARKS:"<<location->semestermarks<<endl;
        cout<<"\t==============="<<endl;
        cout<<"\t=========="<<endl;
        cout<<"\tPERCENTAGE:"<<location->studentper<<endl;
        cout<<"\t=========="<<endl;
        cout<<"\t===="<<endl;
        cout<<"\tGPA:"<<location->studentgpa<<endl;
        cout<<"\t===="<<endl;
        cout<<"\t====="<<endl;
        cout<<"\tCGPA:"<<location->studentcgpa<<endl;
        cout<<"\t====="<<endl;
        cout<<"\t====="<<endl;
        cout<<"\tFEES:"<<location->studentfees<<endl;
        cout<<"\t====="<<endl;
        cout<<"\t======="<<endl;
        cout<<"\tADDRESS:"<<location->studentaddress<<endl;
        cout<<"\t======="<<endl;
        cout<<"\t======="<<endl;
        cout<<"\tCAMPUS:"<<location->studentcampus<<endl;
        cout<<"\t======="<<endl;
        cout<<"\t============================"<<endl;
        cout<<"\tEXTRA-CURRICULAR-ACTIVITIES:"<<location->sextracurricular<<endl;
        cout<<"\t============================"<<endl;
        getch();
    }

}
}

///This function is used to update the data of the student that thr user has provided
void updaterecord()
{
    int len;
        system("Color 8F");
        cout<<endl;
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t\t\t   OF "<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t\t\t\t\t\t    STUDENT RECORDS "<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t======================="<<endl;
        cout<<"\tENTER 000 TO GO TO BACK"<<endl;
        cout<<"\t======================="<<endl<<endl;
    if(tail==NULL)
    {
        cout<<"=================="<<endl;
        cout<<"YOUR LIST IS EMPTY"<<endl;
        cout<<"=================="<<endl;
        cout<<"\t\t\t\t\t==========PRESS ANY TO GO TO BACK========="<<endl;
        getch();
    }
    else
    {
    int r;
    cout<<"============================"<<endl;
    cout<<"ENTER YOUR ROLL NO TO UPDATE"<<endl;
    cout<<"============================"<<endl;
    cin>>r;
    if(r==000)
        {
            studentrecordmainscreen();
        }
    location=tail->next;
    do
    {
        if(location->studentrollno==r)
        {
        cout<<endl;
        cout<<"============================"<<endl;
        cout<<"ROLL NO IS FOUND IN THE LIST"<<endl;
        cout<<"============================"<<endl;
        }
        location=location->next;
    }while(location!=tail->next  && location->studentrollno!=r);
    if(location==tail->next && location->studentrollno!=r)
    {
        cout<<"====================================="<<endl;
        cout<<"YOUR ROLL NO IS NOT FOUND IN THE LIST"<<endl;
        cout<<"====================================="<<endl;
    }
else
{
        cout<<endl;
        cout<<"========================="<<endl;
        cout<<"ENTER ROLL NO OF STUDENT:"<<endl;
        cout<<"========================="<<endl;
        cin>>location->studentrollno;
        if(srollno==000)
        {
            studentrecordmainscreen();
        }
        snam:
        cout<<"====================="<<endl;
        cout<<"ENTER NAME OF STUDENT:"<<endl;
        cout<<"====================="<<endl;
        cin>>location->studentname;
        len=sname.length();
    if(len>20)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 20 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto snam;
 }
else if(sname=="000")
{
            studentrecordmainscreen();
}

        date:
        cout<<"======================"<<endl;
        cout<<"ENTER D.O.B OF STUDENT:"<<endl;
        cout<<"======================"<<endl;
        cin>>location->studentdob;
        len=sdob.length();
    if(len>=10)
 {
     cout<<"\t========================================================="<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 10 CHARACTER DATE As 12/3/2002"<<endl;
     cout<<"\t========================================================="<<endl;
     Sleep(3000);
     goto date;
 }
    else if(sdob=="000")
        {
            studentrecordmainscreen();
        }
        constu:
        cout<<"========================================"<<endl;
        cout<<"ENTER PHONE NO OF STUDENT (max 11 digit)"<<endl;
        cout<<"========================================"<<endl;
        cin>>location->contactofstudent;
        len=constudent.length();
    if(len>11)
 {
     cout<<"\t==========================================================================="<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 11 CHARACTER YOUR PHONE NO LOOK AS 03xx-xxxxxxx"<<endl;
     cout<<"\t==========================================================================="<<endl;
     Sleep(3000);
     goto constu;
 }
    else if(constudent=="000")
        {
            studentrecordmainscreen();
        }
        cnicstu:
        cout<<"========================================"<<endl;
        cout<<"ENTER CNIC NO OF STUDENT (max 13 digit)"<<endl;
        cout<<"========================================"<<endl;
        cin>>location->cinicno;
        len=cns.length();
if(len>13)
 {
     cout<<"\t==========================================================================="<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 11 CHARACTER YOUR PHONE NO LOOK AS 03xx-xxxxxxx"<<endl;
     cout<<"\t==========================================================================="<<endl;
     Sleep(3000);
     goto cnicstu;
 }
else if(cns=="000")
{
    studentrecordmainscreen();
}
        fnam:
        cout<<"============================"<<endl;
        cout<<"ENTER FATHER NAME OF STUDENT:"<<endl;
        cout<<"============================"<<endl;
        cin>>location->contactoffather;
        len=fname.length();
    if(len>20)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 20 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto fnam;
 }
else if(fname=="000")
{
studentrecordmainscreen();
}
        conf:
        cout<<"=========================="<<endl;
        cout<<"ENTER CONTACT NO OF FATHER:"<<endl;
        cout<<"=========================="<<endl;
        cin>>location->contactoffather;
        len=confathers.length();
    if(len>11)
 {
     cout<<"\t==========================================================================="<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 11 CHARACTER YOUR PHONE NO LOOK AS 03xx-xxxxxxx"<<endl;
     cout<<"\t==========================================================================="<<endl;
     Sleep(3000);
     goto conf;
 }
    else if(confathers=="000")
        {
            studentrecordmainscreen();
        }
        em:
        cout<<"=========================="<<endl;
        cout<<"ENTER EMAIL ID OF STUDENT:"<<endl;
        cout<<"=========================="<<endl;
        cin>>location->emialid;
        len=emialid.length();
if(len>30)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 30 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto em;
 }
        else if(emialid=="000")
        {
            studentrecordmainscreen();
        }
        deptstu:
        cout<<"=========================="<<endl;
        cout<<"ENTER DEPARMENT OF STUDENT:"<<endl;
        cout<<"=========================="<<endl;
        cin>>location->deparment;
        len=deptstudent.length();

if(len>25)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 25 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto deptstu;
 }
       else if(deptstudent=="000")
        {
            studentrecordmainscreen();
        }
        sems:
        cout<<"=========================="<<endl;
        cout<<"ENTER SEMESTER  OF STUDENT:"<<endl;
        cout<<"=========================="<<endl;
        cin>>location->studentsemester;
          if(semstudent==000)
        {
            studentrecordmainscreen();
        }
        if(semstudent>8)
        {
            cout<<"================================================"<<endl;
            cout<<"PLEASE CHECK YOUR SEMESTER NO IT IS LESS THAN 8!"<<endl;
            cout<<"================================================"<<endl;
            goto sems;
        }
        sem:
        cout<<"======================================================"<<endl;
        cout<<"ENTER SEMESTER NO AGAIN TO CALCULATE  MARKS OF STUDENT:"<<endl;
        cout<<"======================================================="<<endl;
        cin>>location->semestermarks;
        if(smarks==000)
        {
            studentrecordmainscreen();
        }
        else if(semstudent==smarks)
        {
        switch(smarks)
        {
        case 1:
            system("cls");
            asemester1();
            system("pause");
            break;
        case 2:
            system("cls");
            asemester2();
            system("pause");
            break;
        case 3:
            system("cls");
            asemester3();
            system("pause");
            break;
        case 4:
            system("cls");
            asemester4();
            system("pause");
            break;
        case 5:
            system("cls");
            asemester5();
            system("pause");
            break;
        case 6:
            system("cls");
            asemester6();
            system("pause");
            break;
        case 7:
            system("cls");
            asemester7();
            system("pause");
            break;
        case 8:
            system("cls");
            asemester8();
            system("pause");
            break;
        default :
              cout<<"=========================="<<endl;
              cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
              cout<<"=========================="<<endl;

        }
        }
        else
        {
          cout<<"=================================================================="<<endl;
          cout<<"PLEASE CHECK YOUR SEMESTER NO MUST BE EQUAL SEMESTER NO FOR MARKS!"<<endl;
          cout<<"=================================================================="<<endl;
            goto sem;
        }

        cout<<endl;
        GPA:
        cout<<"======================================================"<<endl;
        cout<<"ENTER G TO CALCULATE GPA OR I FOR HOW TO CALULATE GPA?"<<endl;
        cout<<"======================================================"<<endl;
        cin>>location->studentgpa;
        if(sgpa==000)
        {
            studentrecordmainscreen();
        }
        else if(sgpa=='g'|| sgpa=='G')
        {
            system("cls");
            gpa();
            system("pause");

        }
  else if(sgpa=='i'|| sgpa=='I')
        {

            system("cls");
            instruction();
            system("pause");

        }
       else
        {
            cout<<"=========================="<<endl;
            cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
            cout<<"=========================="<<endl;
            goto GPA;
        }
        CGPA:
        cout<<"========================================================="<<endl;
        cout<<"ENTER C TO CALCULATE CGPA OR I FOR HOW TO CALULATE GPA?"<<endl;
        cout<<"========================================================="<<endl;
        cin>>location->studentcgpa;
        cin.ignore();
        if(scgpa==000)
        {
            studentrecordmainscreen();
        }
        else if(scgpa=='c'|| scgpa=='C')
        {

            system("cls");
            cgpa();
            system("pause");

        }
        else if(scgpa=='i'|| scgpa=='I')
         {
            system("cls");
            instruction();
            system("pause");
         }
          else
        {
            cout<<"=========================="<<endl;
            cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
            cout<<"=========================="<<endl;
            goto CGPA;
        }
       
        cout<<"====================="<<endl;
        cout<<"ENTER FEES OF STUDENT:"<<endl;
        cout<<"====================="<<endl<<endl;
        	cin.ignore();
        cin>>location->studentfees;
  	

 if(sfees==000)
{
            studentrecordmainscreen();
}
	
      stuadd:
        cout<<"========================"<<endl;
        cout<<"ENTER ADDRESS OF STUDENT:"<<endl;
        cout<<"========================"<<endl<<endl;
        cin>>location->studentaddress;
        len=stuaddress.length();

if(len>10)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 10 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto stuadd;
 }
else if(stuaddress=="000")
        {
            studentrecordmainscreen();
        }
        scamp:
        cout<<"========================"<<endl;
        cout<<"ENTER CAMPUS OF STUDENT:"<<endl;
        cout<<"========================"<<endl<<endl;
        cin>>location->studentcampus;
        len=scampus.length();
if(len>10)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 10 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto scamp;
 }
else if(scampus=="000")
        {
            studentrecordmainscreen();
        }
        sext:
        cout<<"============================================="<<endl;
        cout<<"ENTER EXTRACURRICULAR ACTIIVITIES OF STUDENT:"<<endl;
        cout<<"============================================="<<endl;
        cin>>location->sextracurricular;
        len=sextraca.length();
if(len>20)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 20 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto sext;
 }
       else if(sextraca=="000")
        {
            studentrecordmainscreen();
        }
        cout<<"==========================================="<<endl;
        cout<<"YOUR RECORD IS FULLY UPDATED SUCCEESFULLY..."<<endl;
        cout<<"============================================"<<endl;
        cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
        getch();
}
}
}

//this function is used to delete the record of student in any where in the list by its  rollno
void deleterecord()
{
        system("Color 9F");
        cout<<endl;
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t\t\t   OF "<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t\t\t\t\t\t    STUDENT RECORDS  "<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl<<endl;
        cout<<"\t======================="<<endl;
        cout<<"\tENTER 000 TO GO TO BACK"<<endl;
        cout<<"\t======================="<<endl<<endl;
    if(tail==NULL)
    {
        cout<<"=================="<<endl;
        cout<<"YOUR LIST IS EMPTY"<<endl;
        cout<<"=================="<<endl;
        cout<<"\t\t\t\t\t===========PRESS ANY TO GO TO BACK========="<<endl;
        getch();
    }
  else
        {
        location=tail->next;
        int r;
        cout<<"============================"<<endl;
        cout<<"ENTER YOUR ROLL NO TO DELETE"<<endl;
        cout<<"============================="<<endl;
        cin>>r;
        if(r==000)
        {
            studentrecordmainscreen();
        }
        if(location->studentrollno==r)
        {
            cout<<"=========================================="<<endl;
            cout<<"RECORD IS FOUND AND DELETED SUCCESSFULLY!:"<<location->studentrollno<<endl;
            cout<<"=========================================="<<endl;
            cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
            getch();
            delete tail;
            tail=NULL;
        }
        else
        {
        do
        {
         location=location->next;
        }while(location!=tail->next && location->studentrollno!=r);
        if(location==tail->next && location->studentrollno!=r)
            {
                cout<<"===================="<<endl;
                cout<<"RECORD IS NOT FOUND!"<<endl;
                cout<<"===================="<<endl;
                cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
                getch();
            }
        else
        {
           if(location->next==tail->next)
            {
                    predlocation=tail->prev;
                    predlocation->next=tail->next;
                    tail->next->prev=predlocation;
                    cout<<"=========================================="<<endl;
                    cout<<"RECORD IS FOUND AND DELETED SUCCESSFULLY!:"<<predlocation->studentrollno<<endl;
                    cout<<"=========================================="<<endl;
                    cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
                    getch();
                    delete tail;
                    tail=predlocation;
            }
            else
            {
                    predlocation=location->next;
                    location->next=predlocation->next;
                    predlocation->next->prev=location;
                    cout<<"=========================================="<<endl;
                    cout<<"RECORD IS FOUND AND DELETED SUCCESSFULLY!:"<<predlocation->studentrollno<<endl;
                    cout<<"=========================================="<<endl;
                    cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
                    getch();
                    delete predlocation;
            }
        }
        }
    }
}
void deleterecordatnposition()
{
        system("Color E0");
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t\t\t   OF "<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t\t\t\t\t\t    STUDENT RECORDS  "<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl<<endl;
        cout<<"\t======================="<<endl;
        cout<<"\tENTER 000 TO GO TO BACK"<<endl;
        cout<<"\t======================="<<endl<<endl;
    if(tail==NULL)
	{
        cout<<"=================="<<endl;
        cout<<"YOUR LIST IS EMPTY"<<endl;
        cout<<"=================="<<endl;
        cout<<"\t\t\t\t\t===========PRESS ANY TO GO TO BACK=========="<<endl;
        getch();
	}
	else
	{
			location=tail->next;
 int position;
    cout<<"============================="<<endl;
	cout<<"ENTER YOUR ROLL NO TO DELETE:"<<endl;
	 cout<<"============================"<<endl;
 	cin>>position;
 	 if(position==000)
        {
            studentrecordmainscreen();
        }
	else if(position>count)
	{
		cout<<"================"<<endl;
		cout<<"INVALID POSITION"<<endl;
		cout<<"================"<<endl;
	}
	else
	{
	for(int i=1;i<position;i++)
	{
		location=location->next;
	}
	location->prev->next=location->next;
	location->next->prev=location->prev;
	if(location->next==tail)
	{
		tail=location->prev;
		cout<<"====================================================="<<endl;
		cout<<"THANKS FOR DELETING THE RECORD OF STUDENT OF ROLL NO:"<<tail->studentrollno<<endl;
		cout<<"====================================================="<<endl;
		delete location;
	}
	else
	{
		cout<<"====================================================="<<endl;
		cout<<"THANKS FOR DELETING THE RECORD OF STUDENT OF ROLL NO:"<<location->studentrollno<<endl;
		cout<<"====================================================="<<endl;
		delete location;
	}

}
}
}

//this function is used to delete the record of student at front
void deleteatfront()
{
    if(!listempty())
    {
    location=tail->next;
      int r;
    	system("Color 9F");
        cout<<endl;
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t\t\t   OF "<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t\t\t\t\t\t    STUDENT RECORDS  "<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl<<endl;
        cout<<"\t======================="<<endl;
        cout<<"\tENTER 000 TO GO TO BACK"<<endl;
        cout<<"\t======================="<<endl<<endl;
        cout<<"============================"<<endl;
        cout<<"ENTER YOUR ROLL NO TO DELETE"<<endl;
        cout<<"============================="<<endl;
        cin>>r;
        if(r==000)
        {
            studentrecordmainscreen();
        }
       else if(location==tail)
        {
            cout<<"=========================================="<<endl;
            cout<<"RECORD IS FOUND AND DELETED SUCCESSFULLY!:"<<location->studentrollno<<endl;
            cout<<"=========================================="<<endl;
            cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
            getch();
            delete tail;
            tail=NULL;
    	}
        else
        {
            location=tail->next;
            tail->next=location->next;
            location->next->prev=tail;
            cout<<"=========================================="<<endl;
            cout<<"RECORD IS FOUND AND DELETED SUCCESSFULLY!:"<<location->studentrollno<<endl;
            cout<<"=========================================="<<endl;
            cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
            getch();
            delete location;

        }
    }
}

//this function is used to delete the record of student at end
void deleteatend()
{
    if(!listempty())
    {
       location=tail->next;
      int r;
    	system("Color 9F");
        cout<<endl;
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t\t\t   OF "<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t\t\t\t\t\t    STUDENT RECORDS  "<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl<<endl;
        cout<<"\t======================="<<endl;
        cout<<"\tENTER 000 TO GO TO BACK"<<endl;
        cout<<"\t======================="<<endl<<endl;
        cout<<"============================"<<endl;
        cout<<"ENTER YOUR ROLL NO TO DELETE"<<endl;
        cout<<"============================="<<endl;
        cin>>r;
        if(r==000)
        {
            studentrecordmainscreen();
        }
       else if(location==tail)
        {
            cout<<"=========================================="<<endl;
            cout<<"RECORD IS FOUND AND DELETED SUCCESSFULLY!:"<<location->studentrollno<<endl;
            cout<<"=========================================="<<endl;
            cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
            getch();
            delete tail;
            tail=NULL;
    	}
        else
        {

            location=tail->prev;
            location->next=tail->next;
            tail->next->prev=location;
            cout<<"=========================================="<<endl;
            cout<<"RECORD IS FOUND AND DELETED SUCCESSFULLY!:"<<tail->studentrollno<<endl;
            cout<<"=========================================="<<endl;
            cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
            getch();
            delete tail;
            tail=location;
        }
    }
}
//this function is used to delete the record of student from before specific value
void deleteatbeforespecificvalue()
{

if(!listempty())
    {

         location=tail->next;
      int r;
    	system("Color 9F");
        cout<<endl;
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t\t\t   OF "<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t\t\t\t\t\t    STUDENT RECORDS  "<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl<<endl;
        cout<<"\t======================="<<endl;
        cout<<"\tENTER 000 TO GO TO BACK"<<endl;
        cout<<"\t======================="<<endl<<endl;
        if(r==000)
        {
            studentrecordmainscreen();
        }
       else if(location==tail)
        {
            cout<<"=========================================="<<endl;
            cout<<"RECORD IS FOUND AND DELETED SUCCESSFULLY!:"<<location->studentrollno<<endl;
            cout<<"=========================================="<<endl;
            cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
            getch();
            delete tail;
            tail=NULL;
    	}
        else
        {

        cout<<"============================"<<endl;
        cout<<"ENTER YOUR ROLL NO TO DELETE"<<endl;
        cout<<"============================="<<endl;
        cin>>r;

            if(location->studentrollno==r)
            {


                predlocation=tail->next;
            	tail->next=predlocation->next;
            	predlocation->next->prev=tail;
            	cout<<"====================================="<<endl;
            	cout<<"RECORD IS FOUND AND VALUE IS DELETED!:"<<predlocation->studentrollno<<endl;
            	cout<<"====================================="<<endl;
            	delete predlocation;

            }
            else
            {

         do
            {

                location=location->next;
            }while(location!=tail->next && location->studentrollno!=r);

            if(location==tail->next && location->studentrollno!=r)
            {
            	cout<<"============================================="<<endl;
                cout<<"RECORD IS NOT FOUND AND VALUE IS NOT DELETED!"<<endl;
                cout<<"============================================="<<endl;
            }
            else
            {
                if(location==tail->next)
                {

                    cout<<"============================================="<<endl;
                    cout<<"NO ROLL NO ARE PRESENT BEFORE THIS ROLL NO! "<<location->studentrollno<<endl;
                    cout<<"============================================"<<endl;
                }
                else
                {
                    predlocation=location->prev;
                    predlocation->prev->next=location;
                    location->prev=predlocation->prev;
                    cout<<"======================================"<<endl;
            		cout<<"RECORD IS FOUND AND VALUE IS DELETED!:"<<predlocation->studentrollno<<endl;
            		cout<<"======================================"<<endl;
                    delete predlocation;
                }
            }
        }
    }

    }
 }

//this function is used to delete the record of student after an specific rollno
void deleteatafterspeicifiicvalue()
{
    if(!listempty())
    {
     location=tail->next;
      int r;
    	system("Color 9F");
        cout<<endl;
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t\t\t   OF "<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl;
        cout<<"\t\t\t\t\t\t    STUDENT RECORDS  "<<endl;
        cout<<"\t\t\t\t\t\t  ==================="<<endl<<endl;
        cout<<"\t======================="<<endl;
        cout<<"\tENTER 000 TO GO TO BACK"<<endl;
        cout<<"\t======================="<<endl<<endl;
        if(r==000)
        {
            studentrecordmainscreen();
        }
       else if(location==tail)
        {
            cout<<"=========================================="<<endl;
            cout<<"RECORD IS FOUND AND DELETED SUCCESSFULLY!:"<<location->studentrollno<<endl;
            cout<<"=========================================="<<endl;
            cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
            getch();
            delete tail;
            tail=NULL;
    	}
        else
        {
        cout<<"============================"<<endl;
        cout<<"ENTER YOUR ROLL NO TO DELETE"<<endl;
        cout<<"============================="<<endl;
        cin>>r;

            if(location->studentrollno==r)
            {
            location=tail->prev;
            location->next=tail->next;
            tail->next->prev=location;
            cout<<"=========================================="<<endl;
            cout<<"RECORD IS FOUND AND DELETED SUCCESSFULLY!:"<<tail->studentrollno<<endl;
            cout<<"=========================================="<<endl;
            delete tail;
            tail=location;
            }
            else
            {

         do
            {

                location=location->next;
            }while(location!=tail->next && location->studentrollno!=r);

            if(location==tail->next && location->studentrollno!=r)
            {
              	cout<<"============================================"<<endl;
                cout<<"RECORD IS NOT FOUND AND VALUE IS NOT DELETED!"<<endl;
                cout<<"============================================"<<endl;
            }
            else
            {
                if(location==tail)
                {
                    cout<<"============================================="<<endl;
                    cout<<"NO ROLL NO ARE PRESENT BEFORE THIS ROLL NO! "<<location->studentrollno<<endl;
                    cout<<"============================================"<<endl;
                }
                else
                {
                    predlocation=location->next;
                    predlocation->next->prev=location;
                    location->next=predlocation->next;
               		cout<<"============================================"<<endl;
                	cout<<"RECORD IS NOT FOUND AND VALUE IS NOT DELETED!"<<predlocation->studentrollno;
                	cout<<"============================================"<<endl;
                    delete predlocation;
                }
            }
        }
    }
    }
}

//this function is used to calculate the marks of semester 1
void asemester1()
{
    system("Color 9F");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t\t\t   OF "<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t  ==================="<<endl;
    cout<<"\t\t\t\t\t\t    STUDENT RECORDS  "<<endl;
    cout<<"\t\t\t\t\t\t  ==================="<<endl;
    cout<<"\t\t\t\t\t=========================================="<<endl;
    cout<<"\t\t\t\t\t     SEMESTER 1 MARKS CALCULATION RECORD  "<<endl;
    cout<<"\t\t\t\t\t=========================================="<<endl<<endl;
    cout<<endl;
    start:
    for(int i=1; i<=6 ;i++)
    {
    cout<<"===========\t"<<"="<<endl;
    cout<<"SUBJECT NO:\t"<< i <<endl;
    cout<<"===========\t"<<"="<<endl;
    cout<<endl;

    if(i==1)
    {
    cout<<"==========================================================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT INRODUCTION TO INFORMATION AND COMPUTER TECHNONLOGY:"<<endl;
    cout<<"==========================================================================="<<endl;
    cin>>marksofsubject1;
    if(marksofsubject1<0 || marksofsubject1>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==2)
    {
    cout<<"================================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT FUDAMENTAL OF PROGEAMMING:"<<endl;
    cout<<"================================================="<<endl;
    cin>>marksofsubject2;
    if(marksofsubject2<0 || marksofsubject2>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==3)
    {
    cout<<"================================"<<endl;
    cout<<"ENTER MARKS OF SUBJECT CALCULUS:"<<endl;
    cout<<"================================"<<endl;
    cin>>marksofsubject3;
    if(marksofsubject3<0 || marksofsubject3>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==4)
    {
    cout<<"==================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT PAKSTUDTIES:"<<endl;
    cout<<"==================================="<<endl;
    cin>>marksofsubject4;
    if(marksofsubject4<0 || marksofsubject4>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==5)
    {
    cout<<"======================================"<<endl;
    cout<<"ENTER MARKS OF SUBJECT ISLAMICSTUDIES:"<<endl;
    cout<<"======================================"<<endl;
    cin>>marksofsubject5;
    if(marksofsubject5<0 || marksofsubject5>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==6)
    {
    cout<<"============================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT ENGLISH COMPREHENSION:"<<endl;
    cout<<"============================================="<<endl;
    cin>>marksofsubject6;
    if(marksofsubject6<0 || marksofsubject6>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }
    else
    {
    cout<<"====================================================="<<endl;
    cout<<"\aYOU HAD DONE SOMETHING WRONG!PLEASE CHECK IT BUDDY:"<<endl;
    cout<<"====================================================="<<endl;
    }
    }
    total=marksofsubject1+marksofsubject2+marksofsubject3+marksofsubject4+marksofsubject5+marksofsubject6;
    cout<<"============================"<<endl;
    cout<<"YOUR ALL MARKS ARE EQUAL TO:"<<total<<endl;
    cout<<"============================"<<endl;
    per=(total*100)/600;
    cout<<"======================================"<<endl;
    cout<<"YOUR ALL MARKS PERCENTAGE IS EQUAL TO:"<<per<<"%"<<endl;
    cout<<"======================================"<<endl;
    cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
	getch();

}
//this function is used to calculate the marks of semester 2
void asemester2()
{
    system("Color 30");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t\t\t   OF "<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t  ==================="<<endl;
    cout<<"\t\t\t\t\t\t    STUDENT RECORDS  "<<endl;
    cout<<"\t\t\t\t\t\t  ==================="<<endl;
    cout<<"\t\t\t\t\t=========================================="<<endl;
    cout<<"\t\t\t\t\t     SEMESTER 2 MARKS CALCULATION RECORD  "<<endl;
    cout<<"\t\t\t\t\t=========================================="<<endl<<endl;
    cout<<endl;
    start:
    for(int i=1; i<=5 ;i++)
    {
    cout<<"===========\t"<<"="<<endl;
    cout<<"SUBJECT NO:\t"<< i <<endl;
    cout<<"===========\t"<<"="<<endl;
    cout<<endl;

    if(i==1)
    {
    cout<<"============================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT MULTIVARIBLE CALCULUS:"<<endl;
    cout<<"============================================="<<endl;
    cin>>marksofsubject1;
    if(marksofsubject1<0 || marksofsubject1>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==2)
    {
    cout<<"==================================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT OBJECT ORITENED PROGRAMMING:"<<endl;
    cout<<"==================================================="<<endl;
    cin>>marksofsubject2;
    if(marksofsubject2<0 || marksofsubject2>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==3)
    {
    cout<<"============================================================"<<endl;
    cout<<"ENTER MARKS OF SUBJECT COMMUNICATION AND PRESENTATION SKILLS:"<<endl;
    cout<<"============================================================"<<endl;
    cin>>marksofsubject3;
    if(marksofsubject3<0 || marksofsubject3>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==4)
    {
    cout<<"==========================================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT APPLIED PHSICS AN BASIC ELECTRONICS:"<<endl;
    cout<<"==========================================================="<<endl;
    cin>>marksofsubject4;
    if(marksofsubject4<0 || marksofsubject4>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==5)
    {
    cout<<"=================================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT HUMAN RESOURCES MANAGEMENT:"<<endl;
    cout<<"=================================================="<<endl;
    cin>>marksofsubject5;
    if(marksofsubject5<0 || marksofsubject5>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }
    else
    {
    cout<<"====================================================="<<endl;
    cout<<"\aYOU HAD DONE SOMETHING WRONG!PLEASE CHECK IT BUDDY:"<<endl;
    cout<<"====================================================="<<endl;
    }
    }
    total=marksofsubject1+marksofsubject2+marksofsubject3+marksofsubject4+marksofsubject5;
    cout<<"============================"<<endl;
    cout<<"YOUR ALL MARKS ARE EQUAL TO:"<<total<<endl;
    cout<<"============================"<<endl;
    per=(total*100)/500;
    cout<<"======================================"<<endl;
    cout<<"YOUR ALL MARKS PERCENTAGE IS EQUAL TO:"<<per<<"%"<<endl;
    cout<<"======================================"<<endl;
    cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
	getch();
}

//this function is used to calculate the marks of semester 3
void asemester3()
{
    system("Color 4F");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t\t\t   OF "<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t  ==================="<<endl;
    cout<<"\t\t\t\t\t\t    STUDENT RECORDS  "<<endl;
    cout<<"\t\t\t\t\t\t  ==================="<<endl;
    cout<<"\t\t\t\t\t=========================================="<<endl;
    cout<<"\t\t\t\t\t     SEMESTER 3 MARKS CALCULATION RECORD  "<<endl;
    cout<<"\t\t\t\t\t=========================================="<<endl<<endl;
    cout<<endl;
    start:
    for(int i=1; i<=5 ;i++)
    {
    cout<<"===========\t"<<"="<<endl;
    cout<<"SUBJECT NO:\t"<< i <<endl;
    cout<<"===========\t"<<"="<<endl;
    cout<<endl;

    if(i==1)
    {
    cout<<"======================================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT DATA STRUCTURES AND ALOGORITHM:"<<endl;
    cout<<"======================================================"<<endl;
    cin>>marksofsubject1;
    if(marksofsubject1<0 || marksofsubject1>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==2)
    {
    cout<<"============================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT DIFFERENTIAL EQUATION:"<<endl;
    cout<<"============================================="<<endl;
    cin>>marksofsubject2;
    if(marksofsubject2<0 || marksofsubject2>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==3)
    {
    cout<<"============================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT PROFESSIONAL PRACTICE:"<<endl;
    cout<<"============================================="<<endl;
    cin>>marksofsubject3;
    if(marksofsubject3<0 || marksofsubject3>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================"<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================"<<endl;
    }
    }

    else if(i==4)
    {
    cout<<"================================================"<<endl;
    cout<<"ENTER MARKS OF SUBJECT DIGITAL LOGIC AND DESIGN:"<<endl;
    cout<<"================================================"<<endl;
    cin>>marksofsubject4;
    if(marksofsubject4<0 || marksofsubject4>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==5)
    {
    cout<<"=========================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT DISCRETE STRUTURES:"<<endl;
    cout<<"=========================================="<<endl;
    cin>>marksofsubject5;
    if(marksofsubject5<0 || marksofsubject5>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }
    else
    {
    cout<<"====================================================="<<endl;
    cout<<"\aYOU HAD DONE SOMETHING WRONG!PLEASE CHECK IT BUDDY:"<<endl;
    cout<<"====================================================="<<endl;
    }
    }
    total=marksofsubject1+marksofsubject2+marksofsubject3+marksofsubject4+marksofsubject5;
    cout<<"============================"<<endl;
    cout<<"YOUR ALL MARKS ARE EQUAL TO:"<<total<<endl;
    cout<<"============================"<<endl;
    per=(total*100)/500;
    cout<<"======================================"<<endl;
    cout<<"YOUR ALL MARKS PERCENTAGE IS EQUAL TO:"<<per<<"%"<<endl;
    cout<<"======================================"<<endl;
    cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
	getch();

}

//this function is used to calculate the marks of semester 4
void asemester4()
{
    system("Color 2F");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t\t\t   OF "<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t  ==================="<<endl;
    cout<<"\t\t\t\t\t\t    STUDENT RECORDS  "<<endl;
    cout<<"\t\t\t\t\t\t  ==================="<<endl;
    cout<<"\t\t\t\t\t=========================================="<<endl;
    cout<<"\t\t\t\t\t     SEMESTER 4 MARKS CALCULATION RECORD  "<<endl;
    cout<<"\t\t\t\t\t=========================================="<<endl<<endl;
    cout<<endl;
    start:
    for(int i=1; i<=5 ;i++)
    {
    cout<<"===========\t"<<"="<<endl;
    cout<<"SUBJECT NO:\t"<< i <<endl;
    cout<<"===========\t"<<"="<<endl;
    cout<<endl;

    if(i==1)
    {
    cout<<"============================================"<<endl;
    cout<<"ENTER MARKS OF SUBJECT SOFTWARE ENGINEERING:"<<endl;
    cout<<"============================================"<<endl;
    cin>>marksofsubject1;
    if(marksofsubject1<0 || marksofsubject1>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==2)
    {
    cout<<"======================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT WEB PROGRAMMING:"<<endl;
    cout<<"======================================="<<endl;
    cin>>marksofsubject2;
    if(marksofsubject2<0 || marksofsubject2>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==3)
    {
    cout<<"========================================================"<<endl;
    cout<<"ENTER MARKS OF SUBJECT DESIGN AND ANALYSIS OF ALGORIHMS:"<<endl;
    cout<<"========================================================"<<endl;
    cin>>marksofsubject3;
    if(marksofsubject3<0 || marksofsubject3>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==4)
    {
    cout<<"======================================"<<endl;
    cout<<"ENTER MARKS OF SUBJECT LINEAR ALGEBRA:"<<endl;
    cout<<"======================================"<<endl;
    cin>>marksofsubject4;
    if(marksofsubject4<0 || marksofsubject4>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==5)
    {
    cout<<"======================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT DATABASE SYSTEM:"<<endl;
    cout<<"======================================="<<endl;
    cin>>marksofsubject5;
    if(marksofsubject5<0 || marksofsubject5>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }
    else
    {
    cout<<"====================================================="<<endl;
    cout<<"\aYOU HAD DONE SOMETHING WRONG!PLEASE CHECK IT BUDDY:"<<endl;
    cout<<"====================================================="<<endl;
    }
    }
    total=marksofsubject1+marksofsubject2+marksofsubject3+marksofsubject4+marksofsubject5;
    cout<<"============================"<<endl;
    cout<<"YOUR ALL MARKS ARE EQUAL TO:"<<total<<endl;
    cout<<"============================"<<endl;
    per=(total*100)/500;
    cout<<"======================================"<<endl;
    cout<<"YOUR ALL MARKS PERCENTAGE IS EQUAL TO:"<<per<<"%"<<endl;
    cout<<"======================================"<<endl;
    cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
	getch();

}

//this function is used to calculate the marks of semester 5
void asemester5()
{
    system("Color 5F");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t\t\t   OF "<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t  ==================="<<endl;
    cout<<"\t\t\t\t\t\t    STUDENT RECORDS  "<<endl;
    cout<<"\t\t\t\t\t\t  ==================="<<endl;
    cout<<"\t\t\t\t\t=========================================="<<endl;
    cout<<"\t\t\t\t\t     SEMESTER 5 MARKS CALCULATION RECORD  "<<endl;
    cout<<"\t\t\t\t\t=========================================="<<endl<<endl;
    cout<<endl;
    start:
    for(int i=1; i<=5 ;i++)
    {
    cout<<"===========\t"<<"="<<endl;
    cout<<"SUBJECT NO:\t"<< i <<endl;
    cout<<"===========\t"<<"="<<endl;
    cout<<endl;

    if(i==1)
    {
    cout<<"========================================"<<endl;
    cout<<"ENTER MARKS OF SUBJECT OPERATING SYSTEM:"<<endl;
    cout<<"========================================"<<endl;
    cin>>marksofsubject1;
    if(marksofsubject1<0 || marksofsubject1>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==2)
    {
    cout<<"=================================================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT COMPUTER ORGANIZATION AND ASSEMBLY LANGUAGE:"<<endl;
    cout<<"==================================================================="<<endl;
    cin>>marksofsubject2;
    if(marksofsubject2<0 || marksofsubject2>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }
    else if(i==3)
    {
    cout<<"=================================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT STATISTICS AND PROBABILITY:"<<endl;
    cout<<"=================================================="<<endl;
    cin>>marksofsubject3;
    if(marksofsubject3<0 || marksofsubject3>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==4)
    {
    cout<<"============================================================"<<endl;
    cout<<"ENTER MARKS OF SUBJECT ADVANCE OBJECT ORITENTED PROGRAMMING:"<<endl;
    cout<<"============================================================"<<endl;
    cin>>marksofsubject4;
    if(marksofsubject4<0 || marksofsubject4>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==5)
    {
    cout<<"==========================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT NUMERICAL COMPUTING:"<<endl;
    cout<<"==========================================="<<endl;
    cin>>marksofsubject5;
    if(marksofsubject5<0 || marksofsubject5>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }
    else
    {
    cout<<"====================================================="<<endl;
    cout<<"\aYOU HAD DONE SOMETHING WRONG!PLEASE CHECK IT BUDDY:"<<endl;
    cout<<"====================================================="<<endl;
    }
    }
    total=marksofsubject1+marksofsubject2+marksofsubject3+marksofsubject4+marksofsubject5;
    cout<<"============================"<<endl;
    cout<<"YOUR ALL MARKS ARE EQUAL TO:"<<total<<endl;
    cout<<"============================"<<endl;
    per=(total*100)/600;
    cout<<"======================================"<<endl;
    cout<<"YOUR ALL MARKS PERCENTAGE IS EQUAL TO:"<<per<<"%"<<endl;
    cout<<"======================================"<<endl;
    cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
	getch();

}
//this function is used to calculate the marks of semester 6
void asemester6()
{
    system("Color 8F");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t\t\t   OF "<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t  ==================="<<endl;
    cout<<"\t\t\t\t\t\t    STUDENT RECORDS  "<<endl;
    cout<<"\t\t\t\t\t\t  ==================="<<endl;
    cout<<"\t\t\t\t\t=========================================="<<endl;
    cout<<"\t\t\t\t\t     SEMESTER 6 MARKS CALCULATION RECORD  "<<endl;
    cout<<"\t\t\t\t\t=========================================="<<endl<<endl;
    cout<<endl;
    start:
    for(int i=1; i<=6 ;i++)
    {
    cout<<"===========\t"<<"==="<<endl;
    cout<<"SUBJECT NO:\t"<<  i <<endl;
    cout<<"===========\t"<<"==="<<endl;
    cout<<endl;

    if(i==1)
    {
    cout<<"=================================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT TECHNICAL BUSINESS WRITING:"<<endl;
    cout<<"=================================================="<<endl;
    cin>>marksofsubject1;
    if(marksofsubject1<0 || marksofsubject1>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==2)
    {
    cout<<"=============================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT ARTIFICAL INTELLIGENCE:"<<endl;
    cout<<"=============================================="<<endl;
    cin>>marksofsubject2;
    if(marksofsubject2<0 || marksofsubject2>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==3)
    {
    cout<<"========================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT VISUAL PROGRAMMING:"<<endl;
    cout<<"========================================="<<endl;
    cin>>marksofsubject3;
    if(marksofsubject3<0 || marksofsubject3>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================"<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==4)
    {
    cout<<"======================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT AUTOMATA THEORY:"<<endl;
    cout<<"======================================="<<endl;
    cin>>marksofsubject4;
    if(marksofsubject4<0 || marksofsubject4>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==5)
    {
    cout<<"================================================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT FOREIGN LANGUAGE-|(CHINESE/FRENCH/GERMAN):"<<endl;
    cout<<"================================================================="<<endl;
    cin>>marksofsubject5;
    if(marksofsubject5<0 || marksofsubject5>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==6)
    {
    cout<<"========================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT COMPUTER NETWORKS:"<<endl;
    cout<<"========================================="<<endl;
    cin>>marksofsubject6;
    if(marksofsubject6<0 || marksofsubject6>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================"<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================"<<endl;
    }
    }
    else
    {
    cout<<"====================================================="<<endl;
    cout<<"\aYOU HAD DONE SOMETHING WRONG!PLEASE CHECK IT BUDDY:"<<endl;
    cout<<"====================================================="<<endl;
    }
    }
    total=marksofsubject1+marksofsubject2+marksofsubject3+marksofsubject4+marksofsubject5+marksofsubject6;
    cout<<"============================"<<endl;
    cout<<"YOUR ALL MARKS ARE EQUAL TO:"<<total<<endl;
    cout<<"============================"<<endl;
    per=(total*100)/600;
    cout<<"======================================"<<endl;
    cout<<"YOUR ALL MARKS PERCENTAGE IS EQUAL TO:"<<per<<"%"<<endl;
    cout<<"======================================"<<endl;
    cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
	getch();

}
//this function is used to calculate the marks of semester 7
void asemester7()
{

    system("Color 4F");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t\t\t   OF "<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t  ==================="<<endl;
    cout<<"\t\t\t\t\t\t    STUDENT RECORDS  "<<endl;
    cout<<"\t\t\t\t\t\t  ==================="<<endl;
    cout<<"\t\t\t\t\t=========================================="<<endl;
    cout<<"\t\t\t\t\t     SEMESTER 7 MARKS CALCULATION RECORD  "<<endl;
    cout<<"\t\t\t\t\t=========================================="<<endl<<endl;
    cout<<endl;
    start:
    for(int i=1; i<=6 ;i++)
    {
    cout<<"===========\t"<<"==="<<endl;
    cout<<"SUBJECT NO:\t"<<  i <<endl;
    cout<<"===========\t"<<"==="<<endl;
    cout<<endl;

    if(i==1)
    {
    cout<<"=================================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT TECHNICAL BUSINESS WRITING:"<<endl;
    cout<<"=================================================="<<endl;
    cin>>marksofsubject1;
    if(marksofsubject1<0 || marksofsubject1>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==2)
    {
    cout<<"==============================================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT CHINESE LANGUAGE-|| FRENCH LANGUAGE -||:"<<endl;
    cout<<"================================================================"<<endl;
    cin>>marksofsubject2;
    if(marksofsubject2<0 || marksofsubject2>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==3)
    {
    cout<<"=========================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT DATA COMMUNICATION:"<<endl;
    cout<<"=========================================="<<endl;
    cin>>marksofsubject3;
    if(marksofsubject3<0 || marksofsubject3>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==4)
    {
    cout<<"============================================"<<endl;
    cout<<"ENTER MARKS OF SUBJECT COMPILER CONSTRUCTOR:"<<endl;
    cout<<"============================================"<<endl;
    cin>>marksofsubject4;
    if(marksofsubject4<0 || marksofsubject4>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================"<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================"<<endl;
    }
    }

    else if(i==5)
    {
    cout<<"========================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT COMPUTER GRAPHICS:"<<endl;
    cout<<"========================================="<<endl;
    cin>>marksofsubject5;
    if(marksofsubject5<0 || marksofsubject5>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================"<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================"<<endl;
    }
    }

    else if(i==6)
    {
    cout<<"================================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT SOFTWARE PROJECT MANAGEMNE:"<<endl;
    cout<<"================================================="<<endl;
    cin>>marksofsubject6;
    if(marksofsubject6<0 || marksofsubject6>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }
    else
    {
    cout<<"====================================================="<<endl;
    cout<<"\aYOU HAD DONE SOMETHING WRONG!PLEASE CHECK IT BUDDY:"<<endl;
    cout<<"====================================================="<<endl;
    }
    }
    total=marksofsubject1+marksofsubject2+marksofsubject3+marksofsubject4+marksofsubject5+marksofsubject6;
    cout<<"============================"<<endl;
    cout<<"YOUR ALL MARKS ARE EQUAL TO:"<<total<<endl;
    cout<<"============================"<<endl;
    per=(total*100)/600;
    cout<<"======================================"<<endl;
    cout<<"YOUR ALL MARKS PERCENTAGE IS EQUAL TO:"<<per<<"%"<<endl;
    cout<<"======================================"<<endl;
    cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
	getch();

}
//this function is used to calculate the marks of semester 8
void asemester8()
{

    system("Color 7F");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t\t\t   OF "<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t  ==================="<<endl;
    cout<<"\t\t\t\t\t\t    STUDENT RECORDS  "<<endl;
    cout<<"\t\t\t\t\t\t  ==================="<<endl;
    cout<<"\t\t\t\t\t=========================================="<<endl;
    cout<<"\t\t\t\t\t     SEMESTER 8 MARKS CALCULATION RECORD  "<<endl;
    cout<<"\t\t\t\t\t=========================================="<<endl<<endl;
    cout<<endl;
    start:
    for(int i=1; i<=3 ;i++)
    {
    cout<<"===========\t"<<"==="<<endl;
    cout<<"SUBJECT NO:\t"<<  i <<endl;
    cout<<"===========\t"<<"==="<<endl;
    cout<<endl;

    if(i==1)
    {
    cout<<"================================================================"<<endl;
    cout<<"ENTER MARKS OF SUBJECT CHINESE LANGUAGE-||| FRENCH LANGUAGE -|||:"<<endl;
    cout<<"================================================================="<<endl;
    cin>>marksofsubject1;
    if(marksofsubject1<0 || marksofsubject1>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==2)
    {
    cout<<"=========================================="<<endl;
    cout<<"ENTER MARKS OF SUBJECT SYSTEM PROGRAMMING:"<<endl;
    cout<<"=========================================="<<endl;
    cin>>marksofsubject2;
    if(marksofsubject2<0 || marksofsubject2>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }

    else if(i==3)
    {
    cout<<"======================================================"<<endl;
    cout<<"ENTER MARKS OF SUBJECT MOBILE APPLICATION DEVELOPMENT:"<<endl;
    cout<<"======================================================"<<endl;
    cin>>marksofsubject3;
    if(marksofsubject3<0 || marksofsubject3>100)
    {
    cout<<"====================================================================="<<endl;
    cout<<"PLEASE CHECK MARKS OF SUBJECT "<<i<<" BECAUSE SOMETHING IS INCORRECT!"<<endl;
    cout<<"====================================================================="<<endl;
    Sleep(3000);
    goto start;
    }
    else
    {
    cout<<"========================================="<<endl;
    cout<<"\aYOU HAVE INSERTED THE MARKS OF SUBJECT:"<<i<<endl;
    cout<<"========================================="<<endl;
    }
    }
    else
    {
    cout<<"====================================================="<<endl;
    cout<<"\aYOU HAD DONE SOMETHING WRONG!PLEASE CHECK IT BUDDY:"<<endl;
    cout<<"====================================================="<<endl;
    }
    }
    total=marksofsubject1+marksofsubject2+marksofsubject3;
    cout<<"==========================="<<endl;
    cout<<"YOUR ALL MARKS ARE EQUAL TO:"<<total<<endl;
    cout<<"==========================="<<endl;
    per=(total*100)/300;
    cout<<"======================================"<<endl;
    cout<<"YOUR ALL MARKS PERCENTAGE IS EQUAL TO:"<<per<<"%"<<endl;
    cout<<"======================================"<<endl;
    cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
	getch();

}

//this function is used to calculate  semester gpa
void gpa()
{
    int noofsubs,sem;
    double credits[noofsubs];
	double points[noofsubs];
	double sum=0;
	double total;
	double totalcredit=0;
    system("Color 20");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t\t\t   OF "<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES  "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t   ==================================="<<endl;
    cout<<"\t\t\t\t\t             STUDENT RECORDS     	  "<<endl;
    cout<<"\t\t\t\t\t   ==================================="<<endl;
    cout<<"\t\t\t\t\t\t ========================"<<endl;
    cout<<"\t\t\t\t\t\t     GPA CALCULATOR      "<<endl;
    cout<<"\t\t\t\t\t\t ========================"<<endl<<endl;
    SEM:
	cout<<"\t=================="<<endl;
    cout<<"\tENTER SEMESTER NO:"<<endl;
    cout<<"\t=================="<<endl;
    cout<<"\t\t";
    cin>>sem;
    if(sem<=0 ||sem>8)
    {
        cout<<"\t======================================================================="<<endl;
        cout<<"\tSEMESTER MUST BE GREATER THEN 0 OR LESS THEN 8 TO CALCULATE GPA THANKS!"<<endl;
        cout<<"\t======================================================================="<<endl;
        goto SEM;
    }
    GPA:
    cout<<"\t===================="<<endl;
    cout<<"\tENTER NO OF SUBJECT:"<<endl;
    cout<<"\t===================="<<endl;
    cout<<"\t\t";
    cin>>noofsubs;
    if(noofsubs<=0 ||noofsubs>6 )
    {
        cout<<"\t=============================================================="<<endl;
        cout<<"\tSUBJECTS MUST BE GREATER THEN 0 OR  6 TO CALCULATE GPA THANKS!"<<endl;
        cout<<"\t=============================================================="<<endl;
    }
    if(sem==1 && noofsubs==6 || sem==2 && noofsubs==5 ||  sem==3 && noofsubs==5 || sem==4 && noofsubs==5 ||  sem==5 && noofsubs==5 ||  sem==6 && noofsubs==6 || sem==7 && noofsubs==6 ||  sem==8 && noofsubs==3)
    {
    double credits[noofsubs];
	double points[noofsubs];
    for(int i=1; i<=noofsubs;i++)
    {
        cout<<"\t========================\t"<<"="<<endl;
        cout<<"\tENTER CREDITS OF SUBJECT\t"<< i <<endl;
        cout<<"\t========================\t"<<"="<<endl;
        cout<<"\t\t";
        cin>>credits[i];
        cout<<"\t=======================\t\t"<<"="<<endl;
        cout<<"\tENTER POINTS OF SUBJECT\t\t"<< i <<endl;
        cout<<"\t=======================\t\t"<<"="<<endl;
        cout<<"\t\t";
        cin>>points[i];
        cout<<endl<<endl;
        cout<<"\t========================="<<endl<<endl<<endl;

    }
      for(int i=1; i<=noofsubs;i++)
    {
      total=credits[i]*points[i];
      sum+=total;
    }
      for(int i=1; i<=noofsubs;i++)
    {
      totalcredit+=credits[i];
    }
    cout<<endl;
    cout<<"\t=========================\t"<<"="<<"\t"<<"==="<<endl;
    cout<<"\tTOTAL POINTS OF SEMESTER:\t"<<sem<<"\t"<< sum <<endl;
    cout<<"\t=========================\t"<<"="<<"\t"<<"==="<<endl;
    cout<<"\t==========================\t"<<"="<<"\t"<<"==="<<endl;
    cout<<"\tTOTAL CREDITS OF SEMESTER:\t"<<sem<<"\t"<<totalcredit<<endl;
    cout<<"\t==========================\t"<<"="<<"\t"<<"==="<<endl;
    SGPA=sum/totalcredit;

    cout<<"\t==========================\t"<<"="<<"\t"<<"==="<<endl;
    cout<<"\tTOTAL GPA OF SEMESTER:\t\t"<<  sem<<"\t"<< SGPA<<endl;
    cout<<"\t==========================\t"<<"="<<"\t"<<"==="<<endl;
   if(SGPA>4.0)
    {


      	cout<<"==================================================="<<endl;
    	cout<<"YOUR GPA IS NOT GREATER THEN 4 GPA PLEASE CHECK IT!"<<endl;
    	cout<<"==================================================="<<endl;
    	goto GPA;

	}
   else if(SGPA==4.0)
    {
    	cout<<"\t===================================="<<endl;
    	cout<<"\tYOUR GRADE IS A1 OR A2 90% AND ABOVE"<<endl;
    	cout<<"\t===================================="<<endl;
	}
	else if(SGPA==3.66 || SGPA<4.0)
    {
    	cout<<"\t========================="<<endl;
    	cout<<"\tYOUR GRADE IS A3  77-79% "<<endl;
    	cout<<"\t========================="<<endl;
	}
	else if(SGPA==3.33 ||  SGPA<3.66)
    {
    	cout<<"\t========================"<<endl;
    	cout<<"\tYOUR GRADE IS B1 74-76% "<<endl;
    	cout<<"\t========================"<<endl;
	}
	else if(SGPA==3.0 ||  SGPA<3.33)
    {
    	cout<<"\t========================"<<endl;
    	cout<<"\tYOUR GRADE IS B2 70-73% "<<endl;
    	cout<<"\t========================"<<endl;
	}
	else if(SGPA==2.6 ||  SGPA<3.0)
    {
    	cout<<"\t========================"<<endl;
    	cout<<"\tYOUR GRADE IS B3 67-69% "<<endl;
    	cout<<"\t========================"<<endl;
	}
   else if(SGPA==2.33 ||  SGPA<2.6)
    {
    	cout<<"\t========================"<<endl;
    	cout<<"\tYOUR GRADE IS C1 64-66% "<<endl;
    	cout<<"\t========================"<<endl;
	}
	else if(SGPA==2.0 ||  SGPA<3.33)
    {
    	cout<<"\t======================="<<endl;
    	cout<<"\tYOUR GRADE IS B2 60-63%"<<endl;
    	cout<<"\t======================="<<endl;
	}
	else if(SGPA==1.50 ||  SGPA<2.0)
    {
    	cout<<"\t======================="<<endl;
    	cout<<"\tYOUR GRADE IS D 50-59% "<<endl;
    	cout<<"\t======================="<<endl;
	}
	else
	{
		cout<<"\t============================"<<endl;
    	cout<<"\tYOUR GRADE IS F 49% OR BELOW"<<endl;
    	cout<<"\t============================"<<endl;
	}

}
	else
    {
        cout<<"\t================================================="<<endl;
        cout<<"\t|SEMESTER 1 HAVE ONLY 6 SUBJECT PLEASE CHECK IT!|"<<endl;
        cout<<"\t|SEMESTER 2 HAVE ONLY 5 SUBJECT PLEASE CHECK IT!|"<<endl;
        cout<<"\t|SEMESTER 3 HAVE ONLY 5 SUBJECT PLEASE CHECK IT!|"<<endl;
        cout<<"\t|SEMESTER 4 HAVE ONLY 5 SUBJECT PLEASE CHECK IT!|"<<endl;
        cout<<"\t|SEMESTER 5 HAVE ONLY 5 SUBJECT PLEASE CHECK IT!|"<<endl;
        cout<<"\t|SEMESTER 6 HAVE ONLY 6 SUBJECT PLEASE CHECK IT!|"<<endl;
        cout<<"\t|SEMESTER 7 HAVE ONLY 6 SUBJECT PLEASE CHECK IT!|"<<endl;
        cout<<"\t|SEMESTER 8 HAVE ONLY 3 SUBJECT PLEASE CHECK IT!|"<<endl;
        cout<<"\t================================================="<<endl;
        goto GPA;
        cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
        getch();
    }
}

//this function is used to calculate  semester cgpa
void cgpa()
{
    int noofsubs,sem;
    double semester[sem],semtotal=0;
    float scgpa;
    system("Color B0");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t\t\t   OF "<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES  "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t   ==================================="<<endl;
    cout<<"\t\t\t\t\t             STUDENT RECORDS     	  "<<endl;
    cout<<"\t\t\t\t\t   ==================================="<<endl;
    cout<<"\t\t\t\t\t\t ========================"<<endl;
    cout<<"\t\t\t\t\t\t     CGPA CALCULATOR     "<<endl;
    cout<<"\t\t\t\t\t\t ========================"<<endl<<endl;
    cgpa:
	cout<<"\t=================="<<endl;
    cout<<"\tENTER SEMESTER NO:"<<endl;
    cout<<"\t=================="<<endl;
    cout<<"\t\t";
    cin>>sem;
    if(sem<=0 || sem<=1 || sem>8)
    {
        cout<<"\t========================================================================"<<endl;
        cout<<"\tSEMESTER MUST BE GREATER THEN 1 OR LESS THAN 8 TO CALCULATE CGPA THANKS!"<<endl;
        cout<<"\t========================================================================"<<endl;
    goto cgpa;
	}
    else
    {
    for(int i=1; i<=sem;i++)
    {
        cout<<"\t======================="<<endl;
        cout<<"\tENTER "<< i <<" SEMESTER GPA:"<<endl;
        cout<<"\t======================="<<endl;
        cout<<"\t";
        cin>>semester[i];
    }
    for(int i=1; i<=sem;i++)
    {
      semtotal+=semester[i];
    }
    }
    SCGPA=semtotal/sem;
    cout<<"\t\t======================="<<endl;
    cout<<"\t\tYOUR CGPA OF SEMESTERS:"<<SCGPA<<endl;
    cout<<"\t\t======================="<<endl<<endl;
    cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
	getch();

}

//this function is used to show thwe instruction hpw to calculate the gpa or cgpa
void instruction()
{
    system("Color 47");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t\t\t   OF "<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t              STUDENT RECORDS     	 	  "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t       HOW TO CALCULATE GPA ND CGPA      "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl<<endl;
    cout<<"\t==========================================="<<endl;
    cout<<"\tGPA=SUM OF (CREDIT*POINTS)/TOTAL OF CREDITS"<<endl;
    cout<<"\t==========================================="<<endl<<endl;
    cout<<"\t====================================="<<endl;
    cout<<"\tCGPA=SUM OF GPA /NUMBERS OF SEMESTERS"<<endl;
    cout<<"\t====================================="<<endl<<endl;
    cout<<"\t================================================="<<endl;
    cout<<"\t      GRADE-POINTS TABLE OF NUML UNIVERSITY      "<<endl;
    cout<<"\t================================================="<<endl<<endl;
    cout<<"\t================================================="<<endl;
    cout<<"\t| GRADE  \t|  PERCENTAGE \t| GRADE POINTS  |"<<endl;
    cout<<"\t================================================="<<endl;
    cout<<"\t| A1    \t| 90% AND ABOVE\t| 4.0       	|"<<endl;
    cout<<"\t| A2    \t| 80-89%       \t| 4.0       	|"<<endl;
    cout<<"\t| A3    \t| 77-79%       \t| 3.66      	|"<<endl;
    cout<<"\t| B1    \t| 74-76%       \t| 3.33      	|"<<endl;
    cout<<"\t| B2    \t| 70-73%       \t| 3.00      	|"<<endl;
    cout<<"\t| B3    \t| 67-69%       \t| 2.66      	|"<<endl;
    cout<<"\t| C1    \t| 64-66%       \t| 2.33      	|"<<endl;
    cout<<"\t| C2    \t| 60-63%       \t| 2.00      	|"<<endl;
    cout<<"\t| D     \t| 50-59%       \t| 1.50      	|"<<endl;
    cout<<"\t| F     \t| 49% OR BELOW \t| 1.00      	|"<<endl;
    cout<<"\t=================================================="<<endl<<endl;
    cout<<"\t\t\t\t=============PRESS ANY TO GO TO BACK==============\t\t"<<endl;
	getch();

}

//this function is used to traverseall dat in forward direction
void showallrecordforward()
{
        system("Color 3F");
        cout<<endl;
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t\t\t   OF "<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES      ";
        cout<<"\n\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t\t   ==================="<<endl;
        cout<<"\t\t\t\t\t\t     STUDENT RECORDS "<<endl;
        cout<<"\t\t\t\t\t\t   ==================="<<endl;
   		cout<<"\t\t\t\t\t==========================================="<<endl;
    	cout<<"\t\t\t\t\t ALL RECORDS OF STUDENT OF NUMl IN FORWARD "<<endl;
    	cout<<"\t\t\t\t\t==========================================="<<endl<<endl;

if(tail==NULL)
{
cout<<"=================="<<endl;
cout<<"YOUR LIST IS EMPTY"<<endl;
cout<<"=================="<<endl;
cout<<"\t\t\t\t\t==========PRESS ANY TO GO TO BACK=========="<<endl;
getch();
}
else
{

    location=tail->next;
    do
    {

        cout<<endl<<endl;
        cout<<"\t======="<<endl;
        cout<<"\tROLL NO:"<<location->studentrollno<<endl;
        cout<<"\t========"<<endl;
        cout<<"\t==============="<<endl;
        cout<<"\tNAME OF STUDENT:"<<location->studentname<<endl;
        cout<<"\t================"<<endl;
        cout<<"\t==================="<<endl;
        cout<<"\tPHONE NO OF STUDENT:"<<location->contactofstudent<<endl;
        cout<<"\t===================="<<endl;
        cout<<"\t======="<<endl;
        cout<<"\tCNIC NO:"<<location->cinicno<<endl;
        cout<<"\t======="<<endl;
        cout<<"\t============"<<endl;
        cout<<"\tFATHER NAME:"<<location->fathername<<endl;
        cout<<"\t============"<<endl;
        cout<<"\t=================="<<endl;
        cout<<"\tPHONE NO OF FATHER:"<<location->contactoffather<<endl;
        cout<<"\t=================="<<endl;
        cout<<"\t========="<<endl;
        cout<<"\tEMAIL ID:"<<location->emialid<<endl;
        cout<<"\t========="<<endl;
        cout<<"\t==========="<<endl;
        cout<<"\tDEPARTMENT:" <<location->deparment<<endl;
        cout<<"\t==========="<<endl;
        cout<<"\t========="<<endl;
        cout<<"\tSEMESTER:"<<location->studentsemester<<endl;
        cout<<"\t========="<<endl;
        cout<<"\t==============="<<endl;
        cout<<"\tSEMESTER MARKS:"<<location->semestermarks<<endl;
        cout<<"\t==============="<<endl;
        cout<<"\t=========="<<endl;
        cout<<"\tPERCENTAGE:"<<location->studentper<<endl;
        cout<<"\t=========="<<endl;
        cout<<"\t===="<<endl;
        cout<<"\tGPA:"<<location->studentgpa<<endl;
        cout<<"\t===="<<endl;
        cout<<"\t====="<<endl;
        cout<<"\tCGPA:"<<location->studentcgpa<<endl;
        cout<<"\t====="<<endl;
        cout<<"\t====="<<endl;
        cout<<"\tFEES:"<<location->studentfees<<endl;
        cout<<"\t====="<<endl;
        cout<<"\t======="<<endl;
        cout<<"\tADDRESS:"<<location->studentaddress<<endl;
        cout<<"\t======="<<endl;
        cout<<"\t======="<<endl;
        cout<<"\tCAMPUS:"<<location->studentcampus<<endl;
        cout<<"\t======="<<endl;
        cout<<"\t============================"<<endl;
        cout<<"\tEXTRA-CURRICULAR-ACTIVITIES:"<<location->sextracurricular<<endl;
        cout<<"\t============================"<<endl;
        getch();
        location=location->next;
        count++;
    }
    while(location!=tail->next);

}

}

//this function is used to show the data in backward direction
void showallrecordbackward()
{

        system("color 4F");
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t\t\t   OF "<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES      ";
        cout<<"\n\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t\t   ==================="<<endl;
        cout<<"\t\t\t\t\t\t     STUDENT RECORDS "<<endl;
        cout<<"\t\t\t\t\t\t   ==================="<<endl;
   		cout<<"\t\t\t\t\t============================================"<<endl;
    	cout<<"\t\t\t\t\t ALL RECORDS OF STUDENT OF NUMl IN BACKWARD"<<endl;
    	cout<<"\t\t\t\t\t============================================"<<endl<<endl;


if(tail==NULL)
{
        cout<<"=================="<<endl;
        cout<<"YOUR LIST IS EMPTY"<<endl;
        cout<<"=================="<<endl;
        cout<<"\t\t\t\t\t==========PRESS ANY TO GO TO BACK=========="<<endl;
        getch();
}
else
{
 location=tail->next;
    do
    {

        location=location->prev;
        cout<<"\t======="<<endl;
        cout<<"\tROLL NO:"<<location->studentrollno<<endl;
        cout<<"\t========"<<endl;
        cout<<"\t==============="<<endl;
        cout<<"\tNAME OF STUDENT:"<<location->studentname<<endl;
        cout<<"\t================"<<endl;
        cout<<"\t==================="<<endl;
        cout<<"\tPHONE NO OF STUDENT:"<<location->contactofstudent<<endl;
        cout<<"\t===================="<<endl;
        cout<<"\t======="<<endl;
        cout<<"\tCNIC NO:"<<location->cinicno<<endl;
        cout<<"\t======="<<endl;
        cout<<"\t============"<<endl;
        cout<<"\tFATHER NAME:"<<location->fathername<<endl;
        cout<<"\t============"<<endl;
        cout<<"\t=================="<<endl;
        cout<<"\tPHONE NO OF FATHER:"<<location->contactoffather<<endl;
        cout<<"\t=================="<<endl;
        cout<<"\t========="<<endl;
        cout<<"\tEMAIL ID:"<<location->emialid<<endl;
        cout<<"\t========="<<endl;
        cout<<"\t==========="<<endl;
        cout<<"\tDEPARTMENT:" <<location->deparment<<endl;
        cout<<"\t==========="<<endl;
        cout<<"\t========="<<endl;
        cout<<"\tSEMESTER:"<<location->studentsemester<<endl;
        cout<<"\t========="<<endl;
        cout<<"\t==============="<<endl;
        cout<<"\tSEMESTER MARKS:"<<location->semestermarks<<endl;
        cout<<"\t==============="<<endl;
        cout<<"\t=========="<<endl;
        cout<<"\tPERCENTAGE:"<<location->studentper<<endl;
        cout<<"\t=========="<<endl;
        cout<<"\t===="<<endl;
        cout<<"\tGPA:"<<location->studentgpa<<endl;
        cout<<"\t===="<<endl;
        cout<<"\t====="<<endl;
        cout<<"\tCGPA:"<<location->studentcgpa<<endl;
        cout<<"\t====="<<endl;
        cout<<"\t====="<<endl;
        cout<<"\tFEES:"<<location->studentfees<<endl;
        cout<<"\t====="<<endl;
        cout<<"\t======="<<endl;
        cout<<"\tADDRESS:"<<location->studentaddress<<endl;
        cout<<"\t======="<<endl;
        cout<<"\t======="<<endl;
        cout<<"\tCAMPUS:"<<location->studentcampus<<endl;
        cout<<"\t======="<<endl;
        cout<<"\t============================"<<endl;
        cout<<"\tEXTRA-CURRICULAR-ACTIVITIES:"<<location->sextracurricular<<endl;
        cout<<"\t============================"<<endl;

    }
    while(location!=tail->next);
}

}

//this is over student user fucntion
void student()
{
    int ch;
    while(1)
    {
    system("cls");
    system("color 30");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t\t\t   OF "<<endl;
    cout<<"\t\t\t\t\t\t\t  ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES      ";
    cout<<"\n\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t    ==============="<<endl;
    cout<<"\t\t\t\t\t\t        STUDENT    "<<endl;;
    cout<<"\t\t\t\t\t\t    ==============="<<endl<<endl;
    cout<<"\t\t==================================="<<endl;
    cout<<"\t\t1.TO GO TO SIGN  UP FORM OF STUDENT"<<endl;
    cout<<"\t\t==================================="<<endl;
    cout<<"\t\t==================================="<<endl;
    cout<<"\t\t2.TO GO TO LOGIN IN FORM OF STUDENT"<<endl;
    cout<<"\t\t==================================="<<endl;
    cout<<"\t\t==================================="<<endl;
    cout<<"\t\t            3.LOGOUT               "<<endl;
    cout<<"\t\t==================================="<<endl;
    cout<<"\t\t==================================="<<endl;
    cout<<"\t\t            4.CLOSE                "<<endl;
    cout<<"\t\t==================================="<<endl<<endl;
    cout<<"\t===================="<<endl;
    cout<<"\t ENTER YOUR OPTION! "<<endl;
    cout<<"\t===================="<<endl;
    cout<<"\t\t";
    cin>>ch;
    switch(ch)
    {
    case 1:
        cout<<"\n\t\t=====================YOUR WORKING IS IN PROCESS PLEASE WAIT!======================================="<<endl;
        cout<<"\t\t";
        for(int i=0; i<4 ;i++)
        {

            cout<<".";
            Sleep(1000);
        }
        cout<<"\n\t\t\t=============THANKS FOR CHOOSING SIGN UP SCREEN OF STUDENT!=================="<<endl;
        cout<<"\t\t\t";
        for(int i=0; i<3 ;i++)
        {
            cout<<".";
            Sleep(1000);
        }
        system("cls");
        studentsignup();
        system("pause");
        break;
    case 2:
        cout<<"\n\t\t=================YOUR WORKING IS IN PROCESSOR PLEASE WAIT!======================"<<endl;
        cout<<"\t\t";
        for(int i=0; i<4 ;i++)
        {

            cout<<".";
            Sleep(1000);
        }
        cout<<"\n\t\t\t============THANKS FOR CHOOSING LOGIN SCREEN OF STUDENT!================"<<endl;
        cout<<"\t\t\t";
        for(int i=0; i<3 ;i++)
        {
            cout<<".";
            Sleep(1000);
        }
        system("cls");
        studentlogin();
        system("pause");
        break;
    case 3:
        cout<<"\n\t\t===================YOUR WORKING IS IN PROCESS PLEASE WAIT!========================"<<endl;
        cout<<"\t\t";
        for(int i=0; i<5 ;i++)
        {

            cout<<".";
            Sleep(1000);
        }
        cout<<"\n\t\t\t==============THANKS FOR CHOOSING MAIN SCREEN!========================"<<endl;
        cout<<"\t\t\t";
        for(int i=0; i<3 ;i++)
        {
            cout<<".";
            Sleep(1000);
        }
        system("cls");
        mainmenu();
        system("pause");
        break;
    case 4:
        exit(0);
        break;
    default :
        cout<<"======================"<<endl;
        cout<<"YOU ENTER WRONG OPTION!"<<endl;
        cout<<"======================"<<endl;
    }

    }
}
//this is function is used for student sign up
void studentsignup()
{

  int len;
  char studentgender;
  system("color DF");
  cout<<endl;
  cout<<"\n\t\t\t\t\t========================================"<<endl;
  cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
  cout<<"\n\t\t\t\t\t========================================"<<endl;
  cout<<"\t\t\t\t\t\t\t   ===="<<endl;
  cout<<"\t\t\t\t\t\t\t    OF "<<endl;
  cout<<"\t\t\t\t\t\t\t   ===="<<endl;
  cout<<"\t\t\t\t\t========================================="<<endl;
  cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES      ";
  cout<<"\n\t\t\t\t\t========================================="<<endl;
  cout<<"\t\t\t\t\t\t==========================="<<endl;
  cout<<"\t\t\t\t\t\t   STUDENT SIGN UP FORM    "<<endl;
  cout<<"\t\t\t\t\t\t==========================="<<endl<<endl;
  cout<<"\t\t============================="<<endl;
  cout<<"\t\tENTER 000 TO GO TO BACK OR C "<<endl;
  cout<<"\t\t============================="<<endl<<endl;
  username:
  cout<<"\t======================="<<endl;
  cout<<"\tENTER STUDENT USERNAME:"<<endl;
  cout<<"\t======================="<<endl;
  cout<<"\t";
  cin>>studentusernamesignup;
 len=studentusernamesignup.length();
 if(len>12)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 12 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     goto username;
 }
  if(studentusernamesignup=="000")
  {
      student();
  }
  cout<<endl;
  cout<<"\t=============="<<endl;
  cout<<"\tENTER PASSWORD:"<<endl;
  cout<<"\t=============="<<endl;
  for(int i=1 ; i<=5 ; i++)
  {
  cout<<"\t";
  studentpasswordsignup+=getch();
  cout<<"*";
  }
   if(studentpasswordsignup=="000")
  {
      student();
  }
  gender:
  cout<<endl;
  cout<<"\t==================="<<endl;
  cout<<"\tENTER GENDER M/F/O:"<<endl;
  cout<<"\t==================="<<endl;
  cout<<"\t";
  cin>>studentgender;
 if(studentgender=='B' || studentgender=='b')
  {
      student();
  }
  else if(studentgender=='m'||studentgender=='F'|| studentgender=='f'||studentgender=='F'|| studentgender=='o'||studentgender=='O')
  {
  cout<<"\n\t\t==================YOUR ID IS CREATING PLEASE WAIT!===================="<<endl;
  cout<<"\t\t";
  for(int i=0; i<3 ;i++)
  {
      cout<<".";
      Sleep(1000);
  }
  cout<<"\n\t\t\t===========YOUR ID IS CREATED SUCESSFULLY!=================="<<endl;
  cout<<"\t\t\t";
  for(int i=0; i<3 ;i++)
  {
      cout<<".";
      Sleep(1000);
  }
  }
  else
  {
      cout<<"========================================"<<endl;
      cout<<"USER M FOR MALE F FOR FEMALE O FOR OTHER"<<endl;
      cout<<"========================================"<<endl;
      goto gender;
  }

}

//this is over student login function
void studentlogin()
{
    int len;
    system("Color B0");
    cout<<endl;
    cout<<"\n\t\t\t\t==================================================="<<endl;
    cout<<"\t\t\t\t        WELCOME TO STUDENT MANAGEMENT SYSTEM         ";
    cout<<"\n\t\t\t\t==================================================="<<endl;
    cout<<"\t\t\t\t\t\t\t======"<<endl;
    cout<<"\t\t\t\t\t\t\t  OF   "<<endl;
    cout<<"\t\t\t\t\t\t\t======"<<endl;
    cout<<"\t\t\t\t==================================================="<<endl;
    cout<<"\t\t\t\t       NAIONAL UNIVERSITY OF MODERN LANGUAGES      ";
    cout<<"\n\t\t\t\t==================================================="<<endl;
    cout<<"\t\t\t\t\t\t========================="<<endl;
    cout<<"\t\t\t\t\t\t  STUDENT LOGIN IN FORM! "<<endl;
    cout<<"\t\t\t\t\t\t========================="<<endl<<endl;
    cout<<"\t\t======================="<<endl;
    cout<<"\t\tENTER 000 TO GO TO BACK"<<endl;
    cout<<"\t\t======================="<<endl<<endl;
    username:
    cout<<"\t======================="<<endl;
    cout<<"\tENTER STUDENT USERNAME:"<<endl;
    cout<<"\t======================="<<endl;
    cout<<"\t";
    cin>>studentusernamelogin;
    len=studentusernamelogin.length();
 if(len>12)
 {
     cout<<"\t========================================"<<endl;
     cout<<"\tYOU CAN NOT ENTER MORE THEN 12 CHARACTER"<<endl;
     cout<<"\t========================================"<<endl;
     Sleep(3000);
     goto username;
 }
   else if(studentusernamelogin=="000")
    {
     student();
    }
    pass:
    cout<<endl;
    cout<<"\t==============="<<endl;
    cout<<"\tENTER PASSWORD:"<<endl;
    cout<<"\t==============="<<endl;

   for(int i=1 ; i<=5 ; i++)
    {
     cout<<"\t";
     studentpasswordlogin+=getch();
     cout<<"*";
    }
    if(studentpasswordlogin=="00000")
    {
     student();
    }
   if(studentusernamelogin==studentusernamesignup && studentpasswordlogin==studentpasswordsignup)
    {
         cout<<"\n\t\t===================YOUR WORKING IS IN PROCESS PLEASE WAIT!========================"<<endl;
        cout<<"\t\t";
        for(int i=0; i<4 ;i++)
        {

            cout<<".";
            Sleep(1000);
        }
        cout<<"\n\t\t\t==============THANKS FOR LOGIN IN!========================"<<endl;
        cout<<"\t\t\t";
        for(int i=0; i<3 ;i++)
        {
            cout<<".";
            Sleep(1000);
        }
      studentmainscreen();
    }
 else if(studentusernamelogin!=studentusernamesignup && studentpasswordlogin!=studentpasswordsignup)
    {
        cout<<endl;
        cout<<"==============================================="<<endl;
        cout<<"YOUR USERNAME AND PASSWORD BOTH ARE IN CORRECT!"<<endl;
        cout<<"==============================================="<<endl;
        Sleep(3000);
        goto username;

    }
      else if(studentusernamelogin!=studentusernamesignup)
    {
        cout<<endl;
        cout<<"============================"<<endl;
        cout<<"YOUR USERNAME IS IN CORRECT!"<<endl;
        cout<<"============================"<<endl;
        Sleep(3000);
        goto username;

    }
    else if(studentpasswordlogin!=studentpasswordsignup)
    {
        cout<<endl;
        cout<<"============================"<<endl;
        cout<<"YOUR PASSWORD IS IN CORRECT!"<<endl;
        cout<<"============================"<<endl;
        Sleep(3000);
        goto pass;

    }
}

//this function is over student user main screen
void studentmainscreen()
{

   int ch;

    while(1)
    {
        system("cls");
        system("Color 3F");
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
        cout<<"\n\t\t\t\t\t========================================"<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t\t\t   OF "<<endl;
        cout<<"\t\t\t\t\t\t\t  ===="<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
        cout<<"\t\t\t\t\t========================================="<<endl;
        cout<<"\t\t\t\t\t\t   ================="<<endl;
        cout<<"\t\t\t\t\t\t       STUDENT     "<<endl;
        cout<<"\t\t\t\t\t\t   ================="<<endl<<endl;
        cout<<"\t=========================================="<<endl;
        cout<<"\t1.TO ADD COURSE OF SEMESTER		       "<<endl;
        cout<<"\t=========================================="<<endl;
        cout<<"\t=========================================="<<endl;
        cout<<"\t2.TO SHOW ALL COURSE OF SEMESTER FORWARD  "<<endl;
        cout<<"\t=========================================="<<endl;
        cout<<"\t=========================================="<<endl;
        cout<<"\t3.TO SHOW ALL COURSE OF SEMESTERT BACKWARD"<<endl;
        cout<<"\t=========================================="<<endl;
        cout<<"\t=========================================="<<endl;
        cout<<"\t4.TO SEARCH THE DATA OF STUDENT           "<<endl;
        cout<<"\t=========================================="<<endl;
        cout<<"\t=========================================="<<endl;
        cout<<"\t5.TO GO TO BACK TO STUDENT SCREEN!        "<<endl;
        cout<<"\t=========================================="<<endl;
        cout<<"\t=========================================="<<endl;
        cout<<"\t           6.LOGOUT              		   "<<endl;
        cout<<"\t=========================================="<<endl<<endl;
        cout<<"\t=================="<<endl;
        cout<<"\tENTER YOUR OPTION:"<<endl;
        cout<<"\t=================="<<endl;
        cout<<"\t\t";
        cin>>ch;
        switch(ch)
        {

         case 1:
        system("cls");
        addcourse();
        system("pause");
        break;
    case 2:
        system("cls");
        showallcourseforward();
        system("pause");
        break;
    case 3:
        system("cls");
        showallcoursebackward();
        system("pause");
        break;
    case 4:
        system("cls");
        searchrecord();
        system("pause");
        break;
    case 5:
        system("cls");
        student();
        system("pause");
        break;
    case 6:
        cout<<"\n\t\t===================YOUR WORKING IS IN PROCESS PLEASE WAIT!========================"<<endl;
        cout<<"\t\t";
        for(int i=0; i<4 ;i++)
        {

            cout<<".";
            Sleep(1000);
        }
        cout<<"\n\t\t\t==============THANKS FOR CHOOSING MAIN SCREEN!========================"<<endl;
        cout<<"\t\t\t";
        for(int i=0; i<3 ;i++)
        {
            cout<<".";
            Sleep(1000);
        }
        system("cls");
        mainmenu();
        system("pause");
        break;
    default :
        cout<<"======================"<<endl;
        cout<<"YOU ENTER WRONG OPTION!"<<endl;
        cout<<"======================"<<endl;
    }

}
}

//this fucntion is used too add crouse of each semester
void addcourse()
{

    system("cls");
    system("Color DF");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t\t\t    OF "<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t\t       STUDENT     "<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t======================="<<endl;
    cout<<"\t\tENTER 000 TO GO TO BACK"<<endl;
    cout<<"\t\t======================="<<endl<<endl;
    addcourse:
    cout<<"\t================================================="<<endl;
    cout<<"\tSELECT SEMESTER BETWEEN 1 TO 8 TO THE ADD COURSE:"<<endl;
    cout<<"\t================================================="<<endl;
    cout<<"\t\t";
    cin>>semcourse;
    if(semcourse==000)
    {
      studentmainscreen();
    }
    else if(semcourse>0||semcourse>=8)
    {
        switch(semcourse)
        {
        if(semcourse==000)
        {
            studentrecordmainscreen();
        }
         else
         {
        case 1:
            system("cls");
            ssemester1();
            system("pause");
            break;
        case 2:
            system("cls");
            ssemester2();
            system("pause");
            break;
        case 3:
            system("cls");
            ssemester3();
            system("pause");
            break;
        case 4:
            system("cls");
            ssemester4();
            system("pause");
            break;
        case 5:
            system("cls");
            ssemester5();
            system("pause");
            break;
        case 6:
            system("cls");
            ssemester6();
            system("pause");
            break;
        case 7:
            system("cls");
            ssemester7();
            system("pause");
            break;
        case 8:
            system("cls");
            ssemester8();
            system("pause");
            break;
        default :
              cout<<"=========================="<<endl;
              cout<<"YOU ENTER AN WRONG CHOICE!"<<endl;
              cout<<"=========================="<<endl;

        }
        }
        node *newnode=new node;
        newnode->prev=newnode;
        newnode->ssubject=subject;
        newnode->next=newnode;
        tail=newnode;

    }
        else
        {
          cout<<"=============================="<<endl;
          cout<<"PLEASE CHECK YOUR SEMESTER NO!"<<endl;
          cout<<"=============================="<<endl;
          goto addcourse;
        }

        }


//this function is used add course of semester1
void ssemester1()
{
    int s=1;
    system("Color 9F");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t\t\t    OF "<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t\t       STUDENT     "<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t======================================="<<endl;
    cout<<"\t\t\t\t\t       SEMESTER 1 COURSE TO ADD        "<<endl;
    cout<<"\t\t\t\t\t======================================="<<endl<<endl;
    for(int i=1; i<=6 ;i++)
    {
    if(i==1)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject1;
    }

    else if(i==2)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject2;
    }

    else if(i==3)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject3;
    }
    if(i==4)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject4;
    }
    else if(i==5)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject5;
    }
    else if(i==6)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject6;
    }

    }
    cout<<"=============================================\t"<<"="<<endl;
    cout<<"YOUR HAVE INSERTED ALL THE SUBECT OF SEMESTER\t"<< s <<endl;
    cout<<"=============================================\t"<<"="<<endl;
    subject=subject1+"\n\n"+subject2+"\n\n"+subject3+"\n\n"+subject4+"\n\n"+subject5+"\n\n"+subject6;
    cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
	getch();
}


//this function is used add course of semester2
void ssemester2()
{
    int s=2;
    system("Color 9F");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t\t\t    OF "<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t\t       STUDENT     "<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t======================================="<<endl;
    cout<<"\t\t\t\t\t       SEMESTER 2 COURSE TO ADD        "<<endl;
    cout<<"\t\t\t\t\t======================================="<<endl<<endl;
    for(int i=1; i<=5 ;i++)
    {
    if(i==1)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject1;
    }

    else if(i==2)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject2;
    }

    else if(i==3)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject3;
    }
    if(i==4)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject4;
    }
    else if(i==5)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject5;
    }
    }
    cout<<"=============================================\t"<<"="<<endl;
    cout<<"YOUR HAVE INSERTED ALL THE SUBECT OF SEMESTER\t"<< s <<endl;
    cout<<"=============================================\t"<<"="<<endl;
    subject=subject1+"\n\n"+subject2+"\n\n"+subject3+"\n\n"+subject4+"\n\n"+subject5;
    cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
	getch();

}


//this function is used add course of semester3
void ssemester3()
{
    int s=3;
    system("Color 9F");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t\t\t    OF "<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t\t       STUDENT     "<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t======================================="<<endl;
    cout<<"\t\t\t\t\t       SEMESTER 3 COURSE TO ADD        "<<endl;
    cout<<"\t\t\t\t\t======================================="<<endl<<endl;
    cout<<endl;
    for(int i=1; i<=5 ;i++)
    {
    if(i==1)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject1;
    }

    else if(i==2)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject2;
    }

    else if(i==3)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject3;
    }
    if(i==4)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject4;
    }
    else if(i==5)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject5;
    }
    }
    cout<<"=============================================\t"<<"="<<endl;
    cout<<"YOUR HAVE INSERTED ALL THE SUBECT OF SEMESTER\t"<< s <<endl;
    cout<<"=============================================\t"<<"="<<endl;
    subject=subject1+"\n\n"+subject2+"\n\n"+subject3+"\n\n"+subject4+"\n\n"+subject5;
    cout<<"========================================="<<endl;
    cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
	getch();

}

//this function is used add course of semester4
void ssemester4()
{
    int s=4;
    system("Color 9F");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t\t\t    OF "<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t\t       STUDENT     "<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t======================================="<<endl;
    cout<<"\t\t\t\t\t       SEMESTER 4 COURSE TO ADD        "<<endl;
    cout<<"\t\t\t\t\t======================================="<<endl<<endl;
    for(int i=1; i<=5 ;i++)
    {
    if(i==1)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject1;
    }

    else if(i==2)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject2;
    }

    else if(i==3)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject3;
    }
    if(i==4)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject4;
    }
    else if(i==5)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject5;
    }
    }
    cout<<"=============================================\t"<<"="<<endl;
    cout<<"YOUR HAVE INSERTED ALL THE SUBECT OF SEMESTER\t"<< s <<endl;
    cout<<"=============================================\t"<<"="<<endl;
    subject=subject1+"\n\n"+subject2+"\n\n"+subject3+"\n\n"+subject4+"\n\n"+subject5;
    cout<<"========================================="<<endl;
    cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
	getch();

}


//this function is used add course of semester4
void ssemester5()
{
    int s=5;
    system("Color 9F");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t\t\t    OF "<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t\t       STUDENT     "<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t======================================="<<endl;
    cout<<"\t\t\t\t\t       SEMESTER 5 COURSE TO ADD        "<<endl;
    cout<<"\t\t\t\t\t======================================="<<endl<<endl;
    for(int i=1; i<=5 ;i++)
    {
    if(i==1)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject1;
    }

    else if(i==2)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject2;
    }

    else if(i==3)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject3;
    }
    if(i==4)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject4;
    }
    else if(i==5)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject5;
    }
    }
    cout<<"=============================================\t"<<"="<<endl;
    cout<<"YOUR HAVE INSERTED ALL THE SUBECT OF SEMESTER\t"<< s <<endl;
    cout<<"=============================================\t"<<"="<<endl;
    subject=subject1+"\n\n"+subject2+"\n\n"+subject3+"\n\n"+subject4+"\n\n"+subject5;
    cout<<subject<<endl;
    cout<<"========================================="<<endl;
    cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
	getch();

}


//this function is used add course of semester8
void ssemester6()
{
    int s=6;
    system("Color 9F");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t\t\t    OF "<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t\t       STUDENT     "<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t======================================="<<endl;
    cout<<"\t\t\t\t\t       SEMESTER 6 COURSE TO ADD        "<<endl;
    cout<<"\t\t\t\t\t======================================="<<endl<<endl;
    for(int i=1; i<=6 ;i++)
    {
    if(i==1)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject1;
    }

    else if(i==2)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject2;
    }

    else if(i==3)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject3;
    }
    if(i==4)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject4;
    }
    else if(i==5)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject5;
    }
    else if(i==6)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject6;
    }

    }
    cout<<"=============================================\t"<<"="<<endl;
    cout<<"YOUR HAVE INSERTED ALL THE SUBECT OF SEMESTER\t"<< s <<endl;
    cout<<"=============================================\t"<<"="<<endl;
    subject=subject1+"\n\n"+subject2+"\n\n"+subject3+"\n\n"+subject4+"\n\n"+subject5+"\n\n"+subject6;
    cout<<subject<<endl;
    cout<<"========================================="<<endl;
    cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
	getch();

}


//this function is used to add course of semester7
void ssemester7()
{
    int s=7;
    system("Color 9F");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t\t\t    OF "<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t\t       STUDENT     "<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t======================================="<<endl;
    cout<<"\t\t\t\t\t       SEMESTER 7 COURSE TO ADD        "<<endl;
    cout<<"\t\t\t\t\t======================================="<<endl<<endl;
    for(int i=1; i<=6 ;i++)
    {
    if(i==1)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject1;
    }

    else if(i==2)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject2;
    }

    else if(i==3)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject3;
    }
    if(i==4)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject4;
    }
    else if(i==5)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject5;
    }
    else if(i==6)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject6;
    }

    }
    cout<<"=============================================\t"<<"="<<endl;
    cout<<"YOUR HAVE INSERTED ALL THE SUBECT OF SEMESTER\t"<< s <<endl;
    cout<<"=============================================\t"<<"="<<endl;
    subject=subject1+"\n\n"+subject2+"\n\n"+subject3+"\n\n"+subject4+"\n\n"+subject5+"\n\n"+subject6;
    cout<<"========================================="<<endl;
    cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
	getch();

}


//this function is used add course of semester3
void ssemester8()
{
    int s=8;
    system("Color 9F");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t\t\t    OF "<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t\t       STUDENT     "<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t======================================="<<endl;
    cout<<"\t\t\t\t\t       SEMESTER 8 COURSE TO ADD        "<<endl;
    cout<<"\t\t\t\t\t======================================="<<endl<<endl;
    for(int i=1; i<=3 ;i++)
    {
    if(i==1)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject1;
    }

    else if(i==2)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject2;
    }

    else if(i==3)
    {
    cout<<"=================\t"<<"="<<endl;
    cout<<"ENTER SUBJECT NO:\t"<< i <<endl;
    cout<<"=================\t"<<"="<<endl;
    cin>>subject3;
    }
    }
    cout<<"=============================================\t"<<"="<<endl;
    cout<<"YOUR HAVE INSERTED ALL THE SUBECT OF SEMESTER\t"<< s <<endl;
    cout<<"=============================================\t"<<"="<<endl;
    subject=subject1+"\n\n"+subject2+"\n\n"+subject3;
    cout<<"========================================="<<endl;
    cout<<"\t=============PRESS ANY TO GO TO BACK==============\t"<<endl;
	getch();

}

//this function is used to traverse the list if Forward directiom
void showallcourseforward()
{
    system("Color 3F");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t\t\t    OF "<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t\t       STUDENT     "<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
	cout<<"\t\t\t\t\t=========================================="<<endl;
    cout<<"\t\t\t\t\t     ALL COURSE OF A STUDENT OF NUMl	   "<<endl;
    cout<<"\t\t\t\t\t=========================================="<<endl<<endl;


if(tail==NULL)
{

   cout<<"=================="<<endl;
   cout<<"YOUR LIST IS EMPTY"<<endl;
   cout<<"=================="<<endl;
    cout<<"\t\t\t\t\t==========PRESS ANY TO GO TO BACK=========="<<endl;
    getch();
}
else
{
    location=tail->next;

    do
    {
        cout<<"========================================="<<endl;
        cout<<"YOUR ALL SUBJECT ARE THAT YOU HAVE ENTER:"<<endl;
        cout<<"========================================="<<endl<<endl;
        cout<<location->ssubject<<endl;
        location=location->next;
    }
    while(location!=tail->next);

}

}


//this function is used to traverse the list in backward direction
void showallcoursebackward()
{

    system("color 4F");
    cout<<endl;
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
    cout<<"\n\t\t\t\t\t========================================"<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t\t\t    OF "<<endl;
    cout<<"\t\t\t\t\t\t\t   ===="<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    cout<<"\t\t\t\t\t========================================="<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t\t       STUDENT     "<<endl;
    cout<<"\t\t\t\t\t\t  ================="<<endl;
    cout<<"\t\t\t\t\t\t==============================="<<endl;
    cout<<"\t\t\t\t\t\tALL COURSE OF A STUDENT OF NUMl"<<endl;
    cout<<"\t\t\t\t\t\t==============================="<<endl<<endl;

if(tail==NULL)
{
        cout<<"=================="<<endl;
        cout<<"YOUR LIST IS EMPTY"<<endl;
        cout<<"=================="<<endl;
        cout<<"\t\t\t\t\t==========PRESS ANY TO GO TO BACK=========="<<endl;
        getch();
}
else
{

  location=tail->next;

    do
    {
    	location=location->prev;
        cout<<"========================================="<<endl;
        cout<<"YOUR ALL SUBJECT ARE THAT YOU HAVE ENTER:"<<endl;
        cout<<"========================================="<<endl<<endl;
        cout<<location->ssubject<<endl;

    }
    while(location!=tail->next);
}

}
//this function is used to write your data in notedpad using file Handling in forward direction
void savedatainnotepadforward()
{
	    system("Color 8F");
        cout<<endl<<endl;
        cout<<"\t\t\t\t\t============================================="<<endl;
        cout<<"\t\t\t\t\t     WELCOME TO STUDENT MANAGEMENT SYSTEM    "<<endl;
        cout<<"\t\t\t\t\t============================================="<<endl;
        cout<<"\t\t\t\t\t\t\t     ===="<<endl;
        cout<<"\t\t\t\t\t\t\t      OF "<<endl;
        cout<<"\t\t\t\t\t\t\t     ===="<<endl;
        cout<<"\t\t\t\t\t============================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES     " <<endl;
        cout<<"\t\t\t\t\t============================================="<<endl;
        cout<<"\t\t\t\t\t============================================="<<endl;
        cout<<"\t\t\t\t\t SAVING DATA OF NOTEPAD IN FORWARD DIRECTION "<<endl;
        cout<<"\t\t\t\t\t============================================="<<endl<<endl;
    ofstream file;
	file.open("Student Management System Of Numl.txt",ios::app);
	file<<"\n";
	file<<"\t\t\t\t\t========================================"<<endl;
   	file<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
   	file<<"\n\t\t\t\t\t========================================"<<endl;
   	file<<"\t\t\t\t\t\t\t===="<<endl;
   	file<<"\t\t\t\t\t\t\t OF "<<endl;
    file<<"\t\t\t\t\t\t\t===="<<endl;
    file<<"\t\t\t\t\t========================================="<<endl;
    file<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES      ";
    file<<"\n\t\t\t\t\t========================================="<<endl<<endl;
    file<<"\t\t\t\t\t\t================="<<endl;
    file<<"\t\t\t\t\t\t STUDENT RECORDS "<<endl;
    file<<"\t\t\t\t\t\t================="<<endl<<endl;

if(tail==NULL)
{
cout<<"=================="<<endl;
cout<<"YOUR LIST IS EMPTY"<<endl;
cout<<"=================="<<endl<<endl;
cout<<"\t\t\t\t\t=============PRESS ANY TO GO TO BACK=========="<<endl;
getch();
}
else
{
    location=tail->next;
	 do
    {


	file<<"========"<<endl;
    file<<"ROLL NO:"<<endl;
    file<<"========"<<endl;
    file<<location->studentrollno<<endl;
	file<<"================"<<endl;
    file<<"NAME OF STUDENT:"<<endl;
	file<<"================"<<endl;
	file<<location->studentname<<endl;
    file<<"===================="<<endl;
	file<<"PHONE NO OF STUDENT:"<<endl;
    file<<"===================="<<endl;
    file<<location->contactofstudent<<endl;
	file<<"======="<<endl;
    file<<"CNIC NO:"<<endl;
    file<<"======="<<endl;
    file<<location->contactofstudent<<endl;
    file<<"============"<<endl;
    file<<"FATHER NAME:"<<endl;
    file<<"============"<<endl;
    file<<location->fathername<<endl;
    file<<"=================="<<endl;
    file<<"PHONE NO OF FATHER:"<<endl;
	file<<"=================="<<endl;
	file<<location->contactoffather<<endl;
    file<<"========="<<endl;
    file<<"EMAIL ID:"<<endl;
    file<<"========="<<endl;
    file<<location->emialid<<endl;
    file<<"==========="<<endl;
    file<<"DEPARTMENT:"<<endl;
    file<<"==========="<<endl;
    file<<location->deparment<<endl;
	file<<"========="<<endl;
    file<<"SEMESTER:"<<endl;
    file<<"========="<<endl;
    file<<location->studentsemester<<endl;
    file<<"==============="<<endl;
    file<<"SEMESTER MARKS:"<<endl;
    file<<"==============="<<endl;
    file<<location->semestermarks<<endl;
    file<<"=========="<<endl;
    file<<"PERCENTAGE:"<<endl;
    file<<"=========="<<endl;
    file<<location->studentper<<endl;
    file<<"===="<<endl;
    file<<"GPA:"<<endl;
    file<<"===="<<endl;
    file<<location->studentgpa<<endl;
    file<<"====="<<endl;
    file<<"CGPA:"<<endl;
    file<<"====="<<endl;
    file<<location->studentcgpa<<endl;
    file<<"====="<<endl;
    file<<"FEES:"<<endl;
    file<<"====="<<endl;
    file<<location->studentfees<<endl;
    file<<"======="<<endl;
    file<<"ADDRESS:"<<endl;
    file<<"======="<<endl;
    file<<location->studentaddress<<endl;
    file<<"======="<<endl;
    file<<"CAMPUS:"<<endl;
    file<<"======="<<endl;
    file<<location->studentcampus<<endl;
    file<<"============================"<<endl;
    file<<"EXTRA-CURRICULAR-ACTIVITIES:"<<endl;
    file<<"============================"<<endl;
    file<<location->sextracurricular<<endl;
    file.close();
    location=location->next;
    cout<<"============================="<<endl;
    cout<<"YOUR DATA IS SAVED IN NOTEPAD"<<endl;
    cout<<"============================="<<endl;
    }
    while(location!=tail->next);
}
}
//this function is used to write your data in notedpad using file Handling in backward direction
void savedatainnotepadbackward()
{
		system("Color 9F");
        cout<<endl<<endl;
        cout<<"\t\t\t\t\t============================================="<<endl;
        cout<<"\t\t\t\t\t     WELCOME TO STUDENT MANAGEMENT SYSTEM    "<<endl;
        cout<<"\t\t\t\t\t============================================="<<endl;
        cout<<"\t\t\t\t\t\t\t     ===="<<endl;
        cout<<"\t\t\t\t\t\t\t      OF "<<endl;
        cout<<"\t\t\t\t\t\t\t     ===="<<endl;
        cout<<"\t\t\t\t\t============================================="<<endl;
        cout<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES     "<<endl;
        cout<<"\t\t\t\t\t============================================="<<endl;
        cout<<"\t\t\t\t\t============================================="<<endl;
        cout<<"\t\t\t\t\t SAVING DATA OF NOTEPAD IN BACKWARD DIRECTION"<<endl;
        cout<<"\t\t\t\t\t============================================="<<endl<<endl;

    ofstream file;
	file.open("Student Management System Of Numl.txt",ios::app);
	file<<"\n";
	file<<"\t\t\t\t\t========================================"<<endl;
   	file<<"\t\t\t\t\t  WELCOME TO STUDENT MANAGEMENT SYSTEM ";
   	file<<"\n\t\t\t\t\t========================================"<<endl;
   	file<<"\t\t\t\t\t\t\t===="<<endl;
   	file<<"\t\t\t\t\t\t\t OF "<<endl;
    file<<"\t\t\t\t\t\t\t===="<<endl;
    file<<"\t\t\t\t\t========================================="<<endl;
    file<<"\t\t\t\t\t  NAIONAL UNIVERSITY OF MODERN LANGUAGES "<<endl;
    file<<"\t\t\t\t\t========================================="<<endl;
    file<<"\t\t\t\t\t\t================="<<endl;
    file<<"\t\t\t\t\t\t STUDENT RECORDS "<<endl;
    file<<"\t\t\t\t\t\t================="<<endl<<endl;
if(tail==NULL)
{
cout<<"=================="<<endl;
cout<<"YOUR LIST IS EMPTY"<<endl;
cout<<"=================="<<endl<<endl;
cout<<"\t\t\t\t\t=============PRESS ANY TO GO TO BACK=========="<<endl;
getch();
}
else
{
    location=tail->next;
	 do
    {
    location=location->prev;
	file<<"========"<<endl;
    file<<"ROLL NO:"<<endl;
    file<<"========"<<endl;
    file<<location->studentrollno<<endl;
	file<<"================"<<endl;
    file<<"NAME OF STUDENT:"<<endl;
	file<<"================"<<endl;
	file<<location->studentname<<endl;
    file<<"===================="<<endl;
	file<<"PHONE NO OF STUDENT:"<<endl;
    file<<"===================="<<endl;
    file<<location->contactofstudent<<endl;
	file<<"======="<<endl;
    file<<"CNIC NO:"<<endl;
    file<<"======="<<endl;
    file<<location->contactofstudent<<endl;
    file<<"============"<<endl;
    file<<"FATHER NAME:"<<endl;
    file<<"============"<<endl;
    file<<location->fathername<<endl;
    file<<"=================="<<endl;
    file<<"PHONE NO OF FATHER:"<<endl;
	file<<"=================="<<endl;
	file<<location->contactoffather<<endl;
    file<<"========="<<endl;
    file<<"EMAIL ID:"<<endl;
    file<<"========="<<endl;
    file<<location->emialid<<endl;
    file<<"==========="<<endl;
    file<<"DEPARTMENT:"<<endl;
    file<<"==========="<<endl;
    file<<location->deparment<<endl;
	file<<"========="<<endl;
    file<<"SEMESTER:"<<endl;
    file<<"========="<<endl;
    file<<location->studentsemester<<endl;
    file<<"==============="<<endl;
    file<<"SEMESTER MARKS:"<<endl;
    file<<"==============="<<endl;
    file<<location->semestermarks<<endl;
    file<<"=========="<<endl;
    file<<"PERCENTAGE:"<<endl;
    file<<"=========="<<endl;
    file<<location->studentper<<endl;
    file<<"===="<<endl;
    file<<"GPA:"<<endl;
    file<<"===="<<endl;
    file<<location->studentgpa<<endl;
    file<<"====="<<endl;
    file<<"CGPA:"<<endl;
    file<<"====="<<endl;
    file<<location->studentcgpa<<endl;
    file<<"====="<<endl;
    file<<"FEES:"<<endl;
    file<<"====="<<endl;
    file<<location->studentfees<<endl;
    file<<"======="<<endl;
    file<<"ADDRESS:"<<endl;
    file<<"======="<<endl;
    file<<location->studentaddress<<endl;
    file<<"======="<<endl;
    file<<"CAMPUS:"<<endl;
    file<<"======="<<endl;
    file<<location->studentcampus<<endl;
    file<<"============================"<<endl;
    file<<"EXTRA-CURRICULAR-ACTIVITIES:"<<endl;
    file<<"============================"<<endl;
    file<<location->sextracurricular<<endl;
    file.close();
	cout<<"============================="<<endl;
    cout<<"YOUR DATA IS SAVED IN NOTEPAD"<<endl;
    cout<<"============================="<<endl;
    }
    while(location!=tail->next);
}

}
//this function is over main function
int main()
{
 beforemainscreen();

}
