#include<iostream>
using namespace std;
int main()
{ 
  int trans, pay, qtyTickets, qtypFlavor, qtymDrink, cMovie, pFlavor, mDrink, mTime;
  int totTickets = 0, totmDrink = 0, totpFlavor = 0, totBill = 0, change=0;
  char size;
  
 cout<<"*****************************************************\n";
 cout<<"*     TECHNOLOGICAL INSTITUTE OF THE PHILIPPINES    *\n";
 cout<<"*                    Manila                         *\n";
 cout<<"*          ITE001 - Computer Programming 1          *\n";
 cout<<"*            1st Semester S.Y. 2020-2021            *\n";
 cout<<"*                 Final Project                     *\n";
 cout<<"*                                                   *\n";
 cout<<"*  Title: An Online Cinema Reservation System       *\n";
 cout<<"*  Members:  Latina, Hannah Lyn A. / BSIT           *\n";
 cout<<"*            Orphiano, Gabriel J. / BSIT            *\n";
 cout<<"*               Puri, Ricardo M. / BSIT             *\n";
 cout<<"*         Recana, Nicole John Alden R. / BSIT       *\n";
 cout<<"*                                                   *\n";
 cout<<"*  Instructor: Ms. Jasmin A. Caliwag                *\n";
 cout<<"*****************************************************\n";
 
 
 do{
  cout<<"\n      An Online Cinema Reservation System";
  cout<<"\n        1. Movies";
  cout<<"\n        2. Popcorn";
  cout<<"\n        3. Drinks";
  cout<<"\n        4. Pay";
 	cout<<"\n     Please select a number [1-4]: ";
	cin>>trans;
    switch (trans)
        case 1: {
            do{ 
                cout<<"\n                   Movies";
                                        //Menu of Movies
                cout<<"\n       1. Spiderman: No Way Home:          P350";
                cout<<"\n       2. John Wick 4:                     P365";
                cout<<"\n       3. Aquaman and the Lost Kingdom:    P295 ";
                cout<<"\n       4. Back ";
                        
                cout<<"\n       Select a movie [1-3]: ";
                cin>>cMovie;
                    switch(cMovie) {
                                case 1: 
                                    cout<<"\n       How many tickets? ";
                                    cin>>qtyTickets; 
                                    totTickets = qtyTickets * 350;
                                    cout<<"         Total price of tickets are: " <<totTickets<<endl; 
                                       
                                        cout<<"\n            Time Schedule " <<endl;
                                        cout<<"      1. 9:30 A.M. - 11:30 A.M. " <<endl;
                                        cout<<"      2. 12:00 A.M. - 2:00 P.M. " <<endl;
                                        cout<<"      3. 2:30 P.M. - 4:30 P.M. " <<endl;
                                        
                                        cout<<"\n      Please select a time schedule [1-3]: ";
                                        cin>>mTime;
                                            switch(mTime){
                                                case 1:
                                                    cout<<"      The movie is scheduled 9:30 A.M. - 11:30 A.M.\n"; break;
                                                case 2: 
                                                    cout<<"      The movie is scheduled 12:00 A.M. - 2:00 P.M.\n"; break;
                                                case 3:
                                                    cout<<"      The movie is scheduled 2:30 P.M. - 4:30 P.M.\n"; break;
                                                         } break;
                                        
                                case 2: 
                                    cout<<"\n       How many tickets? ";
                                    cin>>qtyTickets; 
                                    totTickets = qtyTickets * 365;
                                    cout<<"     Total price of tickets are: " <<totTickets<<endl; 
                                    
                                        cout<<"\n           Time Schedule " <<endl;
                                        cout<<"      1. 9:30 A.M. - 11:30 A.M. " <<endl;
                                        cout<<"      2. 12:00 A.M. - 2:00 P.M. " <<endl;
                                        cout<<"      3. 2:30 P.M. - 4:30 P.M. " <<endl;
                                        
                                        cout<<"\n      Please select a time schedule [1-3]: ";
                                        cin>>mTime;
                                            switch(mTime){
                                                case 1:
                                                    cout<<"      The movie is scheduled 9:30 A.M. - 11:30 A.M.\n"; break;
                                                case 2: 
                                                    cout<<"      The movie is scheduled 12:00 A.M. - 2:00 P.M.\n"; break;
                                                case 3:
                                                    cout<<"      The movie is scheduled 2:30 P.M. - 4:30 P.M.\n"; break;
                                                         } break;
                                    
                                case 3: 
                                    cout<<"\n       How many tickets?  ";
                                    cin>>qtyTickets; 
                                    totTickets = qtyTickets * 295;
                                    cout<<"         Total price of tickets are: " <<totTickets<<endl;  
                                    
                                        cout<<"\n           Time Schedule " <<endl;
                                        cout<<"      1. 9:30 A.M. - 11:30 A.M. " <<endl;
                                        cout<<"      2. 12:00 A.M. - 2:00 P.M. " <<endl;
                                        cout<<"      3. 2:30 P.M. - 4:30 P.M. " <<endl;
                                        
                                        cout<<"\n      Please select a time schedule [1-3]: ";
                                        cin>>mTime;
                                            switch(mTime){
                                                case 1:
                                                    cout<<"      The movie is scheduled 9:30 A.M. - 11:30 A.M.\n"; break;
                                                case 2: 
                                                    cout<<"      The movie is scheduled 12:00 A.M. - 2:00 P.M.\n"; break;
                                                case 3:
                                                    cout<<"      The movie is scheduled 2:30 P.M. - 4:30 P.M.\n"; break;
                                                         } break;
                                    
                            }//End of switch movies
                    }   //End of do while movies 
                        while (cMovie <= 3 ); 
                    break;
        case 2: 
            do {                            //Menu of popcorns
                cout<<"\n|------------------------------------------------------------|";
                cout<<"\n|                       Select Popcorn                       |";
                cout<<"\n|------------------------------------------------------------|"; 
                cout<<"\n|        Flavor         |   Small   |   Medium  |   Large    |";
                cout<<"\n|------------------------------------------------------------|";
                cout<<"\n| 1. Caramel corn       |    P40    |    P60    |    P80     |";
                cout<<"\n| 2. Chocolate flavor   |    P35    |    P55    |    P75     |";
                cout<<"\n| 3. Strawberry flavor  |    P45    |    P65    |    P85     |";
                cout<<"\n| 4. Back               |    ---    |    ---    |    ---     |";
                cout<<"\n|-------------------------------------------------------------";
                        
                cout<<"\n               Select a popcorn flavor [1-3]: ";
                cin>>pFlavor;
                    switch(pFlavor) {
                                case 1: 
                                    cout<<"\n        Please select size [S,M,L]: ";
                                    cin>>size;
                                    cout<<"\n        Type numbers of quantity: ";
                                    cin>>qtypFlavor;
                                    
                                    if (size=='S' || size=='s'){
                                    totpFlavor = (qtypFlavor * 40);
                                    cout<<"\tPrice for selected flavor and size is "<<totpFlavor<<endl;
                                }   else if (size=='M' || size=='m'){
                                    totpFlavor = (qtypFlavor * 60);
                                    cout<<"\tPrice for selected flavor and size is "<<totpFlavor<<endl;
                                }   else if (size=='L' || size=='l'){
                                    totpFlavor = (qtypFlavor * 80);
                                    cout<<"\tPrice for selected flavor and size is "<<totpFlavor<<endl;
                                }    
                                    break;
                                
                                case 2: 
                                    cout<<"\n        Please select size [S,M,L]: ";
                                    cin>>size;
                                    cout<<"\n        Type numbers of quantity: ";
                                    cin>>qtypFlavor;
                                    
                                    if (size=='S' || size=='s'){
                                    totpFlavor = (qtypFlavor * 35);
                                    cout<<"\tPrice for selected flavor and size is "<<totpFlavor<<endl;
                                }   else if (size=='M' || size=='m'){
                                    totpFlavor = (qtypFlavor * 55);
                                    cout<<"\tPrice for selected flavor and size is "<<totpFlavor<<endl;
                                }   else if (size=='L' || size=='l'){
                                    totpFlavor = (qtypFlavor * 75);
                                    cout<<"\tPrice for selected flavor and size is "<<totpFlavor<<endl;
                                }    
                                    break;    
                                
                                case 3: 
                                    cout<<"\n        Please select size [S,M,L]: ";
                                    cin>>size;
                                    cout<<"\n        Type numbers of quantity: ";
                                    cin>>qtypFlavor;
                                    
                                    if (size=='S' || size=='s'){
                                    totpFlavor = (qtypFlavor * 45);
                                    cout<<"\tPrice for selected flavor and size is "<<totpFlavor<<endl;
                                }   else if (size=='M' || size=='m'){
                                    totpFlavor = (qtypFlavor * 65);
                                    cout<<"\tPrice for selected flavor and size is "<<totpFlavor<<endl;
                                }   else if (size=='L' || size=='l'){
                                    totpFlavor = (qtypFlavor * 85);
                                    cout<<"\tPrice for selected flavor and size is "<<totpFlavor<<endl;
                                }    
                                    break;   
                                    
                                case 4:
                                    break;
                            }//End of switch popcorn   
                    }   //End of do while popcorn
                    while (pFlavor <= 3);
                                break; 
                                    
        case 3:                            
            do {                                //Menu of drinks
                cout<<"\n|------------------------------------------------------------|";
                cout<<"\n|                       Select Drinks                        |";
                cout<<"\n|------------------------------------------------------------|"; 
                cout<<"\n|         Type          |   Small   |   Medium  |   Large    |";
                cout<<"\n|------------------------------------------------------------|";
                cout<<"\n| 1. Lemon Juice        |    P50    |    P70    |    P90     |";
                cout<<"\n| 2. Coca-cola          |    P25    |    P45    |    P65     |";
                cout<<"\n| 3. Water              |    P15    |    P35    |    P55     |";
                cout<<"\n| 4. Back               |    ---    |    ---    |    ---     |";
                cout<<"\n|-------------------------------------------------------------";
                        
                cout<<"\n                     Select a drink [1-3]: ";                        
                cin>>mDrink;
                    switch(mDrink) {
                                case 1: 
                                    cout<<"\n        Please select size [S,M,L]: ";
                                    cin>>size;
                                    cout<<"\n        Type numbers of quantity: ";
                                    cin>>qtymDrink;
                                    
                                    if (size=='S' || size=='s'){
                                    totmDrink = (qtymDrink * 50);
                                    cout<<"\tPrice for selected flavor and size is "<<totmDrink<<endl;
                                }   else if (size=='M' || size=='m'){
                                    totmDrink = (qtymDrink * 70);
                                    cout<<"\tPrice for selected flavor and size is "<<totmDrink<<endl;
                                }   else if (size=='L' || size=='l'){
                                    totmDrink = (qtymDrink * 90);
                                    cout<<"\tPrice for selected flavor and size is "<<totmDrink<<endl;
                                }    
                                    break;
                                
                                case 2: 
                                    cout<<"\n        Please select size [S,M,L]: ";
                                    cin>>size;
                                    cout<<"\n        Type numbers of quantity: ";
                                    cin>>qtymDrink;
                                    
                                    if (size=='S' || size=='s'){
                                    totmDrink = (qtymDrink * 25);
                                    cout<<"\tPrice for selected flavor and size is "<<totmDrink<<endl;
                                }   else if (size=='M' || size=='m'){
                                    totmDrink = (qtymDrink * 45);
                                    cout<<"\tPrice for selected flavor and size is "<<totmDrink<<endl;
                                }   else if (size=='L' || size=='l'){
                                    totmDrink = (qtymDrink * 65);
                                    cout<<"\tPrice for selected flavor and size is "<<totmDrink<<endl;
                                }    
                                    break;    
                                
                                case 3: 
                                    cout<<"\n        Please select size [S,M,L]: ";
                                    cin>>size;
                                    cout<<"\n        Type numbers of quantity: ";
                                    cin>>qtymDrink;
                                    
                                    if (size=='S' || size=='s'){
                                    totmDrink = (qtymDrink * 15);
                                    cout<<"\tPrice for selected flavor and size is "<<totmDrink<<endl;
                                }   else if (size=='M' || size=='m'){
                                    totmDrink = (qtymDrink * 35);
                                    cout<<"\tPrice for selected flavor and size is "<<totmDrink<<endl;
                                }   else if (size=='L' || size=='l'){
                                    totmDrink = (qtymDrink * 55);
                                    cout<<"\tPrice for selected flavor and size is "<<totmDrink<<endl;
                                }    
                                    break;    
                                case 4:
                                    break;
                            }//End of switch drinks  
                    }   //End of do while drinks
                    while (mDrink <= 3);
                                break;                     
        default: 
            cout<<"\nThank you please come again!\n\n"; break;
            
            
        }//end of switch trans                       
    }//end of do while movie transaction system                                
     while (trans <= 3);               
     
system("cls"); //Clear screen

//Formula for Total Bill
    totBill = totTickets + totpFlavor + totmDrink;
    
//Summary 
cout<<"   ------------------------------------------------ \n";
cout<<"                  Summary of Purchases              \n";
cout<<"   -------------------------|---------------------- \n";
cout<<"         Movie Ticket       |     P"<< totTickets<< endl;
cout<<"          Popcorn           |     P"<< totpFlavor<< endl;
cout<<"           Drinks           |     P"<< totmDrink << endl;
cout<<"   -------------------------|---------------------- \n";
cout<<"        Total amount        |     P"<< totBill <<   endl;
cout<<"   -------------------------|---------------------- \n";
cout<<"        Enter Payment       |     P";
cin>>pay;

change = pay - totBill; //Formula for change Note: Change should not be NEGATIVE used if else condition
cout<<"         Your Change        |     P"<<change;
cout<<"\n  ------------------------------------------------\n";

}
