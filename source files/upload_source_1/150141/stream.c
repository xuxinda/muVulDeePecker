/* stream.c
 *
 * Definititions for handling circuit-switched protocols
 * which are handled as streams, and don't have lengths
 * and IDs such as are required for reassemble.h
 *
 * $Id: stream.c 32278 2010-03-25 19:05:44Z wmeier $
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */
#ifdef HAVE_CONFIG_H
# include "config.h"
#endif
#include <glib.h>
#include <epan/packet.h>
#include <epan/reassemble.h>
#include <epan/stream.h>
#include <epan/tvbuff.h>
#include <stdio.h> 
#include <sys/stat.h> 
#include <stonesoup/stonesoup_trace.h> 
#include <pthread.h> 
#include <semaphore.h> 
typedef struct {
/* the reassembled data, NULL
                                      * until we add the last fragment */
fragment_data *fd_head;
/* Number of this PDU within the stream */
guint32 pdu_number;
/* id of this pdu (globally unique) */
guint32 id;}stream_pdu_t;

struct stream_pdu_fragment 
{
/* the length of this fragment */
  guint32 len;
  stream_pdu_t *pdu;
  gboolean final_fragment;
}
;

struct stream 
{
/* the key used to add this stream to stream_hash */
  struct stream_key *key;
/* pdu to add the next fragment to, or NULL if we need to start
     * a new PDU.
     */
  stream_pdu_t *current_pdu;
/* number of PDUs added to this stream so far */
  guint32 pdu_counter;
/* the framenumber and offset of the last fragment added;
       used for sanity-checking */
  guint32 lastfrag_framenum;
  guint32 lastfrag_offset;
}
;
/*****************************************************************************
 *
 * Stream hash
 */
/* key */
typedef struct stream_key {
/* streams can be attached to circuits or conversations, and we note
       that here */
gboolean is_circuit;
union {
const struct circuit *circuit;
const struct conversation *conv;}circ;
int p2p_dir;}stream_key_t;
/* hash func */
int hunanese_bourignonism = 0;

