#include <iostream>
using namespace std;
int main (){
string l = "=======================";
string sgl = "~~~~~~~~~~~~~~~~~~~~~~~";
string ptl = "___________Daily__________";
string ptl2 = "_________Monthly & Yearly________";
string ptl3 = "___________Daily__________";

string spacee = " ";
//Template//
string cput = "Cost Per Unit: ";
string mutt = "Mark Up: ";
string sptt = "Selling Price: ";
string pvt = "Projected Volume: ";
string prt = "Projected Revenue: ";
string tt1 = "Total Cost Per Unit: ";
string tt2 = "Total Mark up: ";
string tt3 = "Total Selling price: ";
string tt4 = "Total Projected Volume: ";
string tt5 = "Total Projected Revenue: ";


cout << "How many products" << '\n' << 
"[a] One product " << '\n' << "[b] Two product " << '\n' << "[c] Three product" << '\n';
char pn = ' ';
cin >> pn;
cout << l << '\n';

//Default value//
char aa = 'a';
char bb = 'b';
char cc = 'c';
if (pn ==  cc){
    cout << "Name for Product 1" << endl;
    double nfp1p = 0.0;
    string nfp1 = " ";
    cin >> nfp1;
    cout << "Value of product 1" << endl;
    cin >> nfp1p;
    cout << "How many sold of product 1 per day" << endl;
    int soldp1 = 0;
    cin >> soldp1;
    cout << sgl << endl;
    
    cout << "Name for Product 2" << endl;
    double nfp2p = 0.0;
    string nfp2 = " ";
    cin >> nfp2; 
    cout << "Value of product 2" << endl;
    cin >> nfp2p;
    cout << "How many sold of product 2 per day" << endl;
    int soldp2 = 0;
    cin >> soldp2;        
    cout << sgl << endl;
    
    cout << "Name for Product 3" << endl;
    double nfp3p = 0.0;
    string nfp3= " ";
    cin >> nfp3;
    cout << "Value of product 3" << endl;
    cin >> nfp3p;   
    cout << "How many sold of product 3 per day" << endl;
    int soldp3 = 0;
    cin >> soldp3;    
    cout << l << endl;
     
    cout << "Mark-up percentage" << endl << "%";
    double mupv = 0.0;
    cin >> mupv;
    double mupvc =  mupv / 100;
    cout << mupvc << endl;
    
    //Conversion//
        //For daily rev//
    //Mark up solved//
    int mut1 = nfp1p * mupvc;  
    int mut2 = nfp2p * mupvc;   
    int mut3 = nfp3p * mupvc;    
          
    //Selling price solved//
    int sp1s = nfp1p + mut1;
    int sp2s = nfp2p + mut2;
    int sp3s = nfp3p + mut3;    
     
    //Projected rev solved//
    double prs1 = sp1s *  soldp1;
    double prs2 = sp2s *  soldp2;              
    double prs3 = sp3s *  soldp3;                  
    cout << l << endl;               
                         
        //Print for daily//
     cout << ptl << endl;
     cout << nfp1 << endl;
     cout << cput << nfp1p << endl;
     cout << mutt << mut1 << endl;
     cout << sptt << sp1s << endl;
     cout << pvt << soldp1 << endl;
     cout << prt << prs1 << endl;
     cout << spacee << endl;
     
     cout << nfp2 << endl;
     cout << cput << nfp2p << endl;
     cout << mutt << mut2 << endl;
     cout << sptt << sp2s << endl;
     cout << pvt << soldp2 << endl;
     cout << prt << prs2 << endl;
     cout << spacee << endl;
     
     cout << nfp3 << endl;
     cout << cput << nfp3p << endl;
     cout << mutt << mut3 << endl;
     cout << sptt << sp3s << endl;
     cout << pvt << soldp3 << endl;
     cout << prt << prs3 << endl;
     cout << spacee << endl;
     
     cout << tt1 << nfp1p + nfp2p + nfp3p << endl;
     cout << tt2 << mut1 + mut2 + mut3 << endl;
     cout << tt3 << sp1s + sp2s + sp3s << endl;
     cout << tt4 << soldp1 + soldp2 + soldp3 << endl;
     cout << tt5 << prs1 + prs2 + prs3 << endl;
     
     cout << l << endl;
     
         //For monthly//
         
     //Projected Volume//
     int pjv1 = soldp1 * 30;
     int pjv2 = soldp2 * 30;
     int pjv3 = soldp1 * 30;   
     
     //projected rev//
     int prm1 = sp1s * pjv1;
     int prm2 = sp2s * pjv2:
     int prm3 = sp3s * pjv3;
                         
     cout << "Something"; 
                                                                                       
      
    
       }
    
    
    
    
    
    
    else {
      cout << "Invalid Input" << endl;
        }


	
	
	return 0;
}