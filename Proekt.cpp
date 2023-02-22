#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

struct Komputer
{	
	string ana_lovhesinin_istehsal_kompaniyasi;
	string ana_lovhesinin_modeli;
	string ana_lovhesinin_soketi;
	int ana_lovhenin_ram_slot_sayi;
	int ana_lovhenin_M2_SSD_slot_sayi;
	float ana_lovhenin_qiymeti;
	string prosessorun_istehsal_kompaniyasi;
	string prosessorun_modeli;
	int prosessorun_fizki_nuvelerinin_sayi;
	int prosessorun_mentiqi_nuvelerinin_sayi;
	bool prosessorun_inteq_edilmis_GPUsu_varmi;
	float prossesorun_max_takt_tezliyi;
	bool prosessorun_overclock_oluna_bilmesi;
	int prosessorun_TDPsi;
	float prosessorun_kesi;
	float prosessorun_qiymeti;
	string ekran_kartinin_istehsal_kompaniyasi;
	string ekran_kartinin_modeli;
	bool ekran_kartinin_RTX_funksiyasinin_olmasi;
	int ekran_kartinin_Vrami;
	float ekran_kartinin_qiymeti;
	string RAM_cubugunun_modeli;
	float RAMin_bir_cubugunun_qiymeti;
	int RAMin_tutumu;
	int RAM_cubuglarinin_sayi;
	int RAMin_takt_tezliyi;
	string sert_diskin_modeli;
	float sert_diskin_tutumu;
	int sert_diskin_sayi;
	int sert_diskin_sureti;
	float sert_diskin_qiymeti;
	string SSDnin_istehsalcisinin_adi;
	float SSDnin_tutumu;
	int SSDnin_sayi;
	float SSDnin_qiymeti;
	string qida_blokunun_modeli;
	int qida_blokunun_gucu;
	bool qida_blokunun_modul_olub_olmamasi;
	string qida_blokunun_FIEsi;
	float qida_blokunun_qiymeti;
	string kullerin_istehsal_kompaniyasi;
	string kullerin_modeli;
	string kullere_uygun_firma;
	int kullerin_soyutma_gucu;
	float kullerin_qimeti;
	string keysin_istehsal_kompaniyasi;
	string keysin_modelinin_adi;
	string keysin_formati;
	float keysin_qiymeti;
};



