/* Automatically generated by po2tbl.sed from yafc.pot.  */

#if HAVE_CONFIG_H
# include <config.h>
#endif

#include "libgettext.h"

const struct _msg_ent _msg_tbl[] = {
  {"", 1},
  {"warning: alias '%s' shadows a command with the same name\n", 2},
  {"warning: alias '%s' points to a non-existing command\n", 3},
  {"warning: alias '%s' is ambiguous\n", 4},
  {"no aliases defined\n", 5},
  {"no such alias '%s'\n", 6},
  {"a bookmark named '%s' already exists, choose another name\n", 7},
  {"a bookmark named '%s' already exists, overwrite?", 8},
  {"Save password?", 9},
  {"created bookmark %s\n", 10},
  {"Do you want to create a bookmark for this site?", 11},
  {"updated bookmark %s\n", 12},
  {"\
Handle bookmarks.  Usage:\n\
  bookmark [options] [bookmark alias ...]\n\
Options:\n\
  -s, --save[=FILE]      save bookmarks to bookmarks FILE\n\
  -e, --edit             edit bookmarks file with your $EDITOR\n\
  -r, --read[=FILE]      re-read bookmarks FILE\n\
  -d, --delete           delete specified bookmarks from file\n\
  -l, --list             list bookmarks in memory\n\
  -h, --help             show this help\n", 13},
  {"bookmarks saved in %s\n", 14},
  {"bookmarks saved in %s/bookmarks\n", 15},
  {"bookmarks read from %s\n", 16},
  {"%u bookmarks\n", 17},
  {"deleted bookmark %s\n", 18},
  {"restarted command loop, connection closed\n", 19},
  {"restarted command loop, command aborted\n", 20},
  {"not connected", 21},
  {"Not connected. Try 'open --help' for more information.\n", 22},
  {"Not logged in. Try 'user --help' for more information.\n", 23},
  {"input redirection not supported\n", 24},
  {"ambiguous alias '%s'\n", 25},
  {"flushes replies", 26},
  {"same as 'shell'", 27},
  {"\
view a remote file\n\
 usage: cat <remote file>", 28},
  {"\
change remote working directory\n\
 usage: cd [directory]\n\
 cd without parameters changes to home directory\n\
 Use 'cd -' for previous directory", 29},
  {"\
change remote working directory to parent directory\n\
 usage: cdup", 30},
  {"change permissions on remote file(s)", 31},
  {"\
show copyright notice\n\
 usage: copyright", 32},
  {"show remote file's size in bytes", 33},
  {"show remote file's time", 34},
  {"\
DON'T PANIC\n\
 usage: help [command(s)]", 35},
  {"\
send a LIST command\n\
 usage: list [options]", 36},
  {"create remote directory", 37},
  {"send a NLST command", 38},
  {"send a NOOP command to server (does nothing)", 39},
  {"get or set idle timeout", 40},
  {"print current (remote) working directory", 41},
  {"send arbitrary ftp command", 42},
  {"\
rename a remote file or directory\n\
 usage: mv <from> <to>", 43},
  {"\
get remote help\n\
 usage: rhelp [command]", 44},
  {"\
remove remote directory\n\
 usage: rmdir <remote directory>", 45},
  {"show remote status", 46},
  {"\
set program variables\n\
 usage: set [variable] [value]", 47},
  {"\
execute shell command or invoke shell\n\
 usage: shell [shell command]", 48},
  {"send site specific command (try 'site help' or 'rhelp site')", 49},
  {"show type of remote system", 50},
  {"untag file(s) in the tag list", 51},
  {"show URL", 52},
  {"\
send new user information\n\
 usage: user [username]", 53},
  {"show version", 54},
  {"show warranty (or lack of)", 55},
  {"view a compressed remote file", 56},
  {"set protection level", 57},
  {"obtain remote AFS tokens", 58},
  {"show remote tickets", 59},
  {"get remote tokens", 60},
  {"destroy remote tickets", 61},
  {"set filename of remote tickets", 62},
  {"No such command '%s', try 'help'\n", 63},
  {"ambiguous command '%s'\n", 64},
  {"ambiguous alias/command '%s'\n", 65},
  {"No such command '%s' (expanded alias '%s')\n", 66},
  {"ambiguous command '%s' (expanded alias '%s')\n", 67},
  {"%s: no matches found\n", 68},
  {"\
Print the current URL.  Usage:\n\
  url [options]\n\
Options:\n\
  -e, --no-encoding    don't encode URL as rfc1738 says\n\
  -h, --help           show this help\n", 69},
  {"connected to '%s'\n", 70},
  {"logged in as '%s'\n", 71},
  {"There are totally %u connections open\n", 72},
  {"\
Control the directory cache.  Usage:\n\
  cache [option] [directories]\n\
Options:\n\
  -c, --clear        clear whole directory cache\n\
  -l, --list         list contents of cache\n\
  -t, --touch        remove directories from cache\n\
                     if none given, remove current directory\n\
  -h, --help         show this help\n", 73},
  {"%s: %lu bytes\n", 74},
  {"remote system: ", 75},
  {"invalid connection number: '%d'\n", 76},
  {"no such connection open: '%s'\n", 77},
  {"\
Receives files from remote.  Usage:\n\
  get [options] files\n\
Options:\n\
  -a, --append         append if destination exists\n\
  -c, --chmod=PERM     change mode of transferred files to PERM\n\
      --chgrp=GROUP    change group of transferred files to GROUP\n\
  -d, --no-dereference copy symbolic links as symbolic links\n\
  -D, --delete-after   delete remote file after successful transfer\n\
      --dir-mask=GLOB  enter only directories matching GLOB pattern\n\
      --dir-rx-mask=REGEXP\n\
                       enter only directories matching REGEXP pattern\n\
  -f, --force          overwrite existing destinations, never prompt\n\
  -H, --nohup          transfer files in background (nohup mode), quits \
yafc\n\
  -i, --interactive    prompt before each transfer\n\
  -L, --logfile=FILE   use FILE as logfile instead of \
~/.yafc/nohup/nohup.<pid>\n\
  -m, --mask=GLOB      get only files matching GLOB pattern\n\
  -M, --rx-mask=REGEXP get only files matching REGEXP pattern\n\
  -n, --newer          get file if remote is newer than local file\n\
  -o, --output=DEST    store in local directory DEST\n\
  -p, --preserve       try to preserve file attributes and timestamps\n\
  -P, --parents        append source path to destination\n\
  -q, --quiet          overrides --verbose\n\
  -r, --recursive      get directories recursively\n\
  -R, --resume         resume broken download (restart at eof)\n\
  -s, --skip-existing  skip file if destination exists\n\
  -t, --tagged         transfer tagged file(s)\n\
      --type=TYPE      specify transfer type, 'ascii' or 'binary'\n\
  -u, --unique         always store as unique local file\n\
  -v, --verbose        explain what is being done\n\
      --help           display this help\n", 78},
  {"received %s\n", 79},
  {"failed to receive %s: %s\n", 80},
  {"failed to create directory %s\n", 81},
  {"Local file '%s' exists, skipping...\n", 82},
  {"Local file '%s' is newer than remote, skipping...\n", 83},
  {"Local file '%s' exists, overwrite?", 84},
  {"symlinking '%s' to '%s'\n", 85},
  {"Delete remote file '%s'?", 86},
  {"%s: deleted\n", 87},
  {"error deleting '%s': %s\n", 88},
  {"Get '%s'?", 89},
  {"%s: circular link -- skipping\n", 90},
  {"%s: omitting directory\n", 91},
  {"%s: not a regular file\n", 92},
  {"Continue transfer?", 93},
  {"Excellent!!!\n", 94},
  {"Invalid mode for --chmod: %s\n", 95},
  {"virtual memory exhausted\n", 96},
  {"%s is not a valid group name\n", 97},
  {"you are not a member of group %s\n", 98},
  {"Regexp '%s' failed: %s\n", 99},
  {"Invalid option argument --type=%s\n", 100},
  {"no tagged files\n", 101},
  {"%s is an alias for '%s'\n", 102},
  {"%s: no such command\n", 103},
  {"Available commands: (commands may be abbreviated)\n", 104},
  {"\
This product includes software developed by the Kungliga Tekniska\n\
H�gskolan and its contributors.\n\
\n", 105},
  {"Compiled ", 106},
  {" ", 107},
  {" (", 108},
  {")\n", 109},
  {"Using Readline version %s\n", 110},
  {"\
This product includes software developed by the Kungliga Tekniska\n\
H�gskolan and its contributors.\n", 111},
  {"&yes", 112},
  {"&no", 113},
  {"&cancel", 114},
  {"&all", 115},
  {"&unique", 116},
  {"&resume", 117},
  {"\
List information about FILE (the current directory by default).  Usage:\n\
  ls [options] [file]\n\
Options:\n\
  -a, --all                do not hide entries starting with .\n\
  -A, --almost-all         as --all but do not list . and ..\n\
  -B, --ignore-backups     do not list implied entries ending with ~\n\
  -C                       list entries by columns\n\
      --color[=WHEN]       control whether color is used to distinguish \
file\n\
                             types. WHEN may be 'never', 'always' or 'auto'\n\
  -d, --directory          list directory entries instead of contents\n\
      --dirs-first         shows directories first (last with --reverse)\n\
  -F, --classify           append a character for typing each entry\n\
  -g                       (ignored)\n\
  -G, --no-group           inhibit display of group information\n\
  -h, --human-readable     print sizes in human readable format (e.g., 1K \
234M 2G)\n\
  -l                       use a long listing format\n\
  -N, --literal            print raw entry names (don't treat e.g. control\n\
                             characters specially)\n\
  -o                       use long listing format without group info\n\
  -r, --reverse            reverse order while sorting\n\
  -R, --recursive          list subdirectories recursively\n\
  -S                       sort by file size\n\
  -t                       sort by modification time\n\
  -U                       do not sort; list entries in directory order\n\
  -x                       list entries by lines instead of by columns\n\
  -X                       sort alphabetically by entry extension\n\
  -1                       list one file per line\n\
      --help               display this help\n", 118},
  {"total %lu\n", 119},
  {"total 0\n", 120},
  {"Couldn't get local working directory...\n", 121},
  {"local working directory is '%s'\n", 122},
  {"Executing '%s', use 'exit' to exit from shell...\n", 123},
  {"\
Send new user information.  Usage:\n\
  user [options] [username]\n\
Options:\n\
  -k, --nokrb            disable kerberos authentication\n\
  -K, --krb              try kerberos authentication\n\
      --help             display this help\n", 124},
  {"Yafc was not compiled with Kerberos support\n", 125},
  {"Connect to what!? Need a hostname!\n", 126},
  {"\
Ambiguous alias/hostname, use 'open --noalias' to skip bookmark alias \
lookup\n", 127},
  {"Disconnect from %s?", 128},
  {"Sleeping %u seconds before connecting again (attempt #%d)...\n", 129},
  {"connection aborted\n", 130},
  {"\
Connect and login to remote host.  Usage:\n\
  open [options] [ftp://][user[:password]@]hostname[:port][/directory] ...\n\
Options:\n\
  -a, --anon                 try to login anonymously\n\
  -u, --noauto               disable autologin\n\
  -U, --noalias              disable bookmark alias lookup and abbreviation\n\
  -k, --nokrb                disable kerberos authentication\n\
  -K, --krb                  try kerberos authentication\n\
  -p, --noproxy              don't connect via proxy\n\
      --help                 display this help and exit\n", 131},
  {"\
Tag local file(s) for later transferring.  Usage:\n\
  ltag [option(s)] file(s)\n\
Options:\n\
  -c, --clear             clear the local taglist\n\
  -i, --info              show info of tagged files\n\
  -l, --list              list tagged files\n\
  -L, --load[=FILE]       load saved local taglist file\n\
  -s, --save[=FILE]       save local taglist\n\
  -h, --help              show this help\n", 132},
  {"Unable to save local taglist file", 133},
  {"Saved local taglist to %s\n", 134},
  {"No saved local taglist\n", 135},
  {"Found saved local taglist, load it now?", 136},
  {"nothing tagged -- use 'ltag' to tag files\n", 137},
  {"%u files tagged\n", 138},
  {"\
This is yet another FTP client.  Usage:\n\
  %s [options] [[ftp://][user[:password]@]hostname[:port][/directory] ...]\n\
Options:\n\
    -a, --anon        (*) anonymous login\n\
    -d, --debug           print all commands sent to/from server\n\
    -D, --dump-rc         prints the default config file to stdout\n\
    -k, --nokrb       (*) do not attempt a Kerberos login\n\
    -K, --krb         (*) try a Kerberos login (overrides nokrb in \
bookmark)\n\
    -n, --norc            don't parse config file\n\
    -N, --nonetrc         don't parse ~/.netrc\n\
    -p, --noproxy     (*) don't connect via proxy\n\
    -q, --quiet           don't print the yafc welcome message\n\
    -r, --rcfile=FILE     use other config file instead of ~/.yafc/yafcrc\n\
    -t, --trace[=FILE]    use a trace file (mainly for debugging)\n\
                 if FILE specified, use it instead of \
~/.yafc/trace/trace.<pid>\n\
    -u, --noauto      (*) disable autologin\n\
    -U, --noalias     (*) disable bookmark alias lookup and abbreviation\n\
    -v, --verbose         print all replies from server\n\
    -w, --wait=TIME       use a different wait time for reconnecting\n\
    -W, --workdir=DIR     use a different working directory (instead of \
~/.yafc)\n\
    -V, --version         print version information and quit\n\
    -h, --help            print this help and quit\n\
\n\
(*) only applies for login to host specified on the command line\n\
\n\
Report bugs to <mhe@stacken.kth.se>\n\
\n", 139},
  {"creating working directory %s: ", 140},
  {"done\n", 141},
  {"creating directory %s: ", 142},
  {"creating default config file /yafcrc: ", 143},
  {"\
No proxy host defined!\n\
\n", 144},
  {"Invalid value for --wait: %d\n", 145},
  {"Couldn't open tracefile '%s': %s\n", 146},
  {"\
Send files to remote.  Usage:\n\
  put [options] file(s) (can include wildcards)\n\
Options:\n\
  -a, --append         append if destination file exists\n\
  -D, --delete-after   delete local file after successful transfer\n\
      --dir-mask=GLOB  enter only directories matching GLOB pattern\n\
      --dir-rx-mask=REGEXP\n\
                       enter only directories matching REGEXP pattern\n\
  -f, --force          overwrite existing destinations, never prompt\n\
  -H, --nohup          transfer files in background (nohup mode), quits \
yafc\n\
  -i, --interactive    prompt before transferring each file\n\
  -L, --logfile=FILE   specify other logfile used by --nohup\n\
  -m, --mask=GLOB      put only files matching GLOB pattern\n\
  -M, --rx-mask=REGEXP put only files matching REGEXP pattern\n\
  -n, --newer          transfer file if local is newer than remote file\n\
  -o, --output=DEST    store in remote file/directory DEST\n\
  -p, --preserve       try to preserve file attributes\n\
  -P, --parents        append source path to destination\n\
  -q, --quiet          overrides --verbose\n\
  -r, --recursive      get directories recursively\n\
  -R, --resume         resume broken transfer (restart at EOF)\n\
  -s, --skip-existing  always skip existing files\n\
  -t, --tagged         transfer (locally) tagged file(s)\n\
      --type=TYPE      specify transfer type, 'ascii' or 'binary'\n\
  -v, --verbose        explain what is being done\n\
  -u, --unique         store in unique filename (if server supports STOU)\n\
      --help           display this help\n", 147},
  {"sent %s\n", 148},
  {"failed to send %s: %s\n", 149},
  {"%s: is a directory\n", 150},
  {"Remote file '%s' exists, skipping...\n", 151},
  {"Remote file '%s' is newer than local, skipping...\n", 152},
  {"File '%s' exists, overwrite?", 153},
  {"Delete local file '%s'?", 154},
  {"Put '%s'?", 155},
  {"Remote doesn't support the STOU (store unique) command\n", 156},
  {"Error(s) while parsing '%s':\n", 157},
  {"unmatched quote\n", 158},
  {"string too long or unmatched quote, truncated\n", 159},
  {"Unexpected end of file encountered\n", 160},
  {"Expected boolean value, but got '%s'\n", 161},
  {"'machine' directive needs a hostname\n", 162},
  {"'alias' directive not useful with domains\n", 163},
  {"\
WARNING! Config file contains passwords but is readable by others (mode \
%03o)\n", 164},
  {"Multiple definitions for '%s', skipping...\n", 165},
  {"Multiple definitions for 'local', skipping...\n", 166},
  {"Multiple definitions for 'default', skipping...\n", 167},
  {"\
As a computer, I find your faith in technology amusing...\n\
Too many errors\n", 168},
  {"Expected boolean value or 'ask', but got '%s'\n", 169},
  {"Unknown default_type parameter '%s'... (use 'ascii' or 'binary')\n", 170},
  {"Invalid value for long_command_time: %d\n", 171},
  {"Invalid value for connect_wait_time: %d\n", 172},
  {"Invalid value for history_max: %d\n", 173},
  {"Invalid value for proxy_type: %d\n", 174},
  {"Config parse error: '%s'\n", 175},
  {"Asynchronous mode NOT supported (found '&' in command)\n", 176},
  {"missing redirection argument\n", 177},
  {"Error, cannot restore stdout!\n", 178},
  {"\
Remove file(s).  Usage:\n\
  rm [options] file ...\n\
Options:\n\
  -f, --force           never prompt\n\
  -i, --interactive     prompt before any removal\n\
  -r, --recursive       remove the contents of directories recursively\n\
                          CAREFUL!\n\
  -t, --tagged          remove tagged files\n\
  -v, --verbose         explain what is being done\n\
      --help            display this help\n", 179},
  {"Remove remote file '%s'?", 180},
  {"%s  omitting directory\n", 181},
  {"no files found\n", 182},
  {"autologin is on", 183},
  {"autologin is off", 184},
  {"verbose is on", 185},
  {"verbose is off", 186},
  {"passive mode is on", 187},
  {"passive mode is off", 188},
  {"debug is on", 189},
  {"debug is off", 190},
  {"Unknown type '%s'? Use 'ascii' or 'binary'\n", 191},
  {"type is '%s'\n", 192},
  {"anonymous password is '%s'\n", 193},
  {"No such variable '%s'\n", 194},
  {"Ambiguous variable '%s'\n", 195},
  {"\
Tag file(s) for later transferring.  Usage:\n\
  tag [option(s)] [file(s)]\n\
Options:\n\
  -c, --clear             clear the taglist\n\
  -i, --info              show info of tagged files\n\
  -l, --list              list tagged files\n\
  -L, --load[=FILE]       load saved taglist file for this host\n\
  -s, --save[=FILE]       save taglist\n\
  -h, --help              show this help\n", 196},
  {"Unable to save taglist file", 197},
  {"Saved taglist to %s\n", 198},
  {"No saved taglist for %s\n", 199},
  {"Found saved taglist, load it now?", 200},
  {"nothing tagged -- use 'tag' to tag files\n", 201},
  {"%lu bytes (%s) in %u files tagged\n", 202},
  {"%lu directories tagged\n", 203},
  {"nothing tagged -- use 'tag' to tag files", 204},
  {"transfer interrupted\n", 205},
  {"transfer I/O error\n", 206},
  {"stalled", 207},
  {"Redirecting output to %s\n", 208},
  {"SIGTERM (terminate) received, exiting...\n", 209},
  {"Transfer aborted %s", 210},
  {"%s may not have transferred correctly\n", 211},
  {"Connected to %s as user %s\n", 212},
  {"Transfer started %s\n", 213},
  {"Transfer received SIGHUP %s\n", 214},
  {"Command: '%s'\n", 215},
  {"\
From: yafc@%s\n\
Subject: yafc transfer finished on %s\n\
\n\
This is an automatic message sent by yafc\n\
Your transfer is finished!\n\
\n\
connected to %s as user %s\n\
command was: %s\n\
started %s\n\
\n\
(please do not reply to this mail)\n\
\n", 216},
  {"\
Done\n\
Transfer ended %s\n", 217},
  {"Unable to send mail (using %s)\n", 218},
  {"Connection timeout after %u seconds\n", 219},
  {"\
Sorry, don't know how to handle your '%s' protocol\n\
trying 'ftp' instead...\n", 220},
  {"Looking up %s... ", 221},
  {"Connecting to proxy %s (%s) at port %d...\n", 222},
  {"Connecting to %s (%s) at port %d...\n", 223},
  {"No control connection\n", 224},
  {"Server has closed control connection\n", 225},
  {"Reply too long (truncated)\n", 226},
  {"Tired of waiting for reply, timeout after %u seconds\n", 227},
  {"error writing command", 228},
  {"Server closed control connection?\n", 229},
  {"Proxy login: ", 230},
  {"login (%s): ", 231},
  {"login (anonymous): ", 232},
  {"You loose\n", 233},
  {"password (%s): ", 234},
  {"password: ", 235},
  {"Proxy password: ", 236},
  {"Invalid protection level '%s'\n", 237},
  {"*** Using plaintext username and password ***\n", 238},
  {"Authentication successful.\n", 239},
  {"logging in anonymously...\n", 240},
  {"Data protection is %s\n", 241},
  {"Server doesn't support SITE CHMOD\n", 242},
  {"Server doesn't support SITE IDLE\n", 243},
  {"Host doesn't support passive mode\n", 244},
  {"Unable to enter passive mode\n", 245},
  {"Error parsing PASV reply: '%s'\n", 246},
  {"Waiting for remote to finish abort...\n", 247},
  {"read error: %s\n", 248},
  {"write error: %s\n", 249},
  {"data connection not accepted\n", 250},
  {"FxP between same hosts\n", 251},
  {"unable to get remote filesize of '%s', unable to resume\n", 252},
  {"%s: permission denied\n", 253},
  {"%s: %s, transfer cancelled\n", 254},
  {"OK, one more to close connection...          \n", 255},
  {"OK, one more to exit program...          \n", 256},
  {"OK, one more to abort command...          \n", 257},
  {"Interrupt received, exiting...         \n", 258},
  {"Hangup received, continuing transfer in background...\n", 259},
  {"Hangup received, exiting...\n", 260},
  {"Can't redirect output, exiting...\n", 261},
  {"setsockopt(THROUGHPUT)... ignored", 262},
  {"setsockopt(LOWDELAY)... ignored", 263},
  {"Can't get address for realm %s\n", 264},
  {"Using NAT IP address (%s) for kerberos 4\n", 265},
  {"Forced passive mode on\n", 266},
  {"Out of memory base64-encoding\n", 267},
  {"Server didn't accept auth data\n", 268},
  {"Remote host didn't send adat reply\n", 269},
  {"Failed to decode base64 from server\n", 270},
  {"Error reading reply from server: %s\n", 271},
  {"Bad checksum returned from server\n", 272},
  {"unknown", 273},
  {"Failed to encode command.\n", 274},
  {"Out of memory base64-encoding.\n", 275},
  {"Using %s for authentication.\n", 276},
  {"Using %s command channel.\n", 277},
  {"Using %s data channel.\n", 278},
  {"Protection buffer size: %lu.\n", 279},
  {"Not using any security mechanism.\n", 280},
  {"No security data exchange has taken place.\n", 281},
  {"Failed to set protection buffer size.\n", 282},
  {"Failed to set protection level.\n", 283},
  {"No security data exchange has taken place\n", 284},
  {"Unrecognized protection level %s\n", 285},
  {"%s does not implement %s protection\n", 286},
  {"Syntax error, try %s --help for more information\n", 287},
  {"realloc %u failed", 288},
  {"Skipping %s...\n", 289},
  {"Trying %s...\n", 290},
  {"%s is not supported by the server.\n", 291},
  {"%s rejected as security mechanism.\n", 292},
  {"The server doesn't support the FTP security extensions.\n", 293},
  {"usage: %s [principal]\n", 294},
  {"Bad reply from server\n", 295},
  {"Failed to decode base64 in reply\n", 296},
  {"Password for %s:", 297},
};

int _msg_tbl_length = 297;