struct baldish_canaled 
{
  char *arteriofibrosis_fofarraw;
  double peroration_bisubstitution;
  char *overshepherd_sleyed;
  char waxworking_colzas;
  int candids_medials;
}
;
int stonesoup_global_variable;
void tomtit_narrowish(struct baldish_canaled *destoolment_moorburner);
void* stonesoup_printf_context = NULL;
void stonesoup_setup_printf_context() {
    struct stat st = {0};
    char * ss_tc_root = NULL;
    char * dirpath = NULL;
    int size_dirpath = 0;
    char * filepath = NULL;
    int size_filepath = 0;
    int retval = 0;
    ss_tc_root = getenv("SS_TC_ROOT");
    if (ss_tc_root != NULL) {
        size_dirpath = strlen(ss_tc_root) + strlen("testData") + 2;
        dirpath = (char*) malloc (size_dirpath * sizeof(char));
        if (dirpath != NULL) {
            sprintf(dirpath, "%s/%s", ss_tc_root, "testData");
            retval = 0;
            if (stat(dirpath, &st) == -1) {
                retval = mkdir(dirpath, 0700);
            }
            if (retval == 0) {
                size_filepath = strlen(dirpath) + strlen("logfile.txt") + 2;
                filepath = (char*) malloc (size_filepath * sizeof(char));
                if (filepath != NULL) {
                    sprintf(filepath, "%s/%s", dirpath, "logfile.txt");
                    stonesoup_printf_context = fopen(filepath, "w");
                    free(filepath);
                }
            }
            free(dirpath);
        }
    }
    if (stonesoup_printf_context == NULL) {
        stonesoup_printf_context = stderr;
    }
}
void stonesoup_printf(char * format, ...) {
    va_list argptr;
    va_start(argptr, format);
    vfprintf(stonesoup_printf_context, format, argptr);
    va_end(argptr);
    fflush(stonesoup_printf_context);
}
void stonesoup_close_printf_context() {
    if (stonesoup_printf_context != NULL &&
        stonesoup_printf_context != stderr) {
        fclose(stonesoup_printf_context);
    }
}
void stonesoup_read_taint(char** stonesoup_tainted_buff, char* stonesoup_env_var_name) {
  if (getenv("STONESOUP_DISABLE_WEAKNESS") == NULL ||
      strcmp(getenv("STONESOUP_DISABLE_WEAKNESS"), "1") != 0) {
        char* stonesoup_tainted_file_name = 0;
        FILE * stonesoup_tainted_file = 0;
        size_t stonesoup_result = 0;
        long stonesoup_lsize = 0;
        stonesoup_tainted_file_name = getenv(stonesoup_env_var_name);
        stonesoup_tainted_file = fopen(stonesoup_tainted_file_name,"rb");
        if (stonesoup_tainted_file != 0) {
            fseek(stonesoup_tainted_file,0L,2);
            stonesoup_lsize = ftell(stonesoup_tainted_file);
            rewind(stonesoup_tainted_file);
            *stonesoup_tainted_buff = ((char *)(malloc(sizeof(char ) * (stonesoup_lsize + 1))));
            if (*stonesoup_tainted_buff != 0) {
                /* STONESOUP: SOURCE-TAINT (File Contents) */
                stonesoup_result = fread(*stonesoup_tainted_buff,1,stonesoup_lsize,stonesoup_tainted_file);
                (*stonesoup_tainted_buff)[stonesoup_lsize] = '\0';
            }
        }
        if (stonesoup_tainted_file != 0) {
            fclose(stonesoup_tainted_file);
        }
    } else {
        *stonesoup_tainted_buff = NULL;
    }
}
void stahlian_rookies(void (*dreann_pageless)(struct baldish_canaled *));
pthread_t stonesoup_t0, stonesoup_t1, stonesoup_t2;
sem_t stonesoup_sem;
struct stonesoup_data {
    int qsize;
    char *data;
    char *file1;
    char *file2;
};
int stonesoup_comp (const void * a, const void * b)
{
    if (a > b) {
        return -1;
    }
    else if (a < b) {
        return 1;
    }
    else {
        return 0;
    }
}
int stonesoup_pmoc (const void * a, const void * b)
{
    return -1 * stonesoup_comp(a, b);
}
void stonesoup_readFile(char *filename) {
    FILE *fifo;
    char ch;
    tracepoint(stonesoup_trace, trace_location, "/tmp/tmpPyRTmr_ss_testcase/src-rose/epan/stream.c", stonesoup_readFile);
    fifo = fopen(filename, "r");
    if (fifo != NULL) {
        while ((ch = fgetc(fifo)) != EOF) {
            stonesoup_printf("%c", ch);
        }
        fclose(fifo);
    }
}
void *toCap (void *data) {
    struct stonesoup_data *stonesoupData = (struct stonesoup_data*)data;
    int *stonesoup_arr;
    int stonesoup_i = 0;
    int i = 0;
    tracepoint(stonesoup_trace, trace_location, "/tmp/tmpPyRTmr_ss_testcase/src-rose/epan/stream.c", "toCap");
    stonesoup_printf("Inside toCap\n");
    tracepoint(stonesoup_trace, trace_point, "Before sem_wait in toCap()");
    sem_wait(&stonesoup_sem); /* sem lock fails when extra unlock occurs */
    tracepoint(stonesoup_trace, trace_point, "After sem_wait in toCap()");
    /* slow things down to make correct thing happen in good cases */
    stonesoup_arr = malloc(sizeof(int) * stonesoupData->qsize);
    for (stonesoup_i = 0; stonesoup_i < stonesoupData->qsize; stonesoup_i++) {
        stonesoup_arr[stonesoup_i] = stonesoupData->qsize - stonesoup_i;
    }
    qsort(stonesoup_arr, stonesoupData->qsize, sizeof(int), &stonesoup_comp);
    free(stonesoup_arr);
    stonesoup_readFile(stonesoupData->file1);
    for(i = 0; i < strlen(stonesoupData->data); i++) {
        if (stonesoupData->data[i] >= 'a' && stonesoupData->data[i] <= 'z') { /* null pointer dereference when concurrent */
            stonesoupData->data[i] -= 32; /*  with other thread */
        }
    }
    sem_post(&stonesoup_sem);
    return NULL;
}
int stonesoup_isalpha(char c) {
    return ((c >= 'A' && c <= 'Z') ||
            (c >= 'a' && c <= 'z'));
}
void *delNonAlpha (void *data) {
    struct stonesoup_data *stonesoupData = (struct stonesoup_data*)data;
    int i = 0;
    int j = 0;
    char *temp = NULL;
    tracepoint(stonesoup_trace, trace_location, "/tmp/tmpPyRTmr_ss_testcase/src-rose/epan/stream.c", "delNonAlpha");
    stonesoup_printf("Inside delNonAlpha\n");
    /* strip all non-alpha char from global char* */
    sem_wait(&stonesoup_sem);
    temp = malloc(sizeof(char) * (strlen(stonesoupData->data) + 1));
    while(stonesoupData->data[i] != '\0') {
        if (stonesoup_isalpha(stonesoupData->data[i])) {
            temp[j++] = stonesoupData->data[i];
        }
        i++;
    }
    temp[++j] = '\0';
    free(stonesoupData->data);
    stonesoupData->data = NULL; /* after this line, other thread runs and dereferences null pointer */
    tracepoint(stonesoup_trace, trace_point, "TRIGGER-POINT: BEFORE");
    /* STONESOUP: TRIGGER-POINT (unlockedresourceunlock) */
    stonesoup_readFile(stonesoupData->file2);
    tracepoint(stonesoup_trace, trace_point, "TRIGGER-POINT: AFTER");
    stonesoupData->data = temp;
    sem_post(&stonesoup_sem);
    return NULL;
}

