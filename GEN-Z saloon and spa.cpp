#include<iostream>
using namespace std;

void mainOption();
void hair();
void finalHair(double  discApp);
void finalRoot(double discApp);
void finalFullcolor(double discApp);
void finalHairtreatment(double discApp);
void skin();
void finalCleansing(double discApp);
void finalFacial(double discApp);
void finalHydra(double discApp);
void nails();
void finalManicure(double discApp);
void finalAcrylic(double discApp);
void finalNailpolish(double discApp);
void bodyCare();
void finalfullBody(double discApp);
void finalWaxing(double discApp);
void finalThreading(double discApp);
void makeUp();
void finalPartymakeup(double discApp);
void finalBridalmakeup(double discApp); 


void mainOption()
{
	int option;
	cout<<"Select Your Choice : ";
	cin>>option;
	
	if(option==1)
	{
		cout<<"Select"<<endl;
		cout<<"\t1.Hair Cut----------------------------2000/-"<<endl;
		cout<<"\t2.Root Touch-Up-----------------------7000/-"<<endl;
		cout<<"\t3.Full Color--------------------------15000/-"<<endl;
		cout<<"\t4.Hair Treatment(Keratin/Botox)-------25000/-"<<endl;
		
		hair();
		
		
	}
	else if(option==2)
	{
		cout<<"Select"<<endl;
		cout<<"\t1.Basic Cleansing/Whitening Facial------3000/-"<<endl;
		cout<<"\t2.Premium Facial(Janseen/Thalgo)--------10000/-"<<endl;
		cout<<"\t3.Hydra/Korean Glass Facial-------------15000/-"<<endl;
		
		skin();
	}
	else if(option==3)
	{
		cout<<"Select"<<endl;
		cout<<"\t1.Standard Manicure & Pedicure-----------3000/-"<<endl;
		cout<<"\t2.Acrylic/Gel Nail Extension-------------3000/-"<<endl;
		cout<<"\t3.Nail Polish Application----------------600/-"<<endl;
		
		nails();
		
	}
	else if(option==4)
	{
		cout<<"Select"<<endl;
		cout<<"\t1.Full Body Massage(60 min)-------------7000/-"<<endl;
		cout<<"\t2.Full Body Waxing(Honey/Rica)----------8000/-"<<endl;
		cout<<"\t3.Threading(Eyebrows/Upper lips)--------200/-"<<endl;
	}
	else if(option==5)
	{
		cout<<"Select"<<endl;
		cout<<"\t1.Party MakeUp(Senior Artist)----------20000/-"<<endl;
		cout<<"\t2.Bridal MakeUp------------------------60000/-"<<endl;
		
	    makeUp();
		
	}
	else
	{
		cout<<"Invalid Choice"<<endl;
		
		mainOption();
	}
}



