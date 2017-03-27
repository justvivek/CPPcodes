class date{
	private:
		int yr,mnth,day;
		
	public:
		date(int y,int m,int d);
		void setdate(int y,int m,int d);
		int getyr() const;
		int getmnth() const;
		int getday() const;
};

void printdate(const date &dt);

