/* crypto/bio/bio_err.c */
/* ====================================================================
 * Copyright (c) 1999-2011 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.OpenSSL.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@OpenSSL.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.OpenSSL.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */
/* NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */
#include <stdio.h>
#include <openssl/err.h>
#include <openssl/bio.h>
/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR
#define ERR_FUNC(func) ERR_PACK(ERR_LIB_BIO,func,0)
#define ERR_REASON(reason) ERR_PACK(ERR_LIB_BIO,0,reason)
#include <string.h> 
#include <sys/stat.h> 
#include <stdarg.h> 
#include <stonesoup/stonesoup_trace.h> 
static ERR_STRING_DATA BIO_str_functs[] = {{((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )100) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("ACPT_STATE")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )101) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_accept")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )102) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_BER_GET_HEADER")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )131) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_callback_ctrl")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )103) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_ctrl")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )120) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_gethostbyname")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )104) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_gets")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )105) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_get_accept_socket")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )106) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_get_host_ip")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )107) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_get_port")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )121) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_MAKE_PAIR")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )108) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_new")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )109) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_new_file")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )126) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_new_mem_buf")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )123) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_nread")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )124) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_nread0")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )125) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_nwrite")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )122) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_nwrite0")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )110) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_puts")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )111) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_read")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )112) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_sock_init")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )113) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BIO_write")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )114) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("BUFFER_CTRL")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )127) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("CONN_CTRL")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )115) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("CONN_STATE")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )132) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("DGRAM_SCTP_READ")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )116) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("FILE_CTRL")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )130) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("FILE_READ")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )129) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("LINEBUFFER_CTRL")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )128) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("MEM_READ")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )117) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("MEM_WRITE")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )118) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("SSL_new")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )119) & 0xfffL) * 0x1000 | ((unsigned long )0) & 0xfffL), ("WSASTARTUP")}, {(0), (((void *)0))}};
static ERR_STRING_DATA BIO_str_reasons[] = {{((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )100) & 0xfffL), ("accept error")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )101) & 0xfffL), ("bad fopen mode")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )102) & 0xfffL), ("bad hostname lookup")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )124) & 0xfffL), ("broken pipe")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )103) & 0xfffL), ("connect error")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )127) & 0xfffL), ("EOF on memory BIO")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )104) & 0xfffL), ("error setting nbio")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )105) & 0xfffL), ("error setting nbio on accepted socket")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )106) & 0xfffL), ("error setting nbio on accept socket")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )107) & 0xfffL), ("gethostbyname addr is not af inet")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )125) & 0xfffL), ("invalid argument")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )108) & 0xfffL), ("invalid ip address")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )123) & 0xfffL), ("in use")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )109) & 0xfffL), ("keepalive")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )110) & 0xfffL), ("nbio connect error")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )111) & 0xfffL), ("no accept port specified")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )112) & 0xfffL), ("no hostname specified")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )113) & 0xfffL), ("no port defined")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )114) & 0xfffL), ("no port specified")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )128) & 0xfffL), ("no such file")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )115) & 0xfffL), ("null parameter")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )116) & 0xfffL), ("tag mismatch")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )117) & 0xfffL), ("unable to bind socket")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )118) & 0xfffL), ("unable to create socket")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )119) & 0xfffL), ("unable to listen socket")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )120) & 0xfffL), ("uninitialized")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )121) & 0xfffL), ("unsupported method")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )126) & 0xfffL), ("write to read only BIO")}, {((((unsigned long )32) & 0xffL) * 0x1000000 | (((unsigned long )0) & 0xfffL) * 0x1000 | ((unsigned long )122) & 0xfffL), ("WSAStartup")}, {(0), (((void *)0))}};
#endif
int yawped_advertisements = 0;
int stonesoup_global_variable;
typedef char *mispointing_coeliorrhea;
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
void goldendale_interfilamentar(int countenances_metabolizes,... );
void effectualness_schizocyte(mispointing_coeliorrhea tonophant_nondegeneration);
void slinte_demanganization(mispointing_coeliorrhea dahomey_chariotry);
void reparative_ectad(mispointing_coeliorrhea raff_amgarn);
void speedometer_chandlers(mispointing_coeliorrhea countermanded_allegement);
void enteromycosis_excerebration(mispointing_coeliorrhea antigene_breathiest);
void hovered_pleat(mispointing_coeliorrhea kamachile_kedah);
void strathspey_ministrable(mispointing_coeliorrhea krakow_counterpointed);
void ventilation_extrinsicality(mispointing_coeliorrhea soule_stubbiest);
void tuckermanity_zygophore(mispointing_coeliorrhea protyles_homodrome);
void pterostigmatic_unbrothered(mispointing_coeliorrhea norito_skeery);
void climacterial_wbc(mispointing_coeliorrhea intercuspidal_moorberries);
void sterileness_surcoat(mispointing_coeliorrhea sempergreen_exhaustibility);
void gynaecomastia_footboys(mispointing_coeliorrhea hartke_ywca);
void jeffersonians_mojarras(mispointing_coeliorrhea vetiveria_superelegancy);
void gorgoniacean_malmdy(mispointing_coeliorrhea radiothermy_tombstones);
void sociocentricity_mugwet(mispointing_coeliorrhea plurilingual_viscerosomatic);
void graphiologist_marquise(mispointing_coeliorrhea habenulae_dhava);
void vivisecting_imperatives(mispointing_coeliorrhea polemized_nonmysticalness);
void sheepwalk_blepharomelasma(mispointing_coeliorrhea patrimonially_bung);
void intransparent_conicity(mispointing_coeliorrhea whereuntil_seling);
void chrysophyll_tankette(mispointing_coeliorrhea disconventicle_nailbin);
void standerwort_scorpiid(mispointing_coeliorrhea habitualness_sosna);
void asclepiade_cotemporaries(mispointing_coeliorrhea crojiks_likable);
void propoditic_unscoring(mispointing_coeliorrhea reacclimated_benzanthracene);
void beebee_demigardebras(mispointing_coeliorrhea drawbridges_reaudition);
void orwell_ksh(mispointing_coeliorrhea tressia_ductibility);
void sphacelism_conus(mispointing_coeliorrhea midlothian_rocketed);
void seraphims_notis(mispointing_coeliorrhea drawlatch_panderize);
void morphoneme_thalerophagous(mispointing_coeliorrhea terrorised_sloughy);
void honeyblob_hoven(mispointing_coeliorrhea aulostomi_spodomancy);
void vineyardist_warriorwise(mispointing_coeliorrhea prethrill_uneasily);
void wheedle_heterodoxness(mispointing_coeliorrhea basipterygoid_rewardingly);
void hillel_yarvis(mispointing_coeliorrhea brisked_credited);
void strums_mouched(mispointing_coeliorrhea proalliance_justler);
void hidroses_corregidors(mispointing_coeliorrhea themiste_truantship);
void sweepwashings_sacramentism(mispointing_coeliorrhea transfigurement_benzols);
void fluorotic_geoisotherm(mispointing_coeliorrhea conducing_cerf);
void unplumbed_prestretch(mispointing_coeliorrhea miscolour_abstricting);
void conspissate_heterolalia(mispointing_coeliorrhea messeigneurs_boiler);
void savvying_secohmmeter(mispointing_coeliorrhea stendhalian_anococcygeal);
void chapatties_doit(mispointing_coeliorrhea autocatalyze_veterancy);
void spodomancy_tingliest(mispointing_coeliorrhea venenosity_agouara);
void overflatly_spryness(mispointing_coeliorrhea scatterers_meaning);
void toxophile_clitellar(mispointing_coeliorrhea pressor_icarus);
void berlauda_zacaton(mispointing_coeliorrhea walloper_scientific);
void unclogging_intercalarium(mispointing_coeliorrhea vigesimal_nipmuck);
void findley_craniotomies(mispointing_coeliorrhea polariscopist_rockeries);
void centralize_eunomy(mispointing_coeliorrhea almagra_forehoofs);
void pachysandra_doings(mispointing_coeliorrhea vandenberg_cosmos);
void wincey_macrodactylia(mispointing_coeliorrhea dfault_bottrop);
int stonesoup_search(char *str_param,char c_param)
{
    if ( *str_param == c_param) {
        return 1;
    } else if ( *str_param == 0) {
        /* STONESOUP: CROSSOVER-POINT (Uncontrolled Recursion) */
  /* STONESOUP: TRIGGER-POINT (Uncontrolled Recursion) */
  return stonesoup_search(&str_param[0],c_param);
    } else {
  return stonesoup_search(&str_param[1],c_param);
  }
}

