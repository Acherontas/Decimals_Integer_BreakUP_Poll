#include <iostream>
#include <iomanip>
#include "math.h"
using namespace std;

    long double no;
    long double nt;
    int mno[2];
    long double mnt[2];
    long double fractpart,intpart;
    long double fractpartw,intpartw;
    int preci;
    int fndo;
    int fndw;

int frct(){
    fractpart=modf(no,&intpart);
    mno[0]=intpart;
    mnt[0]=fractpart;
    if(fractpart==0){cout<<"decimal is zero \n"; fndo=1;}

    fractpartw=modf(nt,&intpartw);
    mno[1]=intpartw;
    mnt[1]=fractpartw;
    if(fractpartw==0){cout<<"decimal is zero \n"; fndw=1;}
    return 0;
}

long double main_rst;
long double two_aker;
long double aker_dek;
long double aker_dekt;
long double two_dek;
long double sum_of_sep;
long double oned;

int mnop(){
    main_rst=no*nt;
    cout<<"\n";
    cout<<"of " <<std::setprecision(preci) << no << " * " << std::setprecision(preci) << nt << " ::== " <<std::setprecision(preci)        << main_rst <<"\n";

    two_aker=mno[0] * mno[1];
    cout<<"\n";
    cout<<"of " <<std::setprecision(preci) << mno[0] << " * " << std::setprecision(preci) << mno[1] << " ::== " <<std::setprecision(preci) << two_aker<<" and ";

    aker_dek=mno[0] * mnt[1];
    cout<<" " <<std::setprecision(preci) << mno[0] << " * " << std::setprecision(preci) << mnt[1] << " ::== " <<std::setprecision(preci) << aker_dek<<"\n";

    aker_dekt=mnt[0] * mno[1];
    cout<<"\n";
    cout<<"of " <<std::setprecision(preci) << mnt[0] << " * " << std::setprecision(preci) << mno[1] << " ::== " <<std::setprecision(preci) << aker_dekt<<" and ";

    two_dek=mnt[0] * mnt[1];
    cout<<" " <<std::setprecision(preci) << mnt[0] << " * " << std::setprecision(preci) << mnt[1] << " ::== " <<std::setprecision(preci) << two_dek<<"\n";

    sum_of_sep=two_aker+aker_dek+aker_dekt+two_dek;
    cout<<"\n";
    cout<<"of " <<std::setprecision(preci) << two_aker << " + ";
    cout<<std::setprecision(preci) << aker_dek << " + ";
    cout<<std::setprecision(preci) << aker_dekt <<" + ";
    cout<<std::setprecision(preci) << two_dek << "  ::== " ;
    cout<<std::setprecision(preci) << sum_of_sep <<"\n";

    cout<<"\n";
    oned=(long double) two_aker / (long double) aker_dek ;
    cout<<"of " << std::setprecision(preci) << two_aker << " / " << std::setprecision(preci) << aker_dek << " ::== " << std::setprecision(preci) << oned <<"\n";

    long double koned;
    cout<<"\n";
    koned=(long double)aker_dekt / (long double) two_dek ;
    cout<<"of " << std::setprecision(preci) << aker_dekt << " / " << std::setprecision(preci) << two_dek << " ::== " << std::setprecision(preci) << koned <<"\n";

    long double ro;
    cout<<"\n";
    ro=(long double)aker_dekt / (long double) two_aker;
    cout<<"of " << std::setprecision(preci) << aker_dekt << " / " << std::setprecision(preci) << two_aker << " ::== " << std::setprecision(preci) << ro <<"\n";

    long double rwk;
    cout<<"\n";
    rwk=(long double)two_dek / (long double) aker_dek;
    cout<<"of " << std::setprecision(preci) << two_dek << " / " << std::setprecision(preci) << aker_dek << " ::== " << std::setprecision(preci) << rwk <<"\n";
    return 0;
}

int main(int argc,char** argv)
{
    cout<<"enter first number then enter second number then enter a precision\n";
    no=stold(argv[1]);
    nt=stold(argv[2]);
    preci=stoi(argv[3]);
    frct();
    mnop();
    cout<<"\n";
    long double main_no;
    long double main_nt;
    main_no=no;
    main_nt=nt;
    if(fndo==1 || fndw==1){ cout<<"----------FIXING AND GIVING A DECIMAL---------------\n"; }
    if(fndo==1){
                cout<<"First number is only integer no decimal \n";
                no=no/10;
                frct();
                mnop();
                }
    cout<<"\n";
    no=main_no;
    nt=main_nt;
    if(fndw==1){
                cout<<"Second number is only integer no decimal \n";
                nt=nt/10;
                frct();
                mnop();
                }
    cout<<"\n";
    no=main_no;
    nt=main_nt;
    if(fndo==1 && fndw==1){
                cout<<"Both numbers is only integers no decimals \n";
                no=no/10;
                nt=nt/10;
                frct();
                mnop();
                }
    cout<<"\n";
    return 0;
}
