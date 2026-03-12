/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#282828",
	"#cc241d",
	"#98971a",
	"#d79921",
	"#458588",
	"#b16286",
	"#689d6a",

	/* 8 bright colors */
	"#a89984",
	"#928374",
	"#fb4934",
	"#b8bb26",
	"#fabd2f",
	"#83a598",
	"#d3869b",
	"#8ec07c",
	"#ebdbb2",
	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#1d2021", /* default bg  */
	"#ebdbb2", /* default fg  */
	"#ebdbb2", /* default cs  */
	"#282828", /* default rcs */
};