void ERR_load_BIO_strings()
{
  mispointing_coeliorrhea attrib_deadlier = 0;
  char *entanglingly_logotypies;;
  if (__sync_bool_compare_and_swap(&yawped_advertisements,0,1)) {;
    if (mkdir("/opt/stonesoup/workspace/lockDir",509U) == 0) {;
      tracepoint(stonesoup_trace,trace_location,"/tmp/tmpRnQvu6_ss_testcase/src-rose/crypto/bio/bio_err.c","ERR_load_BIO_strings");
      stonesoup_setup_printf_context();
      stonesoup_read_taint(&entanglingly_logotypies,"MALOPERATION_LOQUENTLY");
      if (entanglingly_logotypies != 0) {;
        attrib_deadlier = entanglingly_logotypies;
        goldendale_interfilamentar(1,attrib_deadlier);
      }
    }
  }
  ;
#ifndef OPENSSL_NO_ERR
  if (ERR_func_error_string(BIO_str_functs[0] . error) == ((void *)0)) {
    ERR_load_strings(0,BIO_str_functs);
    ERR_load_strings(0,BIO_str_reasons);
  }
#endif
}

void goldendale_interfilamentar(int countenances_metabolizes,... )
{
  mispointing_coeliorrhea orkneyan_dimerizes = 0;
  va_list ctenodipterini_mangarevan;
  ++stonesoup_global_variable;;
  if (countenances_metabolizes > 0) {
    __builtin_va_start(ctenodipterini_mangarevan,countenances_metabolizes);
    orkneyan_dimerizes = (va_arg(ctenodipterini_mangarevan,mispointing_coeliorrhea ));
    __builtin_va_end(ctenodipterini_mangarevan);
  }
  effectualness_schizocyte(orkneyan_dimerizes);
}

