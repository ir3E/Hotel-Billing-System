#include <iostream>
using namespace std;

char l_arrow = 16,r_arrow = 17;
int totalBill;
int billAmount=0;
char selectAgain;
int quant;
int choice;
//quantity
int Qrooms=0, Qtowel=0, Qextrabed=0, Qshampoo=0, Qsoap=0, Qpasta=0, Qburger=0, Qnoodle=0, Qshake=0, Qchicken=0;
//food items sold
int Srooms=0, Stowel=0, Sextrabed=0, Sshampoo=0, Ssoap=0, Spasta=0, Sburger=0, Snoodle=0, Sshake=0, Schicken=0;
//total price of items
int Total_rooms=0, Total_towel=0, Total_extrabed=0, Total_shampoo=0, Total_soap=0, Total_pasta=0, Total_burger=0, Total_noodle=0, Total_shake=0, Total_chicken=0;

struct owner{
    char name[20];
    int id_no;
};

void display(struct owner me);

void pointer(int *ptr){
    *ptr = 50;
}

void inventory(){
    cout<<"\n\t Quantity of items we have for FOOD"<<endl;
    cout<<"\t Quantity of pasta: ";
    cin>>Qpasta;
    cout<<"\t Quantity of burger: ";
    cin>>Qburger;
    cout<<"\t Quantity of noodles: ";
    cin>>Qnoodle;
    cout<<"\t Quantity of shake: ";
    cin>>Qshake;
    cout<<"\t Quantity of chicken-roll: ";
    cin>>Qchicken;

    cout<<"\n\t Quantity of items we have for AMENITIES"<<endl;
    cout<<"\t Rooms available: ";
    cin>>Qrooms;
    cout<<"\t Towel available: ";
    cin>>Qtowel;
    cout<<"\t Extra Bed available: ";
    cin>>Qextrabed;
    cout<<"\t Shampoos available: ";
    cin>>Qshampoo;
    cout<<"\t Soaps available: ";
    cin>>Qsoap;
}
void amenities(){
    int value;
    if(value<1 || value>5){
    item:
    cout<<"\n\t\t Please select from the menu options";
    cout<<"\n\t1) Room: Php 1200"<<endl;
    cout<<"\t2) Towel: Php 100"<<endl;
    cout<<"\t3) Extra Bed: Php 1600"<<endl;
    cout<<"\t4) Shampoo: Php 140"<<endl;
    cout<<"\t5) Soap: Php 140"<<endl;
    cout<<"\t>> ";
    cin>>value;

    if(value==1){
    item1:
    cout<<"\n\tEnter the number of rooms you want: ";\
    billAmount=billAmount+1200;
    cin>>quant;

        if(Qrooms-Srooms >=quant){
            Srooms=Srooms+quant;
            Total_rooms=Total_rooms+quant*1200;
            cout<<"\n\t\t"<<quant<<" room/rooms have been alloted to you!"<<endl;
            cout<<"\n\tDo you want to add more items, y or n?";
            cin>>selectAgain;
                if(selectAgain=='y'){
                    goto item1;
                }
                else{
                    cout<<"\n\tYour total Bill Amount is Php "<<billAmount;
                    cout<<"\n\tOnly "<<Qrooms-Srooms<<" Rooms remaining in hotel ";
                }
        }
    }
    else if(value==2){
    item2:
        cout<<"\n\tEnter the number of towels you want: ";
        billAmount=billAmount+100;
        cin>>quant;
            if(Qtowel-Stowel >=quant){
                Stowel=Stowel+quant;
                Total_towel=Total_towel+quant*100;
                cout<<"\n\t\t"<<quant<<" towel/towels have been alloted to you!"<<endl;
                cout<<"\n\tDo you want to add more items, y or n?";
                cin>>selectAgain;
                if(selectAgain=='y'){
                    goto item2;
                }
                else{
                    cout<<"\n\tYour total Bill Amount is Php "<<billAmount;
                    cout<<"\n\tOnly "<<Qtowel-Stowel<<" Towels remaining in hotel ";
                }
            }
    }
    else if(value==3){
        item3:
            cout<<"\n\tEnter the number of extra bed you want: ";
            billAmount=billAmount+1600;
            cin>>quant;

            if(Qextrabed-Sextrabed >=quant){
                Sextrabed=Sextrabed+quant;
                Total_extrabed=Total_extrabed+quant*1600;
                cout<<"\n\t\t"<<quant<<" extrabed have been alloted to you!"<<endl;
                cout<<"\n\tDo you want to add more items, y or n?";
                cin>>selectAgain;
                if(selectAgain=='y'){
                    goto item3;
                }
                else{
                    cout<<"\n\tYour total Bill Amount is Php "<<billAmount;
                    cout<<"\n\tOnly "<<Qextrabed-Sextrabed<<" Extra Bed remaining in hotel ";
                }
            }
    }
    else if(value==4){
    item4:
            cout<<"\n\tEnter the number of shampoo you want: ";
            billAmount=billAmount+140;
            cin>>quant;

            if(Qshampoo-Sshampoo >=quant){
                Sshampoo=Sshampoo+quant;
                Total_shampoo=Total_shampoo+quant*140;
                cout<<"\n\t\t"<<quant<<" shampoo/shampoos have been alloted to you!"<<endl;
                cout<<"\n\tDo you want to add more items, y or n?";
                cin>>selectAgain;
                if(selectAgain=='y'){
                    goto item4;
                }
                else{
                    cout<<"\n\tYour total Bill Amount is Php "<<billAmount;
                    cout<<"\n\tOnly "<<Qshampoo-Sshampoo<<" Shampoos remaining in hotel ";
                }
            }
    }
    else if(value==5){
    item5:
            cout<<"\n\tEnter the number of soap you want: ";
            billAmount=billAmount+140;
            cin>>quant;

            if(Qsoap-Ssoap >=quant){
                Ssoap=Ssoap+quant;
                Total_soap=Total_soap+quant*140;
                cout<<"\n\t\t"<<quant<<" soap/soaps have been alloted to you!"<<endl;
                cout<<"\n\tDo you want to add more items, y or n?";
                cin>>selectAgain;
                if(selectAgain=='y'){
                    goto item5;
                }
                else{
                    cout<<"\n\tYour total Bill Amount is Php "<<billAmount;
                    cout<<"\n\tOnly "<<Qsoap-Ssoap<<" Soaps remaining in hotel ";
                }
            }
    }
}
else{
                cout<<"\n\tYou have enter wrong value, please select 1-5!"<<endl;
                goto item5;
}
}
void food(){
    int value;
    if(value<1 || value>5){
    item:
    cout<<"\n\t\t\t Please select from the menu options";
    cout<<"\n\t1) Pasta: Php 250"<<endl;
    cout<<"\t2) Burger: Php 120"<<endl;
    cout<<"\t3) Noodles: Php 140"<<endl;
    cout<<"\t4) Shake: Php 120"<<endl;
    cout<<"\t5) Chicken-roll: Php 120"<<endl;
    cout<<"\t>> ";
    cin>>value;

    if(value==1){
    item1:
    cout<<"\n\tEnter Pasta Quantity: ";
    billAmount=billAmount+250;
    cin>>quant;
        if(Qpasta-Spasta >=quant){
            Spasta=Spasta+quant;
            Total_pasta=Total_pasta+quant*250;
            cout<<"\n\t\t"<<quant<<" pasta is the order!"<<endl;
            cout<<"\n\tDo you want to add more items, y or n? ";
            cin>>selectAgain;
                if(selectAgain=='y'){
                    goto item1;
                }
                else{
                    cout<<"\n\tYour total Bill Amount is Php "<<billAmount;
                    cout<<"\n\tOnly "<<Qpasta-Spasta<<" Pasta remaining in hotel ";
                }
        }
    }  
    else if(value==2){
    item2:
        cout<<"\n\tEnter Burger Quantity: ";
        billAmount=billAmount+120;
        cin>>quant;
            if(Qburger-Sburger >=quant){
                Sburger=Sburger+quant;
                Total_burger=Total_burger+quant*120;
                cout<<"\n\t\t"<<quant<<" burger is the order!"<<endl;
                cout<<"\n\tDo you want to add more items, y or n?";
                cin>>selectAgain;
                if(selectAgain=='y'){
                    goto item2;
                }
                else{
                    cout<<"\n\tYour total Bill Amount is Php "<<billAmount;
                    cout<<"\n\tOnly "<<Qburger-Sburger<<" Burger remaining in hotel ";
                }
            }
    }
    else if(value==3){
        item3:
            cout<<"\n\tEnter Noodle Quantity: ";
            billAmount=billAmount+140;
            cin>>quant;

            if(Qnoodle-Snoodle >=quant){
                Snoodle=Snoodle+quant;
                Total_noodle=Total_noodle+quant*140;
                cout<<"\n\t\t"<<quant<<" noodles is the order!"<<endl;
                cout<<"\n\tDo you want to add more items, y or n?";
                cin>>selectAgain;
                if(selectAgain=='y'){
                    goto item3;
                }
                else{
                    cout<<"\n\tYour total Bill Amount is Php "<<billAmount;
                    cout<<"\n\tOnly "<<Qnoodle-Snoodle<<" Rooms remaining in hotel ";
                }
            }
    }
    else if(value==4){
    item4:
            cout<<"\n\tEnter Shakes Quantity: ";
            billAmount=billAmount+120;
            cin>>quant;

            if(Qshake-Sshake >=quant){
                Sshake=Sshake+quant;
                Total_shake=Total_shake+quant*120;
                cout<<"\n\t\t"<<quant<<" shakes is the order!"<<endl;
                cout<<"\n\tDo you want to add more items, y or n?";
                cin>>selectAgain;
                if(selectAgain=='y'){
                    goto item4;
                }
                else{
                    cout<<"\n\tYour total Bill Amount is Php "<<billAmount;
                    cout<<"\n\tOnly "<<Qshake-Sshake<<" Shakes remaining in hotel ";
                }
            }
    }
    else if(value==5){
    item5:
            cout<<"\n\tEnter Chicken-roll Quantity: ";
            billAmount=billAmount+120;
            cin>>quant;

            if(Qchicken-Schicken >=quant){
                Schicken=Schicken+quant;
                Total_chicken=Total_chicken+quant*150;
                cout<<"\n\t\t"<<quant<<" chicken-roll is the order!"<<endl;
                cout<<"\n\tDo you want to add more items, y or n?";
                cin>>selectAgain;
                if(selectAgain=='y'){
                    goto item5;
                }
                else{
                    cout<<"\n\tYour total Bill Amount is Php "<<billAmount;
                    cout<<"\n\tOnly "<<Qchicken-Schicken<<" Chicken-roll remaining in hotel ";
                }
            }
    }
}
else{
                cout<<"\n\tYou have enter wrong value, please select 1-5!"<<endl;
                goto item5;
}
}
void salesAndCollection(){
    cout<<"\n\t\tDetails of sales and collection for FOOD";
    cout<<"\n\t Number of Pastas we had: "<<Qpasta<<endl;
    cout<<"\t Number of Pastas we sold: "<<Spasta<<endl;
    cout<<"\t Remaining Pastas: "<<Qpasta-Spasta<<endl;
    cout<<"\t Total Pasta collection for the day: "<<Total_pasta<<endl;

    cout<<"\n\t Number of burger we had: "<<Qburger<<endl;
    cout<<"\t Number of burgers we sold: "<<Sburger<<endl;
    cout<<"\t Remaining burgers: "<<Qburger-Sburger<<endl;
    cout<<"\t Total burger collection for the day: "<<Total_burger<<endl;

    cout<<"\n\t Number of noodles we had: "<<Qnoodle<<endl;
    cout<<"\t Number of noodles we sold: "<<Snoodle<<endl;
    cout<<"\t Remaining noodles: "<<Qnoodle-Snoodle<<endl;
    cout<<"\t Total noodle collection for the day: "<<Total_noodle<<endl;

    cout<<"\n\t Number of shakes we had: "<<Qshake<<endl;
    cout<<"\t Number of shakes we sold: "<<Sshake<<endl;
    cout<<"\t Remaining shakes: "<<Qshake-Sshake<<endl;
    cout<<"\t Total shakes collection for the day: "<<Total_shake<<endl;
            
    cout<<"\n\t Number of Chicken-roll we had: "<<Qchicken<<endl;
    cout<<"\t Number of Chicken-roll we sold: "<<Schicken<<endl;
    cout<<"\t Remaining Chicken-roll: "<<Qchicken-Schicken<<endl;
    cout<<"\t Total Chicken-roll collection for the day: "<<Total_chicken<<endl;

    cout<<"\n\t\tDetails of sales and collection for AMENITIES";
    cout<<"\n\t Number of rooms we had: "<<Qrooms<<endl;
    cout<<"\t Number of rooms we gave for rent: "<<Srooms<<endl;
    cout<<"\t Remaining rooms: "<<Qrooms-Srooms<<endl;
    cout<<"\t Total rooms collection for the day: "<<Total_rooms<<endl;

    cout<<"\n\t Number of towels we had: "<<Qtowel<<endl;
    cout<<"\t Number of towels we gave for rent: "<<Stowel<<endl;
    cout<<"\t Remaining towels: "<<Qtowel-Stowel<<endl;
    cout<<"\t Total towels collection for the day: "<<Total_towel<<endl;

    cout<<"\n\t Number of extra bed we had: "<<Qextrabed<<endl;
    cout<<"\t Number of extra bed we gave for rent: "<<Sextrabed<<endl;
    cout<<"\t Remaining extra bed: "<<Qextrabed-Sextrabed<<endl;
    cout<<"\t Total extra bed collection for the day: "<<Total_extrabed<<endl;

    cout<<"\n\t Number of shampoos we had: "<<Qshampoo<<endl;
    cout<<"\t Number of shampoos we gave for rent: "<<Sshampoo<<endl;
    cout<<"\t Remaining shampoos: "<<Qshampoo-Sshampoo<<endl;
    cout<<"\t Total shampoos collection for the day: "<<Total_shampoo<<endl;

    cout<<"\n\t Number of soaps we had: "<<Qsoap<<endl;
    cout<<"\t Number of soaps we gave for rent: "<<Ssoap<<endl;
    cout<<"\t Remaining soaps: "<<Qsoap-Ssoap<<endl;
    cout<<"\t Total soaps collection for the day: "<<Total_soap<<endl;
}
void menu(){
    string option[] = {"Inventory", "Food", "Amenities", "Sales and Collection", "Exit"};
	while(true){
		    m:
			cout<<"\n\t____________________________________________________________\n"<<endl;
			cout<<"\t\t\t    "<<l_arrow<<" HOTEL BILLING SYSTEM "<<r_arrow<<endl;
			cout<<"\t____________________________________________________________\n"<<endl;
			for(int i=1; i<=5; i++){
				cout<<"\t\t\t["<<i<<"] "<<option[i-1]<<endl;
			}
			cout<<"\n\t____________________________________________________________\n"<<endl;
			cout<<"\t\t\tChoose an Option: ";
			cin>>choice;

    switch(choice){
        case 1:
            inventory();
            goto m;
            break;
        case 2:
            food();
            goto m;
            break;
        case 3:
            amenities();
            goto m;
            break;
        case 4:
            salesAndCollection();
            goto m;
            break;
        case 5:
            exit(0);
        default:
            cout<<"\n\tPlease select the numbers mention above!";
    }
    goto m;
}
}
void password(){
    string password;
    int ch;
        again:
        cout<<"Enter password: ";
        cin>>password;
        if(password=="1234"){
            cout<<"Correct password!"<<endl;
        }
        else{
            cout<<"Incorrect password!"<<endl;
            goto again;
        }
}

int main(){
    struct owner me;
    cout<<"\nLogin..."<<endl;
    cout<<"Enter owner's name: ";
    cin>>me.name;
    cout<<"Enter ID number: ";
    cin>>me.id_no;
    password();

    int num1=4;
    pointer(&num1);
    cout<<num1<<endl;

    menu();
}
