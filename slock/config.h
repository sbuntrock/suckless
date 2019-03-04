/* user and group to drop privileges to */
static const char *user  = "seth";
static const char *group = "seth";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#272822",     /* after initialization */
	[INPUT] =  "#66d9ef",   /* during input */
	[FAILED] = "#f92672",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
