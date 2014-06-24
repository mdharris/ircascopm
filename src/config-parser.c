/* A Bison parser, made from config-parser.y
   by GNU bison 1.35.  */

#define YYBISON 1  /* Identify Bison output.  */

# define	AWAY	257
# define	BAN_UNKNOWN	258
# define	BLACKLIST	259
# define	CHANNEL	260
# define	CONNREGEX	261
# define	DNS_FDLIMIT	262
# define	DNSBL_FROM	263
# define	DNSBL_TO	264
# define	EXEMPT	265
# define	FD	266
# define	INVITE	267
# define	IRC	268
# define	KLINE	269
# define	KEY	270
# define	MASK	271
# define	MAX_READ	272
# define	MODE	273
# define	NAME	274
# define	NEGCACHE	275
# define	NICK	276
# define	NICKSERV	277
# define	OPER	278
# define	OPM	279
# define	OPTIONS	280
# define	PASSWORD	281
# define	PERFORM	282
# define	PIDFILE	283
# define	PORT	284
# define	PROTOCOL	285
# define	PROTOCOLTYPE	286
# define	REALNAME	287
# define	REPLY	288
# define	SCANLOG	289
# define	SCANNER	290
# define	SENDMAIL	291
# define	SERVER	292
# define	TARGET_IP	293
# define	TARGET_PORT	294
# define	TARGET_STRING	295
# define	TIMEOUT	296
# define	TYPE	297
# define	USERNAME	298
# define	USER	299
# define	VHOST	300
# define	NUMBER	301
# define	STRING	302

#line 25 "config-parser.y"

#include <stdio.h>
#include <string.h>
#include "malloc.h"
#include "config.h"

int yydebug=0;
void *tmp;        /* Variable to temporarily hold nodes before insertion to list */


#line 81 "config-parser.y"
#ifndef YYSTYPE
typedef union 
{
        int number;
        char *string;
} yystype;
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif
#ifndef YYDEBUG
# define YYDEBUG 0
#endif



#define	YYFINAL		293
#define	YYFLAG		-32768
#define	YYNTBASE	54

/* YYTRANSLATE(YYLEX) -- Bison token number corresponding to YYLEX. */
#define YYTRANSLATE(x) ((unsigned)(x) <= 302 ? yytranslate[x] : 127)

/* YYTRANSLATE[YYLEX] -- Bison token number corresponding to YYLEX. */
static const char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,    51,
       2,    52,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48
};

