#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
# include "iGraphics.h"
#include<time.h>
#include<stdlib.h>
#include<string.h>
int gamestat=-1,dpcounter=0;
int score=0,difficulty=1,life=10,gover=0,level=1,bosslifebar=351;
int music=1,onoffbutton=1,tick_x=580,tick_y=291;
int enemybulletrandom=0;
char scorestring[20],scoreword[]="Score: ";
double steps=60,enemysteps=10;
int titlechanger=0,titleanimate=0,ng=0,sg=1,ig=2,mb=0,in=0,gm=0,hm=0,lm=0,blastc=0,blasttrue=1,l4=0,dplog=0;
int standcounter=0,stand=1,moveright=0,moveleft=0;
int c=0,e=0,temptypenum,ch=0,ep=0;
double x = 620, y = 10;
double ebulletspeed=20,pbulletspeed=20;
char playerstand[25]="bmp\\Vincent1.bmp";
char playerright[3][30]={"bmp\\Vincent_right1.bmp","bmp\\Vincent_right2.bmp","bmp\\Vincent_right3.bmp"};
char playerleft[3][30]={"bmp\\Vincent_left1.bmp","bmp\\Vincent_left2.bmp","bmp\\Vincent_left3.bmp"};
char knife[20]="bmp\\knife.bmp";
char knife2[20]="bmp\\knife2.bmp";
char knife3[20]="bmp\\knife3.bmp";
char knife4[20]="bmp\\knife4.bmp";
char kunai[20]="bmp\\kunai.bmp";
char kunai2[20]="bmp\\kunai2.bmp";
char kunai3[20]="bmp\\kunai3.bmp";
char kunai4[20]="bmp\\kunai4.bmp";
char punch[20]="bmp\\punch1.bmp";
char punch2[20]="bmp\\punch2.bmp";
char punch3[20]="bmp\\punch3.bmp";
char punch4[20]="bmp\\punch4.bmp";
char bomb[20]="bmp\\bomb.bmp";

char bosslife[2][20]={"bmp\\bosslife.bmp","bmp\\bosslife2.bmp"};

char ironman[2][20]={"bmp\\ironman1.bmp","bmp\\ironman2.bmp"};
char roboknight[2][20]={"bmp\\roboknight1.bmp","bmp\\roboknight2.bmp"};
char eye[2][20]={"bmp\\eye1.bmp","bmp\\eye2.bmp"};
char mummy[2][20]={"bmp\\mummy1.bmp","bmp\\mummy2.bmp"};
char skeleton[2][20]={"bmp\\skeleton1.bmp","bmp\\skeleton2.bmp"};
char flyghost[2][20]={"bmp\\flyghost1.bmp","bmp\\flyghost2.bmp"};
char hulk[2][20]={"bmp\\hulk1.bmp","bmp\\hulk2.bmp"};
char oneEye[2][20]={"bmp\\one_eye.bmp","bmp\\one_eye2.bmp"};
char soldier[2][20]={"bmp\\soldier.bmp","bmp\\soldier1.bmp"};

char enemyplane[2][20]={"bmp\\enemyplane1.bmp","bmp\\enemyplane2.bmp"};
char deadpool[3][25]={"bmp\\deadpool.bmp","bmp\\deadpooltank.bmp","bmp\\finisher.bmp"};
char triplane[2][20]={"bmp\\triplane.bmp","bmp\\triplane2.bmp"};
char blast[10][20]={"bmp\\blast1.bmp","bmp\\blast2.bmp","bmp\\blast3.bmp","bmp\\blast4.bmp","bmp\\blast5.bmp","bmp\\blast6.bmp","bmp\\blast7.bmp","bmp\\blast8.bmp","bmp\\blast9.bmp","bmp\\blast10.bmp"};
char deadlog[8][20]={"bmp\\deadlog1.bmp","bmp\\deadlog2.bmp","bmp\\deadlog3.bmp","bmp\\deadlog4.bmp","bmp\\deadlog5.bmp","bmp\\deadlog6.bmp","bmp\\deadlog7.bmp","bmp\\deadlog8.bmp"};

char menuback[20]="bmp\\menuback1.bmp";
char title[6][20]={"bmp\\title5.bmp","bmp\\title6.bmp","bmp\\title7.bmp","bmp\\title8.bmp","bmp\\title9.bmp","bmp\\title10.bmp"};
char button[6][20]={"bmp\\button1.bmp","bmp\\button2.bmp","bmp\\button3.bmp","bmp\\button5.bmp","bmp\\button6.bmp","bmp\\button7.bmp"};
char energy[5][20]={"bmp\\energy.bmp","bmp\\energy1.bmp","bmp\\energy2.bmp","bmp\\energy4.bmp","bmp\\energy3.bmp"};
char gameovered[20]="bmp\\gameover.bmp";
char musicfile[6][25]={"music\\menu.wav","music\\menusound.wav","music\\GameOver1.wav","music\\level1theme.wav","music\\victory.wav","music\\end.wav"};
char meffects[10][25]={"music\\throw.wav","music\\punch.wav","music\\metalhit.wav","music\\eyehit.wav","music\\AW.wav","music\\ghostdie.wav","music\\ghostdead.wav","music\\planeshoot.wav","music\\ow.wav","music\\blast.wav"};

char settings[4][20]={"bmp\\setmenu.bmp","bmp\\musicon.bmp","bmp\\musicoff.bmp","bmp\\tick.bmp"};

char menubutton[2][25]={"bmp\\menubutton.bmp","bmp\\menubuttonDOWN.bmp"};
char menubutton2[2][25]={"bmp\\menubutton2.bmp","bmp\\menubuttonDOWN2.bmp"};
char menubutton3[2][25]={"bmp\\menubutton3.bmp","bmp\\menubuttonDOWN3.bmp"};
char menubutton4[2][25]={"bmp\\menubutton4.bmp","bmp\\menubuttonDOWN4.bmp"};

char gamemenu[7][20]={"bmp\\gamemenu.bmp","bmp\\gamemenu1.bmp","bmp\\gamemenu2.bmp","bmp\\gamemenu3.bmp","bmp\\gamemenu4.bmp","bmp\\menuON.bmp","bmp\\menuOFF.bmp"};
char help[5][20]={"bmp\\help1.bmp","bmp\\help2.bmp","bmp\\help3.bmp","bmp\\help4.bmp","bmp\\help5.bmp"};
char bg[6][20]={"bmp\\gardenbg.bmp","bmp\\snow.bmp","bmp\\fieldbg.bmp","bmp\\waterbg1.bmp","bmp\\fieldbg1.bmp","bmp\\darkbg.bmp"};
char level1front[13][20]={"bmp\\l1front1.bmp","bmp\\l1front2.bmp","bmp\\l1front3.bmp","bmp\\l1front4.bmp","bmp\\l1front5.bmp","bmp\\l1front6.bmp","bmp\\l1front7.bmp","bmp\\l1front8.bmp","bmp\\l1front9.bmp","bmp\\l1front10.bmp","bmp\\l1front11.bmp","bmp\\l1front12.bmp","bmp\\l1front13.bmp"};
char level2front[13][20]={"bmp\\l2front1.bmp","bmp\\l2front2.bmp","bmp\\l2front3.bmp","bmp\\l2front4.bmp","bmp\\l2front5.bmp","bmp\\l2front6.bmp","bmp\\l2front7.bmp","bmp\\l2front8.bmp","bmp\\l2front9.bmp","bmp\\l2front10.bmp","bmp\\l2front11.bmp","bmp\\l2front12.bmp","bmp\\l2front13.bmp"};
char level3front[11][20]={"bmp\\l3front1.bmp","bmp\\l3front2.bmp","bmp\\l3front3.bmp","bmp\\l3front4.bmp","bmp\\l3front5.bmp","bmp\\l3front6.bmp","bmp\\l3front7.bmp","bmp\\l3front8.bmp","bmp\\l3front9.bmp","bmp\\l3front10.bmp","bmp\\l3front11.bmp"};
char level4front[12][20]={"bmp\\l4front1.bmp","bmp\\l4front2.bmp","bmp\\l4front3.bmp","bmp\\l4front4.bmp","bmp\\l4front5.bmp","bmp\\l4front6.bmp","bmp\\l4front7.bmp","bmp\\l4front8.bmp","bmp\\l4front9.bmp","bmp\\l4front10.bmp","bmp\\l4front11.bmp","bmp\\l4front12.bmp"};
char ending[18][20]={"bmp\\ending1.bmp","bmp\\ending2.bmp","bmp\\ending3.bmp","bmp\\ending4.bmp","bmp\\ending5.bmp","bmp\\ending6.bmp","bmp\\ending7.bmp","bmp\\ending8.bmp","bmp\\ending9.bmp","bmp\\ending10.bmp","bmp\\ending11.bmp","bmp\\ending12.bmp","bmp\\ending13.bmp","bmp\\ending14.bmp","bmp\\ending15.bmp","bmp\\ending16.bmp","bmp\\ending17.bmp","bmp\\ending18.bmp"};
char block[4][20]={"bmp\\block.bmp","bmp\\block2.bmp","bmp\\block3.bmp","bmp\\block4.bmp"};
char the_end[20]="bmp\\the end.bmp";
char chareffects[2][20]={"music\\vincent.wav","music\\saitama.wav"};

