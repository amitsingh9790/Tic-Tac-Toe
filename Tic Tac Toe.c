#include<stdio.h>
#include<conio.h>
void display();
int tic[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int main()
{
    menu();
}
void display()
{
    printf("\n\n\n#####################################Tic Tac Toe#####################################");
    printf("\nPlayer 1 X\n");
    printf("Player 2 O\n");
    printf(" ");
   {
    int i, j;
    printf("-------------\n");
    for (i = 0; i < 3; i++)
    {
        printf("|");
        for (j = 0; j < 3; j++)
        {
            if (tic[i][j] != 'O')
            {
                if (tic[i][j] != 'X')
                    printf("%2d | ", tic[i][j]);
                else
                    printf(" X | ");
            }

            else
                printf(" O | ");
        }
        printf("\n");
    }

    printf("--------------\n");
}
}
void menu()
{
    int x;
    printf("Enter your choice\n1. Want to play with Smart Computer\n2. Want to play with Evil Computer\n3. Want to play with player\n4. Exit\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            Smart_Com(tic);
            break;
        case 2:
           // Evil_Com(tic);
            break;
        case 3:
             Player(tic);
            break;
        case 4:
            return 0;
    }

}
void Player()
{
    int x=1,y=1;
    while(1)
    {

        x=check_Player_2(tic);
        y=check_chance(tic);
        if(y==2)
        {

            system("cls");
                display(tic);
                printf("\n#####################################################################################\n\nDraw\n\n#####################################################################################");
                break;;
        }
        if(x)
            Player_1(tic);
        else
            {
            system("cls");
                display(tic);
                printf("\n#####################################################################################\n\nPlayer 2 Won\n\n#####################################################################################");
                break;;
            }
        x=check_Player_1(tic);
        y=check_chance(tic);
        if(y==2)
        {

            system("cls");
                display(tic);
                printf("\n#####################################################################################\n\nDraw\n\n#####################################################################################");
                break;;
        }
        if(x)
            Player_2(tic);
        else
            {
                system("cls");
                display(tic);
                printf("\n#####################################################################################\n\nPlayer 1 Won\n\n#####################################################################################");
                break;
            }
    }
}
void Player_1()
{
    system("cls");
    display(tic);
    int num;
    printf("\nPlayer X, Enter Marking Place :");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
       if(tic[0][0]=='X' ^ tic[0][0]=='O')
            Player_1();
       else
           tic[0][0]='X';
           break;
    case 2:
       if(tic[0][1]=='X' ^ tic[0][1]=='O')
            Player_1();
       else
           tic[0][1]='X';
           break;
    case 3:
       if(tic[0][2]=='X' ^ tic[0][2]=='O')
            Player_1();
       else
            tic[0][2]='X';
           break;
    case 4:
       if(tic[1][0]=='X' ^ tic[1][0]=='O')
            Player_1();
       else
           tic[1][0]='X';
           break;
    case 5:
       if(tic[1][1]=='X' ^ tic[1][1]=='O')
            Player_1();
       else
           tic[1][1]='X';
           break;
    case 6:
       if(tic[1][2]=='X' ^ tic[1][2]=='O')
            Player_1();
       else
           tic[1][2]='X';
           break;
    case 7:
       if(tic[2][0]=='X' ^ tic[2][0]=='O')
            Player_1();
       else
           tic[2][0]='X';
           break;
    case 8:
       if(tic[2][1]=='X' ^ tic[2][1]=='O')
            Player_1();
       else
           tic[2][1]='X';
           break;
       case 9:
       if(tic[2][2]=='X' ^ tic[2][2]=='O')
            Player_1();
       else
           tic[2][2]='X';
           break;
    }
}
void Player_2()
{

    system("cls");
    display(tic);
    int num;
    printf("\nPlayer O, Enter Marking Place :");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
       if(tic[0][0]=='X' ^ tic[0][0]=='O')

            Player_2();
       else
           tic[0][0]='O';
           break;
    case 2:
       if(tic[0][1]=='X' ^ tic[0][1]=='O')
            Player_2();
       else
           tic[0][1]='O';
           break;
    case 3:
       if(tic[0][2]=='X' ^ tic[0][2]=='O')
            Player_2();
       else
            tic[0][2]='O';
           break;
    case 4:
       if(tic[1][0]=='X' ^ tic[1][0]=='O')
            Player_2();
       else
           tic[1][0]='O';
           break;
      case 5:
       if(tic[1][1]=='X' ^ tic[1][1]=='O')
            Player_2(tic);
       else
           tic[1][1]='O';
           break;;
    case 6:
       if(tic[1][2]=='X' ^ tic[1][2]=='O')
            Player_2();
       else
           tic[1][2]='O';
           break;
    case 7:
       if(tic[2][0]=='X' ^ tic[2][0]=='O')
            Player_2();
       else
           tic[2][0]='O';
           break;
    case 8:
       if(tic[2][1]=='X' ^ tic[2][1]=='O')
            Player_2();
       else
           tic[2][1]='O';
           break;
       case 9:
       if(tic[2][2]=='X' ^ tic[2][2]=='O')
            Player_2();
       else
           tic[2][2]='O';
           break;
    }
}
int check_Player_1()
{
    if(tic[0][0]=='X')
    {
        if(tic[0][1]=='X')
        {
            if(tic[0][2]=='X')
                return 0;
        }
        if(tic[1][1]=='X')
        {
            if(tic[2][2]=='X')
                return 0;
        }
        if(tic[1][0]=='X')
        {
            if(tic[2][0]=='X')
                return 0;
        }
    }
    if(tic[2][2]=='X')
    {
        if(tic[2][1]=='X')
        {
            if(tic[2][0]=='X')
                return 0;
        }
        if(tic[1][2]=='X')
        {
            if(tic[0][2]=='X')
                return 0;
        }
    }
    if(tic[0][2]=='X')
    {
        if(tic[1][1]=='X')
            {if(tic[2][0]=='X')
              return 0;}
    }
    if(tic[0][1]=='X')
    {
        if(tic[1][1]=='X')
            if(tic[2][1]=='X')
            return 0;
    }
    if(tic[1][0]=='X')
    {
        if(tic[1][1]=='X')
            if(tic[1][2]=='X')
            return 0;
    }
}