#if YYDEBUG
static const short yyprhs[] =
{
       0,     0,     1,     4,     6,     8,    10,    12,    14,    16,
      22,    23,    26,    28,    30,    32,    34,    36,    38,    43,
      48,    53,    58,    64,    67,    69,    71,    73,    75,    77,
      79,    81,    83,    85,    87,    89,    91,    93,    95,    97,
      99,   101,   106,   111,   116,   121,   126,   131,   136,   141,
     146,   151,   156,   161,   166,   171,   172,   179,   182,   184,
     186,   188,   190,   195,   200,   205,   206,   213,   216,   218,
     220,   222,   224,   229,   234,   235,   242,   245,   247,   249,
     251,   253,   255,   257,   259,   261,   263,   265,   267,   272,
     277,   282,   287,   292,   297,   302,   307,   314,   320,   321,
     324,   326,   328,   330,   332,   334,   336,   341,   346,   351,
     352,   359,   360,   363,   365,   367,   369,   371,   373,   375,
     377,   382,   387,   392,   397,   403,   404,   407,   409,   414,
     420,   421,   424,   426,   428,   430
};
static const short yyrhs[] =
{
      -1,    54,    55,     0,    63,     0,    56,     0,   106,     0,
      87,     0,    93,     0,   123,     0,    26,    49,    57,    50,
      51,     0,     0,    57,    58,     0,    58,     0,    59,     0,
      60,     0,    61,     0,    62,     0,     1,     0,    21,    52,
      47,    51,     0,    29,    52,    48,    51,     0,     8,    52,
      47,    51,     0,    35,    52,    48,    51,     0,    14,    49,
      64,    50,    51,     0,    64,    65,     0,    65,     0,    66,
       0,    79,     0,    67,     0,    69,     0,    70,     0,    68,
       0,    71,     0,    72,     0,    74,     0,    75,     0,    76,
       0,    77,     0,    78,     0,    73,     0,    80,     0,     1,
       0,     3,    52,    48,    51,     0,    15,    52,    48,    51,
       0,    19,    52,    48,    51,     0,    22,    52,    48,    51,
       0,    23,    52,    48,    51,     0,    24,    52,    48,    51,
       0,    27,    52,    48,    51,     0,    28,    52,    48,    51,
       0,    30,    52,    47,    51,     0,    33,    52,    48,    51,
       0,    38,    52,    48,    51,     0,    44,    52,    48,    51,
       0,    46,    52,    48,    51,     0,     7,    52,    48,    51,
       0,     0,    81,     6,    49,    82,    50,    51,     0,    82,
      83,     0,    83,     0,    84,     0,    85,     0,    86,     0,
      20,    52,    48,    51,     0,    16,    52,    48,    51,     0,
      13,    52,    48,    51,     0,     0,    88,    45,    49,    89,
      50,    51,     0,    89,    90,     0,    90,     0,    91,     0,
      92,     0,     1,     0,    17,    52,    48,    51,     0,    36,
      52,    48,    51,     0,     0,    94,    36,    49,    95,    50,
      51,     0,    95,    96,     0,    96,     0,    97,     0,    98,
       0,   101,     0,    99,     0,   102,     0,   100,     0,   105,
       0,   103,     0,   104,     0,     1,     0,    20,    52,    48,
      51,     0,    46,    52,    48,    51,     0,    39,    52,    48,
      51,     0,    41,    52,    48,    51,     0,    12,    52,    47,
      51,     0,    40,    52,    47,    51,     0,    42,    52,    47,
      51,     0,    18,    52,    47,    51,     0,    31,    52,    32,
      53,    47,    51,     0,    25,    49,   107,    50,    51,     0,
       0,   107,   108,     0,   108,     0,   109,     0,   110,     0,
     111,     0,   112,     0,     1,     0,     9,    52,    48,    51,
       0,    10,    52,    48,    51,     0,    37,    52,    48,    51,
       0,     0,   113,     5,    49,   114,    50,    51,     0,     0,
     114,   115,     0,   115,     0,   116,     0,   118,     0,   117,
       0,   119,     0,   120,     0,     1,     0,    20,    52,    48,
      51,     0,    15,    52,    48,    51,     0,    43,    52,    48,
      51,     0,     4,    52,    47,    51,     0,    34,    49,   121,
      50,    51,     0,     0,   121,   122,     0,   122,     0,    47,
      52,    48,    51,     0,    11,    49,   124,    50,    51,     0,
       0,   124,   125,     0,   125,     0,   126,     0,     1,     0,
      17,    52,    48,    51,     0
};

#endif

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined. */
static const short yyrline[] =
{
       0,    93,    94,    97,    97,    98,    99,   100,   101,   107,
     109,   109,   110,   113,   113,   114,   115,   116,   119,   124,
     130,   135,   143,   145,   145,   148,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   165,   171,   177,   183,   189,   195,   201,   207,   215,
     220,   226,   232,   238,   244,   253,   253,   271,   271,   274,
     274,   275,   278,   286,   294,   304,   304,   321,   321,   324,
     324,   325,   328,   338,   350,   350,   396,   396,   399,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   410,   417,
     424,   431,   447,   453,   459,   465,   471,   490,   492,   492,
     493,   496,   496,   497,   498,   499,   502,   508,   514,   522,
     522,   542,   542,   543,   546,   546,   547,   548,   549,   550,
     553,   560,   567,   578,   584,   586,   586,   587,   590,   608,
     610,   610,   611,   614,   614,   617
};
#endif


#if (YYDEBUG) || defined YYERROR_VERBOSE