char intro[76][20]={"bmp\\intro1.bmp","bmp\\intro1-1.bmp","bmp\\intro2.bmp","bmp\\intro2-1.bmp","bmp\\intro3.bmp","bmp\\intro3-1.bmp","bmp\\intro4.bmp","bmp\\intro5.bmp","bmp\\intro6.bmp","bmp\\intro7.bmp","bmp\\intro8.bmp","bmp\\intro9.bmp","bmp\\intro10.bmp","bmp\\intro11.bmp","bmp\\intro12.bmp","bmp\\intro13.bmp","bmp\\intro29.bmp","bmp\\intro30.bmp","bmp\\intro31.bmp","bmp\\intro32.bmp","bmp\\intro33.bmp","bmp\\intro34.bmp","bmp\\intro35.bmp","bmp\\intro36.bmp","bmp\\intro37.bmp","bmp\\intro38.bmp","bmp\\intro14.bmp","bmp\\intro14-1.bmp","bmp\\intro15.bmp","bmp\\intro15-1.bmp","bmp\\intro16.bmp","bmp\\intro16-1.bmp","bmp\\intro17.bmp","bmp\\intro17-1.bmp","bmp\\intro18.bmp","bmp\\intro18-1.bmp","bmp\\intro19.bmp","bmp\\intro19-1.bmp","bmp\\intro20.bmp","bmp\\intro20-1.bmp","bmp\\intro21.bmp","bmp\\intro21-1.bmp","bmp\\intro22.bmp","bmp\\intro22-1.bmp","bmp\\intro23.bmp","bmp\\intro23-1.bmp","bmp\\intro24.bmp","bmp\\intro24-1.bmp","bmp\\intro25.bmp","bmp\\intro25-1.bmp","bmp\\intro26.bmp","bmp\\intro26-1.bmp","bmp\\intro27.bmp","bmp\\intro27-1.bmp","bmp\\intro28.bmp","bmp\\intro28-1.bmp","bmp\\intro29.bmp","bmp\\intro30.bmp","bmp\\intro31.bmp","bmp\\intro32.bmp","bmp\\intro33.bmp","bmp\\intro34.bmp","bmp\\intro35.bmp","bmp\\intro36.bmp","bmp\\intro37.bmp","bmp\\intro38.bmp","bmp\\intro29.bmp","bmp\\intro30.bmp","bmp\\intro31.bmp","bmp\\intro32.bmp","bmp\\intro33.bmp","bmp\\intro34.bmp","bmp\\intro35.bmp","bmp\\intro36.bmp","bmp\\intro37.bmp","bmp\\intro38.bmp"};

#define screenwd 1280
#define screenht 720
#define enemynum 20
#define ebulletcount 50
#define pbulletcount 50

typedef struct{
    int ex,ey,exspeed,eyspeed,killpoint;
    int type;
}enemytype;

typedef struct{
    double ebx,eby,ebspeed;
    int type;
}bullets;


enemytype *enemy[enemynum]={NULL};
bullets *ebullets[ebulletcount]={NULL};
bullets *pbullets[pbulletcount]={NULL};

/*gamestat info:
gamestat -1---> intro
gamestat 0 ---> main menu
gamestat 1 ---> level 01
gamestat 2 ---> game over
gamestat 3 ---> settings
gamestat 4 ---> game menu
gamestat 5 ---> help menu
gamestat 6 ---> level 02
gamestat 7 ---> level 1 intro
gamestat 8 ---> level 2 intro
gamestat 9 ---> boss level part 01
gamestat 10---> level 03
gamestat 11---> boss level part 02
gamestat 12---> level 3 intro
gamestat 13---> boss level intro
gamestat 14---> ending
gamestat 15---> last page
*/
void charswap()
{
    if(gamestat==1)
    {
        if(ch)
        {
            strcpy(playerstand,"bmp\\Vincent1.bmp");
            strcpy(playerright[0],"bmp\\Vincent_right1.bmp");
            strcpy(playerright[1],"bmp\\Vincent_right2.bmp");
            strcpy(playerright[2],"bmp\\Vincent_right3.bmp");
            strcpy(playerleft[0],"bmp\\Vincent_left1.bmp");
            strcpy(playerleft[1],"bmp\\Vincent_left2.bmp");
            strcpy(playerleft[2],"bmp\\Vincent_left3.bmp");
            if(music)
                PlaySound(chareffects[0],NULL,SND_ASYNC);

        }
        else
        {
            strcpy(playerstand,"bmp\\Saitama1.bmp");
            strcpy(playerright[0],"bmp\\Saitama_right1.bmp");
            strcpy(playerright[1],"bmp\\Saitama_right2.bmp");
            strcpy(playerright[2],"bmp\\Saitama_right3.bmp");
            strcpy(playerleft[0],"bmp\\Saitama_left1.bmp");
            strcpy(playerleft[1],"bmp\\Saitama_left2.bmp");
            strcpy(playerleft[2],"bmp\\Saitama_left3.bmp");
            if(music)
                PlaySound(chareffects[1],NULL,SND_ASYNC);
        }
    }
    else if(gamestat==6)
    {
        if(ch)
        {
            strcpy(playerstand,"bmp\\Vincent1_bl.bmp");
            strcpy(playerright[0],"bmp\\Vincent_right1_bl.bmp");
            strcpy(playerright[1],"bmp\\Vincent_right2_bl.bmp");
            strcpy(playerright[2],"bmp\\Vincent_right3_bl.bmp");
            strcpy(playerleft[0],"bmp\\Vincent_left1_bl.bmp");
            strcpy(playerleft[1],"bmp\\Vincent_left2_bl.bmp");
            strcpy(playerleft[2],"bmp\\Vincent_left3_bl.bmp");
            if(music)
                PlaySound(chareffects[0],NULL,SND_ASYNC);

        }
        else
        {
            strcpy(playerstand,"bmp\\Saitama1_bl.bmp");
            strcpy(playerright[0],"bmp\\Saitama_right1_bl.bmp");
            strcpy(playerright[1],"bmp\\Saitama_right2_bl.bmp");
            strcpy(playerright[2],"bmp\\Saitama_right3_bl.bmp");
            strcpy(playerleft[0],"bmp\\Saitama_left1_bl.bmp");
            strcpy(playerleft[1],"bmp\\Saitama_left2_bl.bmp");
            strcpy(playerleft[2],"bmp\\Saitama_left3_bl.bmp");
            if(music)
                PlaySound(chareffects[1],NULL,SND_ASYNC);
        }
    }

    else if(gamestat==10)
    {
        if(ch)
        {
            strcpy(playerstand,"bmp\\Vincent1_blue.bmp");
            strcpy(playerright[0],"bmp\\Vincent_right1_blue.bmp");
            strcpy(playerright[1],"bmp\\Vincent_right2_blue.bmp");
            strcpy(playerright[2],"bmp\\Vincent_right3_blue.bmp");
            strcpy(playerleft[0],"bmp\\Vincent_left1_blue.bmp");
            strcpy(playerleft[1],"bmp\\Vincent_left2_blue.bmp");
            strcpy(playerleft[2],"bmp\\Vincent_left3_blue.bmp");
            if(music)
                PlaySound(chareffects[0],NULL,SND_ASYNC);

        }
        else
        {
            strcpy(playerstand,"bmp\\Saitama1_blue.bmp");
            strcpy(playerright[0],"bmp\\Saitama_right1_blue.bmp");
            strcpy(playerright[1],"bmp\\Saitama_right2_blue.bmp");
            strcpy(playerright[2],"bmp\\Saitama_right3_blue.bmp");
            strcpy(playerleft[0],"bmp\\Saitama_left1_blue.bmp");
            strcpy(playerleft[1],"bmp\\Saitama_left2_blue.bmp");
            strcpy(playerleft[2],"bmp\\Saitama_left3_blue.bmp");
            if(music)
                PlaySound(chareffects[1],NULL,SND_ASYNC);
        }
    }
    else if(gamestat==9)
    {
        if(ch)
        {
            strcpy(playerstand,"bmp\\Vincent1_boss.bmp");
            strcpy(playerright[0],"bmp\\Vincent_right1_boss.bmp");
            strcpy(playerright[1],"bmp\\Vincent_right2_boss.bmp");
            strcpy(playerright[2],"bmp\\Vincent_right3_boss.bmp");
            strcpy(playerleft[0],"bmp\\Vincent_left1_boss.bmp");
            strcpy(playerleft[1],"bmp\\Vincent_left2_boss.bmp");
            strcpy(playerleft[2],"bmp\\Vincent_left3_boss.bmp");
            if(music)
                PlaySound(chareffects[0],NULL,SND_ASYNC);
        }
        else
        {
            strcpy(playerstand,"bmp\\Saitama1_boss.bmp");
            strcpy(playerright[0],"bmp\\Saitama_right1_boss.bmp");
            strcpy(playerright[1],"bmp\\Saitama_right2_boss.bmp");
            strcpy(playerright[2],"bmp\\Saitama_right3_boss.bmp");
            strcpy(playerleft[0],"bmp\\Saitama_left1_boss.bmp");
            strcpy(playerleft[1],"bmp\\Saitama_left2_boss.bmp");
            strcpy(playerleft[2],"bmp\\Saitama_left3_boss.bmp");
            if(music)
                PlaySound(chareffects[1],NULL,SND_ASYNC);
        }
    }
    else if(gamestat==11)
    {
        if(ch)
        {
            strcpy(playerstand,"bmp\\Vincent1_dp.bmp");
            strcpy(playerright[0],"bmp\\Vincent_right1_dp.bmp");
            strcpy(playerright[1],"bmp\\Vincent_right2_dp.bmp");
            strcpy(playerright[2],"bmp\\Vincent_right3_dp.bmp");
            strcpy(playerleft[0],"bmp\\Vincent_left1_dp.bmp");
            strcpy(playerleft[1],"bmp\\Vincent_left2_dp.bmp");
            strcpy(playerleft[2],"bmp\\Vincent_left3_dp.bmp");
            if(music)
                PlaySound(chareffects[0],NULL,SND_ASYNC);

        }
        else
        {
            strcpy(playerstand,"bmp\\Saitama1_dp.bmp");
            strcpy(playerright[0],"bmp\\Saitama_right1_dp.bmp");
            strcpy(playerright[1],"bmp\\Saitama_right2_dp.bmp");
            strcpy(playerright[2],"bmp\\Saitama_right3_dp.bmp");
            strcpy(playerleft[0],"bmp\\Saitama_left1_dp.bmp");
            strcpy(playerleft[1],"bmp\\Saitama_left2_dp.bmp");
            strcpy(playerleft[2],"bmp\\Saitama_left3_dp.bmp");
            if(music)
                PlaySound(chareffects[1],NULL,SND_ASYNC);
        }
    }
    ch++;
    if(ch>1)
        ch=0;
}

void addbullet(double x,double y,double dx,int type)
{
    int found=-1;
    for(int i=0;i<pbulletcount;i++)
    {
        if(pbullets[i]==NULL)
        {
            found=i;
            break;
        }
    }
    if(found>=0)
    {
        int i=found;
        pbullets[i]=(bullets*)malloc(sizeof(bullets));
        pbullets[i]->ebx=x;
        pbullets[i]->eby=y;
        pbullets[i]->ebspeed=dx;
        pbullets[i]->type=type;
    }
}

