/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar                       = 1;            /* -b  option; if 0, dmenu appears at bottom     */
static int centered                     = 1;            /* -c option; centers dmenu on screen */
static int min_width                    = 500;          /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=15"
};
static const char *prompt               = NULL;         /* -p  option; prompt to the left of input field */
static const char col_bg[]              = "#3c3836";    // Grey 
static const char col_fg[]              = "#ebdbb2";    // White
static const char col_sel[]             = "#458588";    // Blue
static const char col_tag[]             = "#98971a";    // Green
static const char *colors[SchemeLast][2] = {
	/*                    fg          bg       */
	[SchemeNorm]    = { col_fg,     col_bg  },
	[SchemeSel]     = { col_tag,    col_sel },
	[SchemeOut]     = { col_fg,     col_bg  },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 7;
static unsigned int columns    = 3;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 1;
