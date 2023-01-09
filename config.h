/* number of final access background */
#define final_num 1

/* user and group to drop privileges to */
static const char *user  = "paradoxd";
static const char *group = "paradoxd";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
/* Background image path, should be available to the user above */
static const char* background_image[NUMCOLS + final_num] = {
	"/home/paradoxd/Pictures/.wife/0.png",
	"/home/paradoxd/Pictures/.wife/1.png",
	"/home/paradoxd/Pictures/.wife/2.png",
	"/home/paradoxd/Pictures/.wife/l4.png",
};