void removebullet(int i)
{
    if(pbullets[i])
    {
        free(pbullets[i]);
        pbullets[i]=NULL;
    }
}

void addenemy(double x,double y,double dx,int type,int k)
{
    int found=-1;
    for(int i=0;i<enemynum;i++)
    {
        if(enemy[i]==NULL)
        {
            found=i;
            break;
        }
    }
    if(found>=0)
    {
        int i=found;
        enemy[i]=(enemytype*)malloc(sizeof(enemytype));
        enemy[i]->ex=x;
        enemy[i]->ey=y;
        enemy[i]->eyspeed=dx;
        enemy[i]->exspeed=dx;
        enemy[i]->type=type;
        enemy[i]->killpoint=k;
    }
}

void removeenemy(int i)
{
    if(enemy[i])
    {
        free(enemy[i]);
        enemy[i]=NULL;
    }
}


void addenemybullet(double x,double y,double dx,int type)
{
    int found=-1;
    for(int i=0;i<ebulletcount;i++)
    {
        if(ebullets[i]==NULL)
        {
            found=i;
            break;
        }
    }
    if(found>=0)
    {
        int i=found;
        ebullets[i]=(bullets*)malloc(sizeof(bullets));
        ebullets[i]->ebx=x;
        ebullets[i]->eby=y;
        ebullets[i]->ebspeed=dx;
        ebullets[i]->type=type;
    }
}

void removeenemybullet(int i)
{
    if(ebullets[i])
    {
        free(ebullets[i]);
        ebullets[i]=NULL;
    }
}

//draw enemy bullet according to type
void ebulletcall()
{
    for(int i=0;i<ebulletcount;i++)if(ebullets[i])
    {
        if(ebullets[i]->type==1)
            iFilledCircle(ebullets[i]->ebx,ebullets[i]->eby,5,1000);
        else if(ebullets[i]->type==2)
            iShowBMP(ebullets[i]->ebx,ebullets[i]->eby,bomb);
    }
}

//enemy bullet movement
void ebulletfire()
{
    if(gamestat==1 || gamestat==6 || gamestat==9 || gamestat==10 || gamestat==11)
    {
        for(int i=0;i<ebulletcount;i++)
        {
            if(ebullets[i])
            {
                ebullets[i]->eby-=(ebullets[i]->ebspeed+5*(difficulty-1));
                if(ebullets[i]->eby<0)
                {
                    removeenemybullet(i);
                }

            }

        }
    }
}

//player bullet draw
void pbulletcall()
{
    for(int i=0;i<pbulletcount;i++)
    {
        if(pbullets[i])
        {
            if(gamestat==1)
            {
                if(pbullets[i]->type==1)
                    iShowBMP(pbullets[i]->ebx,pbullets[i]->eby,knife);
                else if(pbullets[i]->type==2)
                    iShowBMP(pbullets[i]->ebx,pbullets[i]->eby,kunai);
                else if(pbullets[i]->type==3)
                    iShowBMP(pbullets[i]->ebx,pbullets[i]->eby,punch);
            }
            else if(gamestat==6)
            {
                if(pbullets[i]->type==1)
                    iShowBMP(pbullets[i]->ebx,pbullets[i]->eby,knife2);
                else if(pbullets[i]->type==2)
                    iShowBMP(pbullets[i]->ebx,pbullets[i]->eby,kunai2);
                else if(pbullets[i]->type==3)
                    iShowBMP(pbullets[i]->ebx,pbullets[i]->eby,punch2);
            }

            else if(gamestat==10)
            {
                if(pbullets[i]->type==1)
                    iShowBMP(pbullets[i]->ebx,pbullets[i]->eby,knife3);
                else if(pbullets[i]->type==2)
                    iShowBMP(pbullets[i]->ebx,pbullets[i]->eby,kunai3);
                else if(pbullets[i]->type==3)
                    iShowBMP(pbullets[i]->ebx,pbullets[i]->eby,punch3);
            }

            else if(gamestat==9)
            {
                if(pbullets[i]->type==1)
                    iFilledRectangle(pbullets[i]->ebx,pbullets[i]->eby,5,10);
                else if(pbullets[i]->type==2)
                    iFilledRectangle(pbullets[i]->ebx,pbullets[i]->eby,5,10);
                else if(pbullets[i]->type==3)
                    iFilledRectangle(pbullets[i]->ebx,pbullets[i]->eby,5,10);
            }
            else if(gamestat==11)
            {
                if(pbullets[i]->type==1)
                    iShowBMP(pbullets[i]->ebx,pbullets[i]->eby,knife4);
                else if(pbullets[i]->type==2)
                    iShowBMP(pbullets[i]->ebx,pbullets[i]->eby,kunai4);
                else if(pbullets[i]->type==3)
                    iShowBMP(pbullets[i]->ebx,pbullets[i]->eby,punch4);
            }
        }
    }
}

//player bullet movement
void pbulletfire()
{
    if(gamestat==1 || gamestat==6 || gamestat==9 || gamestat==10 || gamestat==11)
    {
        for(int i=0;i<pbulletcount;i++)
        {
            if(pbullets[i])
            {
                pbullets[i]->eby+=pbullets[i]->ebspeed;
                if(pbullets[i]->eby>720)
                {
                    removebullet(i);
                }

            }

        }
    }
}

//draw enemy according to type
void enemycall()
{
    for(int i=0;i<enemynum;i++)
    {
        if(enemy[i])
        {
            if(enemy[i]->type==1){
                iShowBMP(enemy[i]->ex,enemy[i]->ey,ironman[e%2]);
            }
            else if(enemy[i]->type==2)
                iShowBMP(enemy[i]->ex,enemy[i]->ey,roboknight[e%2]);
            else if(enemy[i]->type==3)
                iShowBMP(enemy[i]->ex,enemy[i]->ey,eye[e%2]);
            else if(enemy[i]->type==4)
                iShowBMP(enemy[i]->ex,enemy[i]->ey,mummy[e%2]);
            else if(enemy[i]->type==5)
                iShowBMP(enemy[i]->ex,enemy[i]->ey,skeleton[e%2]);
            else if(enemy[i]->type==6)
                iShowBMP(enemy[i]->ex,enemy[i]->ey,flyghost[e%2]);
            else if(enemy[i]->type==7)
                iShowBMP(enemy[i]->ex,enemy[i]->ey,hulk[e%2]);
            else if(enemy[i]->type==8)
                iShowBMP(enemy[i]->ex,enemy[i]->ey,soldier[e%2]);
            else if(enemy[i]->type==9)
                iShowBMP(enemy[i]->ex,enemy[i]->ey,oneEye[e%2]);
            else if(enemy[i]->type==10)
                iShowBMP(enemy[i]->ex,enemy[i]->ey,enemyplane[e%2]);
            else if(enemy[i]->type==11){
                iShowBMP(enemy[i]->ex,enemy[i]->ey,triplane[ep%2]);
                if(ep%2==0){
                    addenemybullet(enemy[i]->ex+25,enemy[i]->ey+10,ebulletspeed,1);
                }
            }
            else if(enemy[i]->type==12)
            {
                iShowBMP(enemy[i]->ex,enemy[i]->ey,deadpool[0]);
            }
            else if(enemy[i]->type==13)
            {
                iShowBMP(enemy[i]->ex,enemy[i]->ey,deadpool[1]);
            }
            else if(enemy[i]->type==14)
            {
                iShowBMP(enemy[i]->ex,enemy[i]->ey,deadpool[2]);
            }
        }

    }
}

//enemy movement
void enemymove()
{
    if(gamestat==1 || gamestat==6 || gamestat==9 || gamestat==10 || gamestat==11)
    {
        for(int i=0;i<enemynum;i++)
        {
            if(enemy[i])
            {
                if(enemy[i]->type==12 && bosslifebar!=0)
                {
                    dpcounter++;
                    if(dpcounter==3)
                    {
                        enemy[i]->ey=rand()%(250)+250;
                        enemy[i]->ex=rand()%(screenwd-120)+60;
                        dpcounter=0;
                    }
                }
                else if((enemy[i]->type==13) && bosslifebar!=0)
                {
                    enemy[i]->ex+=enemy[i]->exspeed;

                    if(enemy[i]->ex<=0 || enemy[i]->ex>=1200)
                    {
                        enemy[i]->exspeed=-enemy[i]->exspeed;
                    }
                }
                else if((enemy[i]->type==14) && bosslifebar!=0)
                {
                    enemy[i]->ex+=enemy[i]->exspeed;

                    if(enemy[i]->ex<=0 || enemy[i]->ex>=1110)
                    {
                        enemy[i]->exspeed=-enemy[i]->exspeed;
                    }
                }
                else if(enemy[i]->type==10 && bosslifebar!=0)
                {
                    enemy[i]->ey-=enemy[i]->eyspeed;
                    enemy[i]->ex+=enemy[i]->exspeed;
                    if(enemy[i]->ey<=150 || enemy[i]->ey>=380)
                    {
                        enemy[i]->eyspeed=-enemy[i]->eyspeed;
                    }
                    else if(enemy[i]->ex<=0 || enemy[i]->ex>=980)
                    {
                        enemy[i]->exspeed=-enemy[i]->exspeed;
                    }

                }
                else if(enemy[i]->type!=3 && enemy[i]->type!=6 && enemy[i]->type!=9)
                {
                    enemy[i]->ey-=enemy[i]->eyspeed;
                    if(enemy[i]->ey<0)
                    {
                        removeenemy(i);
                        gover=1;
                    }
                }
                else
                {
                    enemy[i]->ey-=enemy[i]->eyspeed;
                    if(i%2)
                        enemy[i]->ex-=enemy[i]->exspeed;
                    else
                        enemy[i]->ex+=enemy[i]->exspeed;

                    if(enemy[i]->ey<0)
                    {
                        removeenemy(i);
                        gover=1;
                    }
                    else if(enemy[i]->ex<2)
                        enemy[i]->exspeed=-enemy[i]->exspeed;

                    else if(enemy[i]->ex>screenwd-70)
                        enemy[i]->exspeed=-enemy[i]->exspeed;
                }

            }

        }
    }
}