int main()
{
	int n,i;
	bool uygunluq=false;
	bool uygunluq1=false;
	bool uygunluq2=false;
	bool uygunluq3=false;
	string prosessor,prosessor_mod,ana_lovhe,ana_lovhe_mod,ekran_karti,ekran_karti_mod,ram,hdd,ssd,kuller,kuller_mod,keys,keys_mod,psu_mod,psu_fie;
	float ram_tutumu,ram_sayi,hdd_tutumu,ssd_tutumu,psu_gucu,ssd_say,hdd_say;
	float q_processor,q_analovhe,q_ekrankarti,q_ram,q_hdd,q_ssd,q_psu,q_kuller,q_keys;
	int x,x1,x2,y1;
	y1=01;
	x=167;
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(color, 11); //color 11 mavi rengin nomresidir
    cout<<"                           TitanComp"<<(char)x<<" magazasinin komputer konfiquratoruna xos gelmisiniz!"<<"\n\n";
    SetConsoleTextAttribute(color, 2);//color 2 yasil rengin nomresidir
	cout<<" Yigilacaq komputerlerin sayini daxil edin: "<<endl<<" >>>"<<"  ";
	cin>>n;
	cout<<"\n\n";
	cout<<"------------------------------------------{Komputerin konfiquratoru}-----------------------------------------------"<<"\n\n";
	Komputer comp[n];
	
	
			//1-ci hisse:Komputerin komponentlerinin ve onlarin xarakteristikalarinin daxil edilmesi
	
		for(i=0;i<n;i++)
		{	
		//Prosessorun adi ve xarakteristikalarini daxil edirik
			cout<<"1)Prosessor-CPU"<<endl;
			cout<<"  1.1)Prosesorun istehsalci kompaniyasinin adini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].prosessorun_istehsal_kompaniyasi;
			prosessor=comp[i].prosessorun_istehsal_kompaniyasi;
			cout<<"  1.2)Prosesorun modelini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].prosessorun_modeli;
			prosessor_mod=comp[i].prosessorun_modeli;	
			cout<<"  1.3)Prosessorun qiymetinin daxil edin (Azn):"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].prosessorun_qiymeti;
			q_processor=comp[i].prosessorun_qiymeti;
			cout<<"  1.4)Prosesorun fiziki nuvelerinin sayini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].prosessorun_fizki_nuvelerinin_sayi;
			cout<<"  1.5)Prosesorun mentqi nuvelerinin sayini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].prosessorun_mentiqi_nuvelerinin_sayi;	
			cout<<"  1.6)Prosesorun inteqrasiya olunmus videoqrafikasi varmi?"<<endl<<"  (varsa 1 yoxsa 0 ile cavablandrin)"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].prosessorun_inteq_edilmis_GPUsu_varmi;
			cout<<"  1.7)Prosessorun maksimum takt tezliyini daxil edin(Ghz):"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].prossesorun_max_takt_tezliyi;
			cout<<"  1.8)Prossesor overclock oluna bilermi?"<<endl<<"  (Eger oluna bilerse 1, bilmezse 0 ile cavablandirin)"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].prosessorun_overclock_oluna_bilmesi;
			cout<<"  1.9)Prosessorun TDP-sini (istilik paketini) daxil edin(W):"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].prosessorun_TDPsi;
			cout<<"  1.10)Prosessorun L3 kesinin tutumunu daxil edin(Mb):"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].prosessorun_kesi;
		//Ana lovhenin modelinin adini ve xarakteristikalarinin daxil edirik 
			cout<<"2)Ana lovhe-Mother Board"<<endl;		
			cout<<"  2.1)Ana lovhenin istehsalci kompaniyasinin adini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].ana_lovhesinin_istehsal_kompaniyasi; 
			ana_lovhe=comp[i].ana_lovhesinin_istehsal_kompaniyasi;	
			cout<<"  2.2)Ana lovhenin modelini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].ana_lovhesinin_modeli;
			ana_lovhe_mod=comp[i].ana_lovhesinin_modeli;
		//Uygunluq serti veririk
			string a,p;
				while(uygunluq!=true)
				{
				cout<<"  2.3)Ana lovhenin soketini daxil edin:"<<endl<<"  >>>"<<"  ";
				cin>>comp[i].ana_lovhesinin_soketi;
				a=comp[i].ana_lovhesinin_soketi;
				p=comp[i].prosessorun_istehsal_kompaniyasi;
				if(a.substr(0,3)=="LGA" && p!="Intel")
					{
						SetConsoleTextAttribute(color, 4);//Color 4 qirmizi regdin kodudur
						cout<<"  Diqqet!Soketi Intel proessorlari ucun olan ana lovheye AMD kompaniyasinin prosessorlari qoyula bilmez."<<endl;
						cout<<"  Xahis edirik ana lovheni Am prefiksli sokete malik ana plata goturesiniz!"<<endl;
						SetConsoleTextAttribute(color, 2);
						cout<<"  >>>"<<"  ";
						cin>>comp[i].ana_lovhesinin_soketi;
						break;
					}
				else
					uygunluq=true;
				}
					
			cout<<"  2.4)Ana lovhenin RAM slotlarinin sayini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].ana_lovhenin_ram_slot_sayi;
			cout<<"  2.5)Ana lovhenin M.2 SSD slotlarinin sayini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].ana_lovhenin_M2_SSD_slot_sayi;
			cout<<"  2.6)Ana lovhenin qiymetini daxil edin(Azn):"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].ana_lovhenin_qiymeti;
			q_analovhe=comp[i].ana_lovhenin_qiymeti;
		//Ekran kartinin kompaniyasinin adini,modelinin adinin,xarakteristika ve qiymetini daxil edirik
			cout<<"3)Ekran karti-Graphic Card"<<endl;
			cout<<"  3.1)Ekran kartinin istehsalci kompaniyasinin adinin daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].ekran_kartinin_istehsal_kompaniyasi;
			ekran_karti=comp[i].ekran_kartinin_istehsal_kompaniyasi;
			cout<<"  3.2)Ekran kartinin modelini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].ekran_kartinin_modeli;
			ekran_karti_mod=comp[i].ekran_kartinin_modeli;
			cout<<"  3.3)Ekran kartinin RTX funksiyasi varmi?"<<endl<<"  (eger varsa 1 ile cavab verin, yoxsa 0 ile)"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].ekran_kartinin_RTX_funksiyasinin_olmasi;
		//Uygunluq-1 serti veririk
			int v,c;
			while(uygunluq1!=true)
				{
				cout<<"  3.4)Ekran kartinin VRAM-nin miqdarini daxil edin(Gb):"<<endl<<"  >>>"<<"  ";
				cin>>comp[i].ekran_kartinin_Vrami;
				v=comp[i].ekran_kartinin_Vrami;
				c=comp[i].prosessorun_fizki_nuvelerinin_sayi;
				if(v<=c)
					{
						SetConsoleTextAttribute(color, 4);
						cout<<"  Diqqet!Ekran kartinin VRAM-i prosssorun nuve sayindan az olmasi komputerin gosterici balansini pozur."<<endl;
						cout<<"  Daha cox VRAM-a malik ekran karti goturmeyiniz tovsiyye olunur"<<endl;
						SetConsoleTextAttribute(color, 2);
						cout<<"  >>>"<<"  ";
						cin>>comp[i].ekran_kartinin_Vrami;
						break;
					}
				else
					uygunluq1=true;
				}
			cout<<"  3.5)Ekran kartinin qiymetinin daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].ekran_kartinin_qiymeti;
			q_ekrankarti=comp[i].ekran_kartinin_qiymeti;
		//Operativ yaddasin modelinin adini,sayini ve xarakteristikalarini daxil edirik
			cout<<"4)Operativ yaddas-RAM"<<endl;
			cout<<"  4.1)Operativ yaddasin modelini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].RAM_cubugunun_modeli;
			ram=comp[i].RAM_cubugunun_modeli;
			cout<<"  4.2)Operativ yaddasin bir cubugunun tutumunu daxil edin(Gb):"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].RAMin_tutumu;
			ram_tutumu=comp[i].RAMin_tutumu;
			cout<<"  4.3)Operativ yaddasin cubuglarinin sayini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].RAM_cubuglarinin_sayi;
			ram_sayi=comp[i].RAM_cubuglarinin_sayi;
			cout<<"  4.4)Operativ yaddasin takt tezliyini daxil edin(Mhz):"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].RAMin_takt_tezliyi;
			cout<<"  4.5)Oerativ yaddasin bir cubugunun qiymetinin daxil edin(Azn):"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].RAMin_bir_cubugunun_qiymeti;
			q_ram=comp[i].RAMin_bir_cubugunun_qiymeti; 
		//Sert diskin qiymeti ve tutumunu daxil edirik
			cout<<"5)Sert disk-HDD(Hard disc drive)"<<endl;
			cout<<"  5.1)Sert diskin modelinin adini daxil din:"<<endl<<"  >>"<<"  ";
			cin>>comp[i].sert_diskin_modeli;
			hdd=comp[i].sert_diskin_modeli;
			cout<<"  5.2)Sert diskin tutumunun daxil edin(Tb):"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].sert_diskin_tutumu;
			hdd_tutumu=comp[i].sert_diskin_tutumu;
			cout<<"  5.3)Sert diskin sayini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].sert_diskin_sayi;
			hdd_say=comp[i].sert_diskin_sayi;
			cout<<"  5.4)Sert diskin suretini daxil edin(Rpm):"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].sert_diskin_sureti;
			cout<<"  5.5)Sert diskin qiymetinin daxil edin(Azn):"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].sert_diskin_qiymeti;
			q_hdd=comp[i].sert_diskin_qiymeti;
		//SSD nin modelinin adini,tutumunu ve qiymetinin daxil edirik
			cout<<"6)SSD-Solid state drive"<<endl;
			cout<<"  6.1)SSD-nin modelinin adini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].SSDnin_istehsalcisinin_adi;
			ssd=comp[i].SSDnin_istehsalcisinin_adi;
			cout<<"  6.2)SSD-nin tutumnu daxil edin(Gb):"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].SSDnin_tutumu;
			ssd_tutumu=comp[i].SSDnin_tutumu;
			cout<<"  6.3)SSD-nin sayini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].SSDnin_sayi;
			ssd_say=comp[i].SSDnin_sayi;
			cout<<"  6.4)SSD-nin qiymetini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].SSDnin_qiymeti;
			q_ssd=comp[i].SSDnin_qiymeti;
		//Qida blokunun modelinin adini,gucunu,FIE-ni,qiymetini daxil edirik
			cout<<"7)Qida bloku-PSU(Power supply unit)"<<endl;
			cout<<"  7.1)Qida blokunun modelinin daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].qida_blokunun_modeli;
			psu_mod=comp[i].qida_blokunun_modeli;
			cout<<"  7.2)Qida blokunun gucunu daxil edin(W):"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].qida_blokunun_gucu; 
			psu_gucu=comp[i].qida_blokunun_gucu;
			cout<<"  7.3)Qida blokunun FIE-si daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].qida_blokunun_FIEsi;
			cout<<"  7.4)Qida blokunu moduldurmu?"<<endl<<"  (Eger modludursa 1, deyilse 0 ile cavablandirin)"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].qida_blokunun_modul_olub_olmamasi;
			cout<<"  7.5)Qida blokunun qiymetini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].qida_blokunun_qiymeti;
			q_psu=comp[i].qida_blokunun_qiymeti;
		//Kullerin modelinin istilik goturme qabiliyetini, soketini ve qiymetinin daxil edirik
			cout<<"8)Kuller-CPU Cooler"<<endl;
			cout<<"  8.1)Kulleri istehsal eden kompaniyani daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].kullerin_istehsal_kompaniyasi;
			kuller=comp[i].kullerin_istehsal_kompaniyasi;
			cout<<"  8.2)Kullerin modelini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].kullerin_modeli;
			kuller_mod=comp[i].kullerin_modeli;
		//Uygunluq-2 serti veririk
			string KulProc,ProcFirm;
				while(uygunluq3!=true)
				{
				cout<<"  8.3)Kullerin uygun geldiyi prossesor daxil edin:"<<endl<<"  >>>"<<"  ";
				cin>>comp[i].kullere_uygun_firma;
				KulProc=comp[i].kullere_uygun_firma;
				ProcFirm=comp[i].prosessorun_istehsal_kompaniyasi;
				if(ProcFirm=="AMD" && KulProc!="AMD")
					{
						SetConsoleTextAttribute(color, 4);//Color 4 qirmizi regdin kodudur
						cout<<"  Diqqet!Intel proessorlari ucun olan kulleri AMD kompaniyasinin prosessorlarina qoyula bilmez."<<endl;
						cout<<"  Xahis edirik AMD kompaniyasi ucun nezerde tutulmus kuller goturesiniz!"<<endl;
						SetConsoleTextAttribute(color, 2);
						cout<<"  >>>"<<"  ";
						cin>>comp[i].kullere_uygun_firma;
						break;
					}
				else
					uygunluq3=true;
				}
		//Uygunluq-3 serti veririk
			int tdp,tdp1;
			while(uygunluq2!=true)
				{
				cout<<"  8.4)Kullerin soyutma gucunu daxil edin(W):"<<endl<<"  >>>"<<"  ";
				cin>>comp[i].kullerin_soyutma_gucu;
				tdp=comp[i].prosessorun_TDPsi;
				tdp1=comp[i].kullerin_soyutma_gucu;
				if(tdp>=tdp1)
					{
						SetConsoleTextAttribute(color, 4);
						cout<<"  Diqqet!Secdiyiniz kullerin soyutma gucu secilen prossesor ucun cox zeifdir!"<<endl;
						cout<<"  Kullerin duzgun secilmemesi prossesorun trotlinqine ve tamamile islememesine sebeb ola biler"<<endl;
						cout<<"  Xahis olunur soyutmaq gucu daha cox olan kuller secin"<<endl;
						SetConsoleTextAttribute(color, 2);
						cout<<"  >>>"<<"  ";
						cin>>comp[i].kullerin_soyutma_gucu;
						break;
					}
				else
					uygunluq2=true;
				}
			cout<<"  Kullerin qiymetini daxil edin"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].kullerin_qimeti;
			q_kuller=comp[i].kullerin_qimeti;
		//Keysin moedelini ve formatinin daxil edirik
			cout<<"9)Keys-Case"<<endl;
			cout<<"  9.1)Keysi istehsal eden kompaniyanin adinin daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].keysin_istehsal_kompaniyasi;
			keys=comp[i].keysin_istehsal_kompaniyasi;
			cout<<"  9.2)Keysin modelinin adini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].keysin_modelinin_adi;
			keys_mod=comp[i].keysin_modelinin_adi;
			cout<<"  9.3)Keysin formatini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].keysin_formati;
			cout<<"  9.4)Keysin qiymetini daxil edin:"<<endl<<"  >>>"<<"  ";
			cin>>comp[i].keysin_qiymeti;
			q_keys=comp[i].keysin_qiymeti;
			
			
			system("cls");	
		}	
			//2-cu hisse:Cek in cixarisa verilmesi
			
			cout<<"--------------------------------------{Yigdigilan komputerin konfiqurasiyasi }------------------------------------------";
			
			Sleep(1000);
			cout<<"Hesablanir..."<<endl;
			int z1,z2,z3,z4;
			bool cavab;
			float qiymet;
			qiymet=q_processor+q_analovhe+q_ekrankarti+q_ram*ram_sayi+q_hdd*hdd_say+q_ssd*ssd_say+q_psu+q_kuller+q_keys;
			z1=201;
			z2=188;
			z3=187;
			z4=186;
			Sleep(3000);
			
			cout<<"====================================="<<(char)z3<<endl;
			cout<<(char)z1<<"                                    "<<(char)z4<<"\n"<<"  Prosessor   -"<<prosessor<<" "<<prosessor_mod<<"     "<<(char)z4<<endl<<"           "<<(char)z2<<"                         "<<(char)z4<<endl;
			cout<<"====================================="<<(char)z2<<endl;
			
			cout<<"====================================="<<(char)z3<<endl;
			cout<<(char)z1<<"                                    "<<(char)z4<<"\n"<<"  Ana lovhe   -"<<ana_lovhe<<" "<<ana_lovhe_mod<<"   "<<(char)z4<<endl<<"            "<<(char)z2<<"                        "<<(char)z4<<endl;
			cout<<"====================================="<<(char)z2<<endl;
			
			cout<<"====================================="<<(char)z3<<endl;
			cout<<(char)z1<<"                                    "<<(char)z4<<"\n"<<"  Ekran karti   -"<<ekran_karti<<"  "<<ekran_karti_mod<<" "<<(char)z4<<endl<<"             "<<(char)z2<<"                       "<<(char)z4<<endl;
			cout<<"====================================="<<(char)z2<<endl;
			
			cout<<"============================================"<<(char)z3<<endl;
			cout<<(char)z1<<"                                           "<<(char)z4<<"\n"<<"  Operativ yaddas   -"<<ram<<" "<<ram_tutumu<<"Gb"<<" x"<<ram_sayi<<(char)z4<<endl<<"                  "<<(char)z2<<"                         "<<(char)z4<<endl;
			cout<<"============================================"<<(char)z2<<endl;
			
			cout<<"====================================="<<(char)z3<<endl;
			cout<<(char)z1<<"                                    "<<(char)z4<<"\n"<<"  Sert disk   -"<<hdd<<" "<<hdd_tutumu<<"Tb"<<" "<<(char)z4<<endl<<"            "<<(char)z2<<"                        "<<(char)z4<<endl;
			cout<<"====================================="<<(char)z2<<endl;
			
			cout<<"====================================="<<(char)z3<<endl;
			cout<<(char)z1<<"                                    "<<(char)z4<<"\n"<<"  SSD   -"<<ssd<<" "<<ssd_tutumu<<"Gb"<<"  "<<(char)z4<<endl<<"      "<<(char)z2<<"                              "<<(char)z4<<endl;
			cout<<"====================================="<<(char)z2<<endl;
			
			cout<<"================================================"<<(char)z3<<endl;
			cout<<(char)z1<<"                                               "<<(char)z4<<"\n"<<"  Qida bloku   -"<<" "<<psu_mod<<"      "<<(char)z4<<endl<<"            "<<(char)z2<<"  "<<psu_gucu<<"W"<<"                             "<<(char)z4<<endl<<"                "<<"                                "<<(char)z4<<endl;
			cout<<"================================================"<<(char)z2<<endl;
			
			cout<<"====================================="<<(char)z3<<endl;
			cout<<(char)z1<<"                                    "<<(char)z4<<"\n"<<"  Kuller   -"<<kuller<<" "<<kuller_mod<<"        "<<(char)z4<<endl<<"         "<<(char)z2<<"                           "<<(char)z4<<endl;
			cout<<"====================================="<<(char)z2<<endl;
			
			cout<<"====================================="<<(char)z3<<endl;
			cout<<(char)z1<<"                                    "<<(char)z4<<"\n"<<"  Keys   -"<<keys<<" "<<keys_mod<<" "<<(char)z4<<endl<<"      "<<(char)z2<<"                              "<<(char)z4<<endl;
			cout<<"====================================="<<(char)z2<<endl;
			
			
			
			
			//Qiymet
			
			cout<<"  Sizin yigdiginiz komputerin qiymeti:"<<qiymet<<"AZN dir"<<endl;
			SetConsoleTextAttribute(color, 11);
			cout<<"  Diqqet!Eger komponentleri ayriliqda yox tam bir yigma formasinda alsaniz qiymet 20% daha ucuz cixacaqdir"<<endl;
			cout<<"  Komponentleri ayriliqda almaq isyeseniz 0, tam yigma formasinda almaq isteseniz 1 daxil edin:"<<endl<<"  >>>"<<" ";
			SetConsoleTextAttribute(color, 2);
			cin>>cavab;
			if (cavab==1)
			{
				qiymet=qiymet*0.8;
				cout<<"  Umumi:"<<qiymet<<"AZN"<<"\n\n\n";
			}
			else
				cout<<"  Umumi:"<<qiymet<<"AZN"<<"\n\n\n";
			
			
			//Son
			SetConsoleTextAttribute(color, 11);	//color 11 mavi rengin nomresidir
				cout<<"    Bizi secdiyiniz ucun Cox Sagolun!!!"<<(char)y1<<"                                             TitanComp"<<(char)x;
				
				
				SetConsoleTextAttribute(color, 0);

}











