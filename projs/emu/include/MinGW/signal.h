#ifndef	_EMU_SIGNAL_H_
#define	_EMU_SIGNAL_H_

#include <MinGW/include/signal.h>
#include <sys/types.h>

#define _NSIG       64

#define SIGHUP		 1
#define SIGINT		 2
#define SIGQUIT		 3
#define SIGILL		 4
#define SIGTRAP		 5
//#define SIGABRT		 6
#define SIGIOT		 6
#define SIGBUS		 7
#define SIGFPE		 8
#define SIGKILL		 9
#define SIGUSR1		10
#define SIGSEGV		11
#define SIGUSR2		12
#define SIGPIPE		13
#define SIGALRM		14
#define SIGTERM		15
#define SIGSTKFLT	16
#define SIGCHLD		17
#define SIGCONT		18
#define SIGSTOP		19
#define SIGTSTP		20
#define SIGTTIN		21
#define SIGTTOU		22
#define SIGURG		23
#define SIGXCPU		24
#define SIGXFSZ		25
#define SIGVTALRM	26
#define SIGPROF		27
#define SIGWINCH	28
#define SIGIO		29
#define SIGPOLL		SIGIO
/*
#define SIGLOST		29
*/
#define SIGPWR		30
#define SIGSYS		31
#define	SIGUNUSED	31

/* These should not be considered constants from userland.  */
#define SIGRTMIN	32
#define SIGRTMAX	_NSIG


#define SIG_BLOCK 0

typedef void __signalfn_t(int);
typedef __signalfn_t *__sighandler_t;

struct sigaction {
 union {
 __sighandler_t _sa_handler;
 void (*_sa_sigaction)(int, struct siginfo *, void *);
 } _u;
 sigset_t sa_mask;
 unsigned long sa_flags;
 void (*sa_restorer)(void);
};

#define sa_handler _u._sa_handler
#define sa_sigaction _u._sa_sigaction


static __inline__ int sigemptyset(sigset_t *set)
{
    memset(set, 0, sizeof *set);
    return 0;
}

static __inline__ int sigaddset(sigset_t *set, int signum)
{
    const int LONG_BIT = 32;
    unsigned long *local_set = (unsigned long *)set;
    signum--;
    local_set[signum/LONG_BIT] |= 1UL << (signum%LONG_BIT);
    return 0;
}

__BEGIN_DECLS
_CRTIMP int sigprocmask(int, const sigset_t *, sigset_t *);
_CRTIMP int sigaction(int, const struct sigaction *, struct sigaction *);
_CRTIMP int kill(pid_t, int);
__END_DECLS

#endif	/* Not _EMU_SIGNAL_H_ */

