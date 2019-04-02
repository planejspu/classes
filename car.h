#ifndef CAR_H
#define CAR_H

class car 
{ 
	private: 
	public: 
		int mpg(int ); 
		void carType() ; 

			 

} ; 

class electric: public car { 

	private: 
		int watts = 123; 
	public: 
		int Twatts(); 
		int Twatts(const int&); 

		int amps = 25; 
		int volts(int); 
		void yell(); 
		electric(int amps); 
		~electric(); 
} ; 

#endif 



