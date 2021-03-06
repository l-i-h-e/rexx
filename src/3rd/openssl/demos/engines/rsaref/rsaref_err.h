
#ifndef HEADER_RSAREF_ERR_H
# define HEADER_RSAREF_ERR_H

#ifdef  __cplusplus
extern "C" {
#endif

/* BEGIN ERROR CODES */
/*
 * The following lines are auto generated by the script mkerr.pl. Any changes
 * made after this point may be overwritten when the script is next run.
 */
static void ERR_load_RSAREF_strings(void);
static void ERR_unload_RSAREF_strings(void);
static void ERR_RSAREF_error(int function, int reason, char *file, int line);
# define RSAREFerr(f,r) ERR_RSAREF_error((f),(r),__FILE__,__LINE__)
/* Error codes for the RSAREF functions. */

/* Function codes. */
# define RSAREF_F_BNREF_MOD_EXP                           100
# define RSAREF_F_CIPHER_DES_CBC_CODE                     112
# define RSAREF_F_RSAREF_BN2BIN                           101
# define RSAREF_F_RSAREF_MOD_EXP                          102
# define RSAREF_F_RSAREF_PRIVATE_DECRYPT                  103
# define RSAREF_F_RSAREF_PRIVATE_ENCRYPT                  104
# define RSAREF_F_RSAREF_PUBLIC_DECRYPT                   105
# define RSAREF_F_RSAREF_PUBLIC_ENCRYPT                   106
# define RSAREF_F_RSA_BN2BIN                              107
# define RSAREF_F_RSA_PRIVATE_DECRYPT                     108
# define RSAREF_F_RSA_PRIVATE_ENCRYPT                     109
# define RSAREF_F_RSA_PUBLIC_DECRYPT                      110
# define RSAREF_F_RSA_PUBLIC_ENCRYPT                      111

/* Reason codes. */
# define RSAREF_R_CONTENT_ENCODING                        100
# define RSAREF_R_DATA                                    101
# define RSAREF_R_DIGEST_ALGORITHM                        102
# define RSAREF_R_ENCODING                                103
# define RSAREF_R_ENCRYPTION_ALGORITHM                    104
# define RSAREF_R_KEY                                     105
# define RSAREF_R_KEY_ENCODING                            106
# define RSAREF_R_LEN                                     107
# define RSAREF_R_LENGTH_NOT_BLOCK_ALIGNED                114
# define RSAREF_R_MODULUS_LEN                             108
# define RSAREF_R_NEED_RANDOM                             109
# define RSAREF_R_PRIVATE_KEY                             110
# define RSAREF_R_PUBLIC_KEY                              111
# define RSAREF_R_SIGNATURE                               112
# define RSAREF_R_SIGNATURE_ENCODING                      113
# define RSAREF_R_UNKNOWN_FAULT                           115

#ifdef  __cplusplus
}
#endif
#endif