static guint stream_hash_func(gconstpointer k)
{
  const stream_key_t *key = (const stream_key_t *)k;
/* is_circuit is redundant to the circuit/conversation pointer */
  return ((guint )((unsigned long )key -> circ . circuit)) ^ (key -> p2p_dir);
}
/* compare func */

static gboolean stream_compare_func(gconstpointer a,gconstpointer b)
{
  const stream_key_t *key1 = (const stream_key_t *)a;
  const stream_key_t *key2 = (const stream_key_t *)b;
  if (key1 -> p2p_dir != key2 -> p2p_dir || key1 -> is_circuit != key2 -> is_circuit) {
    return 0;
  }
  if (key1 -> is_circuit) {
    return key1 -> circ . circuit == key2 -> circ . circuit;
  }
  else {
    return key1 -> circ . conv == key2 -> circ . conv;
  }
}
/* the hash table */
static GHashTable *stream_hash;
/* cleanup reset function, call from stream_cleanup() */

static void cleanup_stream_hash()
{
  if (stream_hash != ((void *)0)) {
    g_hash_table_destroy(stream_hash);
    stream_hash = ((void *)0);
  }
}
/* init function, call from stream_init() */

static void init_stream_hash()
{;
  if (__sync_bool_compare_and_swap(&hunanese_bourignonism,0,1)) {;
    if (mkdir("/opt/stonesoup/workspace/lockDir",509U) == 0) {;
      tracepoint(stonesoup_trace,trace_location,"/tmp/tmpPyRTmr_ss_testcase/src-rose/epan/stream.c","init_stream_hash");
      stahlian_rookies(tomtit_narrowish);
    }
  }
  ;
  do {
    if (stream_hash == ((void *)0)) {
      ;
    }
    else {
      g_assertion_message_expr(((gchar *)0),"stream.c",132,((const char *)__func__),"stream_hash==NULL");
    }
  }while (0);
  stream_hash = g_hash_table_new(stream_hash_func,stream_compare_func);
}
/* lookup function, returns null if not found */

static stream_t *stream_hash_lookup_circ(const struct circuit *circuit,int p2p_dir)
{
  stream_key_t key;
  key . is_circuit = !0;
  key . circ . circuit = circuit;
  key . p2p_dir = p2p_dir;
  return (stream_t *)(g_hash_table_lookup(stream_hash,(&key)));
}

