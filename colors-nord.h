/*
* base16-nord-theme.h
*
* Base16: (https://github.com/chriskempson/base16)
*
* Authors:
*
* Scheme: arcticicestudio
* Template: Honza Pokorny <me@honza.ca>
*
*/


static const char *colorname[] = {
  "#2e3440", /* 0.  black   base00 */
  "#bf616a", /* 1.  red     base0B */
  "#a3be8c", /* 2.  green   base0E */
  "#ebcb8b", /* 3.  yellow  base0D */
  "#5e81ac", /* 4.  blue    base0A */
  "#d08770", /* 5.  magenta base0C */
  "#88c0d0", /* 6.  cyan    base08 */
  "#e5e9f0", /* 7.  white   base05 */
  "#4c566a", /* base03 */
  "#81a1c1", /* base09 */
  "#3b4252", /* base01 */
  "#434c5e", /* base02 */
  "#d8dee9", /* base04 */
  "#eceff4", /* base06 */
  "#b48ead", /* base0F */
  "#8fbcbb", /* base07 */

  [255] = 0,
  "#cccccc",
  "#555555",
};

/*
* Default colors (colorname index)
* foreground, background, cursor, reverse
* cursor
*/
unsigned int defaultfg = 7;
unsigned int defaultbg = 0;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