/* YYTNAME[TOKEN_NUM] -- String name of the token TOKEN_NUM. */
static const char *const yytname[] =
{
  "$", "error", "$undefined.", "AWAY", "BAN_UNKNOWN", "BLACKLIST", 
  "CHANNEL", "CONNREGEX", "DNS_FDLIMIT", "DNSBL_FROM", "DNSBL_TO", 
  "EXEMPT", "FD", "INVITE", "IRC", "KLINE", "KEY", "MASK", "MAX_READ", 
  "MODE", "NAME", "NEGCACHE", "NICK", "NICKSERV", "OPER", "OPM", 
  "OPTIONS", "PASSWORD", "PERFORM", "PIDFILE", "PORT", "PROTOCOL", 
  "PROTOCOLTYPE", "REALNAME", "REPLY", "SCANLOG", "SCANNER", "SENDMAIL", 
  "SERVER", "TARGET_IP", "TARGET_PORT", "TARGET_STRING", "TIMEOUT", 
  "TYPE", "USERNAME", "USER", "VHOST", "NUMBER", "STRING", "'{'", "'}'", 
  "';'", "'='", "':'", "config", "config_items", "options_entry", 
  "options_items", "options_item", "options_negcache", "options_pidfile", 
  "options_dns_fdlimit", "options_scanlog", "irc_entry", "irc_items", 
  "irc_item", "irc_away", "irc_kline", "irc_mode", "irc_nick", 
  "irc_nickserv", "irc_oper", "irc_password", "irc_perform", "irc_port", 
  "irc_realname", "irc_server", "irc_username", "irc_vhost", 
  "irc_connregex", "channel_entry", "@1", "channel_items", "channel_item", 
  "channel_name", "channel_key", "channel_invite", "user_entry", "@2", 
  "user_items", "user_item", "user_mask", "user_scanner", "scanner_entry", 
  "@3", "scanner_items", "scanner_item", "scanner_name", "scanner_vhost", 
  "scanner_target_ip", "scanner_target_string", "scanner_fd", 
  "scanner_target_port", "scanner_timeout", "scanner_max_read", 
  "scanner_protocol", "opm_entry", "opm_items", "opm_item", 
  "opm_dnsbl_from", "opm_dnsbl_to", "opm_sendmail", "opm_blacklist_entry", 
  "@4", "blacklist_items", "blacklist_item", "blacklist_name", 
  "blacklist_kline", "blacklist_type", "blacklist_ban_unknown", 
  "blacklist_reply", "blacklist_reply_items", "blacklist_reply_item", 
  "exempt_entry", "exempt_items", "exempt_item", "exempt_mask", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives. */
static const short yyr1[] =
{
       0,    54,    54,    55,    55,    55,    55,    55,    55,    56,
      57,    57,    57,    58,    58,    58,    58,    58,    59,    60,
      61,    62,    63,    64,    64,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    81,    80,    82,    82,    83,
      83,    83,    84,    85,    86,    88,    87,    89,    89,    90,
      90,    90,    91,    92,    94,    93,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   107,
     107,   108,   108,   108,   108,   108,   109,   110,   111,   113,
     112,   114,   114,   114,   115,   115,   115,   115,   115,   115,
     116,   117,   118,   119,   120,   121,   121,   121,   122,   123,
     124,   124,   124,   125,   125,   126
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN. */
static const short yyr2[] =
{
       0,     0,     2,     1,     1,     1,     1,     1,     1,     5,
       0,     2,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     5,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     4,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     4,     4,     0,     6,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     6,     5,     0,     2,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     0,
       6,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     5,     0,     2,     1,     4,     5,
       0,     2,     1,     1,     1,     4
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error. */
static const short yydefact[] =
{
       1,    65,     0,     0,     0,     0,     2,     4,     3,     6,
       0,     7,     0,     5,     8,     0,     0,     0,     0,     0,
       0,   134,     0,     0,   132,   133,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,    25,    27,    30,    28,    29,    31,    32,
      38,    33,    34,    35,    36,    37,    26,    39,     0,   105,
       0,     0,     0,     0,   100,   101,   102,   103,   104,     0,
      17,     0,     0,     0,     0,     0,    12,    13,    14,    15,
      16,     0,     0,     0,     0,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,     0,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,     0,    11,    71,     0,     0,     0,    68,
      69,    70,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    77,    78,    79,    81,    83,    80,    82,
      85,    86,    84,     0,   129,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       9,     0,     0,     0,    67,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,   135,    41,    54,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,     0,     0,    58,    59,    60,    61,   106,
     107,   108,   119,     0,     0,     0,     0,     0,     0,   113,
     114,   116,   115,   117,   118,    20,    18,    19,    21,     0,
       0,    66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,     0,     0,     0,    57,     0,     0,     0,
     125,     0,     0,   112,    72,    73,    92,    95,    88,     0,
      90,    93,    91,    94,    89,     0,     0,     0,    56,     0,
       0,     0,     0,     0,   127,     0,   110,     0,    64,    63,
      62,   123,   121,   120,     0,     0,   126,   122,    96,     0,
     124,   128,     0,     0
};

static const short yydefgoto[] =
{
       1,     6,     7,    75,    76,    77,    78,    79,    80,     8,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,   204,   205,
     206,   207,   208,     9,    10,   118,   119,   120,   121,    11,
      12,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,    13,    63,    64,    65,    66,    67,    68,    69,
     218,   219,   220,   221,   222,   223,   224,   273,   274,    14,
      23,    24,    25
};

static const short yypact[] =
{
  -32768,   132,   -40,   -39,   -34,   -30,-32768,-32768,-32768,-32768,
     -14,-32768,    -3,-32768,-32768,    24,   107,     2,    59,    -7,
      -5,-32768,   -17,    29,-32768,-32768,-32768,    -4,     9,    11,
      19,    30,    35,    38,    43,    44,    51,    53,    55,    63,
      66,    -1,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    69,-32768,
      68,    71,    72,    67,-32768,-32768,-32768,-32768,-32768,    86,
  -32768,    76,    81,    87,    89,    77,-32768,-32768,-32768,-32768,
  -32768,    80,   124,    54,    60,-32768,    73,    90,    99,   100,
     101,   102,   104,   106,   108,   112,   113,   114,   119,   121,
     109,-32768,    52,   123,   125,   126,   127,-32768,    70,   128,
     129,   131,   133,   134,-32768,-32768,   120,   130,    23,-32768,
  -32768,-32768,-32768,   135,   136,   137,   138,   139,   140,   141,
     142,   143,    16,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,   145,-32768,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,-32768,
       0,   160,   161,   162,-32768,    49,   163,   164,   165,   166,
  -32768,   170,   171,   169,-32768,   174,   175,   176,   191,   177,
     179,   180,   182,   183,   181,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,   178,   184,   185,   -12,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,   186,   187,   188,   192,   190,    50,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   193,
     194,-32768,   195,   196,   197,   198,   199,   201,   202,   203,
     204,-32768,   208,   209,   210,   211,-32768,   212,   213,   215,
     217,   218,   214,-32768,-32768,-32768,-32768,-32768,-32768,   220,
  -32768,-32768,-32768,-32768,-32768,   219,   221,   222,-32768,   223,
     224,   225,   216,    39,-32768,   226,-32768,   227,-32768,-32768,
  -32768,-32768,-32768,-32768,   231,   229,-32768,-32768,-32768,   230,
  -32768,-32768,   233,-32768
};

static const short yypgoto[] =
{
  -32768,-32768,-32768,-32768,   105,-32768,-32768,-32768,-32768,-32768,
  -32768,   228,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   -27,
  -32768,-32768,-32768,-32768,-32768,-32768,    65,-32768,-32768,-32768,
  -32768,-32768,    95,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,   172,-32768,-32768,-32768,-32768,-32768,
  -32768,   -32,-32768,-32768,-32768,-32768,-32768,-32768,   -89,-32768,
  -32768,   237,-32768
};


#define	YYLAST		281


static const short yytable[] =
{
      26,   201,    27,    59,   202,   -55,    28,   -98,   203,    15,
      16,    60,    61,   201,    29,    17,   202,   122,    30,    18,
     203,    31,    32,    33,   115,    21,    34,    35,   123,    36,
      21,    19,    37,    20,   124,    83,   125,    38,   245,    62,
     116,    22,    81,    39,    82,    40,    22,   126,    86,   100,
     212,   212,   -98,   213,   213,   127,   128,   129,   130,   117,
      70,    87,   131,    88,   214,   214,   184,    71,    59,   215,
     215,    89,  -109,   173,  -130,   102,    60,    61,    70,    84,
      72,   115,    90,   216,   216,    71,   272,    91,    73,   285,
      92,   108,   217,   217,    74,    93,    94,   116,    72,  -111,
     252,   160,   143,    95,    62,    96,    73,    97,    26,   -10,
      27,   144,    74,   -55,    28,    98,   117,   106,    99,   165,
     103,   145,    29,   104,   105,   122,    30,   113,   109,    31,
      32,    33,   292,   110,    34,    35,   123,    36,   146,   111,
      37,   112,   124,     2,   125,    38,     3,   147,   148,   149,
     150,    39,   151,    40,   152,   126,   153,     4,     5,   154,
     159,   155,   156,   127,   128,   129,   130,   157,   -74,   158,
     131,   161,   171,   162,   163,   166,   167,   246,   164,   168,
     114,   169,   172,   174,   286,   170,   253,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   209,   210,   211,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   235,   234,   236,   237,   185,   238,   239,
     242,   240,   241,   293,     0,   107,   243,   244,   247,   248,
     249,   250,   251,     0,   254,   255,   256,   257,   258,     0,
     260,   259,   261,   262,   263,   264,   265,   266,   267,   269,
      85,   270,   268,   271,   272,   276,   275,   277,   284,   101,
     278,     0,   279,   280,   281,   282,   283,   287,   288,   289,
     290,   291
};

static const short yycheck[] =
{
       1,    13,     3,     1,    16,     6,     7,     5,    20,    49,
      49,     9,    10,    13,    15,    49,    16,     1,    19,    49,
      20,    22,    23,    24,     1,     1,    27,    28,    12,    30,
       1,    45,    33,    36,    18,    52,    20,    38,    50,    37,
      17,    17,    49,    44,    49,    46,    17,    31,    52,    50,
       1,     1,    50,     4,     4,    39,    40,    41,    42,    36,
       1,    52,    46,    52,    15,    15,    50,     8,     1,    20,
      20,    52,     5,    50,    50,     6,     9,    10,     1,    50,
      21,     1,    52,    34,    34,     8,    47,    52,    29,    50,
      52,     5,    43,    43,    35,    52,    52,    17,    21,    50,
      50,    49,    48,    52,    37,    52,    29,    52,     1,    50,
       3,    51,    35,     6,     7,    52,    36,    50,    52,    49,
      52,    48,    15,    52,    52,     1,    19,    50,    52,    22,
      23,    24,     0,    52,    27,    28,    12,    30,    48,    52,
      33,    52,    18,    11,    20,    38,    14,    48,    48,    48,
      48,    44,    48,    46,    48,    31,    48,    25,    26,    47,
      51,    48,    48,    39,    40,    41,    42,    48,    36,    48,
      46,    48,    52,    48,    48,    47,    47,   204,    51,    48,
      75,    48,    52,   118,   273,    51,   218,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    48,    48,
      51,    47,    47,    32,    48,    48,    47,   132,    48,    47,
      52,    48,    51,     0,    -1,    63,    52,    52,    52,    52,
      52,    49,    52,    -1,    51,    51,    51,    51,    51,    -1,
      51,    53,    51,    51,    51,    51,    48,    48,    48,    47,
      23,    48,    51,    48,    47,    51,    48,    47,    52,    41,
      51,    -1,    51,    51,    51,    51,    51,    51,    51,    48,
      51,    51
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/local/share/bison/bison.simple"

/* Skeleton output parser for bison,

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software
   Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser when
   the %semantic_parser declaration is not specified in the grammar.
   It was written by Richard Stallman by simplifying the hairy parser
   used when %semantic_parser is specified.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

#if ! defined (yyoverflow) || defined (YYERROR_VERBOSE)

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || defined (YYERROR_VERBOSE) */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYLTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
# if YYLSP_NEEDED
  YYLTYPE yyls;
# endif
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# if YYLSP_NEEDED
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE) + sizeof (YYLTYPE))	\
      + 2 * YYSTACK_GAP_MAX)
# else
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)
# endif

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAX;	\
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif


