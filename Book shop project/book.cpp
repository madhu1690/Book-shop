#include <iostream>
#include <conio.h>
using namespace std;
int ascii = 178, i = 0;
char ch = ascii;
struct bookshop
{
    int id;
    float price;
    string name,a_name,p_name;
} b[25];
// Heading function
void heading()
{
    cout << "\n";
    for (int i = 1; i <= 26; i++)
        cout << ch;
    cout << " BOOK SHOP PROJECT IN C++ ";
    for (int i = 1; i <= 26; i++)
        cout<<ch;
}
// Insert New Book
void insert()
{
    system("cls");
    heading();
    cout << "\n\n ENTER BOOK ID ->";
    cin >> b[i].id;
    cout << "\n\n ENTER BOOK NAME->";
    cin >> b[i].name;
    cout << "\n\n ENTER BOOK AUTHOR NAME->";
    cin >> b[i].a_name;
    cout << "\n\n ENTER PUBLISHER NAME  ->";
    cin >> b[i].p_name;
    cout << "\n\n ENTER BOOK PRICE ->";
    cin >> b[i].price;
    i++;
    cout << "\n\n\n"
         << ch << ch << " INSERT NEW BOOK SUCCESSFULL" << ch << ch;
}
// search book
void search()
{
    system("cls");
    heading();
    if (i == 0)
    {
        cout << "\n\n"
             << ch << ch << " STRUCTURE IS EMPTY " << ch << ch;
    }
    else
    {
        int t_id, found = 0;
        cout << "\n\n ENTER BOOK ID FOR SEARCH -> ";
        cin >> t_id;
        for (int a = 0; a < i; a++)
        {
            if (t_id == b[a].id)
            {
                cout << "\n\n BOOK NAME ->" << b[a].name;
                cout << "\n\n AUTHOR NAME ->" << b[a].a_name;
                cout << "\n\n PUBLISHER NAME  ->" << b[a].p_name;
                cout << "\n\n BOOK PRICE ->" << b[a].price;
                found++;
                break;
            }
        }
        if (found == 0)
            cout << "\n\n\n"
                 << ch << ch << "BOOK ID NOT FOUND " << ch << ch;
    }
}
// update book
void update()
{
    system("cls");
    heading();
    if (i == 0)
    {
        cout << "\n\n"
             << ch << ch << " STRUCTURE IS EMPTY " << ch << ch;
    }
    else
    {
        int t_id, found = 0;
        cout << "\n\n ENTER BOOK ID FOR UPDATE -> ";
        cin >> t_id;
        for (int a = 0; a < i; a++)
        {
            if (t_id == b[a].id)
            {
                cout << "\n\n ENTER BOOK ID ->";
                cin >> b[a].id;
                cout << "\n\n ENTER BOOK NAME->";
                cin >> b[a].name;
                cout << "\n\n ENTER BOOK AUTHOR NAME->";
                cin >> b[a].a_name;
                cout << "\n\n ENTER PUBLISHER NAME  ->";
                cin >> b[a].p_name;
                cout << "\n\n ENTER BOOK PRICE ->";
                cin >> b[a].price;
                cout<<"\n\n\n"<<ch<<ch<<"UPDATE BOOK SUCCESSFULLY"<<ch<<ch;
                found++;
                break;
            }
        }
        if (found == 0)
            cout << "\n\n\n"
                 << ch << ch << "BOOK ID NOT FOUND " << ch << ch;
    }
}

// delete book
void del()
{
    system("cls");
    heading();
    if (i == 0)
    {
        cout << "\n\n"
             << ch << ch << " STRUCTURE IS EMPTY " << ch << ch;
    }
    else
    {
        int t_id, found = 0;
        cout << "\n\n ENTER BOOK ID FOR DELETE -> ";
        cin >> t_id;
        for (int a = 0; a < i; a++)
        {
            if (t_id == b[a].id)
            {
                for(int k=a;k<i;k++)
                {
                    b[k].id=b[k+1].id;
                    b[k].name=b[k+1].name;
                    b[k].a_name =b[k+1].a_name;
                    b[k].p_name=b[k+1].p_name;
                    b[k].price=b[k+1].price;
                }
                cout<<"\n\n\n"<<ch<<ch<<"DELETE  BOOK SUCCESSFULLY"<<ch<<ch;
                found++;
                i--;
                break;
            }
        }
        if (found == 0)
            cout << "\n\n\n"
                 << ch << ch << "BOOK ID NOT FOUND " << ch << ch;
    }
}
//show all books
void show()
{
    system("cls");
    heading();
    if (i == 0)
    {
        cout << "\n\n"
             << ch << ch << " STRUCTURE IS EMPTY " << ch << ch;
    }
    else
    {
        for (int a = 0; a < i; a++)
        {
                cout<<"\n\n BOOK ID ->"<<b[a].id;
                cout << "\n\n BOOK NAME ->" << b[a].name;
                cout << "\n\n AUTHOR NAME ->" << b[a].a_name;
                cout << "\n\n PUBLISHER NAME  ->" << b[a].p_name;
                cout << "\n\n BOOK PRICE ->" << b[a].price<<"\n\n";
                for(int m=1 ; m<=26;m++)
                cout<<ch;
        }


    }
}

main()
{
p:
    system("cls");
    int choice;
    heading();
    cout<<"\n\n"<<ch<<ch<<" 1.INSERT BOOK" ;
    cout<<"\n\n"<<ch<<ch<<" 2.SEARCH BOOK" ;
    cout<<"\n\n"<<ch<<ch<<" 3.UPDATE BOOK" ;
    cout<<"\n\n"<<ch<<ch<<" 4.DELETE BOOK" ;
    cout<<"\n\n"<<ch<<ch<<" 5.SHOW ALL BOOKS" ;
    cout<<"\n\n"<<ch<<ch<<" 6.EXIT" ;
    for (int i = 1; i <= 26; i++)
        cout << ch;
    cout<<"\n\n"<<ch<<ch<<" ENTER YOUR CHOICE -> ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        insert();
        break;
    case 2:
        search();
        break;
    case 3:
    update();
        break;
    case 4:
    del();
        break;
    case 5:
    show();
        break;
    case 6:
        exit(0);
    default:
        cout << "\n\n"
             << ch << ch << " PLEASE SELECT CORRECT OPTION" << ch << ch;
    }
    getch();
    goto p;
}