void iDraw() {
    if(gamestat==-1)
    {
        iClear();
        iShowBMP(0,0,intro[in]);

    }
    else if(gamestat==0)
    {
        iClear();
        iShowBMP(0,0,menuback);
        iShowBMP(75,575,title[titlechanger]);
        iShowBMP(380,380,button[ng]);
        iShowBMP(530,250,button[sg]);
        iShowBMP(680,120,button[ig]);
    }
    else if(gamestat==3)
    {
            iClear();
            iShowBMP(0,0,settings[0]);
            iShowBMP(75,575,title[titlechanger]);
            iShowBMP(612,444,settings[onoffbutton]);
            iShowBMP(tick_x,tick_y,settings[3]);
    }
    else if(gamestat==5)
    {
            iClear();
            iShowBMP(0,0,help[hm]);
    }

    else if(gamestat==7)
    {
            iClear();
            iShowBMP(0,0,level1front[lm]);
    }
    else if(gamestat==1)
    {
        iClear();
        iShowBMP(0,0,bg[0]);
        enemycall();
        e+=2;
        if(e==30)
            e=1;
        else if(e==31)
            e=0;
        pbulletcall();
        if(stand)
            iShowBMP(x,y,playerstand);
        else if(moveright)
        {
            iShowBMP(x,y,playerright[c]);
            standcounter++;
            if(standcounter>=2)
            {
                standcounter=0;
                stand=1;
                moveright=0;
                moveleft=0;
                c=0;
            }
        }
        else if(moveleft)
        {
            iShowBMP(x,y,playerleft[c]);
            standcounter++;
            if(standcounter>=2)
            {
                standcounter=0;
                stand=1;
                moveright=0;
                moveleft=0;
                c=0;
            }
        }
        iSetColor(0,255,255);
        ebulletcall();
        if(ch==0)
            iSetColor(255,57,57);
        else
            iSetColor(255,229,124);
        iText(50,690,scoreword,GLUT_BITMAP_TIMES_ROMAN_24);
        iText(117,690,scorestring,GLUT_BITMAP_TIMES_ROMAN_24);
        iShowBMP(2,682,menubutton[mb]);
        iSetColor(0,255,255);
        for(int i=0,j=0;i<life;i++)
        {
            if(ch==0)
            {
                iFilledCircle(1250-j,700,15,8);
                iShowBMP(1245-j,690,energy[0]);
            }
            else
            {
                iShowBMP(1235-j,685,energy[1]);
            }
            j+=40;
        }
        iShowBMP(0,8,block[0]);
        iShowBMP(1120,8,block[0]);
        iShowBMP(1200,88,block[0]);
        iShowBMP(82,8,block[1]);
        iShowBMP(1140,88,block[1]);
        iShowBMP(3,88,block[2]);
        iShowBMP(1200,8,block[3]);
    }
    else if(gamestat==8)
    {
            iClear();
            iShowBMP(0,0,level2front[lm]);
            if(lm==0)
            {
                iSetColor(0,255,255);
                iText(599,429,"Your Score",GLUT_BITMAP_HELVETICA_18);
                iText(618,379,scorestring,GLUT_BITMAP_TIMES_ROMAN_24);
                e++;
                if(e>=20)
                {
                    e=0;
                }
                if(e<10)
                {
                    iText(520,300,"click anywhere to continue...",GLUT_BITMAP_9_BY_15);
                }
            }
    }
    else if(gamestat==6)
    {
        iClear();
        iShowBMP(0,0,bg[5]);
        iShowBMP(0,0,bg[1]);
        enemycall();
        e+=2;
        if(e==30)
            e=1;
        else if(e==31)
            e=0;
        pbulletcall();
        if(stand)
            iShowBMP(x,y,playerstand);
        else if(moveright)
        {
            iShowBMP(x,y,playerright[c]);
            standcounter++;
            if(standcounter>=20)
            {
                standcounter=0;
                stand=1;
                moveright=0;
                moveleft=0;
                c=0;
            }
        }
        else if(moveleft)
        {
            iShowBMP(x,y,playerleft[c]);
            standcounter++;
            if(standcounter>=20)
            {
                standcounter=0;
                stand=1;
                moveright=0;
                moveleft=0;
                c=0;
            }
        }
        iSetColor(78,68,68);
        ebulletcall();
        if(ch==0)
            iSetColor(255,57,57);
        else
            iSetColor(255,229,124);
        iText(50,690,scoreword,GLUT_BITMAP_TIMES_ROMAN_24);
        iText(117,690,scorestring,GLUT_BITMAP_TIMES_ROMAN_24);
        iShowBMP(2,682,menubutton2[mb]);
        iSetColor(0,255,255);
        for(int i=0,j=0;i<life;i++)
        {
            if(ch==0)
            {
                iFilledCircle(1250-j,700,15,8);
                iShowBMP(1245-j,690,energy[0]);
            }
            else
            {
                iShowBMP(1235-j,685,energy[2]);
            }
            j+=40;
        }
    }

    else if(gamestat==12)
    {
            iClear();
            iShowBMP(0,0,level3front[lm]);
            if(lm==0)
            {
                iSetColor(0,255,255);
                iText(599,429,"Your Score",GLUT_BITMAP_HELVETICA_18);
                iText(618,379,scorestring,GLUT_BITMAP_TIMES_ROMAN_24);
                e++;
                if(e>=20)
                {
                    e=0;
                }
                if(e<10)
                {
                    iText(520,300,"click anywhere to continue...",GLUT_BITMAP_9_BY_15);
                }
            }
    }
    else if(gamestat==10)
    {
        iClear();
        iShowBMP(0,0,bg[3]);
        enemycall();
        e+=2;
        if(e==20)
            e=1;
        else if(e==21)
            e=0;
        pbulletcall();
        if(stand)
            iShowBMP(x,y,playerstand);
        else if(moveright)
        {
            iShowBMP(x,y,playerright[c]);
            standcounter++;
            if(standcounter>=5)
            {
                standcounter=0;
                stand=1;
                moveright=0;
                moveleft=0;
                c=0;
            }
        }
        else if(moveleft)
        {
            iShowBMP(x,y,playerleft[c]);
            standcounter++;
            if(standcounter>=5)
            {
                standcounter=0;
                stand=1;
                moveright=0;
                moveleft=0;
                c=0;
            }
        }
        iSetColor(78,68,68);
        ebulletcall();
        if(ch==0)
            iSetColor(255,57,57);
        else
            iSetColor(255,229,124);
        iText(50,690,scoreword,GLUT_BITMAP_TIMES_ROMAN_24);
        iText(117,690,scorestring,GLUT_BITMAP_TIMES_ROMAN_24);
        if(gamestat==1)
            iShowBMP(2,682,menubutton[mb]);
        else if(gamestat==6)
            iShowBMP(2,682,menubutton2[mb]);
        else if(gamestat==10)
            iShowBMP(2,682,menubutton3[mb]);

        iSetColor(0,255,255);
        for(int i=0,j=0;i<life;i++)
        {
            if(ch==0)
            {
                iFilledCircle(1250-j,700,15,8);
                iShowBMP(1245-j,690,energy[0]);
            }
            else
            {
                iShowBMP(1235-j,685,energy[4]);
            }
            j+=40;
        }
    }
    else if(gamestat==13)
    {
            iClear();
            iShowBMP(0,0,level4front[lm]);
            if(lm==0)
            {
                iSetColor(0,255,255);
                iText(599,429,"Your Score",GLUT_BITMAP_HELVETICA_18);
                iText(618,379,scorestring,GLUT_BITMAP_TIMES_ROMAN_24);
                e++;
                if(e>=20)
                {
                    e=0;
                }
                if(e<10)
                {
                    iText(520,300,"click anywhere to continue...",GLUT_BITMAP_9_BY_15);
                }
            }
    }
    else if(gamestat==9)
    {
        if(bosslifebar>0)
        {
            iClear();
            iShowBMP(0,0,bg[2]);
            iSetColor(78,68,68);
            ebulletcall();
            enemycall();
            if(ch)
                iSetColor(0,0,255);
            else
                iSetColor(255,0,0);
            pbulletcall();
            e+=2;
            if(e==4)
                e=1;
            else if(e==5)
                e=0;
            ep+=2;
            if(ep==6)
                ep=1;
            else if(ep==(72/difficulty+1))
                ep=0;

            if(stand)
                iShowBMP(x,y,playerstand);
            else if(moveright)
            {
                iShowBMP(x,y,playerright[c]);
                standcounter++;
                if(standcounter>=5)
                {
                    standcounter=0;
                    stand=1;
                    moveright=0;
                    moveleft=0;
                    c=0;
                }
            }
            else if(moveleft)
            {
                iShowBMP(x,y,playerleft[c]);
                standcounter++;
                if(standcounter>=5)
                {
                    standcounter=0;
                    stand=1;
                    moveright=0;
                    moveleft=0;
                    c=0;
                }
            }
            iShowBMP(2,682,menubutton4[mb]);
            iSetColor(0,255,255);
            for(int i=0,j=0;i<life;i++)
            {
                if(ch==0)
                {
                    iFilledCircle(1250-j,700,15,8);
                    iShowBMP(1245-j,690,energy[0]);
                }
                else
                {
                    iShowBMP(1235-j,685,energy[3]);
                }
                j+=40;
            }
            iShowBMP(350,670,bosslife[0]);
            iSetColor(255,74,44);
            iFilledRectangle(420.5,680.5,bosslifebar,13);
        }
        else if(bosslifebar==0)
        {
            iClear();
            iShowBMP(0,0,bg[2]);
            iShowBMP(2,682,menubutton4[mb]);
            iSetColor(0,255,255);
            for(int i=0,j=0;i<life;i++)
            {
                if(ch==0)
                {
                    iFilledCircle(1250-j,700,15,8);
                    iShowBMP(1245-j,690,energy[0]);
                }
                else
                {
                    iShowBMP(1235-j,685,energy[3]);
                }
                j+=40;
            }
            iShowBMP(350,670,bosslife[1]);
            for(int i=0;i<enemynum;i++)
            {
                if(enemy[i] && enemy[i]->type==10 && blasttrue)
                {
                    iShowBMP(enemy[i]->ex,enemy[i]->ey,blast[blastc]);
                }
            }
            if(l4)
            {
                iShowBMP(0,0,deadlog[lm]);
            }
        }
    }
    else if(gamestat==11)
    {
            iClear();
            iShowBMP(0,0,bg[4]);
            iShowBMP(0,0,bg[1]);
            iSetColor(78,68,68);
            ebulletcall();
            enemycall();
            pbulletcall();
            e+=2;
            if(e==4)
                e=1;
            else if(e==5)
                e=0;
            ep+=2;
            if(ep==6)
                ep=1;
            else if(ep==(72/difficulty+1))
                ep=0;

            if(stand)
                iShowBMP(x,y,playerstand);
            else if(moveright)
            {
                iShowBMP(x,y,playerright[c]);
                standcounter++;
                if(standcounter>=5)
                {
                    standcounter=0;
                    stand=1;
                    moveright=0;
                    moveleft=0;
                    c=0;
                }
            }
            else if(moveleft)
            {
                iShowBMP(x,y,playerleft[c]);
                standcounter++;
                if(standcounter>=5)
                {
                    standcounter=0;
                    stand=1;
                    moveright=0;
                    moveleft=0;
                    c=0;
                }
            }
            iShowBMP(2,682,menubutton4[mb]);
            iSetColor(0,255,255);
            for(int i=0,j=0;i<life;i++)
            {
                if(ch==0)
                {
                    iFilledCircle(1250-j,700,15,8);
                    iShowBMP(1245-j,690,energy[0]);
                }
                else
                {
                    iShowBMP(1235-j,685,energy[3]);
                }
                j+=40;
            }
            iShowBMP(350,670,bosslife[0]);
            iSetColor(255,74,44);
            iFilledRectangle(420.5,680.5,bosslifebar,13);
    }
    else if(gamestat==14)
    {
            iClear();
            iShowBMP(0,0,ending[lm]);
    }
    else if(gamestat==2)
    {
        iClear();
        iShowBMP(0,0,gameovered);
        iSetColor(0,255,255);
        iText(590,560,"Your Score",GLUT_BITMAP_HELVETICA_18);
        if(score/10==0)
            iText(630,530,scorestring,GLUT_BITMAP_TIMES_ROMAN_24);
        else if(score/100==0)
            iText(625,530,scorestring,GLUT_BITMAP_TIMES_ROMAN_24);
        else if(score/1000==0)
            iText(620,530,scorestring,GLUT_BITMAP_TIMES_ROMAN_24);
        else if(score/10000==0)
            iText(615,530,scorestring,GLUT_BITMAP_TIMES_ROMAN_24);
        else if(score/100000==0)
            iText(610,530,scorestring,GLUT_BITMAP_TIMES_ROMAN_24);
        else
            iText(605,530,scorestring,GLUT_BITMAP_TIMES_ROMAN_24);
        e++;
        if(e>=20)
        {
            e=0;
        }
        if(e<10)
        {
            iText(520,500,"press q or END key to exit...",GLUT_BITMAP_9_BY_15);
        }
    }
    else if(gamestat==4)
    {
            iShowBMP(0,0,gamemenu[gm]);
            iShowBMP(215,496,gamemenu[onoffbutton+4]);
            if(level!=4 && level!=5){
                iText(405,690,scoreword,GLUT_BITMAP_TIMES_ROMAN_24);
                iText(472,690,scorestring,GLUT_BITMAP_TIMES_ROMAN_24);
            }
    }
    else if(gamestat==15)
    {
        iClear();
        iShowBMP(0,0,menuback);
        iShowBMP(75,575,the_end);
        e++;
        iSetColor(0,0,0);
        if(e>=20)
        {
            e=0;
        }
        if(e<10)
        {
            iText(200,550,"press q or END key to exit...",GLUT_BITMAP_9_BY_15);
        }
        iText(350,400,"I think of a hero as someone who understands",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(370,370,"the degree of responsibility that comes with his freedom.",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(840,340,"- Bob Dylan",GLUT_BITMAP_HELVETICA_18);
        iText(620,95,"created by",GLUT_BITMAP_9_BY_15);
        iText(645,70,"Abu Humayed Azim Fahmid",GLUT_BITMAP_HELVETICA_18);
        iText(880,70,"1805036",GLUT_BITMAP_HELVETICA_12);
        iText(670,45,"& Jamil Ahmed",GLUT_BITMAP_HELVETICA_18);
        iText(795,45,"1805034",GLUT_BITMAP_HELVETICA_12);
        iText(700,20,"copyrighted by jfgames",GLUT_BITMAP_9_BY_15);
        iText(900,25,"TM",GLUT_BITMAP_8_BY_13);
    }
}


void iMouseMove(int mx, int my) {

}


void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        if(gamestat==0){
            if(mx>380 && mx<780 && my>380 && my<460)
            {
                ng=3;
            }
            else if(mx>530 && mx<930 && my>250 && my<330)
            {
                sg=4;
            }
            else if(mx>680 && mx<1080 && my>120 && my<200)
            {
                ig=5;
            }
        }
        else if(gamestat==1 || gamestat==6 || gamestat==9 || gamestat==10)
        {
            if(mx>2 && mx<37 && my>682 && my<717)
            {
                mb=1;
            }
        }
        else if(gamestat==4)
        {
            if(mx>52 && mx<254 && my>395 && my<436)
            {
                gm=2;
            }
            else if(mx>52 && mx<259 && my>288 && my<327)
            {
                gm=3;
            }
            else if(mx>52 && mx<309 && my>183 && my<221)
            {
                gm=4;
            }
        }
	}
	else if (button == GLUT_LEFT_BUTTON && state == GLUT_UP) {
        if(gamestat==0){
            ng=0;
            sg=1;
            ig=2;
            if(mx>380 && mx<780 && my>380 && my<460)
            {
                gamestat=7;
                PlaySound(0,0,0);
                if(music)
                    PlaySound(musicfile[3],NULL,SND_LOOP|SND_ASYNC);
            }
            else if(mx>530 && mx<930 && my>250 && my<330)
            {
                gamestat=3;
            }
            else if(mx>680 && mx<1080 && my>120 && my<200)
            {
                gamestat=5;
            }
        }
        else if(gamestat==2){
            if(mx>476 && mx<525 && my>408 && my<466)
            {
                if(level==1){
                score=0,life=10,gover=0;
                    for(int i=0;i<pbulletcount;i++)
                    {
                        removebullet(i);
                        removeenemybullet(i);
                    }
                    for(int i=0;i<enemynum;i++)
                    {
                        removeenemy(i);
                    }
                    gamestat=7;
                    lm=10;
                    level=1;
                    e=0;
                    PlaySound(0,0,0);
                }
                else if(level==2){
                score=5000,life=10,gover=0;

                    for(int i=0;i<pbulletcount;i++)
                    {
                        removebullet(i);
                        removeenemybullet(i);
                    }
                    for(int i=0;i<enemynum;i++)
                    {
                        removeenemy(i);
                    }
                    gamestat=8;
                    lm=10;
                    level=2;
                    e=0;
                    PlaySound(0,0,0);
                }
                else if(level==3){
                score=10000,life=10,gover=0;

                    for(int i=0;i<pbulletcount;i++)
                    {
                        removebullet(i);
                        removeenemybullet(i);
                    }
                    for(int i=0;i<enemynum;i++)
                    {
                        removeenemy(i);
                    }
                    gamestat=12;
                    lm=8;
                    level=3;
                    e=0;
                    PlaySound(0,0,0);
                }
                else  if(level==4||level==5){
                score=15000,life=10,gover=0;

                    for(int i=0;i<pbulletcount;i++)
                    {
                        removebullet(i);
                        removeenemybullet(i);
                    }
                    for(int i=0;i<enemynum;i++)
                    {
                        removeenemy(i);
                    }
                    e=0;
                    ep=0;
                    gamestat=13;
                    lm=11;
                    level=4;
                    PlaySound(0,0,0);
                    bosslifebar=351;

                }
            }
            else if(mx>618 && mx<666 && my>408 && my<466)
            {
                score=0,life=10,gover=0;
                for(int i=0;i<pbulletcount;i++)
                {

                    removebullet(i);
                    removeenemybullet(i);
                }
                for(int i=0;i<enemynum;i++)
                {
                    removeenemy(i);
                }
                gamestat=7;
                e=0;
                ep=0;
                bosslifebar=351;
                PlaySound(0,0,0);
                if(music)
                    PlaySound(musicfile[3],NULL,SND_LOOP|SND_ASYNC);
            }
            else if(mx>749 && mx<807 && my>408 && my<466)
            {
                score=0,life=10,gover=0;
                for(int i=0;i<pbulletcount;i++)
                {
                    removebullet(i);
                    removeenemybullet(i);
                }
                for(int i=0;i<enemynum;i++)
                {
                    removeenemy(i);
                }
                gamestat=0;
                e=0;
                ep=0;
                bosslifebar=351;
                level=1;
                if(music)
                {
                    PlaySound(musicfile[0],NULL,SND_LOOP|SND_ASYNC);
                }
            }
        }
        else if(gamestat==3)
        {
            if(mx>827 && mx<863 && my>509 && my<546)
            {
                gamestat=0;
            }
            else if(mx>729 && mx<775 && my>106 && my<156)
            {
                exit(0);
            }
            else if(mx>612 && mx<762 && my>444 && my<494)
            {
                if(onoffbutton==1){
                    onoffbutton=2;
                    music=0;
                    PlaySound(0,0,0);
                }
                else{
                    onoffbutton=1;
                    music=1;
                    PlaySound(musicfile[0],NULL,SND_LOOP|SND_ASYNC);
                }
            }
             else if(mx>643 && mx<714 && my>298 && my<331)
            {
                tick_x=580;
                tick_y=291;
                difficulty=1;
            }
             else if(mx>643 && mx<751 && my>248 && my<276)
            {
                tick_x=580;
                tick_y=241;
                difficulty=2;
            }
             else if(mx>643 && mx<716 && my>193 && my<224)
            {
                tick_x=580;
                tick_y=186;
                difficulty=3;
            }

        }
        else if(gamestat==1 || gamestat==6 || gamestat==10 || gamestat==11)
        {
            mb=0;
            if(mx>2 && mx<37 && my>682 && my<717)
            {
                iPauseTimer(0);
                iPauseTimer(1);
                iPauseTimer(2);
                iPauseTimer(3);
                iPauseTimer(4);
                iPauseTimer(5);
                iPauseTimer(6);
                iPauseTimer(7);
                gamestat=4;
                if(music)
                {
                    PlaySound(musicfile[1],NULL,SND_LOOP|SND_NOSTOP|SND_ASYNC);
                }
            }
        }
        else if(gamestat==4)
        {
            gm=0;
            if(mx>52 && mx<254 && my>395 && my<436)
            {
                score=0,life=10,gover=0;
                iResumeTimer(0);
                iResumeTimer(1);
                iResumeTimer(2);
                iResumeTimer(3);
                iResumeTimer(4);
                iResumeTimer(5);
                iResumeTimer(6);
                iResumeTimer(7);
                for(int i=0;i<pbulletcount;i++)
                {
                    removebullet(i);
                    removeenemybullet(i);
                }
                for(int i=0;i<enemynum;i++)
                {
                    removeenemy(i);
                }
                gamestat=7;
                level=1;
                e=0;
                ep=0;
                bosslifebar=351;
                PlaySound(0,0,0);
                if(music)
                    PlaySound(musicfile[3],NULL,SND_LOOP|SND_ASYNC);
            }
            else if(mx>52 && mx<259 && my>288 && my<327)
            {
                score=0,life=10,gover=0;
                iResumeTimer(0);
                iResumeTimer(1);
                iResumeTimer(2);
                iResumeTimer(3);
                iResumeTimer(4);
                iResumeTimer(5);
                iResumeTimer(6);
                iResumeTimer(7);
                for(int i=0;i<pbulletcount;i++)
                {
                    removebullet(i);
                    removeenemybullet(i);
                }
                for(int i=0;i<enemynum;i++)
                {
                    removeenemy(i);
                }
                gamestat=0;
                e=0;
                ep=0;
                bosslifebar=351;
                level=1;
                if(music)
                {
                    PlaySound(musicfile[0],NULL,SND_LOOP|SND_ASYNC);
                }
            }
            else if(mx>52 && mx<309 && my>183 && my<221)
            {

                e=0;
                ep=0;
                if(level==1)
                    gamestat=1;
                else if(level==2)
                    gamestat=6;
                else if(level==3)
                    gamestat=10;
                else if(level==4)
                    gamestat=9;
                else if(level==5)
                    gamestat=11;

                iResumeTimer(0);
                iResumeTimer(1);
                iResumeTimer(2);
                iResumeTimer(3);
                iResumeTimer(4);
                iResumeTimer(5);
                iResumeTimer(6);
                iResumeTimer(7);
                PlaySound(0,0,0);

            }
            else if(mx>302 && mx<350 && my>50 && my<95)
            {
                exit(0);
            }
            else if(mx>215 && mx<265 && my>496 && my<546)
            {
                if(onoffbutton==1){
                    onoffbutton=2;
                    music=0;
                    PlaySound(0,0,0);
                }
                else{
                    onoffbutton=1;
                    music=1;
                    PlaySound(musicfile[1],NULL,SND_LOOP|SND_ASYNC);
                }
            }
        }
        else if(gamestat==5)
        {
            if(mx>1071 && mx<1110 && my>654 && my<695)
            {
                gamestat=0;
            }
            else if(mx>202 && mx<335 && my>562 && my<594)
            {
                hm=0;
            }
            else if(mx>373 && mx<515 && my>562 && my<594)
            {
                hm=1;
            }
             else if(mx>552 && mx<715 && my>562 && my<594)
            {
                hm=2;
            }
             else if(mx>752 && mx<954 && my>562 && my<594)
            {
                hm=3;
            }
             else if(mx>992 && mx<1075 && my>562 && my<594)
            {
                hm=4;
            }

        }

        else if(gamestat==7)
        {
            if(mx>0 && mx<screenwd && my>0 && my<screenht)
            {
                lm++;
                if(lm>12)
                {
                    lm=0;
                    gamestat=1;
                    level=1;
                    PlaySound(0,0,0);
                    ch=0;
                    strcpy(playerstand,"bmp\\Vincent1.bmp");
                    strcpy(playerright[0],"bmp\\Vincent_right1.bmp");
                    strcpy(playerright[1],"bmp\\Vincent_right2.bmp");
                    strcpy(playerright[2],"bmp\\Vincent_right3.bmp");
                    strcpy(playerleft[0],"bmp\\Vincent_left1.bmp");
                    strcpy(playerleft[1],"bmp\\Vincent_left2.bmp");
                    strcpy(playerleft[2],"bmp\\Vincent_left3.bmp");
                }
            }
        }
        else if(gamestat==8)
        {
            if(mx>0 && mx<screenwd && my>0 && my<screenht)
            {
                lm++;
                if(lm==1)
                {
                    if(music)
                        PlaySound(musicfile[3],NULL,SND_LOOP|SND_ASYNC);
                }
                if(lm>12)
                {
                    lm=0;
                    gamestat=6;
                    level=2;
                    PlaySound(0,0,0);
                    ch=0;
                    strcpy(playerstand,"bmp\\Vincent1_bl.bmp");
                    strcpy(playerright[0],"bmp\\Vincent_right1_bl.bmp");
                    strcpy(playerright[1],"bmp\\Vincent_right2_bl.bmp");
                    strcpy(playerright[2],"bmp\\Vincent_right3_bl.bmp");
                    strcpy(playerleft[0],"bmp\\Vincent_left1_bl.bmp");
                    strcpy(playerleft[1],"bmp\\Vincent_left2_bl.bmp");
                    strcpy(playerleft[2],"bmp\\Vincent_left3_bl.bmp");
                }
            }
        }

        else if(gamestat==12)
        {
            if(mx>0 && mx<screenwd && my>0 && my<screenht)
            {
                lm++;
                if(lm==1)
                {
                    if(music)
                        PlaySound(musicfile[3],NULL,SND_LOOP|SND_ASYNC);
                }
                if(lm>10)
                {
                    lm=0;
                    gamestat=10;
                    level=3;
                    PlaySound(0,0,0);
                    ch=0;
            strcpy(playerstand,"bmp\\Vincent1_blue.bmp");
            strcpy(playerright[0],"bmp\\Vincent_right1_blue.bmp");
            strcpy(playerright[1],"bmp\\Vincent_right2_blue.bmp");
            strcpy(playerright[2],"bmp\\Vincent_right3_blue.bmp");
            strcpy(playerleft[0],"bmp\\Vincent_left1_blue.bmp");
            strcpy(playerleft[1],"bmp\\Vincent_left2_blue.bmp");
            strcpy(playerleft[2],"bmp\\Vincent_left3_blue.bmp");
                }
            }
        }
        else if(gamestat==13)
        {
            if(mx>0 && mx<screenwd && my>0 && my<screenht)
            {
                lm++;
                if(lm==1)
                {
                    if(music)
                        PlaySound(musicfile[3],NULL,SND_LOOP|SND_ASYNC);
                }
                if(lm>11)
                {
                    lm=0;
                    gamestat=9;
                    level=4;
                    bosslifebar=351;
                    PlaySound(0,0,0);
                    ch=0;
            strcpy(playerstand,"bmp\\Vincent1_boss.bmp");
            strcpy(playerright[0],"bmp\\Vincent_right1_boss.bmp");
            strcpy(playerright[1],"bmp\\Vincent_right2_boss.bmp");
            strcpy(playerright[2],"bmp\\Vincent_right3_boss.bmp");
            strcpy(playerleft[0],"bmp\\Vincent_left1_boss.bmp");
            strcpy(playerleft[1],"bmp\\Vincent_left2_boss.bmp");
            strcpy(playerleft[2],"bmp\\Vincent_left3_boss.bmp");
            addenemy(600,400,enemysteps*2.5,10,1);
            addenemy(20,614,0,11,1);
            addenemy(290,640,0,11,1);
            addenemy(1220,614,0,11,1);
            addenemy(820,640,0,11,1);
                }
            }
        }

        else if(gamestat==9)
        {
            mb=0;
            if(mx>2 && mx<37 && my>682 && my<717)
            {
                iPauseTimer(0);
                iPauseTimer(1);
                iPauseTimer(2);
                iPauseTimer(3);
                iPauseTimer(4);
                iPauseTimer(5);
                iPauseTimer(6);
                iPauseTimer(7);
                gamestat=4;
                if(music)
                {
                    PlaySound(musicfile[1],NULL,SND_LOOP|SND_NOSTOP|SND_ASYNC);
                }
            }
            else if(l4 && (mx>0 && mx<screenwd && my>0 && my<screenht))
            {
                lm++;
                if(lm>7)
                {
                    lm=0;
                    gamestat=11;
                    level=5;
                    PlaySound(0,0,0);

                    for(int i=0;i<pbulletcount;i++)
                    {
                        removebullet(i);
                        removeenemybullet(i);
                    }
                    for(int i=0;i<enemynum;i++)
                    {
                        removeenemy(i);
                    }
                    ch=0;
                    bosslifebar=351;
                strcpy(playerstand,"bmp\\Vincent1_dp.bmp");
                strcpy(playerright[0],"bmp\\Vincent_right1_dp.bmp");
                strcpy(playerright[1],"bmp\\Vincent_right2_dp.bmp");
                strcpy(playerright[2],"bmp\\Vincent_right3_dp.bmp");
                strcpy(playerleft[0],"bmp\\Vincent_left1_dp.bmp");
                strcpy(playerleft[1],"bmp\\Vincent_left2_dp.bmp");
                strcpy(playerleft[2],"bmp\\Vincent_left3_dp.bmp");
                addenemy(600,400,enemysteps,12,1);
                addenemy(10,620,enemysteps*2.5,13,1);
                addenemy(1000,200,enemysteps*3,14,1);
                }
            }
        }
        else if(gamestat==14)
        {
            if(mx>0 && mx<screenwd && my>0 && my<screenht)
            {
                lm++;
                if(lm==1)
                {
                    if(music)
                        PlaySound(musicfile[3],NULL,SND_LOOP|SND_ASYNC);
                }
                if(lm>17)
                {
                    lm=0;
                    gamestat=15;
                    if(music)
                        PlaySound(musicfile[5],NULL,SND_LOOP|SND_ASYNC);
                }
            }
        }


	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
	}
}