int check_Player_2()
{
    if(tic[0][0]=='O')
    {
        if(tic[0][1]=='O')
        {
            if(tic[0][2]=='O')
                return 0;
        }
        if(tic[1][1]=='O')
        {
            if(tic[2][2]=='O')
                return 0;
        }
        if(tic[1][0]=='O')
        {
            if(tic[2][0]=='O')
                return 0;
        }
    }
    if(tic[2][2]=='O')
    {
        if(tic[2][1]=='O')
        {
            if(tic[2][0]=='O')
                return 0;
        }
        if(tic[1][2]=='O')
        {
            if(tic[0][2]=='O')
                return 0;
        }
    }
    if(tic[0][2]=='O')
    {
        if(tic[1][1]=='O')
            if(tic[2][0]=='O')
              return 0;
    }
    if(tic[0][1]=='O')
    {
        if(tic[1][1]=='O')
            if(tic[2][1]=='O')
            return 0;
    }
    if(tic[1][0]=='O')
    {
        if(tic[1][1]=='O')
            if(tic[1][2]=='O')
            return 0;
    }
}
int check_chance()
{
        int count=0;
        for(int i=0; i<=2 ;i++)
        for(int j=0; j<=2 ;j++)
        {
            if(tic[i][j] == 'X' ^ tic[i][j]== 'O')
                count++;
            else
                return 1;
        }
        if(count==9)
            return 2;
}
Smart_Com()
{
printf(" ");
}
