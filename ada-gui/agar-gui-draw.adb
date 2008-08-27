package body agar.gui.draw is

  procedure box_rounded
    (widget : agar.gui.widget.widget_access_t;
     rect   : agar.gui.rect.rect_t;
     z      : natural;
     radius : natural;
     color  : agar.core.types.uint32_t) is
  begin
    box_rounded
      (widget => widget,
       rect   => rect,
       z      => c.int (z),
       radius => c.int (radius),
       color  => color);
  end box_rounded;

  procedure box_rounded_top
    (widget : agar.gui.widget.widget_access_t;
     rect   : agar.gui.rect.rect_t;
     z      : natural;
     radius : natural;
     color  : agar.core.types.uint32_t) is
  begin
    box_rounded_top
      (widget => widget,
       rect   => rect,
       z      => c.int (z),
       radius => c.int (radius),
       color  => color);
  end box_rounded_top;

  procedure circle
    (widget : agar.gui.widget.widget_access_t;
     x      : natural;
     y      : natural;
     radius : natural;
     color  : agar.core.types.uint32_t) is
  begin
    circle
      (widget => widget,
       x      => c.int (x),
       y      => c.int (y),
       radius => c.int (radius),
       color  => color);
  end circle;

  procedure circle2
    (widget : agar.gui.widget.widget_access_t;
     x      : natural;
     y      : natural;
     radius : natural;
     color  : agar.core.types.uint32_t) is
  begin
    circle2
      (widget => widget,
       x      => c.int (x),
       y      => c.int (y),
       radius => c.int (radius),
       color  => color);
  end circle2;

  procedure line
    (widget : agar.gui.widget.widget_access_t;
     x1     : natural;
     y1     : natural;
     x2     : natural;
     y2     : natural;
     color  : agar.core.types.uint32_t) is
  begin
    line
      (widget => widget,
       x1     => c.int (x1),
       y1     => c.int (y1),
       x2     => c.int (x2),
       y2     => c.int (y2),
       color  => color);
  end line;

  procedure line_horizontal
    (widget : agar.gui.widget.widget_access_t;
     x1     : natural;
     x2     : natural;
     y      : natural;
     color  : agar.core.types.uint32_t) is
  begin
    line_horizontal
      (widget => widget,
       x1     => c.int (x1),
       x2     => c.int (x2),
       y      => c.int (y),
       color  => color);
  end line_horizontal;

  procedure line_vertical
    (widget : agar.gui.widget.widget_access_t;
     x      : natural;
     y1     : natural;
     y2     : natural;
     color  : agar.core.types.uint32_t) is
  begin
    line_vertical
      (widget => widget,
       x      => c.int (x),
       y1     => c.int (y1),
       y2     => c.int (y2),
       color  => color);
  end line_vertical;

end agar.gui.draw;
