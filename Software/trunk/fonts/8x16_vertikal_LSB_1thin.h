// table of the bits for the 8x16 character set
// each byte hold 8 bits of a row, the upper bit is 1, the bit for the 8th line is 128

#ifdef LCD_CYRILLIC
 #define CHAR_COUNT 0xa0
#else
 #if defined LANG_FRANCAIS 
  // Caracteres accentues francais
  #define a_grave       'a' /* e0 */
  #define a_circ        'a' /* e2 */
  #define a_elig        'a' /* e6 */
  #define c_cedil       'c' /* e7 */
  #define e_acute       'e' /* e9 */
  #define e_circ        'e' /* ea */
  #define e_grave       'e' /* e8 */
  #define e_uml         'e' /* eb */
  #define i_circ        'i' /* ee */
  #define i_uml         'i' /* ef */
  #define o_circ        'o' /* f4 */
  #define o_elig        'o' /* bd */
  #define u_grave       'u' /* f9 */
  #define u_circ        'u' /* fb */
  #define u_uml         'u' /* fc */
  #define y_uml         'y' /* ff */
  #ifdef WITH_CAPITAL_SPECIALS
   #define A_grave       'A' /* e0 */
   #define A_circ        'A' /* e2 */
   #define A_elig        'A' /* e6 */
   #define C_cedil       'C' /* e7 */
   #define E_acute       'E' /* e9 */
   #define E_circ        'E' /* ea */
   #define E_grave       'E' /* e8 */
   #define E_uml         'E' /* eb */
   #define I_circ        'I' /* ee */
   #define I_uml         'I' /* ef */
   #define O_circ        'O' /* f4 */
   #define O_elig        'O' /* bd */
   #define U_grave       'U' /* f9 */
   #define U_circ        'U' /* fb */
   #define U_uml         'U' /* fc */
   #define Y_uml         'Y' /* ff */
   #define CHAR_COUNT  128 /* 0x90 */
  #else
   #define A_grave   a_grave
   #define A_circ    a_circ
   #define A_elig    a_elig
   #define C_cedil   c_cedil
   #define E_acute   e_acute
   #define E_circ    e_circ
   #define E_grave   e_grave
   #define E_uml     e_uml
   #define I_circ    i_circ
   #define I_uml     i_uml
   #define O_circ    o_circ
   #define O_elig    o_elig
   #define U_grave   u_grave
   #define U_circ    u_circ
   #define U_uml     u_uml
   #define CHAR_COUNT    0x80
  #endif
 #elif defined LANG_CZECH || defined LANG_SLOVAK
  #define a_acute       'a' /* e1 */
  #define a_uml         'a' /* e4 */
  #define c_caron       'c' /* e8 */
  #define d_caron       'd' /* ef */
  #define e_acute       'e' /* e9 */
  #define e_caron       'e' /* ec */
  #define i_acute       'i' /* ed */
  #define l_acute       'l' /* e5 */
  #define l_caron       'l' /* b5 */
  #define n_caron       'n' /* f2 */
  #define o_acute       'o' /* f3 */
  #define o_uml         'o' /* f6 */
  #define o_circ        'o' /* f4 */
  #define r_acute       'r' /* e0 */
  #define r_caron       'r' /* f8 */
  #define s_caron       's' /* b9 */
  #define t_caron       't' /* bb */
  #define u_acute       'u' /* fa */
  #define u_uml         'u' /* fc */
  #define u_ring        'u' /* f9 */
  #define y_acute       'y' /* fd */
  #define z_caron       'z' /* b9 */
  #ifdef WITH_CAPITAL_SPECIALS
   #define A_acute       'A' /* c1 */
   #define A_uml         'A' /* c4 */
   #define C_caron       'C' /* c8 */
   #define D_caron       'D' /* cf */
   #define E_acute       'E' /* c9 */
   #define E_caron       'E' /* cc */
   #define I_acute       'I' /* cd */
   #define L_acute       'L' /* c5 */
   #define L_caron       'L' /* a5 */
   #define N_caron       'N' /* d2 */
   #define O_acute       'O' /* d3 */
   #define O_uml         'O' /* d6 */
   #define O_circ        'O' /* d4 */
   #define R_acute       'R' /* c0 */
   #define R_caron       'R' /* d8 */
   #define S_caron       'S' /* a9 */
   #define T_caron       'T' /* ab */
   #define U_acute       'U' /* da */
   #define U_uml         'U' /* dc */
   #define Y_acute       'Y' /* dd */
   #define Z_caron       'Z' /* ae */
   #define CHAR_COUNT  128 // 0x9b
  #else
   #define A_acute       a_acute
   #define A_uml         a_uml
   #define C_caron       c_caron
   #define D_caron       c_caron
   #define E_acute       e_acute
   #define E_caron       e_caron
   #define I_acute       i_acute
   #define L_acute       l_acute
   #define L_caron       l_caron
   #define N_caron       n_caron
   #define O_acute       o_acute
   #define O_uml         o_uml
   #define O_circ        o_circ
   #define R_acute       r_acute
   #define R_caron       r_caron
   #define S_caron       s_caron
   #define T_caron       t_caron
   #define U_acute       u_acute
   #define U_uml         u_uml
   #define Y_acute       y_acute
   #define Z_caron       z_caron
   #define CHAR_COUNT  128  //  0x86
  #endif
 #elif defined LANG_SERBIAN || LANG_CROATIAN || LANG_SLOWENIAN || LANG_BOSNIAN
  #define c_acute       'c'  /* e6 */
  #define c_caron       'c'  /* e8 */
  #define d_eth         'd'  /* f0 */
  #define s_caron       's'  /* b9 */
  #define z_caron       'z'  /* be */
  #define C_acute       'C'  /* c6 */
  #define C_caron       'C'  /* c8 */
  #define D_eth         'D'  /* d0 */
  #define S_caron       'S'  /* a9 */
  #define Z_caron       'Z'  /* ae */
  #define CHAR_COUNT   128 // 0x7f + 1
 #elif defined LANG_POLISH
  #define a_ogon        'a' /* b1  */
  #define c_acute       'c' /* e6  */
  #define e_ogon        'e' /* ea  */
  #define l_stroke      'l' /* b3  */
  #define n_acute       'n' /* f1  */
  #define o_acute       'o' /* f3  */
  #define s_acute       's' /* b6  */
  #define z_acute       'z' /* bc  */
  #define z_dot         'z' /* bf  */
  #define A_ogon        'A' /* a1  */
  #define C_acute       'C' /* c6  */
  #define E_ogon        'E' /* ca  */
  #define L_stroke      'L' /* a3  */
  #define N_acute       'N' /* d1  */
  #define O_acute       'O' /* d3  */
  #define S_acute       'S' /* a6  */
  #define Z_acute       'Z' /* ac  */
  #define Z_dot         'Z' /* ae  */
  #define CHAR_COUNT  128  // 0x82
 #elif defined LANG_GERMAN || defined LANG_ALBANIAN
  #define a_uml         'a' /* e4    */
  #define c_cedil       'c' /* e7    */
  #define e_uml         'e' /* f6    */
  #define o_uml         'o' /* f6    */
  #define s_sharp       's' /* df    */
  #define u_uml         'u' /* fc    */
  #define A_uml         'A' /* c4    */
  #define C_cedil       'C' /* c7    */
  #define E_uml         'E' /* d6    */
  #define O_uml         'O' /* d6    */
  #define U_uml         'U' /* dc    */
  #define CHAR_COUNT 128
 #elif defined LANG_HUNGARIAN
  #define a_acute       'a' /* e1 */
  #define e_acute       'e' /* e9 */
  #define o_acute       'o' /* f3 */
  #define o_doubleAcute 'o' /* f5 */
  #define o_uml         'o' /* f6 */
  #define u_acute       'u' /* fa */
  #define u_doubleAcute 'u' /* fb */
  #define u_uml         'u' /* fc */
  #define A_acute       'A' /* c1 */
  #define E_acute       'E' /* c9 */
  #define O_acute       'O' /* d3 */
  #define O_doubleAcute 'O' /* d5 */
  #define O_uml         'O' /* d6 */
  #define U_acute       'U' /* da */
  #define U_doubleAcute 'U' /* db */
  #define U_uml         'U' /* dc */
  #define CHAR_COUNT   128 // 0x7f + 1
 #elif defined LANG_ROMANIAN  || LANG_DANISH
 /* ----RO-------ISO-8859-2-------- */
  #define a_circ        'a' /* e2 */
  #define a_breve       'a' /* e3 */
  #define i_circ        'i' /* ee */
  #define s_cedil       's' /* ba */
  #define t_cedil       't' /* fe */
  #define A_circ        'A' /* c2 */
  #define A_breve       'A' /* c3 */
  #define I_circ        'I' /* ce */
  #define S_cedil       'S' /* aa */
  #define T_cedil       'T' /* de */
