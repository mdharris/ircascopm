#ifndef BISON_CONFIG_PARSER_H
# define BISON_CONFIG_PARSER_H

#ifndef YYSTYPE
typedef union 
{
        int number;
        char *string;
} yystype;
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif
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


extern YYSTYPE yylval;

#endif /* not BISON_CONFIG_PARSER_H */