#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).

   When YYLLOC_DEFAULT is run, CURRENT is set the location of the
   first token.  By default, to implement support for ranges, extend
   its range to the last symbol.  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)       	\
   Current.last_line   = Rhs[N].last_line;	\
   Current.last_column = Rhs[N].last_column;
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#if YYPURE
# if YYLSP_NEEDED
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, &yylloc, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval, &yylloc)
#  endif
# else /* !YYLSP_NEEDED */
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval)
#  endif
# endif /* !YYLSP_NEEDED */
#else /* !YYPURE */
# define YYLEX			yylex ()
#endif /* !YYPURE */


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)
/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

#ifdef YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif
#endif

#line 315 "/usr/local/share/bison/bison.simple"


/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif

/* YY_DECL_VARIABLES -- depending whether we use a pure parser,
   variables are global, or local to YYPARSE.  */

#define YY_DECL_NON_LSP_VARIABLES			\
/* The lookahead symbol.  */				\
int yychar;						\
							\
/* The semantic value of the lookahead symbol. */	\
YYSTYPE yylval;						\
							\
/* Number of parse errors so far.  */			\
int yynerrs;

#if YYLSP_NEEDED
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES			\
						\
/* Location data for the lookahead symbol.  */	\
YYLTYPE yylloc;
#else
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES
#endif