void iKeyboard(unsigned char key) {

	if (key == 'q') {
		if(gamestat==2 || gamestat==15)
            exit(0);
	}
	else if (key == ' ') {
        if(gamestat==1 || gamestat==6 || gamestat==9 || gamestat==10 || gamestat==11)
            charswap();
	}
	else if((key == 27))
    {
        if(gamestat==1 || gamestat==6 || gamestat==9 || gamestat==10 || gamestat==11)
        {
            iPauseTimer(0);
            iPauseTimer(1);
            iPauseTimer(2);
            iPauseTimer(3);
            iPauseTimer(4);
            iPauseTimer(5);
            iPauseTimer(6);
            iPauseTimer(7);
            gamestat=4;
            if(music)
            {
                PlaySound(musicfile[1],NULL,SND_LOOP|SND_NOSTOP|SND_ASYNC);
            }
        }
        else if(gamestat==4)
        {
            if(level==1)
                gamestat=1;
            else if(level==2)
                gamestat=6;
            else if(level==3)
                gamestat=10;
            else if(level==4)
                gamestat=9;
            else if(level==5)
                gamestat=11;
            iResumeTimer(0);
            iResumeTimer(1);
            iResumeTimer(2);
            iResumeTimer(3);
            iResumeTimer(4);
            iResumeTimer(5);
            iResumeTimer(6);
            iResumeTimer(7);
            PlaySound(0,0,0);
        }
    }
}

