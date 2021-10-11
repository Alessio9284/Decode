#include "base.h"
#include "menu.h"

int main()
{
	int scelta;
	
	do
	{
		scelta = opzioni();
		
		switch(scelta)
		{
			case 1:
			{
				cout<<"Il risultato in decimale vale: "<<all_to_dec()<<endl;
				system("pause");
				break;
			}
			case 2:
			{
				cout<<"Il risultato nella base scelta vale: "<<dec_to_all()<<endl;
				system("pause");
				break;
			}
		}
	}
	while(scelta > 0);
	
	return 0;
}