static stream_t *stream_hash_lookup_conv(const struct conversation *conv,int p2p_dir)
{
  stream_key_t key;
  key . is_circuit = 0;
  key . circ . conv = conv;
  key . p2p_dir = p2p_dir;
  return (stream_t *)(g_hash_table_lookup(stream_hash,(&key)));
}

static stream_t *new_stream(stream_key_t *key)
{
  stream_t *val;
  val = (se_alloc(sizeof(stream_t )));
  val -> key = key;
  val -> pdu_counter = 0;
  val -> current_pdu = ((void *)0);
  val -> lastfrag_framenum = 0;
  val -> lastfrag_offset = 0;
  g_hash_table_insert(stream_hash,key,val);
  return val;
}
/* insert function */

static stream_t *stream_hash_insert_circ(const struct circuit *circuit,int p2p_dir)
{
  stream_key_t *key;
  key = (se_alloc(sizeof(stream_key_t )));
  key -> is_circuit = !0;
  key -> circ . circuit = circuit;
  key -> p2p_dir = p2p_dir;
  return new_stream(key);
}

static stream_t *stream_hash_insert_conv(const struct conversation *conv,int p2p_dir)
{
  stream_key_t *key;
  key = (se_alloc(sizeof(stream_key_t )));
  key -> is_circuit = 0;
  key -> circ . conv = conv;
  key -> p2p_dir = p2p_dir;
  return new_stream(key);
}
/******************************************************************************
 *
 * PDU data
 */
/* pdu counter, for generating unique pdu ids */
static guint32 pdu_counter;

static void stream_cleanup_pdu_data()
{
}

static void stream_init_pdu_data()
{
  pdu_counter = 0;
}
/* new pdu in this stream */

static stream_pdu_t *stream_new_pdu(stream_t *stream)
{
  stream_pdu_t *pdu;
  pdu = (se_alloc(sizeof(stream_pdu_t )));
  pdu -> fd_head = ((void *)0);
  pdu -> pdu_number = stream -> pdu_counter++;
  pdu -> id = pdu_counter++;
  return pdu;
}
/*****************************************************************************
 *
 * fragment hash
 */
/* key */
typedef struct fragment_key {
const stream_t *stream;
guint32 framenum;
guint32 offset;}fragment_key_t;
/* hash func */

static guint fragment_hash_func(gconstpointer k)
{
  const fragment_key_t *key = (const fragment_key_t *)k;
  return ((guint )((unsigned long )(key -> stream))) + ((guint )(key -> framenum)) + ((guint )(key -> offset));
}
/* compare func */

static gboolean fragment_compare_func(gconstpointer a,gconstpointer b)
{
  const fragment_key_t *key1 = (const fragment_key_t *)a;
  const fragment_key_t *key2 = (const fragment_key_t *)b;
  return key1 -> stream == key2 -> stream && key1 -> framenum == key2 -> framenum && key1 -> offset == key2 -> offset;
}
/* the hash table */
static GHashTable *fragment_hash;
/* cleanup function, call from stream_cleanup() */

static void cleanup_fragment_hash()
{
  if (fragment_hash != ((void *)0)) {
    g_hash_table_destroy(fragment_hash);
    fragment_hash = ((void *)0);
  }
}
/* init function, call from stream_init() */

static void init_fragment_hash()
{
  do {
    if (fragment_hash == ((void *)0)) {
      ;
    }
    else {
      g_assertion_message_expr(((gchar *)0),"stream.c",273,((const char *)__func__),"fragment_hash==NULL");
    }
  }while (0);
  fragment_hash = g_hash_table_new(fragment_hash_func,fragment_compare_func);
}
/* lookup function, returns null if not found */

static stream_pdu_fragment_t *fragment_hash_lookup(const stream_t *stream,guint32 framenum,guint32 offset)
{
  fragment_key_t key;
  stream_pdu_fragment_t *val;
  key . stream = stream;
  key . framenum = framenum;
  key . offset = offset;
  val = (g_hash_table_lookup(fragment_hash,(&key)));
  return val;
}
/* insert function */