void hair()
{
	int option;
	cout<<"Select Your Choice : ";
	cin>>option;
	
	if(option==1)
	{
		cout<<"Your choice : Hair Cut"<<endl;
		cout<<"Your Charges : 2000/-"<<endl;
		
		double discApp=0;
		
		char discount;
		cout<<"Do you Want a Discount (Y/N) ?";
		cin>>discount;
		
		if(discount== 'y' || discount== 'Y')
		{
			int discountCoupon;
			cout<<"Enter your Discount Coupon (8-Digits) :";
			cin>>discountCoupon;
			
			if(discountCoupon==12345678)
			{
				discApp=0.25;
				cout<<"Discount = 25%"<<endl;
			}
			else if(discountCoupon==23456789)
			{
				discApp=0.50;
				cout<<"Discount = 50%"<<endl;
			}
			else if(discountCoupon==34567890)
			{
				discApp=0.75;
				cout<<"Discount = 75%"<<endl;
			}
			else
			{
				cout<<"Invalid Coupon Number"<<endl;
			
			}
			
			finalHair( discApp );
		}
		else
		{
			cout<<"Your Charges : 2000/-"<<endl;
		}
		
	}
	else if(option==2)
	{
		cout<<"Your choice : Root Touch-Up"<<endl;
		cout<<"Your Charges : 7000/-"<<endl;
		
		double discApp=0;
		
		char discount;
		cout<<"Do you Want a Discount (Y/N) ?";
		cin>>discount;
		
		if(discount== 'y' || discount== 'Y')
		{
			int discountCoupon;
			cout<<"Enter your Discount Coupon (8-Digits) :";
			cin>>discountCoupon;
			
			if(discountCoupon==12345678)
			{
				discApp=0.25;
				cout<<"Discount = 25%"<<endl;
			}
			else if(discountCoupon==23456789)
			{
				discApp=0.50;
				cout<<"Discount = 50%"<<endl;
			}
			else if(discountCoupon==34567890)
			{
				discApp=0.75;
				cout<<"Discount = 75%"<<endl;
			}
			else
			{
				cout<<"Invalid Coupon Number"<<endl;
			
			}
			finalRoot( discApp);
		}
		else
		{
			cout<<"Your charges : 7000/-"<<endl;
		}
		
		
	}
	else if(option==3)
	{
		cout<<"Your choice : Full Color"<<endl;
		cout<<"Your Charges : 15000/-"<<endl;
		
		double discApp=0;
		
		char discount;
		cout<<"Do you Want a Discount (Y/N) ?";
		cin>>discount;
		
		if(discount== 'y' || discount== 'Y')
		{
			int discountCoupon;
			cout<<"Enter your Discount Coupon (8-Digits) :";
			cin>>discountCoupon;
			
			if(discountCoupon==12345678)
			{
				discApp=0.25;
				cout<<"Discount = 25%"<<endl;
			}
			else if(discountCoupon==23456789)
			{
				discApp=0.50;
				cout<<"Discount = 50%"<<endl;
			}
			else if(discountCoupon==34567890)
			{
				discApp=0.75;
				cout<<"Discount = 75%"<<endl;
			}
			else
			{
				cout<<"Invalid Coupon Number"<<endl;
			
			}
			finalFullcolor( discApp);
		}
		else
		{
			cout<<"Your charges : 15000/-"<<endl;
		}
		
		
	}
	else if(option==4)
	{
		cout<<"Your choice : Hair treatment(Keratin/Botox)"<<endl;
		cout<<"Your Charges : 25000/-"<<endl;
		
		double discApp=0;
		
		char discount;
		cout<<"Do you Want a Discount (Y/N) ?";
		cin>>discount;
		
		if(discount== 'y' || discount== 'Y')
		{
			int discountCoupon;
			cout<<"Enter your Discount Coupon (8-Digits) :";
			cin>>discountCoupon;
			
			if(discountCoupon==12345678)
			{
				discApp=0.25;
				cout<<"Discount = 25%"<<endl;
			}
			else if(discountCoupon==23456789)
			{
				discApp=0.50;
				cout<<"Discount = 50%"<<endl;
			}
			else if(discountCoupon==34567890)
			{
				discApp=0.75;
				cout<<"Discount = 75%"<<endl;
			}
			else
			{
				cout<<"Invalid Coupon Number"<<endl;
			
			}
			finalHairtreatment( discApp);
		}
		else
		{
			cout<<"Your charges : 25000/-"<<endl;
		}
		
		
	}
	else
	{
		cout<<"Invalid Choice"<<endl;
	}

}
void finalHair( double discApp)
{
	int sum=2000-(2000*discApp);
	cout<<"Your Charges : "<<sum<<endl;
	
}
void finalRoot(double discApp)
{
	int sum=7000-(7000*discApp);
	cout<<"Your Charges : "<<sum<<endl;
}
void finalFullcolor(double discApp)
{
	int sum=15000-(15000*discApp);
	cout<<"Your Charges : "<<sum<<endl;
}
void finalHairtreatment(double discApp)
{
	
	int sum=25000-(25000*discApp);
	cout<<"Your Charges : "<<sum<<endl;
}