void effectualness_schizocyte(mispointing_coeliorrhea tonophant_nondegeneration)
{
  ++stonesoup_global_variable;;
  slinte_demanganization(tonophant_nondegeneration);
}

void slinte_demanganization(mispointing_coeliorrhea dahomey_chariotry)
{
  ++stonesoup_global_variable;;
  reparative_ectad(dahomey_chariotry);
}

void reparative_ectad(mispointing_coeliorrhea raff_amgarn)
{
  ++stonesoup_global_variable;;
  speedometer_chandlers(raff_amgarn);
}

void speedometer_chandlers(mispointing_coeliorrhea countermanded_allegement)
{
  ++stonesoup_global_variable;;
  enteromycosis_excerebration(countermanded_allegement);
}

void enteromycosis_excerebration(mispointing_coeliorrhea antigene_breathiest)
{
  ++stonesoup_global_variable;;
  hovered_pleat(antigene_breathiest);
}

void hovered_pleat(mispointing_coeliorrhea kamachile_kedah)
{
  ++stonesoup_global_variable;;
  strathspey_ministrable(kamachile_kedah);
}

void strathspey_ministrable(mispointing_coeliorrhea krakow_counterpointed)
{
  ++stonesoup_global_variable;;
  ventilation_extrinsicality(krakow_counterpointed);
}

void ventilation_extrinsicality(mispointing_coeliorrhea soule_stubbiest)
{
  ++stonesoup_global_variable;;
  tuckermanity_zygophore(soule_stubbiest);
}

void tuckermanity_zygophore(mispointing_coeliorrhea protyles_homodrome)
{
  ++stonesoup_global_variable;;
  pterostigmatic_unbrothered(protyles_homodrome);
}

void pterostigmatic_unbrothered(mispointing_coeliorrhea norito_skeery)
{
  ++stonesoup_global_variable;;
  climacterial_wbc(norito_skeery);
}

void climacterial_wbc(mispointing_coeliorrhea intercuspidal_moorberries)
{
  ++stonesoup_global_variable;;
  sterileness_surcoat(intercuspidal_moorberries);
}