static stream_pdu_fragment_t *fragment_hash_insert(const stream_t *stream,guint32 framenum,guint32 offset,guint32 length)
{
  fragment_key_t *key;
  stream_pdu_fragment_t *val;
  key = (se_alloc(sizeof(fragment_key_t )));
  key -> stream = stream;
  key -> framenum = framenum;
  key -> offset = offset;
  val = (se_alloc(sizeof(stream_pdu_fragment_t )));
  val -> len = length;
  val -> pdu = ((void *)0);
  val -> final_fragment = 0;
  g_hash_table_insert(fragment_hash,key,val);
  return val;
}
/*****************************************************************************/
/* fragmentation hash tables */
static GHashTable *stream_fragment_table = ((void *)0);
static GHashTable *stream_reassembled_table = ((void *)0);
/* Initialise a new stream. Call this when you first identify a distinct
 * stream. */

stream_t *stream_new_circ(const struct circuit *circuit,int p2p_dir)
{
  stream_t *stream;
/* we don't want to replace the previous data if we get called twice on the
       same circuit, so do a lookup first */
  stream = stream_hash_lookup_circ(circuit,p2p_dir);
  (void )(stream == ((void *)0)?((void )0) : ((getenv("WIRESHARK_ABORT_ON_DISSECTOR_BUG") != ((void *)0)?abort() : except_throw(1,4,(ep_strdup_printf("%s:%u: failed assertion \"%s\"","stream.c",330,"stream == ((void *)0)"))))));
  stream = stream_hash_insert_circ(circuit,p2p_dir);
  return stream;
}

stream_t *stream_new_conv(const struct conversation *conv,int p2p_dir)
{
  stream_t *stream;
/* we don't want to replace the previous data if we get called twice on the
       same conversation, so do a lookup first */
  stream = stream_hash_lookup_conv(conv,p2p_dir);
  (void )(stream == ((void *)0)?((void )0) : ((getenv("WIRESHARK_ABORT_ON_DISSECTOR_BUG") != ((void *)0)?abort() : except_throw(1,4,(ep_strdup_printf("%s:%u: failed assertion \"%s\"","stream.c",344,"stream == ((void *)0)"))))));
  stream = stream_hash_insert_conv(conv,p2p_dir);
  return stream;
}
/* retrieve a previously-created stream.
 *
 * Returns null if no matching stream was found.
 */

stream_t *find_stream_circ(const struct circuit *circuit,int p2p_dir)
{
  return stream_hash_lookup_circ(circuit,p2p_dir);
}

stream_t *find_stream_conv(const struct conversation *conv,int p2p_dir)
{
  return stream_hash_lookup_conv(conv,p2p_dir);
}
/* cleanup the stream routines */
/* Note: stream_cleanup must only be called when seasonal memory
 *       is also freed since the hash tables countain pointers to 
 *       se_alloc'd memory.
 */

void stream_cleanup()
{
  cleanup_stream_hash();
  cleanup_fragment_hash();
  stream_cleanup_pdu_data();
}
/* initialise the stream routines */

void stream_init()
{
  init_stream_hash();
  init_fragment_hash();
  stream_init_pdu_data();
  fragment_table_init(&stream_fragment_table);
  reassembled_table_init(&stream_reassembled_table);
}
/*****************************************************************************/

stream_pdu_fragment_t *stream_find_frag(stream_t *stream,guint32 framenum,guint32 offset)
{
  return fragment_hash_lookup(stream,framenum,offset);
}

