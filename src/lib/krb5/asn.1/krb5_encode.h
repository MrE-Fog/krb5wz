#ifndef __KRB5_ENCODE_H__
#define __KRB5_ENCODE_H__

#include <krb5/krb5.h>

/*
   krb5_error_code encode_krb5_structure(const krb5_structure *rep,
					 krb5_data **code);
   modifies  *code
   effects   Returns the ASN.1 encoding of *rep in **code.
             Returns ASN1_MISSING_FIELD if a required field is emtpy in *rep.
             Returns ENOMEM if memory runs out.
*/

krb5_error_code encode_krb5_authenticator
	PROTOTYPE((const krb5_authenticator *rep, krb5_data **code));

krb5_error_code encode_krb5_ticket
	PROTOTYPE((const krb5_ticket *rep, krb5_data **code));

krb5_error_code encode_krb5_encryption_key
	PROTOTYPE((const krb5_keyblock *rep, krb5_data **code));

krb5_error_code encode_krb5_enc_tkt_part
	PROTOTYPE((const krb5_enc_tkt_part *rep, krb5_data **code));

krb5_error_code encode_krb5_enc_kdc_rep_part
	PROTOTYPE((const krb5_enc_kdc_rep_part *rep, krb5_data **code));

/* yes, the translation is identical to that used for KDC__REP */ 
krb5_error_code encode_krb5_as_rep
	PROTOTYPE((const krb5_kdc_rep *rep, krb5_data **code));

/* yes, the translation is identical to that used for KDC__REP */ 
krb5_error_code encode_krb5_tgs_rep
	PROTOTYPE((const krb5_kdc_rep *rep, krb5_data **code));

krb5_error_code encode_krb5_ap_req
	PROTOTYPE((const krb5_ap_req *rep, krb5_data **code));

krb5_error_code encode_krb5_ap_rep
	PROTOTYPE((const krb5_ap_rep *rep, krb5_data **code));

krb5_error_code encode_krb5_ap_rep_enc_part
	PROTOTYPE((const krb5_ap_rep_enc_part *rep, krb5_data **code));

krb5_error_code encode_krb5_as_req
	PROTOTYPE((const krb5_kdc_req *rep, krb5_data **code));

krb5_error_code encode_krb5_tgs_req
	PROTOTYPE((const krb5_kdc_req *rep, krb5_data **code));

krb5_error_code encode_krb5_kdc_req_body
	PROTOTYPE((const krb5_kdc_req *rep, krb5_data **code));

krb5_error_code encode_krb5_safe
	PROTOTYPE((const krb5_safe *rep, krb5_data **code));

krb5_error_code encode_krb5_priv
	PROTOTYPE((const krb5_priv *rep, krb5_data **code));

krb5_error_code encode_krb5_enc_priv_part
	PROTOTYPE((const krb5_priv_enc_part *rep, krb5_data **code));

krb5_error_code encode_krb5_cred
	PROTOTYPE((const krb5_cred *rep, krb5_data **code));

krb5_error_code encode_krb5_enc_cred_part
	PROTOTYPE((const krb5_cred_enc_part *rep, krb5_data **code));

krb5_error_code encode_krb5_error
	PROTOTYPE((const krb5_error *rep, krb5_data **code));

krb5_error_code encode_krb5_authdata
	PROTOTYPE((const krb5_authdata **rep, krb5_data **code));

krb5_error_code encode_krb5_pwd_sequence
	PROTOTYPE((const passwd_phrase_element *rep, krb5_data **code));

krb5_error_code encode_krb5_pwd_data
	PROTOTYPE((const krb5_pwd_data *rep, krb5_data **code));

#endif
