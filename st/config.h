/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    /* 8 normal colors */
    [0] = "#282828", /* hard contrast: #1d2021 / soft contrast: #32302f */
    [1] = "#cc241d", /* red     */
    [2] = "#98971a", /* green   */
    [3] = "#d79921", /* yellow  */
    [4] = "#458588", /* blue    */
    [5] = "#b16286", /* magenta */
    [6] = "#689d6a", /* cyan    */
    [7] = "#a89984", /* white   */

    /* 8 bright colors */
    [8]  = "#928374", /* black   */
    [9]  = "#fb4934", /* red     */
    [10] = "#b8bb26", /* green   */
    [11] = "#fabd2f", /* yellow  */
    [12] = "#83a598", /* blue    */
    [13] = "#d3869b", /* magenta */
    [14] = "#8ec07c", /* cyan    */
    [15] = "#ebdbb2", /* white   */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 15;
unsigned int defaultbg = 0;
unsigned int defaultcs = 15;
static unsigned int defaultrcs = 257;

/*
 * Default shape of cursor
 * 2: Block ("█")
 * 4: Underline ("_")
 * 6: Bar ("|")
 * 7: Snowman ("☃")
 */
static unsigned int cursorshape = 2;

/*
 * Default columns and rows numbers
 */

static unsigned int cols = 80;
static unsigned int rows = 24;

/*
 * Default colour and shape of the mouse cursor
 */
static unsigned int mouseshape = XC_xterm;
static unsigned int mousefg = 7;
static unsigned int mousebg = 0;

/*
 * Color used to display font attributes when fontconfig selected a font which
 * doesn't match the ones requested.
 */
static unsigned int defaultattr = 11;

