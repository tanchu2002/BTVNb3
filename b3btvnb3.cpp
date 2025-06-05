#include <stdio.h>

int main() {
	int sotien;
	printf("so tien nhap vao: nghin dong");
	scanf("%d", &sotien);

	int sodu;
	int to500=0;
	int to200=0;
	int to100=0;
	int to50=0;
	int to20=0;
	int to10=0;

	if(sotien%10!=0||sotien<=0) {
		printf("so tien khong dung");
	} else {
		if(sotien>=500) {
			to500=sotien/500;
			sodu=sotien%500;
			if(sodu>=200) {
				to200=sodu/200;
				sodu=sodu%200;
			}
			if(sodu>=100) {
				to100=sodu/100;
				sodu=sodu%100;
			}
			if(sodu>=50) {
				to50=sodu/50;
				sodu=sodu%50;
			}
			if(sodu>=20) {
				to20=sodu/20;
				sodu=sodu%20;
			}
			if(sodu>=10) {
				to10=sodu/10;
				sodu=sodu%10;
			}
		} else {
			if(sotien>=200) {
				to200=sotien/200;
				sodu=sotien%200;
				if(sodu>=100) {
					to100=sodu/100;
					sodu=sodu%100;
				}
				if(sodu>=50) {
					to50=sodu/50;
					sodu=sodu%50;
				}
				if(sodu>=20) {
					to20=sodu/20;
					sodu=sodu%20;
				}
				if(sodu>=10) {
					to10=sodu/10;
					sodu=sodu%10;
				}
			} else {
				if(sotien>=100) {
					to100=sotien/100;
					sodu=sotien%100;
					if(sodu>=50) {
						to50=sodu/50;
						sodu=sodu%50;
					}
					if(sodu>=20) {
						to20=sodu/20;
						sodu=sodu%20;
					}
					if(sodu>=10) {
						to10=sodu/10;
						sodu=sodu%10;
					}
				} else {
					if(sotien>=50) {
						to50=sotien/50;
						sodu=sotien%50;
						if(sodu>=20) {
							to20=sodu/20;
							sodu=sodu%20;
						}
						if(sodu>=10) {
							to10=sodu/10;
							sodu=sodu%10;
						}
					} else {
						if(sotien>=20) {
							to20=sotien/20;
							sodu=sotien%20;
							if(sodu>=10) {
								to10=sodu/10;
								sodu=sodu%10;
							}
						} else {
							to10=sotien/10;
						}
					}
				}
			}
		}
	}
	if(to500>0) {
		printf("%d to 500", to500);
	}
	if(to200>0) {
		printf("%d to 200", to200);
	}
	if(to100>0) {
		printf("%d to 100", to100);
	}
	if(to50>0) {
		printf("%d to 50", to50);
	}
	if(to20>0) {
		printf("%d to 20", to20);
	}
	if(to10>0) {
		printf("%d to 10", to10);
	}
}

