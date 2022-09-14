#include <iostream>

using namespace std;
void petlja(int brojac){
	        
            for(int j = 0; j<brojac; j++){
                if(j%2==0){
                    cout << "*";
                }else{
                    cout << " ";
                }
            }
        
}

void petlja2(int brojac){
	for(int j = 0; j<brojac; j++)
		{
            if(j==0 || j == brojac-1)
			{
                cout << "*";
            }
			else
			{
                cout << " ";
            }
        }
}


 


int main()
{
	 cout <<"enter an even number between 3 and 45" <<endl;
    //unos
    int x;
    cin >> x;
    int brojac = 1;
    int temp = 0;
    
    
    for(int i = 0; i<=x/2; i++){ // od 1 do x
        //cout<<i+1;
        //prvi razmak
        for(int j = 0; j<(x-brojac)/2; j++)
		{
			
            cout << " ";
            
        }


        //piramida 1
		        
        //neparni
        
        if(i%2==0)
		{
            petlja(brojac);
        }
		else
		{
        //parni
        for(int j = 0; j<brojac; j++)
		    {
                cout << "*";
            }
            
        }


        //drugi razmak
        for(int j = 0; j<=(x-brojac); j++)
		{
            cout << " ";
        }


        //piramida 2
        //neparni
        petlja2(brojac);
        
        temp ++;
        brojac+=2;
        cout<<endl;
    }
    temp --;
    
    
    //cout << "------------------" << temp << endl;
    
    
    brojac-=4;
    
    for(int i = temp; i>0; i--)
	    { //od x-1 do 0
        //cout<<i;
        
        for(int j = 0; j<(x-brojac)/2; j++)
		{
            cout << " ";
        }

        //neparni
        if(i%2==1)
		{
           petlja(brojac);
        }
        
		else
		{
        //parni
            for(int j = 0; j<brojac; j++)
			{
                cout << "*";
            }
        }


         //drugi razmak
        for(int j = 0; j<=(x-brojac); j++)
		{
            cout << " ";
        }


        //piramida 2
        //neparni
       petlja2(brojac);


        brojac-=2;
        cout<<endl;
    }

    return 0;
}