void skin()
{
	int option;
	cout<<"Select Your Choice : ";
	cin>>option;
	
	if(option==1)
	{
		cout<<"Your choice : Basic Cleansing/Whitening Facial"<<endl;
		cout<<"Your Charges : 3000/-"<<endl;
		
		double discApp=0;
		
		char discount;
		cout<<"Do you Want a Discount (Y/N) ?";
		cin>>discount;
		
		if(discount== 'y' || discount== 'Y')
		{
			int discountCoupon;
			cout<<"Enter your Discount Coupon (8-Digits) :";
			cin>>discountCoupon;
			
			if(discountCoupon==12345678)
			{
				discApp=0.25;
				cout<<"Discount = 25%"<<endl;
			}
			else if(discountCoupon==23456789)
			{
				discApp=0.50;
				cout<<"Discount = 50%"<<endl;
			}
			else if(discountCoupon==34567890)
			{
				discApp=0.75;
				cout<<"Discount = 75%"<<endl;
			}
			else
			{
				cout<<"Invalid Coupon Number"<<endl;
			
			}
			
			finalCleansing( discApp );
		}
		else
		{
			cout<<"Your Charges : 3000/-"<<endl;
		}
	}
	else if(option==2)
	{
		cout<<"Your choice : Premium Facial(Janseen/Thalgo)"<<endl;
		cout<<"Your Charges : 10000/-"<<endl;
		
		double discApp=0;
		
		char discount;
		cout<<"Do you Want a Discount (Y/N) ?";
		cin>>discount;
		
		if(discount== 'y' || discount== 'Y')
		{
			int discountCoupon;
			cout<<"Enter your Discount Coupon (8-Digits) :";
			cin>>discountCoupon;
			
			if(discountCoupon==12345678)
			{
				discApp=0.25;
				cout<<"Discount = 25%"<<endl;
			}
			else if(discountCoupon==23456789)
			{
				discApp=0.50;
				cout<<"Discount = 50%"<<endl;
			}
			else if(discountCoupon==34567890)
			{
				discApp=0.75;
				cout<<"Discount = 75%"<<endl;
			}
			else
			{
				cout<<"Invalid Coupon Number"<<endl;
			
			}
			
			finalFacial( discApp );
		}
		else
		{
			cout<<"Your Charges : 10000/-"<<endl;
		}
	}
	else if(option==3)
	{
		cout<<"Your choice : Hydra/Korean Glass Facial"<<endl;
		cout<<"Your Charges : 15000/-"<<endl;
		
		double discApp=0;
		
		char discount;
		cout<<"Do you Want a Discount (Y/N) ?";
		cin>>discount;
		
		if(discount== 'y' || discount== 'Y')
		{
			int discountCoupon;
			cout<<"Enter your Discount Coupon (8-Digits) :";
			cin>>discountCoupon;
			
			if(discountCoupon==12345678)
			{
				discApp=0.25;
				cout<<"Discount = 25%"<<endl;
			}
			else if(discountCoupon==23456789)
			{
				discApp=0.50;
				cout<<"Discount = 50%"<<endl;
			}
			else if(discountCoupon==34567890)
			{
				discApp=0.75;
				cout<<"Discount = 75%"<<endl;
			}
			else
			{
				cout<<"Invalid Coupon Number"<<endl;
			
			}
			
			finalHydra( discApp );
		}
		else
		{
			cout<<"Your Charges : 10000/-"<<endl;
		}
	}
	else
	{
		cout<<"Invalid Choice"<<endl;
	}

}
void finalCleansing(double discApp )
{
	int sum=3000-(3000*discApp);
	cout<<"Your Charges : "<<sum<<endl;
}
void finalFacial(double discApp)
{
	int sum=10000-(10000*discApp);
	cout<<"Your Charges : "<<sum<<endl;
}
void finalHydra(double discApp )
{
	int sum=15000-(15000*discApp);
	cout<<"Your Charges : "<<sum<<endl;
}



void nails()
{
	int option;
	cout<<"Select Your Choice : ";
	cin>>option;
	
	if(option==1)
	{
		cout<<"Your choice : Standard Manicure & Pedicure"<<endl;
		cout<<"Your Charges : 3000/-"<<endl;
		
		double discApp=0;
		
		char discount;
		cout<<"Do you Want a Discount (Y/N) ?";
		cin>>discount;
		
		if(discount== 'y' || discount== 'Y')
		{
			int discountCoupon;
			cout<<"Enter your Discount Coupon (8-Digits) :";
			cin>>discountCoupon;
			
			if(discountCoupon==12345678)
			{
				discApp=0.25;
				cout<<"Discount = 25%"<<endl;
			}
			else if(discountCoupon==23456789)
			{
				discApp=0.50;
				cout<<"Discount = 50%"<<endl;
			}
			else if(discountCoupon==34567890)
			{
				discApp=0.75;
				cout<<"Discount = 75%"<<endl;
			}
			else
			{
				cout<<"Invalid Coupon Number"<<endl;
			
			}
			
			finalManicure( discApp );
		}
		else
		{
			cout<<"Your Charges : 3000/-"<<endl;
		}
	}
	else if(option==2)
	{
		cout<<"Your choice : Acrylic/Gel Nail Extension"<<endl;
		cout<<"Your Charges : 3000/-"<<endl;
		
		double discApp=0;
		
		char discount;
		cout<<"Do you Want a Discount (Y/N) ?";
		cin>>discount;
		
		if(discount== 'y' || discount== 'Y')
		{
			int discountCoupon;
			cout<<"Enter your Discount Coupon (8-Digits) :";
			cin>>discountCoupon;
			
			if(discountCoupon==12345678)
			{
				discApp=0.25;
				cout<<"Discount = 25%"<<endl;
			}
			else if(discountCoupon==23456789)
			{
				discApp=0.50;
				cout<<"Discount = 50%"<<endl;
			}
			else if(discountCoupon==34567890)
			{
				discApp=0.75;
				cout<<"Discount = 75%"<<endl;
			}
			else
			{
				cout<<"Invalid Coupon Number"<<endl;
			
			}
			
			finalAcrylic( discApp );
		}
		else
		{
			cout<<"Your Charges : 3000/-"<<endl;
		}
		
	}
	else if(option==3)
	{
		cout<<"Your choice : Nail Polish Application"<<endl;
		cout<<"Your Charges : 600/-"<<endl;
		
		double discApp=0;
		
		char discount;
		cout<<"Do you Want a Discount (Y/N) ?";
		cin>>discount;
		
		if(discount== 'y' || discount== 'Y')
		{
			int discountCoupon;
			cout<<"Enter your Discount Coupon (8-Digits) :";
			cin>>discountCoupon;
			
			if(discountCoupon==12345678)
			{
				discApp=0.25;
				cout<<"Discount = 25%"<<endl;
			}
			else if(discountCoupon==23456789)
			{
				discApp=0.50;
				cout<<"Discount = 50%"<<endl;
			}
			else if(discountCoupon==34567890)
			{
				discApp=0.75;
				cout<<"Discount = 75%"<<endl;
			}
			else
			{
				cout<<"Invalid Coupon Number"<<endl;
			
			}
			
			finalNailpolish( discApp );
		}
		else
		{
			cout<<"Your Charges : 600/-"<<endl;
		}
	}
	else
	{
	cout<<"Invalid Choice"<<endl;	
	}

}
void finalManicure(double discApp )
{
	int sum=3000-(3000*discApp);
	cout<<"Your Charges : "<<sum<<endl;
}
void finalAcrylic(double discApp )
{
	int sum=3000-(3000*discApp);
	cout<<"Your Charges : "<<sum<<endl;
}
void finalNailpolish(double discApp )
{
	int sum=600-(600*discApp);
	cout<<"Your Charges : "<<sum<<endl;
}