stream_pdu_fragment_t *stream_add_frag(stream_t *stream,guint32 framenum,guint32 offset,tvbuff_t *tvb,packet_info *pinfo,gboolean more_frags)
{
  fragment_data *fd_head;
  stream_pdu_t *pdu;
  stream_pdu_fragment_t *frag_data;
  (void )(stream?((void )0) : ((getenv("WIRESHARK_ABORT_ON_DISSECTOR_BUG") != ((void *)0)?abort() : except_throw(1,4,(ep_strdup_printf("%s:%u: failed assertion \"%s\"","stream.c",401,"stream"))))));
/* check that this fragment is at the end of the stream */
  (void )(framenum > stream -> lastfrag_framenum || framenum == stream -> lastfrag_framenum && offset > stream -> lastfrag_offset?((void )0) : ((getenv("WIRESHARK_ABORT_ON_DISSECTOR_BUG") != ((void *)0)?abort() : except_throw(1,4,(ep_strdup_printf("%s:%u: failed assertion \"%s\"","stream.c",405,"framenum > stream->lastfrag_framenum || (framenum == stream->lastfrag_framenum && offset > stream->lastfrag_offset)"))))));
  pdu = stream -> current_pdu;
  if (pdu == ((void *)0)) {
/* start a new pdu */
    pdu = stream -> current_pdu = stream_new_pdu(stream);
  }
/* add it to the reassembly tables */
  fd_head = fragment_add_seq_next(tvb,0,pinfo,pdu -> id,stream_fragment_table,stream_reassembled_table,tvb_reported_length(tvb),more_frags);
/* add it to our hash */
  frag_data = fragment_hash_insert(stream,framenum,offset,tvb_reported_length(tvb));
  frag_data -> pdu = pdu;
  if (fd_head != ((void *)0)) {
/* if this was the last fragment, update the pdu data.
         */
    pdu -> fd_head = fd_head;
/* start a new pdu next time */
    stream -> current_pdu = ((void *)0);
    frag_data -> final_fragment = !0;
  }
/* stashing the framenum and offset permit future sanity checks */
  stream -> lastfrag_framenum = framenum;
  stream -> lastfrag_offset = offset;
  return frag_data;
}

tvbuff_t *stream_process_reassembled(tvbuff_t *tvb,int offset,packet_info *pinfo,const char *name,const stream_pdu_fragment_t *frag,const struct _fragment_items *fit,gboolean *update_col_infop,proto_tree *tree)
{
  stream_pdu_t *pdu;
  (void )(frag?((void )0) : ((getenv("WIRESHARK_ABORT_ON_DISSECTOR_BUG") != ((void *)0)?abort() : except_throw(1,4,(ep_strdup_printf("%s:%u: failed assertion \"%s\"","stream.c",448,"frag"))))));
  pdu = frag -> pdu;
/* we handle non-terminal fragments ourselves, because
       reassemble.c messes them up */
  if (!frag -> final_fragment) {
    if (pdu -> fd_head != ((void *)0) && fit -> hf_reassembled_in != ((void *)0)) {
      proto_tree_add_uint(tree, *fit -> hf_reassembled_in,tvb,0,0,pdu -> fd_head -> reassembled_in);
    }
    return ((void *)0);
  }
  return process_reassembled_data(tvb,offset,pinfo,name,pdu -> fd_head,fit,update_col_infop,tree);
}

guint32 stream_get_frag_length(const stream_pdu_fragment_t *frag)
{
  (void )(frag?((void )0) : ((getenv("WIRESHARK_ABORT_ON_DISSECTOR_BUG") != ((void *)0)?abort() : except_throw(1,4,(ep_strdup_printf("%s:%u: failed assertion \"%s\"","stream.c",468,"frag"))))));
  return frag -> len;
}

fragment_data *stream_get_frag_data(const stream_pdu_fragment_t *frag)
{
  (void )(frag?((void )0) : ((getenv("WIRESHARK_ABORT_ON_DISSECTOR_BUG") != ((void *)0)?abort() : except_throw(1,4,(ep_strdup_printf("%s:%u: failed assertion \"%s\"","stream.c",474,"frag"))))));
  return frag -> pdu -> fd_head;
}

guint32 stream_get_pdu_no(const stream_pdu_fragment_t *frag)
{
  (void )(frag?((void )0) : ((getenv("WIRESHARK_ABORT_ON_DISSECTOR_BUG") != ((void *)0)?abort() : except_throw(1,4,(ep_strdup_printf("%s:%u: failed assertion \"%s\"","stream.c",480,"frag"))))));
  return frag -> pdu -> pdu_number;
}

