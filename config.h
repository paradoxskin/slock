/* number of final access background */
#define final_num 1

/* user and group to drop privileges to */
static const char *user  = "slock";
static const char *group = "slock";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
/* Background image path, should be available to the user above */
static const char* background_image[NUMCOLS + final_num] = {
	"/usr/share/pixmaps/slock_wp/0.png",
	"/usr/share/pixmaps/slock_wp/1.png",
	"/usr/share/pixmaps/slock_wp/2.png",
	"/usr/share/pixmaps/slock_wp/love.png",
};