void bodyCare()
{
	int option;
	cout<<"Select Your Choice : ";
	cin>>option;
	
	if(option==1)
	{
		cout<<"Your choice : Full Body Massage(60 min)"<<endl;
		cout<<"Your Charges : 7000/-"<<endl;
		
		double discApp=0;
		
		char discount;
		cout<<"Do you Want a Discount (Y/N) ?";
		cin>>discount;
		
		if(discount== 'y' || discount== 'Y')
		{
			int discountCoupon;
			cout<<"Enter your Discount Coupon (8-Digits) :";
			cin>>discountCoupon;
			
			if(discountCoupon==12345678)
			{
				discApp=0.25;
				cout<<"Discount = 25%"<<endl;
			}
			else if(discountCoupon==23456789)
			{
				discApp=0.50;
				cout<<"Discount = 50%"<<endl;
			}
			else if(discountCoupon==34567890)
			{
				discApp=0.75;
				cout<<"Discount = 75%"<<endl;
			}
			else
			{
				cout<<"Invalid Coupon Number"<<endl;
			
			}
			
			finalfullBody( discApp );
		}
		else
		{
			cout<<"Your Charges : 7000/-"<<endl;
		}
	}
	else if(option==2)
	{
		cout<<"Your choice : Full Body Waxing(Honey/Rica)"<<endl;
		cout<<"Your Charges : 8000/-"<<endl;
		
		double discApp=0;
		
		char discount;
		cout<<"Do you Want a Discount (Y/N) ?";
		cin>>discount;
		
		if(discount== 'y' || discount== 'Y')
		{
			int discountCoupon;
			cout<<"Enter your Discount Coupon (8-Digits) :";
			cin>>discountCoupon;
			
			if(discountCoupon==12345678)
			{
				discApp=0.25;
				cout<<"Discount = 25%"<<endl;
			}
			else if(discountCoupon==23456789)
			{
				discApp=0.50;
				cout<<"Discount = 50%"<<endl;
			}
			else if(discountCoupon==34567890)
			{
				discApp=0.75;
				cout<<"Discount = 75%"<<endl;
			}
			else
			{
				cout<<"Invalid Coupon Number"<<endl;
			
			}
			
			finalWaxing( discApp );
		}
		else
		{
			cout<<"Your Charges : 8000/-"<<endl;
		}
		
	}
	else if(option==3)
	{
		cout<<"Your choice : Threading(Eyebrows/Upper lips)"<<endl;
		cout<<"Your Charges : 200/-"<<endl;
		
		double discApp=0;
		
		char discount;
		cout<<"Do you Want a Discount (Y/N) ?";
		cin>>discount;
		
		if(discount== 'y' || discount== 'Y')
		{
			int discountCoupon;
			cout<<"Enter your Discount Coupon (8-Digits) :";
			cin>>discountCoupon;
			
			if(discountCoupon==12345678)
			{
				discApp=0.25;
				cout<<"Discount = 25%"<<endl;
			}
			else if(discountCoupon==23456789)
			{
				discApp=0.50;
				cout<<"Discount = 50%"<<endl;
			}
			else if(discountCoupon==34567890)
			{
				discApp=0.75;
				cout<<"Discount = 75%"<<endl;
			}
			else
			{
				cout<<"Invalid Coupon Number"<<endl;
			
			}
			
			finalThreading( discApp );
		}
		else
		{
			cout<<"Your Charges : 200/-"<<endl;
		}
	}
	else
	{
	cout<<"Invalid Choice"<<endl;	
	}

}
void finalfullBody(double discApp)
{
	int sum=7000-(7000*discApp);
	cout<<"Your Charges : "<<sum<<endl;
}
void finalWaxing(double discApp)
{
	int sum=8000-(8000*discApp);
	cout<<"Your Charges : "<<sum<<endl;
}
void finalThreading(double discApp)
{
	int sum=200-(200*discApp);
	cout<<"Your Charges : "<<sum<<endl;
}