void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		if(gamestat==2 || gamestat==15)
            exit(0);
	}
	else if (key == GLUT_KEY_UP) {
        if(gamestat==1 || gamestat==6 || gamestat==9 || gamestat==10 || gamestat==11){
                if(ch==0){
                    addbullet(x+30,y+20,pbulletspeed,1);
                    if(music && (gamestat==1 || gamestat==6 || gamestat==10 || gamestat==11))
                    {
                        PlaySound(meffects[0],NULL,SND_ASYNC);
                    }
                    else if(music && gamestat==9 && bosslifebar!=0)
                    {
                        PlaySound(meffects[7],NULL,SND_ASYNC);
                    }

                }
                else{
                    addbullet(x+30,y+20,pbulletspeed,3);
                    if(music && (gamestat==1 || gamestat==6 || gamestat==10 || gamestat==11))
                        PlaySound(meffects[1],NULL,SND_ASYNC);
                    else if(music && gamestat==9 && bosslifebar!=0)
                    {
                        PlaySound(meffects[7],NULL,SND_ASYNC);
                    }
                }
        }
	}
	else if (key == GLUT_KEY_DOWN) {
        if(gamestat==1 || gamestat==6 || gamestat==9 || gamestat==10 || gamestat==11){
                if(ch==0){
                    addbullet(x+30,y+20,pbulletspeed,2);
                    if(music && (gamestat==1 || gamestat==6 || gamestat==10 || gamestat==11))
                    {
                        PlaySound(meffects[0],NULL,SND_ASYNC);
                    }
                    else if(music && gamestat==9 && bosslifebar!=0)
                    {
                        PlaySound(meffects[7],NULL,SND_ASYNC);
                    }
                }
                else{
                    addbullet(x+30,y+20,pbulletspeed,3);
                    if(music && (gamestat==1 || gamestat==6 || gamestat==10 || gamestat==11))
                        PlaySound(meffects[1],NULL,SND_ASYNC);
                    else if(music && gamestat==9 && bosslifebar!=0)
                    {
                        PlaySound(meffects[7],NULL,SND_ASYNC);
                    }
                }
        }
	}
	else if(key == GLUT_KEY_RIGHT){
        if((gamestat==1 || gamestat==6 || gamestat==9 || gamestat==10 || gamestat==11) && x<screenwd-60)
            x+=steps;
            stand=0;
            moveright=1;
            c++;
            if(c>2)
                c=0;
	}
	else if(key == GLUT_KEY_LEFT){
        if((gamestat==1 || gamestat==6 || gamestat==9 || gamestat==10 || gamestat==11) && x>20)
            x-=steps;
            stand=0;
            moveleft=1;
            c++;
            if(c>2)
                c=0;
	}
}



