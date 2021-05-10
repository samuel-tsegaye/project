#include <iostream>
#include <fstream>
using namespace std;


int n, x,i; 
int total;
struct Mark
{
    int quiz_test;
    int mid_exam;
    int final_exam;
    int total;
};

struct Course
{
    char course_title[30];
    int course_code;
    int credit_hour;
    Mark mark;
};

struct Student
{
    char Name[30];
    int Age;
    int id;
    char sex;
    Course received_course;
};


    struct Student z;



    int main()
    {
        int cho;
    

    do

{
    

    cout<<"\n          +++++    Student Mark List menu   +++++"<<endl;     
    cout<<endl;
    cout<<"                ____________________________\n";
    cout<<"               |                            |\n";    
    cout<<"               |   1->  Add New Student     |"<<endl;
    cout<<"               |   2->  Student Name list   |"<<endl;
    cout<<"               |   3->  Student Mark list   |"<<endl;
    cout<<"               |   4->  Quit                |"<<endl;
    cout<<"               |____________________________|\n";
cout<<"\nEnter Your Choose No :- ";
    cin>>cho;

    //for linux os
    system("clear");
    //for windows op please delete the comment
    // system("cls");



        //to creat file and to write information on the file
        ofstream file; 
        file.open("namelist.txt", std::ios::app);
        ofstream file2; 
        file2.open("marklist.txt",std::ios::app);

        //to read file
        ifstream file3; 
        file3.open("namelist.txt", ios::in);
        ifstream file4; 
        file4.open("marklist.txt", ios::in);

        

switch(cho)
{
    case 1:

  
    cout<<"\nHow Many Number of Students You Want? ";
    cin>>n;

    // to store the information

   for(int i=0;i<n;i++)
    {
 
    cout<<"\n     "<<i+1 << " Student Info";
    cout<<"\n -----------------------------------------\n";
    cout<<"\nEnter Student Name      :   ";
    cin>>z.Name;

    cout<< "\nEnter Student Id        :   ";
    cin>>z.id;

    cout<<"\nEnter Student Age       :   ";
    cin>>z.Age;
    cout<<"\nPlease enter Your Sex (M or F)";
    cout<< "\nEnter Student SEX      :   ";
    cin>>z.sex;


//write on file
 for(int l=0;l<1;l++)
    {
    file<<"\n------------------------------------------------------------";
     
     file << "\n"<<"Name  :  " << z.Name <<endl<<"ID  :  " << z.id <<endl<<"Age  :  "<< z.Age <<endl<<"Sex  :  " <<z.sex;
    }

    //used to clear the terminal screen.
    //for linux os
    system("clear");
    //for windows op please delete the comment
    // system("cls");


    cout<<"\n How Many Course Do You Take  :  ";
    cin>>x;
     cout<<"\n -----------------------------------------\n";
     //used to clear the terminal screen.
    //for linux os
    system("clear");
    //for windows op please delete the comment
    // system("cls");

            for(int j=0;j<x;j++)
                {

            cout<<"\n"<<j+1 << " Course info"<<endl;

            cout<<"\nEnter Course course_title : ";
            cin>>z.received_course.course_title;

            cout<< "\nEnter Course course_code : ";
            cin>>z.received_course.course_code;

            cout<< "\nEnter Course credit_hour : ";
            cin>>z.received_course.credit_hour;

   //for linux os
    system("clear");
    //for windows op please delete the comment
    // system("cls");

                  
                  for(int k=0;k<1;k++)
                    {
                    cout<<"\n Enter the result of "<<z.received_course.course_title<<" Course"<<endl;

                    cout<<"\nEnter quiz_test result : ";
                    cin>>z.received_course.mark.quiz_test;

                    cout<< "\nEnter Course mid_exam : ";
                    cin>>z.received_course.mark.mid_exam;

                    cout<< "\nEnter Course final_exam : ";
                    cin>>z.received_course.mark.final_exam;
                    
                    
                    total=z.received_course.mark.quiz_test+z.received_course.mark.mid_exam+z.received_course.mark.final_exam;

                for(int i=0;i<1;i++)
                    {
                    file2<<"\n------------------------------------------------------------\n\n";
                     file2<<z.Name<<endl;
                     file2<< "\n"<<"Course Title  :  " << z.received_course.course_title<<endl;
                     file2<<"Quiz       :  "<<z.received_course.mark.quiz_test<<" /20%" <<endl;
                     file2<<"Mid Exam   :  "<<z.received_course.mark.mid_exam<<" /30%" <<endl;
                     file2<<"Final Exam :  "<<z.received_course.mark.final_exam<<" /50%" <<endl;
                     file2<<"Total      :  "<<total<<" /100%" <<endl;
                    }

    //for linux os
    system("clear");
    //for windows op please delete the comment
    // system("cls");
                    }
                    
                    }
            
            } 

    file.close();
    
        break;

    case 2:
    
    {

        

        
            cout << "Reading from the file" << endl; 
            string str;

            while(!file3.eof())
            { 
                getline(file3,str);//read the file and display it line by line. 
                cout << str<< endl; 
            }
      
}
    break;

    case 3:
        {
            cout << "Reading from the file" << endl; 
            string str;

            while(!file4.eof())
            { 
                getline(file4,str);//read the file and display it line by line. 
                cout << str<< endl; 
            }
       
}
    break;

    default:
    //for linux os
    system("clear");
    //for windows op please delete the comment
    // system("cls");
    break;

}

}
while(cho !=4);

    return 0;

}

