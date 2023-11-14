#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int ngay, thang, nam;
	int ngay_canh, thang_canh, nam_canh;
	cout<<"nhap ngay: ";
	cin>>ngay;
	cout<<"nhap thang: ";
	cin>>thang;
	cout<<"nhap nam: ";
	cin>>nam;
	
	switch(thang){
		case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
		if(ngay==31){
			if(thang==12){
				thang_canh=1;
				ngay_canh=1;
				nam_canh=nam+1;
				cout<<"ngay "<<ngay_canh<<" thang "<<thang_canh<<" nam "<<nam_canh;
			}
			else if(thang>=1 && thang<12){
				thang_canh=thang+1;
				ngay_canh=1;
				nam_canh=nam;
				cout<<"ngay "<<ngay_canh<<" thang "<<thang_canh<<" nam "<<nam_canh;
			}
			else{
				cout<<"ban nhap sai";
			}
				
		}
		else if(ngay<31 && ngay>=1){
			ngay_canh=ngay+1;
			thang_canh=thang;
			nam_canh=nam;
			cout<<"ngay "<<ngay_canh<<" thang "<<thang_canh<<" nam "<<nam_canh;
			}
		break;
		case 4 : case 6 : case 9 : case 11 :
		if(ngay==30){
			thang_canh=thang+1;
			ngay_canh=1;
			nam_canh=nam;
			cout<<"ngay "<<ngay_canh<<" thang "<<thang_canh<<" nam "<<nam_canh;
		}
		else if(ngay<30 && ngay>=1){
				ngay_canh=ngay+1;
				thang_canh=thang;
				nam_canh=nam;
				cout<<"ngay "<<ngay_canh<<" thang "<<thang_canh<<" nam "<<nam_canh;
				}
		else{
			cout<<"ban nhap sai";
		}
		break;
		case 2:
		if(nam%4==0 && nam%100!=0){
			if(ngay==29){
				ngay_canh=1;
				thang_canh=3;
				nam_canh=nam;
				cout<<"ngay "<<ngay_canh<<" thang "<<thang_canh<<" nam "<<nam_canh;
				}
			else if(ngay<29 && ngay>=1){
				ngay_canh=ngay+1;
				thang_canh=thang;
				nam_canh=nam;
				}
			else{
				cout<<"ban nhap sai";
			}
		}
		else{
			if(ngay==28){
				ngay_canh=1;
				thang_canh=3;
				nam_canh=nam;
				cout<<"ngay "<<ngay_canh<<" thang "<<thang_canh<<" nam "<<nam_canh;
				}
			else if(ngay<28 && ngay>=1){
				ngay_canh=ngay+1;
				thang_canh=thang;
				nam_canh=nam;
                cout<<"ngay "<<ngay_canh<<" thang "<<thang_canh<<" nam "<<nam_canh;
                }
            else{
            	cout<<"ban nhap sai";
			}
		}
		break;
		default:
			cout<<"ban nhap sai";
			break;
	}
		
	
	
	return 0;
}