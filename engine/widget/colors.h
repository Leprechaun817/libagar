/*	$Csoft: colors.h,v 1.8 2005/08/22 02:08:18 vedge Exp $	*/
/*	Public domain	*/

#ifndef _AGAR_WIDGET_COLORS_H_
#define _AGAR_WIDGET_COLORS_H_
#include "begin_code.h"

enum {
	BG_COLOR,
	FRAME_COLOR,
	TEXT_COLOR,
	WINDOW_BG_COLOR,
	WINDOW_HI_COLOR,
	WINDOW_LO_COLOR,
	TITLEBAR_FOCUSED_COLOR,
	TITLEBAR_UNFOCUSED_COLOR,
	TITLEBAR_CAPTION_COLOR,
	BUTTON_COLOR,
	BUTTON_TXT_COLOR,
	BUTTON_DIS_COLOR,
	CHECKBOX_COLOR,
	CHECKBOX_TXT_COLOR,
	GRAPH_BG_COLOR,
	GRAPH_XAXIS_COLOR,
	HSVPAL_CIRCLE_COLOR,
	HSVPAL_TILE1_COLOR,
	HSVPAL_TILE2_COLOR,
	MENU_UNSEL_COLOR,
	MENU_SEL_COLOR,
	MENU_OPTION_COLOR,
	MENU_TXT_COLOR,
	MENU_SEP1_COLOR,
	MENU_SEP2_COLOR,
	NOTEBOOK_BG_COLOR,
	NOTEBOOK_SEL_COLOR,
	NOTEBOOK_TXT_COLOR,
	RADIO_SEL_COLOR,
	RADIO_OVER_COLOR,
	RADIO_HI_COLOR,
	RADIO_LO_COLOR,
	RADIO_TXT_COLOR,
	SCROLLBAR_COLOR,
	SCROLLBAR_BTN_COLOR,
	SEPARATOR_LINE1_COLOR,
	SEPARATOR_LINE2_COLOR,
	TABLEVIEW_COLOR,
	TABLEVIEW_HEAD_COLOR,
	TABLEVIEW_HTXT_COLOR,
	TABLEVIEW_CTXT_COLOR,
	TABLEVIEW_LINE_COLOR,
	TABLEVIEW_SEL_COLOR,
	TEXTBOX_RW_COLOR,
	TEXTBOX_RO_COLOR,
	TEXTBOX_TXT_COLOR,
	TEXTBOX_CURSOR_COLOR,
	TLIST_TXT_COLOR,
	TLIST_BG_COLOR,
	TLIST_LINE_COLOR,
	TLIST_SEL_COLOR,
	MAPVIEW_GRID_COLOR,
	MAPVIEW_CURSOR_COLOR,
	MAPVIEW_TILE1_COLOR,
	MAPVIEW_TILE2_COLOR,
	MAPVIEW_MSEL_COLOR,
	MAPVIEW_ESEL_COLOR,
	TILEVIEW_TILE1_COLOR,
	TILEVIEW_TILE2_COLOR,
	TILEVIEW_TEXTBG_COLOR,
	TILEVIEW_TEXT_COLOR,
	TRANSPARENT_COLOR,
	HSVPAL_BAR1_COLOR,
	HSVPAL_BAR2_COLOR,
	PANE_COLOR,
	PANE_CIRCLE_COLOR,
	MAPVIEW_RSEL_COLOR,
	MAPVIEW_ORIGIN_COLOR,
	FOCUS_COLOR,
	LAST_COLOR
};

extern Uint32 agColors[LAST_COLOR];
extern Uint32 agColorsBorder[];
extern int agColorsBorderSize;
extern const char *agColorNames[];

#define AG_COLOR(idx) agColors[idx]

__BEGIN_DECLS
void AG_ColorsInit(void);
void AG_ColorsDestroy(void);
void AG_ColorsLoad(AG_Netbuf *);
void AG_ColorsSave(AG_Netbuf *);
__END_DECLS

#include "close_code.h"
#endif	/* _AGAR_WIDGET_COLORS_H_ */
