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
	// 8 normal colors
  "#3b4252", /* 0. black   base00 */
  "#bf616a", /* 1. red     base0B */
  "#a3be8c", /* 2. green   base0E */
  "#ebcb8b", /* 3. yellow  base0D */
  "#81a1c1", /* 4. blue    base0A */
  "#b48ead", /* 5. magenta base0C */
  "#88c0d0", /* 6. cyan    base08 */
  "#e5e9f0", /* 7. white   base05 */

	// 8 bright colors
  "#4c566a", /* 0. black   base03 */
  "#bf616a", /* 1. red     base09 */
  "#a3be8c", /* 2. green   base01 */
  "#ebcb8b", /* 3. yellow  base02 */
  "#81a1c1", /* 4. blue    base04 */
  "#b48ead", /* 5. magenta base06 */
  "#8fbcbb", /* 6. cyan    base0F */
  "#eceff4", /* 7. white   base07 */

  [255] = 0,
  "#2e3440",
  "#d8dee9",
};

/*
* Default colors (colorname index)
* foreground, background, cursor, reverse
* cursor
*/
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 257;
static unsigned int defaultrcs = 256;