//enemy is timed for every 2 sec
void enemytimer()
{
    if(gamestat==1 || gamestat==6 || gamestat==10)
    {
        for(int i=0;i<difficulty*2-1;i++)
        {
            double x_co,y_co;
            if(gamestat==1)
            {
                temptypenum=rand()%3+1;
                if(temptypenum==1){
                    x_co=rand()%(screenwd-120)+60;
                    y_co=720;
                    addenemy(x_co,y_co,(enemysteps/5)*2,temptypenum,1);
                }
                else if(temptypenum==2){
                    x_co=rand()%(screenwd-120)+60;
                    y_co=720;
                    addenemy(x_co,y_co,(enemysteps/5)*3,temptypenum,1);
                }
                else if(temptypenum==3){
                    x_co=rand()%(screenwd-120)+60;
                    y_co=rand()%(screenht-360)+300;
                    addenemy(x_co,y_co,(enemysteps/5)*3,temptypenum,1);
                }
            }
            else if(gamestat==6)
            {
                temptypenum=rand()%3+4;
                if(temptypenum==4){
                    x_co=rand()%(screenwd-120)+60;
                    y_co=720;
                    addenemy(x_co,y_co,(enemysteps/5)*2,temptypenum,1);
                }
                else if(temptypenum==5){
                    x_co=rand()%(screenwd-120)+60;
                    y_co=720;
                    addenemy(x_co,y_co,(enemysteps/5)*3,temptypenum,1);
                }
                else if(temptypenum==6){
                    x_co=rand()%(screenwd-120)+60;
                    y_co=rand()%(screenht-360)+300;
                    addenemy(x_co,y_co,(enemysteps/5)*3,temptypenum,1);
                }
            }
            else if(gamestat==10)
            {
                temptypenum=rand()%3+7;
                if(temptypenum==7){
                    x_co=rand()%(screenwd-120)+60;
                    y_co=720;
                    addenemy(x_co,y_co,(enemysteps/5)*3,temptypenum,1);
                }
                else if(temptypenum==8){
                    x_co=rand()%(screenwd-120)+60;
                    y_co=720;
                    addenemy(x_co,y_co,(enemysteps/5)*3,temptypenum,1);
                }
                else if(temptypenum==9){
                    x_co=rand()%(screenwd-120)+60;
                    y_co=rand()%(screenht-360)+300;
                    addenemy(x_co,y_co,(enemysteps/5)*3,temptypenum,1);
                }
            }
        }

    }
}

//to set bullet on enemy
void ebulletset()
{
    if(gamestat==1 || gamestat==6 || gamestat==10 || gamestat==11)
    {
        for(int i=0;i<enemynum;i++)
        {
            if(enemy[i])
            {
                if(enemy[i]->type==1 || enemy[i]->type==4)
                {
                    enemybulletrandom++;
                    if(enemybulletrandom==3)
                    {
                        enemybulletrandom=0;
                        addenemybullet(enemy[i]->ex+30,enemy[i]->ey+20,ebulletspeed,1);
                    }
                }
                else if(enemy[i]->type==7 || enemy[i]->type==8)
                {
                    enemybulletrandom++;
                    if(enemybulletrandom==3)
                    {
                        enemybulletrandom=0;
                        addenemybullet(enemy[i]->ex+52,enemy[i]->ey+7,ebulletspeed,1);
                    }
                }
                else if(enemy[i]->type==13)
                {
                        addenemybullet(enemy[i]->ex+30,enemy[i]->ey+7,ebulletspeed,1);
                }
            }
        }
    }
    else if(gamestat==9)
    {
        for(int i=0;i<enemynum;i++)
        {
            if(enemy[i])
            {
                if(enemy[i]->type==10)
                {
                    enemybulletrandom++;
                    if(enemybulletrandom==3)
                    {
                        enemybulletrandom=0;
                        addenemybullet(enemy[i]->ex+55,enemy[i]->ey+70,ebulletspeed,2);
                        addenemybullet(enemy[i]->ex+240,enemy[i]->ey+70,ebulletspeed,2);
                        addenemybullet(enemy[i]->ex+150,enemy[i]->ey+10,ebulletspeed,2);
                    }
                }
            }
        }
    }
}