/* If nonreentrant, generate the variables here. */

#if !YYPURE
YY_DECL_VARIABLES
#endif  /* !YYPURE */

int
yyparse (YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  /* If reentrant, generate the variables here. */
#if YYPURE
  YY_DECL_VARIABLES
#endif  /* !YYPURE */

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack. */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;

#if YYLSP_NEEDED
  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
#endif

#if YYLSP_NEEDED
# define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
# define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  YYSIZE_T yystacksize = YYINITDEPTH;


  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
#if YYLSP_NEEDED
  YYLTYPE yyloc;
#endif

  /* When reducing, the number of symbols on the RHS of the reduced
     rule. */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
#if YYLSP_NEEDED
  yylsp = yyls;
#endif
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  */
# if YYLSP_NEEDED
	YYLTYPE *yyls1 = yyls;
	/* This used to be a conditional around just the two extra args,
	   but that might be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
# else
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);
# endif
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
# if YYLSP_NEEDED
	YYSTACK_RELOCATE (yyls);
# endif
# undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
#if YYLSP_NEEDED
      yylsp = yyls + yysize - 1;
#endif

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

#if YYDEBUG
     /* We have to keep this `#if YYDEBUG', since we use variables
	which are defined only if `YYDEBUG' is set.  */
      if (yydebug)
	{
	  YYFPRINTF (stderr, "Next token is %d (%s",
		     yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise
	     meaning of a token, for further debugging info.  */
# ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
# endif
	  YYFPRINTF (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %d (%s), ",
	      yychar, yytname[yychar1]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to the semantic value of
     the lookahead token.  This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

#if YYLSP_NEEDED
  /* Similarly for the default location.  Let the user run additional
     commands if for instance locations are ranges.  */
  yyloc = yylsp[1-yylen];
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
#endif

#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] > 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif

  switch (yyn) {

case 18:
#line 120 "config-parser.y"
{
   OptionsItem->negcache = yyvsp[-1].number;
}
    break;
case 19:
#line 125 "config-parser.y"
{
   MyFree(OptionsItem->pidfile);
   OptionsItem->pidfile = DupString(yyvsp[-1].string);
}
    break;
case 20:
#line 131 "config-parser.y"
{
   OptionsItem->dns_fdlimit = yyvsp[-1].number;
}
    break;
case 21:
#line 136 "config-parser.y"
{
   MyFree(OptionsItem->scanlog);
   OptionsItem->scanlog = DupString(yyvsp[-1].string);
}
    break;
case 41:
#line 166 "config-parser.y"
{
   MyFree(IRCItem->away);
   IRCItem->away = DupString(yyvsp[-1].string);
}
    break;
case 42:
#line 172 "config-parser.y"
{
   MyFree(IRCItem->kline);
   IRCItem->kline = DupString(yyvsp[-1].string);
}
    break;
case 43:
#line 178 "config-parser.y"
{
   MyFree(IRCItem->mode);
   IRCItem->mode = DupString(yyvsp[-1].string);
}
    break;
case 44:
#line 184 "config-parser.y"
{
   MyFree(IRCItem->nick);
   IRCItem->nick = DupString(yyvsp[-1].string);
}
    break;
case 45:
#line 190 "config-parser.y"
{
   MyFree(IRCItem->nickserv);
   IRCItem->nickserv = DupString(yyvsp[-1].string);
}
    break;
case 46:
#line 196 "config-parser.y"
{
   MyFree(IRCItem->oper);
   IRCItem->oper = DupString(yyvsp[-1].string);
}
    break;
case 47:
#line 202 "config-parser.y"
{
   MyFree(IRCItem->password);
   IRCItem->password = DupString(yyvsp[-1].string);
}
    break;
case 48:
#line 208 "config-parser.y"
{
   node_t *node;
   node = node_create(DupString(yyvsp[-1].string));

   list_add(IRCItem->performs, node);
}
    break;
case 49:
#line 216 "config-parser.y"
{
   IRCItem->port = yyvsp[-1].number;
}
    break;
case 50:
#line 221 "config-parser.y"
{
   MyFree(IRCItem->realname);
   IRCItem->realname = DupString(yyvsp[-1].string);
}
    break;
case 51:
#line 227 "config-parser.y"
{
   MyFree(IRCItem->server);
   IRCItem->server = DupString(yyvsp[-1].string);
}
    break;
case 52:
#line 233 "config-parser.y"
{
   MyFree(IRCItem->username);
   IRCItem->username = DupString(yyvsp[-1].string);
}
    break;
case 53:
#line 239 "config-parser.y"
{
   MyFree(IRCItem->vhost);
   IRCItem->vhost = DupString(yyvsp[-1].string);
}
    break;
case 54:
#line 245 "config-parser.y"
{
   MyFree(IRCItem->connregex);
   IRCItem->connregex = DupString(yyvsp[-1].string);
}
    break;
case 55:
#line 254 "config-parser.y"
{
   node_t *node;
   struct ChannelConf *item;

   item = MyMalloc(sizeof *item);

   item->name = DupString("");
   item->key = DupString("");
   item->invite = DupString("");

   node = node_create(item);
   list_add(IRCItem->channels, node);

   tmp = (void *) item;
}
    break;
case 62:
#line 279 "config-parser.y"
{
   struct ChannelConf *item = tmp;

   MyFree(item->name);
   item->name = DupString(yyvsp[-1].string);
}
    break;
case 63:
#line 287 "config-parser.y"
{
   struct ChannelConf *item = tmp;

   MyFree(item->key);
   item->key = DupString(yyvsp[-1].string);
}
    break;
case 64:
#line 295 "config-parser.y"
{
   struct ChannelConf *item = tmp;

   MyFree(item->invite);
   item->invite = DupString(yyvsp[-1].string);
}
    break;
case 65:
#line 305 "config-parser.y"
{
   node_t *node;
   struct UserConf *item;

   item = MyMalloc(sizeof *item);

   item->masks = list_create();
   item->scanners = list_create();

   node = node_create(item);
   list_add(UserItemList, node);

   tmp = (void *) item; 
}
    break;
case 72:
#line 329 "config-parser.y"
{
   struct UserConf *item = (struct UserConf *) tmp;

   node_t *node;
   node = node_create((void *) DupString(yyvsp[-1].string));

   list_add(item->masks, node);
}
    break;
case 73:
#line 339 "config-parser.y"
{
   struct UserConf *item = (struct UserConf *) tmp;

   node_t *node;
   node = node_create((void *) DupString(yyvsp[-1].string));

   list_add(item->scanners, node);
}
    break;
case 74:
#line 351 "config-parser.y"
{
   node_t *node;
   struct ScannerConf *item, *olditem;

   item = MyMalloc(sizeof *item);

   /* Setup ScannerConf defaults */
   item->name = DupString("undefined");

	if(LIST_SIZE(ScannerItemList) > 0)
	{
	   olditem = ScannerItemList->tail->data;

		item->vhost = DupString(olditem->vhost);
		item->fd = olditem->fd;
		item->target_ip = DupString(olditem->target_ip);
		item->target_port = olditem->target_port;
		item->timeout = olditem->timeout;
		item->max_read = olditem->max_read;

		item->target_string = olditem->target_string;
		item->target_string_created = 0;
	}
	else
	{
	   item->vhost = DupString("0.0.0.0");
      item->fd = 512;
      item->target_ip = DupString("127.0.0.1");
      item->target_port = 6667;
      item->timeout = 30;
      item->max_read = 4096;
		
		item->target_string = list_create();
		item->target_string_created = 1;
	}
	
   item->protocols = list_create();

   node = node_create(item);

   list_add(ScannerItemList, node);
   tmp = (void *) item;
}
    break;
case 88:
#line 411 "config-parser.y"
{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->name);
   item->name = DupString(yyvsp[-1].string);
}
    break;
case 89:
#line 418 "config-parser.y"
{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->vhost);
   item->vhost = DupString(yyvsp[-1].string);
}
    break;
case 90:
#line 425 "config-parser.y"
{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->target_ip);
   item->target_ip = DupString(yyvsp[-1].string);
}
    break;
case 91:
#line 432 "config-parser.y"
{
   struct ScannerConf *item = (struct ScannerConf *) tmp;

   node_t *node;
   node = node_create(yyvsp[-1].string);

	if(item->target_string_created == 0)
	{
	   item->target_string = list_create();
		item->target_string_created = 1;
	}

   list_add(item->target_string, node);
}
    break;
case 92:
#line 448 "config-parser.y"
{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->fd = yyvsp[-1].number;
}
    break;
case 93:
#line 454 "config-parser.y"
{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->target_port = yyvsp[-1].number;
}
    break;
case 94:
#line 460 "config-parser.y"
{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->timeout = yyvsp[-1].number;
}
    break;
case 95:
#line 466 "config-parser.y"
{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->max_read = yyvsp[-1].number;
}
    break;
case 96:
#line 472 "config-parser.y"
{
   struct ProtocolConf *item;
   struct ScannerConf  *item2;

   node_t *node;
 
   item = MyMalloc(sizeof *item);
   item->type = yyvsp[-3].number;
   item->port = yyvsp[-1].number;

   item2 = (struct ScannerConf *) tmp;

   node = node_create(item);
   list_add(item2->protocols, node);
}
    break;
case 106:
#line 503 "config-parser.y"
{
   MyFree(OpmItem->dnsbl_from);
   OpmItem->dnsbl_from = DupString(yyvsp[-1].string);
}
    break;
case 107:
#line 509 "config-parser.y"
{
   MyFree(OpmItem->dnsbl_to);
   OpmItem->dnsbl_to = DupString(yyvsp[-1].string);
}
    break;
case 108:
#line 515 "config-parser.y"
{
   MyFree(OpmItem->sendmail);
   OpmItem->sendmail = DupString(yyvsp[-1].string);
}
    break;
case 109:
#line 523 "config-parser.y"
{
   node_t *node;
   struct BlacklistConf *item;

   item = MyMalloc(sizeof *item);

   item->name = DupString("");
   item->kline = DupString("");
   item->ban_unknown = 0;
   item->type = A_BITMASK;
   item->reply = list_create();

   node = node_create(item);
   list_add(OpmItem->blacklists, node);

   tmp = (void *) item;
}
    break;
case 120:
#line 553 "config-parser.y"
{
   struct BlacklistConf *item = tmp;

   MyFree(item->name);
   item->name = DupString(yyvsp[-1].string);
}
    break;
case 121:
#line 560 "config-parser.y"
{
   struct BlacklistConf *item = tmp;

   MyFree(item->kline);
   item->kline = DupString(yyvsp[-1].string);
}
    break;
case 122:
#line 567 "config-parser.y"
{
   struct BlacklistConf *item = tmp;
   
   if(strcmp("A record bitmask", yyvsp[-1].string) == 0)
      item->type = A_BITMASK;
   else if(strcmp("A record reply", yyvsp[-1].string) == 0)
      item->type = A_REPLY;
   else
      yyerror("Unknown blacklist type defined");
}
    break;
case 123:
#line 578 "config-parser.y"
{
   struct BlacklistConf *item = tmp;

   item->ban_unknown = yyvsp[-1].number;
}
    break;
case 128:
#line 591 "config-parser.y"
{
   struct BlacklistReplyConf *item;
   struct BlacklistConf *blacklist = tmp;
   node_t *node;

   item = MyMalloc(sizeof *item);

   item->number = yyvsp[-3].number;
   item->type = DupString(yyvsp[-1].string);

   node = node_create(item);
   list_add(blacklist->reply, node);
}
    break;
case 135:
#line 618 "config-parser.y"
{
   node_t *node;
   node = node_create(DupString(yyvsp[-1].string));

   list_add(ExemptItem->masks, node);
}
    break;
}

#line 705 "/usr/local/share/bison/bison.simple"


  yyvsp -= yylen;
  yyssp -= yylen;
#if YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;
#if YYLSP_NEEDED
  *++yylsp = yyloc;
#endif

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[YYTRANSLATE (yychar)]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[YYTRANSLATE (yychar)]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* defined (YYERROR_VERBOSE) */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*--------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action |
`--------------------------------------------------*/
yyerrlab1:
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;
      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;


/*-------------------------------------------------------------------.
| yyerrdefault -- current state does not do anything special for the |
| error token.                                                       |
`-------------------------------------------------------------------*/
yyerrdefault:
#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */

  /* If its default is to accept any token, ok.  Otherwise pop it.  */
  yyn = yydefact[yystate];
  if (yyn)
    goto yydefault;
#endif


/*---------------------------------------------------------------.
| yyerrpop -- pop the current state because it cannot handle the |
| error token                                                    |
`---------------------------------------------------------------*/
yyerrpop:
  if (yyssp == yyss)
    YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#if YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "Error: state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

/*--------------.
| yyerrhandle.  |
`--------------*/
yyerrhandle:
  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

/*---------------------------------------------.
| yyoverflowab -- parser overflow comes here.  |
`---------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}
#line 625 "config-parser.y"