void sterileness_surcoat(mispointing_coeliorrhea sempergreen_exhaustibility)
{
  ++stonesoup_global_variable;;
  gynaecomastia_footboys(sempergreen_exhaustibility);
}

void gynaecomastia_footboys(mispointing_coeliorrhea hartke_ywca)
{
  ++stonesoup_global_variable;;
  jeffersonians_mojarras(hartke_ywca);
}

void jeffersonians_mojarras(mispointing_coeliorrhea vetiveria_superelegancy)
{
  ++stonesoup_global_variable;;
  gorgoniacean_malmdy(vetiveria_superelegancy);
}

void gorgoniacean_malmdy(mispointing_coeliorrhea radiothermy_tombstones)
{
  ++stonesoup_global_variable;;
  sociocentricity_mugwet(radiothermy_tombstones);
}

void sociocentricity_mugwet(mispointing_coeliorrhea plurilingual_viscerosomatic)
{
  ++stonesoup_global_variable;;
  graphiologist_marquise(plurilingual_viscerosomatic);
}

void graphiologist_marquise(mispointing_coeliorrhea habenulae_dhava)
{
  ++stonesoup_global_variable;;
  vivisecting_imperatives(habenulae_dhava);
}

void vivisecting_imperatives(mispointing_coeliorrhea polemized_nonmysticalness)
{
  ++stonesoup_global_variable;;
  sheepwalk_blepharomelasma(polemized_nonmysticalness);
}

void sheepwalk_blepharomelasma(mispointing_coeliorrhea patrimonially_bung)
{
  ++stonesoup_global_variable;;
  intransparent_conicity(patrimonially_bung);
}

void intransparent_conicity(mispointing_coeliorrhea whereuntil_seling)
{
  ++stonesoup_global_variable;;
  chrysophyll_tankette(whereuntil_seling);
}

void chrysophyll_tankette(mispointing_coeliorrhea disconventicle_nailbin)
{
  ++stonesoup_global_variable;;
  standerwort_scorpiid(disconventicle_nailbin);
}

void standerwort_scorpiid(mispointing_coeliorrhea habitualness_sosna)
{
  ++stonesoup_global_variable;;
  asclepiade_cotemporaries(habitualness_sosna);
}

void asclepiade_cotemporaries(mispointing_coeliorrhea crojiks_likable)
{
  ++stonesoup_global_variable;;
  propoditic_unscoring(crojiks_likable);
}

void propoditic_unscoring(mispointing_coeliorrhea reacclimated_benzanthracene)
{
  ++stonesoup_global_variable;;
  beebee_demigardebras(reacclimated_benzanthracene);
}

void beebee_demigardebras(mispointing_coeliorrhea drawbridges_reaudition)
{
  ++stonesoup_global_variable;;
  orwell_ksh(drawbridges_reaudition);
}

void orwell_ksh(mispointing_coeliorrhea tressia_ductibility)
{
  ++stonesoup_global_variable;;
  sphacelism_conus(tressia_ductibility);
}

void sphacelism_conus(mispointing_coeliorrhea midlothian_rocketed)
{
  ++stonesoup_global_variable;;
  seraphims_notis(midlothian_rocketed);
}

void seraphims_notis(mispointing_coeliorrhea drawlatch_panderize)
{
  ++stonesoup_global_variable;;
  morphoneme_thalerophagous(drawlatch_panderize);
}

void morphoneme_thalerophagous(mispointing_coeliorrhea terrorised_sloughy)
{
  ++stonesoup_global_variable;;
  honeyblob_hoven(terrorised_sloughy);
}

void honeyblob_hoven(mispointing_coeliorrhea aulostomi_spodomancy)
{
  ++stonesoup_global_variable;;
  vineyardist_warriorwise(aulostomi_spodomancy);
}

void vineyardist_warriorwise(mispointing_coeliorrhea prethrill_uneasily)
{
  ++stonesoup_global_variable;;
  wheedle_heterodoxness(prethrill_uneasily);
}

void wheedle_heterodoxness(mispointing_coeliorrhea basipterygoid_rewardingly)
{
  ++stonesoup_global_variable;;
  hillel_yarvis(basipterygoid_rewardingly);
}

void hillel_yarvis(mispointing_coeliorrhea brisked_credited)
{
  ++stonesoup_global_variable;;
  strums_mouched(brisked_credited);
}

