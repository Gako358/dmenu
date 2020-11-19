/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar               = 1;                      /* -b  option; if 0, dmenu appears at bottom */
#if FUZZYMATCH_PATCH
static int fuzzy                = 1;                       /* -F  option; if 0, dmenu doesn't use fuzzy matching */
#endif // FUZZYMATCH_PATCH
#if CENTER_PATCH
static int center               = 1;                      /* -c  option; if 0, dmenu won't be centered on the screen */
static int min_width            = 500;                 /* minimum width when centered */
#endif // CENTER_PATCH
static const char *fonts[]      =
{
	"monospace:size=14"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char col_bg[]     = "#ebdbb2";    // White 
static const char col_fg[]     = "#282828";    // Dark
static const char col_sel[]    = "#83a598";    // Blue
static const char col_tag[]    = "#928374";    // Gray
static const char col_high[]   = "#fb4934";    // Red
static const char *colors[][2] =
{
	/*               fg           bg       */
	[SchemeNorm] = { col_fg,    col_bg  },
	[SchemeSel]  = { col_tag,   col_sel },
	[SchemeOut]  = { col_fg,    col_bg  },
	#if HIGHLIGHT_PATCH || FUZZYHIGHLIGHT_PATCH
	[SchemeSelHighlight]  = { col_fg, col_high  },
	[SchemeNormHighlight] = { col_fg, col_high  },
	#endif // HIGHLIGHT_PATCH | FUZZYHIGHLIGHT_PATCH
};
static unsigned int lines      = 7;
#if GRID_PATCH
static unsigned int columns    = 3;
#endif // GRID_PATCH
#if LINE_HEIGHT_PATCH
static unsigned int lineheight = 0;         /* -h option; minimum height of a menu line     */
#endif // LINE_HEIGHT_PATCH
#if NAVHISTORY_PATCH
static unsigned int maxhist    = 15;
static int histnodup           = 1;	/* if 0, record repeated histories */
#endif // NAVHISTORY_PATCH

static const char worddelimiters[] = " ";

#if BORDER_PATCH
static unsigned int border_width = 1;
#endif // BORDER_PATCH
