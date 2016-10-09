class System
{
private:
	float proc_freq;			//Processor frequence [MHz]
	int proc_cpu;				//Central Processing Unit[%]
	int video_gpu;				//Graphics Processing Unit[%]
	float video_temp;			//Temperatures['c]
	float ram_u;				//RAM utilization[MB]
	int ram_u2;					//RAM utilization[%]
	float hdd_u;				//Hard Disc Drive[GB]
	float hdd_temp;				//Temperatures['c]
	float hdd_s_record;			//Speed of record
	float hdd_s_read;			//Speed of reading
	float psu_v;				//Power Supply Unit voltage[V]
	float psu_c;				//Capacity[mWh]
	int fan;					//Fan speed[%]
public:
	System(){};
	
	~System(){};
};
