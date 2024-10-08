static const char norm_fg[] = "#d9d2c6";
static const char norm_bg[] = "#100701";
static const char norm_border[] = "#97938a";

static const char sel_fg[] = "#d9d2c6";
static const char sel_bg[] = "#716953";
static const char sel_border[] = "#d9d2c6";

static const char urg_fg[] = "#d9d2c6";
static const char urg_bg[] = "#66604C";
static const char urg_border[] = "#66604C";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
