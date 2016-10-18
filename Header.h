class R
{
private:
	CPU _cpu;
	GPU _gpu;
	RAM _ram;
	HDD _hdd;
	PSU _psu;
	FAN _fan;
public:
	R(){};

	~R(){};
};

struct CPU
{
	float _freq;			//Processor frequence [MHz]
	float _cpu;				//Central Processing Unit[%]
};

struct GPU
{
	float _gpu;				//Graphics Processing Unit[%]
	float _temp;			//Temperatures['c]
};

struct RAM
{
	float _u;				//RAM utilization[MB]
	int _u2;				//RAM utilization[%]
};

struct HDD
{
	float _u;				//Hard Disc Drive[GB]
	float _temp;			//Temperatures['c]
	float _s_record;		//Speed of record
	float _s_read;			//Speed of reading
};

struct PSU
{
	float _v;				//Power Supply Unit, voltage[V]
	float _c;				//Capacity[mWh]
};

struct FAN
{
	float _fan;				//Fan speed[%]
};

class OffP					//Monitoring offline processor
{
private:

public:
	OffP(){};

	~OffP(){};
};

struct offp					//One offline processor
{
	float _cp;				//    utilization[%]
	float _u1;				//RAM utilization[MB]
	float _u2;				//RAM utilization[%]
	string _info;			//Description(information)
	string _ver;			//Varified signer
};

class OnP					//Monitoring offline proc
{
private:
	float f;
public:
	OnP(){};

	~OnP(){};
};

class H						//History
{
private:

public:
	H(){};

	~H(){};
};


class S						//Statistic
{
private:

public:
	S(){};

	~S(){};
};