/* ----DK-------ISO-8859-15------- */
  #define a_ring        'a' /* e5 */
  #define a_elig        'a' /* e6 */
  #define o_slash       'o' /* f8 */
  #define A_ring        'A' /* c5 */
  #define A_elig        'A' /* c6 */
  #define O_slash       'O' /* d8 */
  #define CHAR_COUNT   128 // 0x7f + 1
 #else
  #define CHAR_COUNT 128
 #endif
#endif

#define LastChar (CHAR_COUNT - 1)

#if defined(MAIN_C)
const unsigned char PROGMEM font[CHAR_COUNT][(FONT_WIDTH * ((FONT_HEIGHT + 7)/8))]={
{0x80,0xE0,0x20,0x20,0x20,0x20,0xE0,0x80, 0x00,0x03,0x02,0x02,0x02,0x02,0x03,0x00},	/* 0x00 Resistor3  */
{0x80,0xF8,0xF0,0xE0,0xC0,0x80,0xF8,0x80, 0x00,0x0F,0x07,0x03,0x01,0x00,0x0F,0x00},	/* 0x01 Diode1  */
{0x80,0xF8,0x80,0xC0,0xE0,0xF0,0xF8,0x80, 0x00,0x0F,0x00,0x01,0x03,0x07,0x0F,0x00},	/* 0x02 Diode2  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x03  ' ' */
{0x80,0xF8,0xF8,0x00,0x00,0xF8,0xF8,0x80, 0x00,0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00},	/* 0x04 Capacitor  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x05  ' ' */
{0x80,0xF0,0x10,0x10,0x10,0x10,0x10,0x10, 0x00,0x07,0x04,0x04,0x04,0x04,0x04,0x04},	/* 0x06 Resistor2  */
{0x10,0x10,0x10,0x10,0x10,0x10,0xF0,0x80, 0x04,0x04,0x04,0x04,0x04,0x04,0x07,0x00},	/* 0x07 Resistor1  */
{0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x08 Line1 */
{0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x07,0x08,0x08,0x07,0x08,0x08,0x07,0x08},	/* 0x09 Inductor1 */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80, 0x08,0x07,0x08,0x08,0x07,0x08,0x08,0x07},	/* 0x0a Inductor2 */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x0b  ' ' */
{0x00,0xF0,0x08,0x04,0x84,0x48,0x30,0x00, 0x40,0x3F,0x00,0x08,0x10,0x11,0x0E,0x00},	/* 0x0c Beta */
{0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00, 0x19,0x12,0x1E,0x00,0x1E,0x12,0x19,0x00},	/* 0x0d Omega  */
{0x00,0xF8,0x00,0x00,0x00,0xE0,0x20,0x00, 0x40,0x3F,0x08,0x10,0x08,0x1F,0x10,0x00},	/* 0x0e mu  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x0f  Degree */
 #ifdef LANG_CZECH
{0x00,0x90,0x48,0x4A,0x49,0x90,0xE0,0x00, 0x07,0x08,0x10,0x10,0x08,0x04,0x1F,0x00},	/* 0x10,Cz_a       */
{0xE0,0x10,0x09,0x0A,0x09,0x10,0x38,0x00, 0x07,0x08,0x10,0x10,0x10,0x08,0x06,0x00},	/* 0x11,Cz_c       */
{0xE0,0x10,0x08,0x08,0x12,0xFE,0x04,0x03, 0x07,0x08,0x10,0x10,0x08,0x1F,0x10,0x00},	/* 0x12,Cz_d       */
{0xE0,0x90,0x88,0x8A,0x89,0x90,0xE0,0x00, 0x07,0x08,0x10,0x10,0x10,0x08,0x04,0x00},	/* 0x13,Cz_e       */
{0xE0,0x90,0x89,0x8A,0x89,0x90,0xE0,0x00, 0x07,0x08,0x10,0x10,0x10,0x08,0x04,0x00},	/* 0x14,Cz_ee      */
{0x00,0x08,0x08,0xFA,0x01,0x00,0x00,0x00, 0x00,0x10,0x10,0x1F,0x10,0x10,0x00,0x00},	/* 0x15,Cz_i       */
{0x08,0xF8,0x11,0x0A,0x09,0xF0,0x00,0x00, 0x10,0x1F,0x10,0x00,0x10,0x1F,0x10,0x00},	/* 0x16,Cz_n       */
{0xE0,0x10,0x08,0x0A,0x09,0x10,0xE0,0x00, 0x07,0x08,0x10,0x10,0x10,0x08,0x07,0x00},	/* 0x17,Cz_o       */
{0x08,0xF8,0x21,0x12,0x09,0x08,0x70,0x00, 0x10,0x1F,0x10,0x00,0x00,0x00,0x00,0x00},	/* 0x18,Cz_r       */
{0x20,0x50,0x89,0x8A,0x89,0x10,0x38,0x00, 0x06,0x08,0x10,0x10,0x10,0x09,0x06,0x00},	/* 0x19,Cz_s       */
{0x20,0x20,0xFE,0x20,0x24,0x03,0x00,0x00, 0x00,0x00,0x0F,0x10,0x10,0x10,0x0C,0x00},	/* 0x1a,Cz_t       */
{0x08,0xF8,0x08,0x02,0x09,0xF8,0x08,0x00, 0x00,0x0F,0x10,0x10,0x08,0x1F,0x10,0x00},	/* 0x1b,Cz_u       */
{0x08,0xF8,0x0A,0x05,0x0A,0xF8,0x08,0x00, 0x00,0x0F,0x10,0x10,0x08,0x1F,0x10,0x00},	/* 0x1c,Cz_uu      */
{0x08,0xF8,0x08,0x02,0x09,0xF8,0x08,0x00, 0x00,0x27,0x48,0x48,0x44,0x3F,0x00,0x00},	/* 0x1d,Cz_y       */
{0x38,0x08,0x09,0x8A,0x49,0x28,0x18,0x00, 0x1C,0x12,0x11,0x10,0x10,0x10,0x1E,0x00},	/* 0x1e,Cz_z   */
{0x00,0x06,0xC6,0xF3,0x3A,0x0F,0x02,0x00, 0x00,0x03,0x03,0x02,0x02,0x03,0x03,0x00},	/* 0x1f,Cz_Z       */
 #elif defined LANG_FRANCAIS
{0x00,0x90,0x49,0x4B,0x4C,0x90,0xE0,0x00, 0x07,0x08,0x10,0x10,0x08,0x04,0x1F,0x00},	/* 0x10 Fr_a_grave */
{0x00,0x94,0x4A,0x49,0x4A,0x94,0xE0,0x00, 0x07,0x08,0x10,0x10,0x08,0x04,0x1F,0x00},	/* 0x11 Fr_a_circ */
{0xE0,0x90,0x8C,0x8B,0x89,0x90,0xE0,0x00, 0x07,0x08,0x10,0x10,0x10,0x08,0x04,0x00},	/* 0x12 Fr_e_aigu */
{0xE0,0x94,0x8A,0x89,0x8A,0x94,0xE0,0x00, 0x07,0x08,0x10,0x10,0x10,0x08,0x04,0x00},	/* 0x13 Fr_e_circ */
{0xE0,0x90,0x89,0x8B,0x8C,0x90,0xE0,0x00, 0x07,0x08,0x10,0x10,0x10,0x08,0x04,0x00},	/* 0x14 Fr_e_grave */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x15  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x16  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x17  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x18  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x19  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1a  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1b  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1c  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1d  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1e  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1f  */
 #else
{0x08,0xF8,0x08,0x00,0x08,0xF8,0x08,0x00, 0x00,0x01,0x02,0x02,0x11,0x1F,0x10,0x00},	/* 0x10 Cyr_tsch */
{0x08,0xF8,0x08,0xC0,0x08,0xF8,0x08,0x00, 0x10,0x1F,0x10,0x1F,0x10,0x1F,0x10,0x00},	/* 0x11 Cyr_sch */
{0x38,0x08,0xF8,0x88,0x40,0x40,0x80,0x00, 0x10,0x10,0x1F,0x10,0x10,0x08,0x07,0x00},	/* 0x12 Cyr_hh */
{0x08,0xF8,0x88,0x40,0x80,0x00,0xF8,0x00, 0x10,0x1F,0x10,0x10,0x0F,0x00,0x1F,0x00},	/* 0x13 Cyr_y */
{0x08,0xF8,0x88,0x40,0x40,0x80,0x00,0x00, 0x10,0x1F,0x10,0x10,0x10,0x08,0x07,0x00},	/* 0x14 Cyr_ww */
{0x38,0x10,0x08,0xC8,0x88,0x90,0xE0,0x00, 0x06,0x08,0x10,0x11,0x10,0x08,0x07,0x00},	/* 0x15 Cyr_e */
{0x08,0xF8,0x80,0xF0,0x08,0x08,0xF0,0x00, 0x10,0x1F,0x00,0x0F,0x10,0x10,0x0F,0x00},	/* 0x16 Cyr_ju */
{0xE0,0x10,0x08,0x08,0x08,0xF8,0x08,0x00, 0x00,0x11,0x0A,0x06,0x12,0x1F,0x10,0x00},	/* 0x17 Cyr_ja */
{0x00,0x00,0xF8,0x04,0x02,0xFE,0x02,0x00, 0x70,0x18,0x17,0x10,0x10,0x1F,0x70,0x00},	/* 0xe0 Cyr_D       */
{0x02,0xFE,0x02,0x00,0x02,0xFE,0x02,0x00, 0x10,0x1F,0x10,0x10,0x10,0x5F,0x30,0x00},	/* 0xe1 Cyr_C - GR_OFFSET3 */
{0x02,0xFE,0x02,0xF0,0x02,0xFE,0x02,0x00, 0x10,0x1F,0x10,0x1F,0x10,0x5F,0x30,0x00},	/* 0xe2 Cyr_Schtsch */
{0x00,0x00,0xE0,0x10,0x08,0xF8,0x08,0x00, 0x70,0x18,0x17,0x10,0x10,0x1F,0x70,0x00},	/* 0xe3 Cyr_d       */
{0x80,0x40,0x28,0xF8,0x28,0x40,0x80,0x00, 0x07,0x08,0x50,0x7F,0x50,0x08,0x07,0x00},	/* 0xe4 Cyr_f       */
{0x08,0xF8,0x08,0x00,0x08,0xF8,0x08,0x00, 0x10,0x1F,0x10,0x10,0x10,0x5F,0x30,0x00},	/* 0xe5 Cyr_c       */
{0x08,0xF8,0x08,0xC0,0x08,0xF8,0x08,0x00, 0x10,0x1F,0x10,0x1F,0x10,0x5F,0x30,0x00},	/* 0xe6 Cyr_schtsch */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1f  */
 #endif
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x20 ' ' */
{0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x37,0x00,0x00,0x00,0x00},	/* 0x21 '!' */
{0x00,0x16,0x0E,0x00,0x00,0x16,0x0E,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x22 '"' */
{0x00,0x20,0xF8,0x20,0x20,0xF8,0x20,0x00, 0x00,0x02,0x0F,0x02,0x02,0x0F,0x02,0x00},	/* 0x23 '#' */
{0x10,0x28,0x44,0xFE,0x84,0x08,0x10,0x00, 0x03,0x04,0x08,0x1F,0x08,0x05,0x02,0x00},	/* 0x24 '$' */
{0x18,0x24,0x24,0x98,0x40,0x20,0x10,0x00, 0x04,0x02,0x01,0x0C,0x12,0x12,0x0C,0x00},	/* 0x25 '%' */
{0x18,0xA4,0xE2,0xA2,0x12,0x8C,0x80,0x00, 0x07,0x08,0x10,0x10,0x11,0x12,0x05,0x08},	/* 0x26 '&' */
{0x00,0x00,0x00,0x16,0x0E,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x27 ''' */
{0x00,0x00,0xF0,0x08,0x04,0x02,0x00,0x00, 0x00,0x00,0x03,0x04,0x08,0x10,0x00,0x00},	/* 0x28 '(' */
{0x00,0x00,0x02,0x04,0x08,0xF0,0x00,0x00, 0x00,0x00,0x10,0x08,0x04,0x03,0x00,0x00},	/* 0x29 ')' */
{0x90,0xA0,0xC0,0xF8,0xC0,0xA0,0x90,0x00, 0x04,0x02,0x01,0x0F,0x01,0x02,0x04,0x00},	/* 0x2a '*' */
{0x80,0x80,0x80,0xF0,0x80,0x80,0x80,0x00, 0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00},	/* 0x2b '+' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x58,0x38,0x00,0x00,0x00},	/* 0x2c ',' */
{0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x2d '-' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00},	/* 0x2e '.' */
{0x00,0x00,0x00,0x80,0x40,0x20,0x10,0x00, 0x04,0x02,0x01,0x00,0x00,0x00,0x00,0x00},	/* 0x2f '/' */
{0xF8,0x04,0x02,0x02,0x02,0x04,0xF8,0x00, 0x07,0x08,0x10,0x10,0x10,0x08,0x07,0x00},	/* 0x30 '0' */
{0x00,0x08,0x04,0xFE,0x02,0x00,0x00,0x00, 0x00,0x10,0x10,0x1F,0x10,0x10,0x00,0x00},	/* 0x31 '1' */
{0x18,0x04,0x02,0x02,0x82,0x44,0x38,0x00, 0x18,0x14,0x12,0x11,0x10,0x10,0x1C,0x00},	/* 0x32 '2' */
{0x0E,0x02,0x42,0x62,0x52,0x8A,0x06,0x00, 0x06,0x08,0x10,0x10,0x10,0x08,0x07,0x00},	/* 0x33 '3' */
{0x80,0x40,0x3E,0x00,0x00,0xFC,0x00,0x00, 0x03,0x02,0x02,0x02,0x12,0x1F,0x12,0x00},	/* 0x34 '4' */
{0x7E,0x22,0x12,0x12,0x12,0x22,0xC6,0x00, 0x04,0x08,0x10,0x10,0x10,0x08,0x07,0x00},	/* 0x35 '5' */
{0xF8,0x44,0x22,0x12,0x12,0x24,0xC0,0x00, 0x07,0x08,0x10,0x10,0x10,0x08,0x07,0x00},	/* 0x36 '6' */
{0x0E,0x02,0x82,0xC2,0x62,0x32,0x1E,0x00, 0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x00},	/* 0x37 '7' */
{0x18,0xA4,0x42,0x42,0x42,0xA4,0x18,0x00, 0x07,0x08,0x10,0x10,0x10,0x08,0x07,0x00},	/* 0x38 '8' */
{0xF8,0x04,0x02,0x02,0x02,0x84,0xF8,0x00, 0x00,0x09,0x12,0x12,0x11,0x08,0x07,0x00},	/* 0x39 '9' */
{0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00, 0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x00},	/* 0x3a ':' */
{0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00, 0x00,0x00,0x00,0x2C,0x1C,0x00,0x00,0x00},	/* 0x3b ';' */
{0x00,0x80,0x40,0x20,0x10,0x08,0x04,0x00, 0x00,0x00,0x01,0x02,0x04,0x08,0x10,0x00},	/* 0x3c '<' */
{0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x00, 0x00,0x02,0x02,0x02,0x02,0x02,0x02,0x00},	/* 0x3d '=' */
{0x00,0x04,0x08,0x10,0x20,0x40,0x80,0x00, 0x00,0x10,0x08,0x04,0x02,0x01,0x00,0x00},	/* 0x3e '>' */
{0x18,0x04,0x02,0x02,0x02,0x84,0x78,0x00, 0x00,0x00,0x00,0x36,0x01,0x00,0x00,0x00},	/* 0x3f '?' */
{0xF0,0x08,0xA4,0xA4,0xC4,0x08,0xF0,0x00, 0x07,0x08,0x13,0x12,0x11,0x0A,0x09,0x00},	/* 0x40 '@' */
{0x00,0xF0,0x08,0x04,0x02,0xFE,0x02,0x00, 0x10,0x1F,0x12,0x02,0x12,0x1F,0x10,0x00},	/* 0x41 'A' */
{0x02,0xFE,0x42,0x42,0x42,0xA4,0x18,0x00, 0x10,0x1F,0x10,0x10,0x10,0x08,0x07,0x00},	/* 0x42 'B' */
{0xF8,0x04,0x02,0x02,0x02,0x04,0x1E,0x00, 0x07,0x08,0x10,0x10,0x10,0x08,0x06,0x00},	/* 0x43 'C' */
{0x02,0xFE,0x02,0x02,0x02,0x04,0xF8,0x00, 0x10,0x1F,0x10,0x10,0x10,0x08,0x07,0x00},	/* 0x44 'D' */
{0x02,0xFE,0x42,0x42,0xF2,0x02,0x0E,0x00, 0x10,0x1F,0x10,0x10,0x11,0x10,0x1C,0x00},	/* 0x45 'E' */
{0x02,0xFE,0x42,0x42,0xF2,0x02,0x0E,0x00, 0x10,0x1F,0x10,0x10,0x01,0x00,0x00,0x00},	/* 0x46 'F' */
{0xF8,0x04,0x02,0x82,0x82,0x84,0x9E,0x00, 0x07,0x08,0x10,0x11,0x08,0x04,0x1F,0x00},	/* 0x47 'G' */
{0x02,0xFE,0x42,0x40,0x42,0xFE,0x02,0x00, 0x10,0x1F,0x10,0x00,0x10,0x1F,0x10,0x00},	/* 0x48 'H' */
{0x00,0x02,0x02,0xFE,0x02,0x02,0x00,0x00, 0x00,0x10,0x10,0x1F,0x10,0x10,0x00,0x00},	/* 0x49 'I' */
{0x00,0x00,0x02,0x02,0xFE,0x02,0x02,0x00, 0x0C,0x10,0x10,0x10,0x0F,0x00,0x00,0x00},	/* 0x4a 'J' */
{0x02,0xFE,0xC2,0x30,0x08,0x06,0x02,0x00, 0x10,0x1F,0x10,0x03,0x04,0x18,0x10,0x00},	/* 0x4b 'K' */
{0x02,0xFE,0x02,0x00,0x00,0x00,0x00,0x00, 0x10,0x1F,0x10,0x10,0x10,0x10,0x1E,0x00},	/* 0x4c 'L' */
{0x02,0xFE,0x32,0xC0,0x32,0xFE,0x02,0x00, 0x10,0x1F,0x10,0x01,0x10,0x1F,0x10,0x00},	/* 0x4d 'M' */
{0x02,0xFE,0x1A,0xE0,0x02,0xFE,0x02,0x00, 0x10,0x1F,0x10,0x00,0x13,0x1F,0x10,0x00},	/* 0x4e 'N' */
{0xF8,0x04,0x02,0x02,0x02,0x04,0xF8,0x00, 0x07,0x08,0x10,0x10,0x10,0x08,0x07,0x00},	/* 0x4f 'O' */
{0x02,0xFE,0x02,0x02,0x02,0x84,0x78,0x00, 0x10,0x1F,0x11,0x01,0x01,0x00,0x00,0x00},	/* 0x50 'P' */
{0xF8,0x04,0x02,0x02,0x02,0x04,0xF8,0x00, 0x07,0x08,0x10,0x10,0x12,0x14,0x0B,0x10},	/* 0x51 'Q' */
{0x02,0xFE,0x82,0x82,0x82,0x44,0x38,0x00, 0x10,0x1F,0x10,0x01,0x02,0x1C,0x10,0x00},	/* 0x52 'R' */
{0x18,0x24,0x42,0x42,0x42,0x84,0x1E,0x00, 0x06,0x08,0x10,0x10,0x10,0x08,0x07,0x00},	/* 0x53 'S' */
{0x0E,0x02,0x02,0xFE,0x02,0x02,0x0E,0x00, 0x00,0x10,0x10,0x1F,0x10,0x10,0x00,0x00},	/* 0x54 'T' */
{0x02,0xFE,0x02,0x00,0x02,0xFE,0x02,0x00, 0x00,0x0F,0x10,0x10,0x10,0x0F,0x00,0x00},	/* 0x55 'U' */
{0x02,0xFE,0x02,0x00,0x02,0xFE,0x02,0x00, 0x00,0x03,0x0E,0x18,0x0E,0x03,0x00,0x00},	/* 0x56 'V' */
{0x02,0xFE,0x02,0xF0,0x02,0xFE,0x02,0x00, 0x00,0x07,0x1C,0x0F,0x1C,0x07,0x00,0x00},	/* 0x57 'W' */
{0x02,0x1E,0xF2,0x40,0xF2,0x1E,0x02,0x00, 0x10,0x1F,0x11,0x00,0x11,0x1F,0x10,0x00},	/* 0x58 'X' */
{0x02,0xFE,0x82,0x00,0x82,0xFE,0x02,0x00, 0x00,0x00,0x11,0x1F,0x11,0x00,0x00,0x00},	/* 0x59 'Y' */
{0x0E,0x02,0x82,0x42,0x22,0x12,0x0E,0x00, 0x1E,0x11,0x10,0x10,0x10,0x10,0x1E,0x00},	/* 0x5a 'Z' */
{0x00,0xFE,0x02,0x02,0x02,0x02,0x00,0x00, 0x00,0x3F,0x20,0x20,0x20,0x20,0x00,0x00},	/* 0x5b '[' */
{0x08,0x10,0x20,0x40,0x80,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x00},	/* 0x5c '\' */
{0x00,0x02,0x02,0x02,0x02,0xFE,0x00,0x00, 0x00,0x20,0x20,0x20,0x20,0x3F,0x00,0x00},	/* 0x5d ']' */
{0x10,0x08,0x04,0x02,0x04,0x08,0x10,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x5e '^' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x00},	/* 0x5f '_' */
{0x00,0x00,0x00,0x0E,0x16,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x60 '`' */
{0x00,0x90,0x48,0x48,0x48,0x90,0xE0,0x00, 0x07,0x08,0x10,0x10,0x08,0x04,0x1F,0x00},	/* 0x61 'a' */
{0x02,0xFE,0x12,0x08,0x08,0x10,0xE0,0x00, 0x10,0x1F,0x08,0x10,0x10,0x08,0x07,0x00},	/* 0x62 'b' */
{0xE0,0x10,0x08,0x08,0x08,0x10,0x38,0x00, 0x07,0x08,0x10,0x10,0x10,0x08,0x06,0x00},	/* 0x63 'c' */
{0xE0,0x10,0x08,0x08,0x12,0xFE,0x02,0x00, 0x07,0x08,0x10,0x10,0x08,0x1F,0x10,0x00},	/* 0x64 'd' */
{0xE0,0x90,0x88,0x88,0x88,0x90,0xE0,0x00, 0x07,0x08,0x10,0x10,0x10,0x08,0x04,0x00},	/* 0x65 'e' */
{0x40,0xF8,0x44,0x42,0x02,0x04,0x08,0x00, 0x10,0x1F,0x10,0x10,0x00,0x00,0x00,0x00},	/* 0x66 'f' */
{0xE0,0x10,0x08,0x08,0x10,0xF8,0x08,0x00, 0x03,0x24,0x48,0x48,0x44,0x3F,0x00,0x00},	/* 0x67 'g' */
{0x02,0xFE,0x20,0x10,0x08,0xF0,0x00,0x00, 0x10,0x1F,0x10,0x00,0x10,0x1F,0x10,0x00},	/* 0x68 'h' */
{0x00,0x08,0x0B,0xFB,0x00,0x00,0x00,0x00, 0x00,0x10,0x10,0x1F,0x10,0x10,0x00,0x00},	/* 0x69 'i' */
{0x00,0x00,0x08,0x08,0x0B,0xFB,0x00,0x00, 0x00,0x30,0x40,0x40,0x40,0x3F,0x00,0x00},	/* 0x6a 'j' */
{0x02,0xFE,0x80,0x40,0x30,0x08,0x18,0x00, 0x10,0x1F,0x11,0x02,0x04,0x08,0x18,0x00},	/* 0x6b 'k' */
{0x00,0x00,0x02,0x02,0xFE,0x00,0x00,0x00, 0x00,0x00,0x10,0x10,0x1F,0x10,0x10,0x00},	/* 0x6c 'l' */
{0x08,0xF8,0x08,0xF0,0x08,0xF0,0x00,0x00, 0x10,0x1F,0x00,0x1F,0x00,0x1F,0x10,0x00},	/* 0x6d 'm' */
{0x08,0xF8,0x10,0x08,0x08,0xF0,0x00,0x00, 0x10,0x1F,0x10,0x00,0x10,0x1F,0x10,0x00},	/* 0x6e 'n' */
{0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00, 0x07,0x08,0x10,0x10,0x10,0x08,0x07,0x00},	/* 0x6f 'o' */
{0x08,0xF8,0x10,0x08,0x08,0x10,0xE0,0x00, 0x40,0x7F,0x48,0x10,0x10,0x08,0x07,0x00},	/* 0x70 'p' */
{0xE0,0x10,0x08,0x08,0x10,0xF8,0x08,0x00, 0x07,0x08,0x10,0x10,0x48,0x7F,0x40,0x00},	/* 0x71 'q' */
{0x08,0xF8,0x20,0x10,0x08,0x08,0x70,0x00, 0x10,0x1F,0x10,0x00,0x00,0x00,0x00,0x00},	/* 0x72 'r' */
{0x20,0x50,0x88,0x88,0x88,0x10,0x38,0x00, 0x06,0x08,0x10,0x10,0x10,0x09,0x06,0x00},	/* 0x73 's' */
{0x20,0x20,0xFE,0x20,0x20,0x00,0x00,0x00, 0x00,0x00,0x0F,0x10,0x10,0x10,0x0C,0x00},	/* 0x74 't' */
{0x08,0xF8,0x08,0x00,0x08,0xF8,0x08,0x00, 0x00,0x0F,0x10,0x10,0x08,0x1F,0x10,0x00},	/* 0x75 'u' */
{0x08,0xF8,0x08,0x00,0x08,0xF8,0x08,0x00, 0x00,0x03,0x0E,0x18,0x0E,0x03,0x00,0x00},	/* 0x76 'v' */
{0x08,0xF8,0x08,0xC0,0x08,0xF8,0x08,0x00, 0x00,0x0F,0x18,0x0F,0x18,0x0F,0x00,0x00},	/* 0x77 'w' */
{0x08,0x38,0xE0,0x80,0xE0,0x38,0x08,0x00, 0x10,0x1F,0x01,0x00,0x01,0x1F,0x10,0x00},	/* 0x78 'x' */
{0x08,0xF8,0x08,0x00,0x08,0xF8,0x08,0x00, 0x00,0x27,0x48,0x48,0x44,0x3F,0x00,0x00},	/* 0x79 'y' */
{0x38,0x08,0x08,0x88,0x48,0x28,0x18,0x00, 0x1C,0x12,0x11,0x10,0x10,0x10,0x1E,0x00},	/* 0x7a 'z' */
{0x80,0x40,0x38,0x04,0x02,0x02,0x00,0x00, 0x00,0x01,0x0E,0x10,0x20,0x20,0x00,0x00},	/* 0x7b '{' */
{0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00},	/* 0x7c '|' */
{0x00,0x02,0x02,0x04,0x38,0x40,0x80,0x00, 0x00,0x20,0x20,0x10,0x0E,0x01,0x00,0x00},	/* 0x7d '}' */
{0x00,0x80,0xF0,0xE0,0xC0,0x80,0x00,0x00, 0x00,0x00,0x07,0x03,0x01,0x00,0x00,0x00},	/* 0x7e '~' */
{0x00,0x80,0xC0,0xE0,0xF0,0x80,0x00,0x00, 0x00,0x00,0x01,0x03,0x07,0x00,0x00,0x00},	/* 0x7f  */

 #if defined LANG_FRANCAIS
  #ifdef WITH_CAPITAL_SPECIALS
/* ---F---  ISO8859-15  ------ */
  #endif
 #elif defined LANG_CZECH || defined LANG_SLOVAK
/* ---CZ-SL----- ISO8859-2----------- */
  #ifdef WITH_CAPITAL_SPECIALS
  #endif
 #elif defined LANG_POLISH
/* ---PL---  ISO8859-2  ------------- */
 #elif defined LCD_CYRILLIC
{0x02,0xFE,0x42,0x42,0x42,0x8E,0x00,0x00, 0x10,0x1F,0x10,0x10,0x10,0x08,0x07,0x00},	/* 0x80 Cyr_B */
{0x02,0xFE,0x02,0x02,0x02,0x02,0x0E,0x00, 0x10,0x1F,0x10,0x00,0x00,0x00,0x00,0x00},	/* 0x81 Cyr_G */
{0x0B,0xFB,0x88,0xE8,0x0B,0x3B,0x00,0x00, 0x10,0x1F,0x10,0x13,0x10,0x10,0x1C,0x00},	/* 0x82 Cyr_Jo */
{0x02,0xBE,0xC0,0xFE,0xC0,0xBE,0x02,0x00, 0x10,0x1F,0x00,0x1F,0x00,0x1F,0x10,0x00},	/* 0x83 Cyr_Zsch */
{0x1E,0x04,0x02,0x42,0x42,0xA4,0x18,0x00, 0x06,0x08,0x10,0x10,0x10,0x08,0x07,0x00},	/* 0x84 Cyr_Z */
{0x02,0xFE,0x00,0xE0,0x18,0xFE,0x02,0x00, 0x10,0x1F,0x13,0x00,0x10,0x1F,0x10,0x00},	/* 0x85 Cyr_I */
{0x04,0xFC,0x01,0xC2,0x31,0xFC,0x04,0x00, 0x10,0x1F,0x16,0x01,0x10,0x1F,0x10,0x00},	/* 0x86 Cyr_J */
{0x00,0xF0,0x08,0x04,0x02,0xFE,0x02,0x00, 0x10,0x1F,0x00,0x00,0x10,0x1F,0x10,0x00},	/* 0x87 Cyr_L */
{0x02,0xFE,0x02,0x02,0x02,0xFE,0x02,0x00, 0x10,0x1F,0x10,0x00,0x10,0x1F,0x10,0x00},	/* 0x88 Cyr_P */
{0x02,0xFE,0x02,0x00,0x02,0xFE,0x02,0x00, 0x00,0x09,0x12,0x12,0x11,0x0F,0x00,0x00},	/* 0x89 Cyr_U */
{0xF0,0x08,0x0A,0xFE,0x0A,0x08,0xF0,0x00, 0x01,0x02,0x12,0x1F,0x12,0x02,0x01,0x00},	/* 0x8a Cyr_F */
{0x02,0xFE,0x02,0x00,0x02,0xFE,0x02,0x00, 0x00,0x01,0x02,0x02,0x11,0x1F,0x10,0x00},	/* 0x8b Cyr_Tsch */
{0x02,0xFE,0x02,0xF0,0x02,0xFE,0x02,0x00, 0x10,0x1F,0x10,0x1F,0x10,0x1F,0x10,0x00},	/* 0x8c Cyr_Sch */
{0x0E,0x02,0xFE,0x12,0x08,0x08,0xF0,0x00, 0x10,0x10,0x1F,0x10,0x10,0x08,0x07,0x00},	/* 0x8d Cyr_HH */
{0x02,0xFE,0x12,0x08,0xF0,0x00,0xFE,0x00, 0x10,0x1F,0x10,0x10,0x0F,0x00,0x1F,0x00},	/* 0x8e Cyr_Y */
{0x0E,0x04,0x02,0xF2,0x42,0x44,0xF8,0x00, 0x06,0x08,0x10,0x11,0x10,0x08,0x07,0x00},	/* 0x8f Cyr_E */
{0x02,0xFE,0x40,0xFC,0x02,0x02,0xFC,0x00, 0x10,0x1F,0x00,0x0F,0x10,0x10,0x0F,0x00},	/* 0x90 Cyr_Ju */
{0x38,0x44,0x82,0x82,0x82,0xFE,0x02,0x00, 0x10,0x1C,0x02,0x01,0x10,0x1F,0x10,0x00},	/* 0x91 Cyr_Ja */
{0xF0,0x48,0x24,0x24,0x22,0x42,0x80,0x00, 0x07,0x08,0x10,0x10,0x10,0x08,0x07,0x00},	/* 0x92 Cyr_b */
{0x08,0xF8,0x88,0x88,0x88,0x50,0x20,0x00, 0x10,0x1F,0x10,0x10,0x10,0x09,0x06,0x00},	/* 0x93 Cyr_v */
{0x08,0xF8,0x08,0x08,0x08,0x38,0x00,0x00, 0x10,0x1F,0x10,0x00,0x00,0x00,0x00,0x00},	/* 0x94 Cyr_g */
{0xE0,0x93,0x8B,0x88,0x8B,0x93,0xE0,0x00, 0x07,0x08,0x10,0x10,0x10,0x08,0x04,0x00},	/* 0x95 Cyr_jo */
{0x08,0x78,0x80,0xF8,0x80,0x78,0x08,0x00, 0x10,0x1F,0x01,0x1F,0x01,0x1F,0x10,0x00},	/* 0x96 Cyr_zsch */
{0x38,0x10,0x08,0x88,0x88,0x50,0x20,0x00, 0x06,0x08,0x10,0x10,0x10,0x09,0x06,0x00},	/* 0x97 Cyr_z */
{0x08,0xF8,0x08,0x80,0x68,0xF8,0x08,0x00, 0x10,0x1F,0x16,0x01,0x10,0x1F,0x10,0x00},	/* 0x98 Cyr_i */
{0x08,0xF9,0x02,0x84,0x62,0xF9,0x08,0x00, 0x10,0x1F,0x16,0x01,0x10,0x1F,0x10,0x00},	/* 0x99 Cyr_j */
{0x08,0xF8,0x80,0x40,0x30,0x08,0x18,0x00, 0x10,0x1F,0x00,0x01,0x02,0x1C,0x10,0x00},	/* 0x9a Cyr_k */
{0x00,0xE0,0x10,0x08,0x08,0xF8,0x08,0x00, 0x10,0x1F,0x00,0x00,0x10,0x1F,0x10,0x00},	/* 0x9b Cyr_l */
{0x08,0xF8,0xE8,0x80,0xE8,0xF8,0x08,0x00, 0x10,0x1F,0x10,0x03,0x10,0x1F,0x10,0x00},	/* 0x9c Cyr_m */
{0x08,0xF8,0x88,0x80,0x88,0xF8,0x08,0x00, 0x10,0x1F,0x10,0x00,0x10,0x1F,0x10,0x00},	/* 0x9d Cyr_n */
{0x08,0xF8,0x08,0x08,0x08,0xF8,0x08,0x00, 0x10,0x1F,0x10,0x00,0x10,0x1F,0x10,0x00},	/* 0x9e Cyr_p */
{0x38,0x08,0x08,0xF8,0x08,0x08,0x38,0x00, 0x00,0x00,0x10,0x1F,0x10,0x00,0x00,0x00},	/* 0x9f Cyr_t */
 #endif
};
#else 
 #ifndef __ASSEMBLER__
extern const unsigned char PROGMEM font[CHAR_COUNT][(FONT_WIDTH * ((FONT_HEIGHT + 7)/8))];
 #endif
#endif