void enemyhitcheck()
{
    if(gamestat==1 || gamestat==6 || gamestat==9 || gamestat==10 || gamestat==11)
    {
        for(int i=0;i<pbulletcount;i++)if(pbullets[i]){
        for(int j=0;j<enemynum;j++)if(enemy[j]){
            if(enemy[j]->type==3 && pbullets[i]->type==1)
                        continue;
            else if(enemy[j]->type==2 && pbullets[i]->type==2)
                        continue;
            else if((enemy[j]->type==6 || enemy[j]->type==7 || enemy[j]->type==8) && (pbullets[i]->type==2 || pbullets[i]->type==1))
                        continue;
            else if(enemy[j]->type==9 && pbullets[i]->type==3)
                        continue;
            else if(enemy[j]->type==10 && bosslifebar!=0)
            {
                if(pbullets[i]->eby>enemy[j]->ey+28 && pbullets[i]->eby<enemy[j]->ey+150 && pbullets[i]->ebx>enemy[j]->ex+122 && pbullets[i]->ebx<enemy[j]->ex+162)
                {
                    removebullet(i);
                    if(music){
                        if(bosslifebar==3)
                            PlaySound(meffects[9],NULL,SND_ASYNC);
                        else
                            PlaySound(meffects[8],NULL,SND_ASYNC);
                    }
                    if(bosslifebar>0)
                    {
                        bosslifebar-=3;
                        if(bosslifebar<0)
                            bosslifebar==0;
                    }

                }
            }
            else if(enemy[j]->type==12 && bosslifebar!=0)
            {
                if(pbullets[i]->eby>enemy[j]->ey-50 && pbullets[i]->eby<enemy[j]->ey+100 && pbullets[i]->ebx>enemy[j]->ex-9 && pbullets[i]->ebx<enemy[j]->ex+59)
                {
                    removebullet(i);
                    if(music){
                        PlaySound(meffects[8],NULL,SND_ASYNC);
                    }
                    if(bosslifebar>0)
                    {
                        bosslifebar-=9;
                        if(bosslifebar<0)
                            bosslifebar==0;
                    }
                }
            }
            else if(enemy[j]->type==11 || enemy[j]->type==13)
                        continue;
            else if(enemy[j]->type==14)
            {
                if(pbullets[i]->eby>enemy[j]->ey-50 && pbullets[i]->eby<enemy[j]->ey+50 && pbullets[i]->ebx>enemy[j]->ex-5 && pbullets[i]->ebx<enemy[j]->ex+149)
                    {
                        removebullet(i);
                        if(music)
                            PlaySound(meffects[2],NULL,SND_ASYNC);
                    }
            }
            else
            {
                if(pbullets[i]->eby>enemy[j]->ey-50 && pbullets[i]->eby<enemy[j]->ey+100 && pbullets[i]->ebx>enemy[j]->ex-9 && pbullets[i]->ebx<enemy[j]->ex+59)
                {
                    if(ch==0 && enemy[j]->killpoint)
                    {
                        if(enemy[j]->type==3){
                            score+=200;
                            enemy[j]->killpoint=0;
                            if(music)
                                PlaySound(meffects[3],NULL,SND_ASYNC);
                        }
                        else if(enemy[j]->type==1 || enemy[j]->type==2){
                            score+=100;
                            enemy[j]->killpoint=0;
                            if(music)
                                PlaySound(meffects[2],NULL,SND_ASYNC);
                        }
                        else if(enemy[j]->type==6){
                            score+=100;
                            enemy[j]->killpoint=0;
                            if(music)
                                PlaySound(meffects[6],NULL,SND_ASYNC);
                        }
                        else if(enemy[j]->type==4 || enemy[j]->type==5){
                            score+=50;
                            enemy[j]->killpoint=0;
                            if(music)
                                PlaySound(meffects[5],NULL,SND_ASYNC);
                        }

                        else if(enemy[j]->type==9){
                            score+=100;
                            enemy[j]->killpoint=0;
                            if(music)
                                PlaySound(meffects[5],NULL,SND_ASYNC);
                        }
                        else if(enemy[j]->type==7 || enemy[j]->type==8){
                            score+=50;
                            enemy[j]->killpoint=0;
                            if(music)
                                PlaySound(meffects[2],NULL,SND_ASYNC);
                        }
                    }
                    else if(ch==1 && enemy[j]->killpoint)
                    {
                        if(enemy[j]->type==3){
                            score+=100;
                            enemy[j]->killpoint=0;
                            if(music)
                                PlaySound(meffects[3],NULL,SND_ASYNC);
                        }
                        else if(enemy[j]->type==1 || enemy[j]->type==2){
                            score+=50;
                            enemy[j]->killpoint=0;
                            if(music)
                                PlaySound(meffects[2],NULL,SND_ASYNC);
                        }
                        else if(enemy[j]->type==6){
                            score+=100;
                            enemy[j]->killpoint=0;
                            if(music)
                                PlaySound(meffects[6],NULL,SND_ASYNC);
                        }
                        else if(enemy[j]->type==4 || enemy[j]->type==5){
                            score+=25;
                            enemy[j]->killpoint=0;
                            if(music)
                                PlaySound(meffects[5],NULL,SND_ASYNC);
                        }
                        else if(enemy[j]->type==9){
                            score+=100;
                            enemy[j]->killpoint=0;
                            if(music)
                                PlaySound(meffects[5],NULL,SND_ASYNC);
                        }
                        else if(enemy[j]->type==7 || enemy[j]->type==8){
                            score+=50;
                            enemy[j]->killpoint=0;
                            if(music)
                                PlaySound(meffects[2],NULL,SND_ASYNC);
                        }
                    }
                    removeenemy(j);
                    if(pbullets[i]->type!=3)
                        removebullet(i);

                }
            }
        }
        }
    }
}

void scorecounter()
{
    if(gamestat==1 || gamestat==6 || gamestat==10 || gamestat==9 || gamestat==11)
        itoa(score,scorestring,10);
    if(gamestat==1 && score>=5000)
    {
        life=10,gover=0;
        for(int i=0;i<pbulletcount;i++)
        {
            removebullet(i);
            removeenemybullet(i);
        }
        for(int i=0;i<enemynum;i++)
        {
            removeenemy(i);
        }
        PlaySound(0,0,0);
        gamestat=8;
        e=0;
        if(music)
        {
            PlaySound(musicfile[4],NULL,SND_ASYNC);
        }
    }
    else if(gamestat==6 && score>=10000)
    {
        life=10,gover=0;
        for(int i=0;i<pbulletcount;i++)
        {
            removebullet(i);
            removeenemybullet(i);
        }
        for(int i=0;i<enemynum;i++)
        {
            removeenemy(i);
        }
        PlaySound(0,0,0);
        gamestat=12;
        e=0;
        if(music)
        {
            PlaySound(musicfile[4],NULL,SND_ASYNC);
        }

    }

    else if(gamestat==10 && score>=15000)
    {
        life=10,gover=0;
        for(int i=0;i<pbulletcount;i++)
        {
            removebullet(i);
            removeenemybullet(i);
        }
        for(int i=0;i<enemynum;i++)
        {
            removeenemy(i);
        }
        PlaySound(0,0,0);
        gamestat=13;
        e=0;
        if(music)
        {
            PlaySound(musicfile[4],NULL,SND_ASYNC);
        }

    }
    else if(gamestat==11 && bosslifebar==0)
    {
        life=10,gover=0;
        for(int i=0;i<pbulletcount;i++)
        {
            removebullet(i);
            removeenemybullet(i);
        }
        for(int i=0;i<enemynum;i++)
        {
            removeenemy(i);
        }
        PlaySound(0,0,0);
        gamestat=14;
        e=0;
        if(music)
        {
            PlaySound(musicfile[4],NULL,SND_ASYNC);
        }

    }

}

void titleanimationcall()
{
    titleanimate=1;
}

void titleanimation()
{
    if(gamestat==-1)
    {
        in++;
        if(in>75)
        {
            in=0;
            gamestat=0;
            PlaySound(0,0,0);
            if(music)
            {
                PlaySound(musicfile[0],NULL,SND_LOOP|SND_ASYNC);
            }

        }
    }
    else if(gamestat==0 && titleanimate)
    {
        titlechanger++;
        if(titlechanger>5){
            titlechanger=0;
            titleanimate=0;
        }
    }
    else if(gamestat==3 && titleanimate)
    {
        titlechanger++;
        if(titlechanger>5){
            titlechanger=0;
            titleanimate=0;
        }
    }
    else if(gamestat==4 && titleanimate)
    {
        if(gm==0)
        {
            gm=1;
        }
        else if(gm==1)
        {
            gm=0;
        }
    }

    else if(gamestat==9)
    {
        if(bosslifebar==0 && blasttrue)
        {
            blastc++;
            if(blastc>=9)
            {
                blasttrue=0;
                l4=1;
                for(int i=0;i<pbulletcount;i++)
                {
                    removebullet(i);
                    removeenemybullet(i);
                }
                for(int i=0;i<enemynum;i++)
                {
                    removeenemy(i);
                }
            }
        }
    }
}
void gameover()
{
    if(life<=0){
        if(music)
            PlaySound(meffects[4],NULL,SND_SYNC);
        gamestat=2;
        for(int i=0;i<pbulletcount;i++)
        {
            removebullet(i);
            removeenemybullet(i);
        }
        for(int i=0;i<enemynum;i++)
        {
            removeenemy(i);
        }
        if(music)
        {
            PlaySound(musicfile[2],NULL,SND_ASYNC);
        }
    }
    else if(gover){
        if(music)
            PlaySound(meffects[4],NULL,SND_SYNC);
        gamestat=2;
        for(int i=0;i<pbulletcount;i++)
        {
            removebullet(i);
            removeenemybullet(i);
        }
        for(int i=0;i<enemynum;i++)
        {
            removeenemy(i);
        }
        if(music)
        {
            PlaySound(musicfile[2],NULL,SND_ASYNC);
        }
    }
}


void hitplayer()
{
    if(gamestat==1 || gamestat==6 || gamestat==10 || gamestat==9 || gamestat==11)
    {
        for(int i=0;i<ebulletcount;i++)
        {
            if(ebullets[i])
            {
                if(ebullets[i]->type==2 && ebullets[i]->eby<y+70 && ebullets[i]->ebx>x-9 && ebullets[i]->ebx<x+70)
                {
                    if(music)
                    {
                        PlaySound(meffects[4],NULL,SND_ASYNC);
                    }
                    life-=2;
                    removeenemybullet(i);
                }
                else if(ebullets[i]->type==1 && ebullets[i]->eby<y+90 && ebullets[i]->ebx>x && ebullets[i]->ebx<x+60)
                {
                    if(music)
                    {
                        PlaySound(meffects[4],NULL,SND_ASYNC);
                    }
                    life--;
                    removeenemybullet(i);


                }
            }
        }
        for(int i=0;i<enemynum;i++)
        {
            if(enemy[i])
            {
                if(enemy[i]->ey<y+90 && enemy[i]->ex>x-58 && enemy[i]->ex<x+118)
                {
                    if(music)
                    {
                        PlaySound(meffects[4],NULL,SND_ASYNC);
                    }
                    if(enemy[i]->type==2 || enemy[i]->type==6 || enemy[i]->type==7 || enemy[i]->type==8 || enemy[i]->type==9)
                        life-=5;
                    else if(enemy[i]->type==1 || enemy[i]->type==3)
                        life-=2;
                    else if(enemy[i]->type==4 || enemy[i]->type==5)
                        life-=3;
                    removeenemy(i);

                }
            }
        }
        gameover();
    }
}


int main() {
	time_t timeseed;
    srand((unsigned)time(&timeseed));
    iSetTimer(5,scorecounter);
    iSetTimer(5,enemyhitcheck);
    iSetTimer(5,hitplayer);
    iSetTimer(30,pbulletfire);
    iSetTimer(30,ebulletfire);
    iSetTimer(100,enemymove);
    iSetTimer(2000,enemytimer);
    iSetTimer(500,ebulletset);
    iSetTimer(1830,titleanimationcall);
    iSetTimer(20,titleanimation);
	iInitialize(screenwd, screenht);

	for(int i=0;i<pbulletcount;i++)
        removebullet(i);
    for(int i=0;i<enemynum;i++)
        removeenemy(i);
	return 0;
}