void makeUp()
{
	int option;
	cout<<"Select Your Choice : ";
	cin>>option;
	
	if(option==1)
	{
		cout<<"Your choice : Party MakeUp(Senior Artist)"<<endl;
		cout<<"Your Charges : 20000/-"<<endl;
		
		double discApp=0;
		
		char discount;
		cout<<"Do you Want a Discount (Y/N) ?";
		cin>>discount;
		
		if(discount== 'y' || discount== 'Y')
		{
			int discountCoupon;
			cout<<"Enter your Discount Coupon (8-Digits) :";
			cin>>discountCoupon;
			
			if(discountCoupon==12345678)
			{
				discApp=0.25;
				cout<<"Discount = 25%"<<endl;
			}
			else if(discountCoupon==23456789)
			{
				discApp=0.50;
				cout<<"Discount = 50%"<<endl;
			}
			else if(discountCoupon==34567890)
			{
				discApp=0.75;
				cout<<"Discount = 75%"<<endl;
			}
			else
			{
				cout<<"Invalid Coupon Number"<<endl;
			
			}
			
			finalPartymakeup( discApp );
		}
		else
		{
			cout<<"Your Charges : 20000/-"<<endl;
		}
	}
	else if(option==2)
	{
		cout<<"Your choice : Bridal MakeUp"<<endl;
		cout<<"Your Charges : 60000/-"<<endl;
		
		double discApp=0;
		
		char discount;
		cout<<"Do you Want a Discount (Y/N) ?";
		cin>>discount;
		
		if(discount== 'y' || discount== 'Y')
		{
			int discountCoupon;
			cout<<"Enter your Discount Coupon (8-Digits) :";
			cin>>discountCoupon;
			
			if(discountCoupon==12345678)
			{
				discApp=0.25;
				cout<<"Discount = 25%"<<endl;
			}
			else if(discountCoupon==23456789)
			{
				discApp=0.50;
				cout<<"Discount = 50%"<<endl;
			}
			else if(discountCoupon==34567890)
			{
				discApp=0.75;
				cout<<"Discount = 75%"<<endl;
			}
			else
			{
				cout<<"Invalid Coupon Number"<<endl;
			
			}
			
			finalBridalmakeup( discApp );
		}
		else
		{
			cout<<"Your Charges : 60000/-"<<endl;
		}
		
	}
	else
	{
	cout<<"Invalid Choice"<<endl;	
	}

}
void finalPartymakeup(double discApp)
{
	int sum=20000-(20000*discApp);
	cout<<"Your Charges : "<<sum<<endl;
}
void finalBridalmakeup(double discApp)
{
	int sum=60000-(60000*discApp);
	cout<<"Your Charges : "<<sum<<endl;
}


int main()
{
	cout<<"\t\t GEN-Z SALOON AND SPA"<<endl;
	cout<<"\t\t Welcome to GEN-Z SALOON AND SPA"<<endl;
	
	string name;
	cout<<"\t Enter your name : ";
	cin>>name;
	double contact;
	cout<<"\t Enter your contact number : ";
	cin>>contact;
	
	
	cout<<"Choose Your Services "<<endl;
	cout<<"1. Hair Care"<<endl;
	cout<<"2. Skin Care"<<endl;
	cout<<"3. Nails"<<endl;
	cout<<"4. Body Care"<<endl;
	cout<<"5. MakeUp"<<endl;
	
	mainOption();
	
	
	return 0;
}