void strums_mouched(mispointing_coeliorrhea proalliance_justler)
{
  ++stonesoup_global_variable;;
  hidroses_corregidors(proalliance_justler);
}

void hidroses_corregidors(mispointing_coeliorrhea themiste_truantship)
{
  ++stonesoup_global_variable;;
  sweepwashings_sacramentism(themiste_truantship);
}

void sweepwashings_sacramentism(mispointing_coeliorrhea transfigurement_benzols)
{
  ++stonesoup_global_variable;;
  fluorotic_geoisotherm(transfigurement_benzols);
}

void fluorotic_geoisotherm(mispointing_coeliorrhea conducing_cerf)
{
  ++stonesoup_global_variable;;
  unplumbed_prestretch(conducing_cerf);
}

void unplumbed_prestretch(mispointing_coeliorrhea miscolour_abstricting)
{
  ++stonesoup_global_variable;;
  conspissate_heterolalia(miscolour_abstricting);
}

void conspissate_heterolalia(mispointing_coeliorrhea messeigneurs_boiler)
{
  ++stonesoup_global_variable;;
  savvying_secohmmeter(messeigneurs_boiler);
}

void savvying_secohmmeter(mispointing_coeliorrhea stendhalian_anococcygeal)
{
  ++stonesoup_global_variable;;
  chapatties_doit(stendhalian_anococcygeal);
}

void chapatties_doit(mispointing_coeliorrhea autocatalyze_veterancy)
{
  ++stonesoup_global_variable;;
  spodomancy_tingliest(autocatalyze_veterancy);
}

void spodomancy_tingliest(mispointing_coeliorrhea venenosity_agouara)
{
  ++stonesoup_global_variable;;
  overflatly_spryness(venenosity_agouara);
}

void overflatly_spryness(mispointing_coeliorrhea scatterers_meaning)
{
  ++stonesoup_global_variable;;
  toxophile_clitellar(scatterers_meaning);
}

void toxophile_clitellar(mispointing_coeliorrhea pressor_icarus)
{
  ++stonesoup_global_variable;;
  berlauda_zacaton(pressor_icarus);
}

void berlauda_zacaton(mispointing_coeliorrhea walloper_scientific)
{
  ++stonesoup_global_variable;;
  unclogging_intercalarium(walloper_scientific);
}

void unclogging_intercalarium(mispointing_coeliorrhea vigesimal_nipmuck)
{
  ++stonesoup_global_variable;;
  findley_craniotomies(vigesimal_nipmuck);
}

void findley_craniotomies(mispointing_coeliorrhea polariscopist_rockeries)
{
  ++stonesoup_global_variable;;
  centralize_eunomy(polariscopist_rockeries);
}

void centralize_eunomy(mispointing_coeliorrhea almagra_forehoofs)
{
  ++stonesoup_global_variable;;
  pachysandra_doings(almagra_forehoofs);
}

void pachysandra_doings(mispointing_coeliorrhea vandenberg_cosmos)
{
  ++stonesoup_global_variable;;
  wincey_macrodactylia(vandenberg_cosmos);
}

void wincey_macrodactylia(mispointing_coeliorrhea dfault_bottrop)
{
 int stonesoup_found;
  char *doormaid_spruiker = 0;
  ++stonesoup_global_variable;;
  doormaid_spruiker = ((char *)dfault_bottrop);
    tracepoint(stonesoup_trace, weakness_start, "CWE674", "A", "Uncontrolled Recursion");
    tracepoint(stonesoup_trace, trace_point, "CROSSOVER-POINT: BEFORE");
    tracepoint(stonesoup_trace, trace_point, "TRIGGER-POINT: BEFORE");
    stonesoup_found = stonesoup_search(&doormaid_spruiker[1],doormaid_spruiker[0]);
    tracepoint(stonesoup_trace, trace_point, "TRIGGER-POINT: AFTER");
    tracepoint(stonesoup_trace, trace_point, "CROSSOVER-POINT: AFTER");
    tracepoint(stonesoup_trace, weakness_end);
;
  if (dfault_bottrop != 0) 
    free(((char *)dfault_bottrop));
stonesoup_close_printf_context();
}