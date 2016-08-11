/*
 * If you add or modify a value also update multipath/multipath.conf.5
 * and the TEMPLATE in libmultipath/hwtable.c
 */
#define DEFAULT_UID_ATTRIBUTE	"ID_SERIAL"
#define DEFAULT_UDEVDIR		"/dev"
#define DEFAULT_MULTIPATHDIR	"/" LIB_STRING "/multipath"
#define DEFAULT_SELECTOR	"service-time 0"
#define DEFAULT_ALIAS_PREFIX	"mpath"
#define DEFAULT_FEATURES	"0"
#define DEFAULT_HWHANDLER	"0"
#define DEFAULT_MINIO		1000
#define DEFAULT_MINIO_RQ	1
#define DEFAULT_PGPOLICY	FAILOVER
#define DEFAULT_FAILBACK	-FAILBACK_MANUAL
#define DEFAULT_RR_WEIGHT	RR_WEIGHT_NONE
#define DEFAULT_NO_PATH_RETRY	NO_PATH_RETRY_UNDEF
#define DEFAULT_VERBOSITY	2
#define DEFAULT_REASSIGN_MAPS	0
#define DEFAULT_FIND_MULTIPATHS	0
#define DEFAULT_FAST_IO_FAIL	5
#define DEFAULT_DEV_LOSS_TMO	600
#define DEFAULT_RETAIN_HWHANDLER RETAIN_HWHANDLER_ON
#define DEFAULT_DETECT_PRIO	DETECT_PRIO_ON
#define DEFAULT_DEFERRED_REMOVE	DEFERRED_REMOVE_OFF
#define DEFAULT_DELAY_CHECKS	DELAY_CHECKS_OFF
#define DEFAULT_UEVENT_STACKSIZE 256
#define DEFAULT_RETRIGGER_DELAY	10
#define DEFAULT_RETRIGGER_TRIES	3
#define DEFAULT_UEV_WAIT_TIMEOUT 30

#define DEFAULT_CHECKINT	5
#define MAX_CHECKINT(a)		(a << 2)

#define MAX_DEV_LOSS_TMO	0x7FFFFFFF
#define DEFAULT_PIDFILE		"/" RUN_DIR "/multipathd.pid"
#define DEFAULT_SOCKET		"/org/kernel/linux/storage/multipathd"
#define DEFAULT_CONFIGFILE	"/etc/multipath.conf"
#define DEFAULT_BINDINGS_FILE	"/etc/multipath/bindings"
#define DEFAULT_WWIDS_FILE	"/etc/multipath/wwids"
#define DEFAULT_CONFIG_DIR	"/etc/multipath/conf.d"

char * set_default (char * str);
