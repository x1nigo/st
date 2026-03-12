/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#1d2021",
	"#a52a2a",
	"#cd853f",
	"#f4a460",
	"#875737",
	"#d2691e",
	"#d2b48c",
	"#ebdbb2",

	/* 8 bright colors */
	"#282828",
	"#a52a2a",
	"#cd853f",
	"#f4a460",
	"#875737",
	"#d2691e",
	"#d2b48c",
	"#ebdbb2",
	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#1d2021", /* default bg  */
	"#ebdbb2", /* default fg  */
	"#ebdbb2", /* default cs  */
	"#282828", /* default rcs */
};
