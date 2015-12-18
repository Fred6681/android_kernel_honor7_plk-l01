/* This file should be auto-generated by tool, please don't manully modify it.*/

static struct single_row_lut sony_2000_fcc_temp = {
	.x		= {-20, -10, 0, 25, 40, 60},
	.y		= {1971, 2018, 1998, 2036, 2028, 2015},
	.cols	= 6
};

static struct single_row_lut sony_2000_fcc_sf = {
	.x		= {0, 100, 200, 300, 400, 500},
	.y		= {100, 96, 94, 92, 90, 88},
	.cols	= 6
};

static struct sf_lut sony_2000_pc_sf = {
	.rows		= 1,
	.cols		= 1,
	.row_entries		= {0},
	.percent	= {100},
	.sf			= {
				{100}
	}
};

static struct sf_lut sony_2000_rbatt_sf = {
        .rows           = 28,
        .cols           = 6,
        /* row_entries are temperature */
        .row_entries            = {-20, -10, 0, 25, 40, 60},
        .percent        = {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
        .sf                     = {
					{2097,	946, 396,	131,	100,	89},
					{2085,	945, 397,	132,	100,	89},
					{2073,	946, 398,	134,	101,	89},
					{2048,	943, 412,	139,	104,	91},
					{2011,	935, 429,	147,	108,	93},
					{1976,	909, 437,	157,	114,	96},
					{1958,	898, 418,	171,	122,	100},
					{1950,	890, 398,	183,	133,	106},
					{1954,	891, 389,	169,	132,	110},
					{1973,	898, 390,	140,	109,	95},
					{2023,	918, 400,	133,	103,	91},
					{2100,	944, 411,	135,	104,	91},
					{2195,	994, 423,	139,	107,	93},
					{2316,	1056, 442,	146,	111,	96},
					{2477,	1126, 468,	147,	110,	96},
					{2679,	1213, 498,	141,	105,	91},
					{2978,	1330, 531,	140,	105,	92},
					{3416,	1563, 583,	144,	106,	92},
					{4355,	1840, 541,	148,	109,	95},
					{4892,	1993, 547,	149,	109,	96},
					{5316,	2201, 577,	151,	110,	95},
					{5843,	2469, 623,	153,	110,	96},
					{6529,	2890, 686,	157,	111,	96},
					{7413,	3413, 797,	158,	110,	94},
					{8594,	4221, 930,	167,	112,	96},
					{10254,	5561, 1132,	179,	117,	100},
					{12686,	9374, 1770,	195,	124,	103},
					{17045,	15187, 3792,	247,	141,	111}
					}
};

static struct pc_temp_ocv_lut sony_2000_pc_temp_ocv = {
	.rows		= 29,
	.cols		= 6,
	.temp		= {-20, -10, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.ocv		= {
				{4338,	4333,	4334,	4330,	4313,	4306},
				{4220,	4236,	4237,	4242,	4238,	4233},
				{4150,	4173,	4178,	4183,	4179,	4175},
				{4089,	4115,	4124,	4128,	4126,	4122},
				{4031,	4059,	4072,	4078,	4075,	4072},
				{3977,	4003,	4021,	4030,	4029,	4026},
				{3930,	3955,	3970,	3986,	3986,	3984},
				{3888,	3912,	3925,	3945,	3946,	3946},
				{3851,	3874,	3887,	3903,	3905,	3906},
				{3817,	3841,	3855,	3863,	3864,	3864},
				{3789,	3814,	3828,	3835,	3836,	3834},
				{3766,	3791,	3805,	3813,	3814,	3813},
				{3747,	3774,	3786,	3796,	3797,	3795},
				{3730,	3760,	3772,	3781,	3783,	3780},
				{3714,	3746,	3762,	3767,	3766,	3760},
				{3698,	3729,	3749,	3749,	3744,	3733},
				{3680,	3704,	3731,	3729,	3724,	3711},
				{3658,	3672,	3700,	3703,	3698,	3686},
				{3629,	3641,	3662,	3672,	3669,	3659},
				{3621,	3631,	3654,	3668,	3666,	3655},
				{3611,	3620,	3647,	3662,	3661,	3651},
				{3599,	3607,	3638,	3655,	3654,	3644},
				{3585,	3593,	3628,	3642,	3641,	3630},
				{3569,	3572,	3613,	3618,	3615,	3601},
				{3551,	3542,	3589,	3576,	3572,	3558},
				{3529,	3493,	3543,	3519,	3516,	3504},
				{3501,	3421,	3470,	3446,	3445,	3435},
				{3466,	3324,	3377,	3347,	3348,	3342},
				{3200,	3200,	3200,	3200,	3200,	3200}
			}
};

struct hisi_smartstar_coul_battery_data sony_2000_battery_data = {
		.id_voltage_min = 1400,
		.id_voltage_max = 1800,
		.fcc			= 2000,
		.fcc_temp_lut		= &sony_2000_fcc_temp,
		.fcc_sf_lut		= &sony_2000_fcc_sf,
		.pc_temp_ocv_lut	= &sony_2000_pc_temp_ocv,
		.pc_sf_lut		= &sony_2000_pc_sf,
		.rbatt_sf_lut		= &sony_2000_rbatt_sf,
		.default_rbatt_mohm        = 114,
    	.max_currentmA = 1000,
        .max_voltagemV = 4352,
        .max_cin_currentmA = 1200,
        .terminal_currentmA = 100,
        .charge_in_temp_5 = 3,
        .charge_in_temp_10 = 3,
        .batt_brand = "Sony",
};