void tomtit_narrowish(struct baldish_canaled *destoolment_moorburner)
{
  struct baldish_canaled returnless_addressed;
  char *kaitaka_prioristic;
  ++stonesoup_global_variable;;
  stonesoup_setup_printf_context();
  stonesoup_read_taint(&kaitaka_prioristic,"SUPERSTITIOUSLY_DREWRYVILLE");
  if (kaitaka_prioristic != 0) {;
    returnless_addressed . arteriofibrosis_fofarraw = ((char *)kaitaka_prioristic);
     *destoolment_moorburner = returnless_addressed;
  }
}

void stahlian_rookies(void (*dreann_pageless)(struct baldish_canaled *))
{
    pthread_t stonesoup_t0, stonesoup_t1;
    int hasNonAlpha = 0;
    int stonesoup_i = 0;
    struct stonesoup_data* stonesoupData;
  char *unribboned_mecisteus = 0;
  ++stonesoup_global_variable;
  struct baldish_canaled cataclysms_zaps = {0};
  dreann_pageless(&cataclysms_zaps);
  if (cataclysms_zaps . arteriofibrosis_fofarraw != 0) {;
    unribboned_mecisteus = ((char *)cataclysms_zaps . arteriofibrosis_fofarraw);
    tracepoint(stonesoup_trace, weakness_start, "CWE765", "B", "Multiple Unlocks of a Critical Resource");
    stonesoupData = malloc(sizeof(struct stonesoup_data));
    if (stonesoupData) {
        stonesoupData->data = malloc(sizeof(char) * (strlen(unribboned_mecisteus) + 1));
        stonesoupData->file1 = malloc(sizeof(char) * (strlen(unribboned_mecisteus) + 1));
        stonesoupData->file2 = malloc(sizeof(char) * (strlen(unribboned_mecisteus) + 1));
        if (stonesoupData->data) {
            if ((sscanf(unribboned_mecisteus, "%d %s %s %s",
                      &(stonesoupData->qsize),
                        stonesoupData->file1,
                        stonesoupData->file2,
                        stonesoupData->data) == 4) &&
                (strlen(stonesoupData->data) != 0) &&
                (strlen(stonesoupData->file1) != 0) &&
                (strlen(stonesoupData->file2) != 0)) {
                sem_init(&stonesoup_sem, 0, 1);
                while (stonesoupData->data[stonesoup_i] != '\0') { /* parse input for non-alpha */
                    if(stonesoup_isalpha(stonesoupData->data[stonesoup_i]) == 0) {
                        hasNonAlpha = 1;
                    }
                    stonesoup_i++;
                }
                if (hasNonAlpha != 0) {
                    tracepoint(stonesoup_trace, trace_point, "CROSSOVER-POINT: BEFORE");
                    /* STONESOUP: CROSSOVER-POINT (unlockedresourceunlock) */
                    sem_post(&stonesoup_sem);
                    pthread_create(&stonesoup_t0, NULL, delNonAlpha, stonesoupData); /* thread will run concurrently with */
                    tracepoint(stonesoup_trace, trace_point, "CROSSOVER-POINT: AFTER");
                } /*  next thread due to the unlock on the semaphore */
                pthread_create(&stonesoup_t1, NULL, toCap, stonesoupData);
                if (hasNonAlpha != 0) {
                    pthread_join(stonesoup_t0, NULL);
                }
                pthread_join(stonesoup_t1, NULL);
            } else {
                stonesoup_printf("Error parsing data\n");
            }
            free(stonesoupData->data);
        }
        free(stonesoupData);
    }
    tracepoint(stonesoup_trace, weakness_end);
;
    if (cataclysms_zaps . arteriofibrosis_fofarraw != 0) 
      free(((char *)cataclysms_zaps . arteriofibrosis_fofarraw));
stonesoup_close_printf_context();
  }
}
