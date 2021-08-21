#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double r,x,y,rbreak;
	while(cin >> r >> x >> y)
    {
        rbreak = sqrt(pow(x,2)+pow(y,2));
        if (rbreak>=r)
        {
            cout<<"miss"<<endl;
        }
        else
        {
            double angle = abs((acos(rbreak/r)));
            double m,asection,atriangle,awanted,aall;
            m = 2*57.2957795*angle/360;
            aall = M_PI * r * r;
            asection = aall * m;
            atriangle = sin(angle) * r * rbreak;
            awanted = asection - atriangle;
            cout.precision(6);
            cout<<fixed<<aall - awanted<<" "<<awanted<<endl;
            angle=0; m=0; aall=0; asection=0; atriangle=0;awanted=0;
        }
    }
    return 0;
}
