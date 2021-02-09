/* ZGenerator */
#include <stdio.h>
#include <gen_compiler_prog_struct_type.h>
#include <stdlib.h>
#include <gen_compiler_type.h>
#include <gen_compiler_string.h>
#include <unistd.h>
#include <openssl/ec.h>
#include <openssl/evp.h>
#include <openssl/bio.h>
#include <openssl/pem.h>
#include <gen_ethereum_type.h>
#include <gen_zgenerator_crypt_zgenerator_crypt_keccak.h>
#include <string.h>
#include <gen_compiler_int_type.h>
#include <gen_rest_json.h>
#include <gen_compiler_z_list.h>
#include <gen_compiler_pointerof.h>
#include <gen_compiler_stringlist.h>
#include <gen_rest_rest.h>
#include <curl/curl.h>
#include <gen_compiler_html.h>
#include <gen_rest_json_parse.h>
#include <openssl/bn.h>
#include <gen_ethereum_ethereum_convert.h>

#include "gen_marketmake_aave.h"

int main(){
	prog_c_type* prog;
	int __iv__main__0_chain_id;
	string __iv__main__2_tmp_var;
	string __iv__main__3_tmp_var;
	string __iv__main__4_tmp_var;
	string __iv__main__1_infura_url;
	int __iv__main__5_jsonrpc_id;
	string __iv__main__7_tmp_var;
	int __iv__main__6_not_file_exist;
	string __iv__main__25_tmp_var;
	BIO* __iv__main__24_bp;
	prog=calloc(1, sizeof(prog_c_type));
	prog->print_service_out=1;
	printf((char*)/*string*/("%s"), "Marketmake\n");
/*service_var <==1 ethereum.chain_id*/
	__iv__main__0_chain_id=1;
	__iv__main__0_chain_id=42;
	__iv__main__0_chain_id=__iv__main__0_chain_id;
/*service_var <==2 zgenerator_crypt.library_name*/
/*service_var <==3 zgenerator_crypt.protocol_asymmetric*/
/*service_var <==4 zgenerator_crypt.protocol_hash*/
	__iv__main__2_tmp_var=strconcat((char*)/*string*/("https://"), (char*)/*string*/("kovan"));
	__iv__main__3_tmp_var=strconcat((char*)/*string*/(__iv__main__2_tmp_var), (char*)/*string*/(".infura.io/v3/"));
	__iv__main__4_tmp_var=strconcat((char*)/*string*/(__iv__main__3_tmp_var), (char*)/*string*/("c4f93b3723f7439f9047b1205a1b9b62"));
	__iv__main__1_infura_url=__iv__main__4_tmp_var;
/*service_var <==5 ethereum.jsonrpc_url*/
/*service_var <==6 ethereum.jsonrpc_id*/
	__iv__main__5_jsonrpc_id=0;
/*service_var <==7 ethereum.public_file*/
/*service_var <==8 ethereum.private_file*/
	__iv__main__7_tmp_var=strconcat((char*)/*string*/("../resource/ethereum.key"), (char*)/*string*/(".pub"));
	__iv__main__6_not_file_exist=access(__iv__main__7_tmp_var, F_OK);
	if(__iv__main__6_not_file_exist){
		EC_KEY* __iv__main__8_key;
/*service_var <==9 zgenerator_crypt_key.ec_private*/
/*service_var <==10 zgenerator_crypt_key.ec_public*/
		__iv__main__8_key=EC_KEY_new_by_curve_name(NID_secp256k1);
		if(__iv__main__8_key){
			int __iv__0_ret;
			EC_KEY_set_asn1_flag(__iv__main__8_key, OPENSSL_EC_NAMED_CURVE);
			__iv__0_ret=EC_KEY_generate_key(__iv__main__8_key);
			if(__iv__0_ret == 1){
				EVP_PKEY* __iv__main__9_evp_key;
				EVP_PKEY* __iv__main__16_evp_key;
/*service_var <==11 zgenerator_crypt_key.evp_private*/
				__iv__main__9_evp_key=EVP_PKEY_new();
				if(__iv__main__9_evp_key){
					int __iv__1_ret;
					__iv__1_ret=EVP_PKEY_set1_EC_KEY(__iv__main__9_evp_key, __iv__main__8_key);
					if(__iv__1_ret){
						string __iv__main__11_tmp_var;
						BIO* __iv__main__10_bp;
						__iv__main__11_tmp_var=strconcat((char*)/*string*/("../resource/ethereum.key"), (char*)/*string*/(".priv"));
						__iv__main__10_bp=BIO_new_file((char*)/*string*/(__iv__main__11_tmp_var), (char*)/*string*/("w+"));
						if(__iv__main__10_bp){
							int __iv__2_ret;
							__iv__2_ret=PEM_write_bio_PrivateKey(__iv__main__10_bp, __iv__main__9_evp_key, (EVP_CIPHER*)/*void**/(NULL), (unsigned char*)/*void**/(NULL), 0, (pem_password_cb*)/*void**/(NULL), NULL);
							if(__iv__2_ret == 1){
								string __iv__main__13_tmp_var;
								string __iv__main__14_tmp_var;
								string __iv__main__15_tmp_var;
								string __iv__main__12_to_print;
								__iv__main__13_tmp_var=strconcat((char*)/*string*/("write to file "), (char*)/*string*/("../resource/ethereum.key"));
								__iv__main__14_tmp_var=strconcat((char*)/*string*/(__iv__main__13_tmp_var), (char*)/*string*/(".priv"));
								__iv__main__15_tmp_var=strconcat((char*)/*string*/(__iv__main__14_tmp_var), (char*)/*string*/("\n"));
								__iv__main__12_to_print=__iv__main__15_tmp_var;
								if(__iv__main__12_to_print){
									printf((char*)/*string*/("%s"), __iv__main__12_to_print);
								}
							}
							if(__iv__2_ret != 1){
								printf((char*)/*string*/("%s"), "error write private key!!!\n");
							}
							BIO_free_all(__iv__main__10_bp);
						}
						else {
							printf((char*)/*string*/("%s"), "error write private key!!!\n");
						}
					}
					else {
						printf((char*)/*string*/("%s"), "error write private key!!!\n");
					}
					EVP_PKEY_free(__iv__main__9_evp_key);
				}
				else {
					printf((char*)/*string*/("%s"), "error write private key!!!\n");
				}
/*service_var 11==> zgenerator_crypt_key.evp_private*/
/*service_var <==12 zgenerator_crypt_key.evp_public*/
				__iv__main__16_evp_key=EVP_PKEY_new();
				if(__iv__main__16_evp_key){
					int __iv__3_ret;
					__iv__3_ret=EVP_PKEY_set1_EC_KEY(__iv__main__16_evp_key, __iv__main__8_key);
					if(__iv__3_ret){
						string __iv__main__18_tmp_var;
						BIO* __iv__main__17_bp;
						__iv__main__18_tmp_var=strconcat((char*)/*string*/("../resource/ethereum.key"), (char*)/*string*/(".pub"));
						__iv__main__17_bp=BIO_new_file((char*)/*string*/(__iv__main__18_tmp_var), (char*)/*string*/("w+"));
						if(__iv__main__17_bp){
							int __iv__4_ret;
							__iv__4_ret=PEM_write_bio_PUBKEY(__iv__main__17_bp, __iv__main__16_evp_key);
							if(__iv__4_ret == 1){
								string __iv__main__20_tmp_var;
								string __iv__main__21_tmp_var;
								string __iv__main__22_tmp_var;
								string __iv__main__19_to_print;
								__iv__main__20_tmp_var=strconcat((char*)/*string*/("write to file "), (char*)/*string*/("../resource/ethereum.key"));
								__iv__main__21_tmp_var=strconcat((char*)/*string*/(__iv__main__20_tmp_var), (char*)/*string*/(".pub"));
								__iv__main__22_tmp_var=strconcat((char*)/*string*/(__iv__main__21_tmp_var), (char*)/*string*/("\n"));
								__iv__main__19_to_print=__iv__main__22_tmp_var;
								if(__iv__main__19_to_print){
									printf((char*)/*string*/("%s"), __iv__main__19_to_print);
								}
							}
							if(__iv__4_ret != 1){
								printf((char*)/*string*/("%s"), "error write public key!!!\n");
							}
							BIO_free_all(__iv__main__17_bp);
						}
						else {
							printf((char*)/*string*/("%s"), "error write public key!!!\n");
						}
					}
					else {
						printf((char*)/*string*/("%s"), "error write public key!!!\n");
					}
					EVP_PKEY_free(__iv__main__16_evp_key);
				}
				else {
					printf((char*)/*string*/("%s"), "error write public key!!!\n");
				}
/*service_var 12==> zgenerator_crypt_key.evp_public*/
			}
			else {
				printf((char*)/*string*/("%s"), "error gen key!!!\n");
			}
			EC_KEY_free(__iv__main__8_key);
		}
		else {
			printf((char*)/*string*/("%s"), "error gen key!!!\n");
		}
/*service_var 10==> zgenerator_crypt_key.ec_public*/
/*service_var 9==> zgenerator_crypt_key.ec_private*/
	}
/*service_var <==13 zgenerator_crypt_key.evp_public*/
	__iv__main__25_tmp_var=strconcat((char*)/*string*/("../resource/ethereum.key"), (char*)/*string*/(".pub"));
	__iv__main__24_bp=BIO_new_file((char*)/*string*/(__iv__main__25_tmp_var), (char*)/*string*/("r"));
	if(__iv__main__24_bp){
		EVP_PKEY* __iv__main__23_key;
		__iv__main__23_key=(EVP_PKEY*)/*void**/(NULL);
		__iv__main__23_key=PEM_read_bio_PUBKEY(__iv__main__24_bp, &__iv__main__23_key, (pem_password_cb*)/*void**/(NULL), NULL);
		if(__iv__main__23_key){
			EC_KEY* __iv__main__26_ec_key;
/*service_var <==14 zgenerator_crypt_key.ec_public*/
			__iv__main__26_ec_key=EVP_PKEY_get1_EC_KEY(__iv__main__23_key);
			if(__iv__main__26_ec_key){
				wallet_info_type* __iv__main__27_wallet_info;
				string __iv__main__28_wallet;
				const EC_GROUP* __iv__main__29_group;
				const EC_POINT* __iv__5_public_key_point;
				string __iv__main__40_amount;
				string __iv__main__42_id;
				json_type* __iv__main__41_json_post;
				json_object_type* __iv__main__43_json_object;
				json_object_item_type* __iv__main__44_field;
				pointerof_type* __iv__main__45_item;
				json_object_item_type* __iv__main__46_field;
				pointerof_type* __iv__main__47_item;
				json_object_item_type* __iv__main__48_field;
				pointerof_type* __iv__main__49_item;
				json_array_type* __iv__main__50_json_array;
				pointerof_type* __iv__main__51_item;
				pointerof_type* __iv__main__52_item;
				json_object_item_type* __iv__main__53_field;
				pointerof_type* __iv__main__54_item;
				string __iv__main__55_json_post_str;
				json_type* __iv__main__62_json;
				string __iv__main__63_ret_str;
				CURL* __iv__main__64_curl_ptr;
				string __iv__main__81_json_str;
				string __iv__main__89_tmp_var;
				string __iv__main__88_to_print;
				json_type* __iv__main__90_json_data;
				string __iv__main__100_tmp_var;
				string __iv__main__101_tmp_var;
				string __iv__main__99_to_print;
				string __iv__main__104_str_dec;
				string __iv__main__108_str_eth;
				string __iv__main__109_to_print;
/*service_var <==15 ethereum.wallet_info*/
				__iv__main__27_wallet_info=calloc(1, sizeof(wallet_info_type));
				__iv__main__27_wallet_info=__iv__main__27_wallet_info;
				__iv__main__28_wallet=(string)/*void**/(NULL);
/*service_var <==16 zgenerator_crypt.buffer*/
/*service_var <==17 zgenerator_crypt.buffer_len*/
/*service_var <==18 openssl_ec.group*/
				__iv__main__29_group=EC_KEY_get0_group(__iv__main__26_ec_key);
				__iv__5_public_key_point=EC_KEY_get0_public_key(__iv__main__26_ec_key);
				if(__iv__5_public_key_point){
					int __iv__main__31_buffer_len;
					unsigned char* __iv__main__30_buffer;
					__iv__main__31_buffer_len=256;
					__iv__main__30_buffer=malloc(__iv__main__31_buffer_len);
					__iv__main__31_buffer_len=EC_POINT_point2oct((EC_GROUP*)/*const EC_GROUP**/(__iv__main__29_group), (EC_POINT*)/*const EC_POINT**/(__iv__5_public_key_point), POINT_CONVERSION_UNCOMPRESSED, __iv__main__30_buffer, (size_t)/*int*/(__iv__main__31_buffer_len), (BN_CTX*)/*void**/(NULL));
					if(__iv__main__31_buffer_len){
/*service_var <==19 zgenerator_crypt.buffer*/
/*service_var <==20 zgenerator_crypt.buffer_len*/
						if(__iv__main__31_buffer_len && __iv__main__30_buffer[0] == 0x04){
							unsigned char* __iv__main__32_wallet;
							int __iv__main__33_wallet_len;
							int __iv__main__35_hash_len;
							string __iv__main__34_hash;
							int __iv__main__37_wallet_len;
							__iv__main__32_wallet=__iv__main__30_buffer + 1;
							__iv__main__33_wallet_len=__iv__main__31_buffer_len - 1;
/*service_var <==21 zgenerator_crypt.hash*/
/*service_var <==22 zgenerator_crypt.hash_len*/
							__iv__main__35_hash_len=32;
							__iv__main__34_hash=malloc(32 + 1);
							__iv__main__34_hash[0]='\0';
							zgenerator_crypt_keccak256(__iv__main__32_wallet, (unsigned int)/*int*/(__iv__main__33_wallet_len), (unsigned char*)/*string*/(__iv__main__34_hash));
/*service_var <==23 zgenerator_crypt.buffer*/
/*service_var <==24 zgenerator_crypt.buffer_len*/
							__iv__main__37_wallet_len=20;
							if(__iv__main__35_hash_len >= __iv__main__37_wallet_len){
								unsigned char* __iv__main__36_wallet;
								string __iv__main__39_tmp_var;
								__iv__main__36_wallet=malloc(__iv__main__37_wallet_len);
								memcpy((void*)/*unsigned char**/(__iv__main__36_wallet), (const void*)/*string*/(__iv__main__34_hash + __iv__main__35_hash_len - __iv__main__37_wallet_len), (size_t)/*int*/(__iv__main__37_wallet_len));
								__iv__main__28_wallet=(string)/*void**/(NULL);
								if(__iv__main__36_wallet){
									unsigned char* __iv__main__38_u_str;
									int __iv__6_i;
									__iv__main__28_wallet=malloc(__iv__main__37_wallet_len * 2 + 1);
									__iv__main__28_wallet[0]='\0';
									__iv__main__28_wallet[__iv__main__37_wallet_len * 2]='\0';
									__iv__main__38_u_str=(unsigned char*)/*string*/(__iv__main__28_wallet);
									for(__iv__6_i=0;__iv__6_i < __iv__main__37_wallet_len;__iv__6_i=__iv__6_i + 1){
										unsigned char __iv__7_c;
										unsigned char __iv__8_c2;
										__iv__7_c=(unsigned char)/*char*/(__iv__main__36_wallet[__iv__6_i] & 0xf);
										if(__iv__7_c < 10){
											__iv__main__38_u_str[__iv__6_i * 2 + 1]=__iv__7_c + '0';
										}
										else {
											__iv__main__38_u_str[__iv__6_i * 2 + 1]=__iv__7_c - 10 + 'a';
										}
										__iv__8_c2=(unsigned char)/*char*/(__iv__main__36_wallet[__iv__6_i] >> 4);
										if(__iv__8_c2 < 0xa){
											__iv__main__38_u_str[__iv__6_i * 2]=__iv__8_c2 + '0';
										}
										else {
											__iv__main__38_u_str[__iv__6_i * 2]=__iv__8_c2 - 10 + 'a';
										}
									}
								}
								__iv__main__39_tmp_var=strconcat((char*)/*string*/("0x"), (char*)/*string*/(__iv__main__28_wallet));
								__iv__main__28_wallet=__iv__main__39_tmp_var;
							}
/*service_var 24==> zgenerator_crypt.buffer_len*/
/*service_var 23==> zgenerator_crypt.buffer*/
/*service_var 22==> zgenerator_crypt.hash_len*/
/*service_var 21==> zgenerator_crypt.hash*/
						}
/*service_var 20==> zgenerator_crypt.buffer_len*/
/*service_var 19==> zgenerator_crypt.buffer*/
					}
				}
/*service_var 18==> openssl_ec.group*/
/*service_var 17==> zgenerator_crypt.buffer_len*/
/*service_var 16==> zgenerator_crypt.buffer*/
				__iv__main__40_amount="";
				__iv__main__5_jsonrpc_id=__iv__main__5_jsonrpc_id + 1;
				__iv__main__42_id=int_to_string(__iv__main__5_jsonrpc_id, 0);
				__iv__main__41_json_post=calloc(1, sizeof(json_type));
/*service_var <==25 json_add.json*/
				__iv__main__43_json_object=calloc(1, sizeof(json_object_type));
				__iv__main__41_json_post->item=calloc(1, sizeof(pointerof_type));
				__iv__main__41_json_post->item->var=__iv__main__43_json_object;
				__iv__main__41_json_post->item->type_name="json_object_type*";
/*service_var <==26 json_add.json_object*/
				__iv__main__44_field=calloc(1, sizeof(json_object_item_type));
				__iv__main__43_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__main__43_json_object->item), (void*)/*json_object_item_type**/(__iv__main__44_field));
				__iv__main__44_field->name="json_rpc";
/*service_var <==27 json_add.json_object_field*/
				__iv__main__45_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==28 json_add.json*/
				__iv__main__45_item=calloc(1, sizeof(pointerof_type));
				__iv__main__45_item->var="2.0";
				__iv__main__45_item->type_name="string";
/*service_var 28==> json_add.json*/
				__iv__main__44_field->value=__iv__main__45_item;
/*service_var 27==> json_add.json_object_field*/
				__iv__main__46_field=calloc(1, sizeof(json_object_item_type));
				__iv__main__43_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__main__43_json_object->item), (void*)/*json_object_item_type**/(__iv__main__46_field));
				__iv__main__46_field->name="method";
/*service_var <==29 json_add.json_object_field*/
				__iv__main__47_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==30 json_add.json*/
				__iv__main__47_item=calloc(1, sizeof(pointerof_type));
				__iv__main__47_item->var="eth_getBalance";
				__iv__main__47_item->type_name="string";
/*service_var 30==> json_add.json*/
				__iv__main__46_field->value=__iv__main__47_item;
/*service_var 29==> json_add.json_object_field*/
				__iv__main__48_field=calloc(1, sizeof(json_object_item_type));
				__iv__main__43_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__main__43_json_object->item), (void*)/*json_object_item_type**/(__iv__main__48_field));
				__iv__main__48_field->name="params";
/*service_var <==31 json_add.json_object_field*/
				__iv__main__49_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==32 json_add.json*/
				__iv__main__50_json_array=calloc(1, sizeof(json_array_type));
				__iv__main__49_item=calloc(1, sizeof(pointerof_type));
				__iv__main__49_item->var=__iv__main__50_json_array;
				__iv__main__49_item->type_name="json_array_type*";
/*service_var <==33 json_add.json_array*/
				__iv__main__51_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==34 json_add.json*/
				__iv__main__51_item=calloc(1, sizeof(pointerof_type));
				__iv__main__51_item->var=__iv__main__28_wallet;
				__iv__main__51_item->type_name="string";
/*service_var 34==> json_add.json*/
				if(__iv__main__51_item){
					__iv__main__50_json_array->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__main__50_json_array->item), (void*)/*pointerof_type**/(__iv__main__51_item));
				}
				__iv__main__52_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==35 json_add.json*/
				__iv__main__52_item=calloc(1, sizeof(pointerof_type));
				__iv__main__52_item->var="latest";
				__iv__main__52_item->type_name="string";
/*service_var 35==> json_add.json*/
				if(__iv__main__52_item){
					__iv__main__50_json_array->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__main__50_json_array->item), (void*)/*pointerof_type**/(__iv__main__52_item));
				}
/*service_var 33==> json_add.json_array*/
/*service_var 32==> json_add.json*/
				__iv__main__48_field->value=__iv__main__49_item;
/*service_var 31==> json_add.json_object_field*/
				__iv__main__53_field=calloc(1, sizeof(json_object_item_type));
				__iv__main__43_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__main__43_json_object->item), (void*)/*json_object_item_type**/(__iv__main__53_field));
				__iv__main__53_field->name="id";
/*service_var <==36 json_add.json_object_field*/
				__iv__main__54_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==37 json_add.json*/
				__iv__main__54_item=calloc(1, sizeof(pointerof_type));
				__iv__main__54_item->var=__iv__main__42_id;
				__iv__main__54_item->type_name="string";
/*service_var 37==> json_add.json*/
				__iv__main__53_field->value=__iv__main__54_item;
/*service_var 36==> json_add.json_object_field*/
/*service_var 26==> json_add.json_object*/
/*service_var 25==> json_add.json*/
				__iv__main__55_json_post_str=(string)/*void**/(NULL);
				if(__iv__main__41_json_post && __iv__main__41_json_post->item){
					stringlist __iv__9_str_list;
					int __iv__main__56_total_len;
					collection __iv__main__58_list_name;
					collection __iv__main__59_name;
					int __iv__main__60_string_index;
					collection __iv__main__61_name;
					__iv__9_str_list=json_to_stringlist(__iv__main__41_json_post->item, (stringlist)/*void**/(NULL));
					__iv__main__56_total_len=0;
					__iv__main__58_list_name=(collection)/*stringlist*/(__iv__9_str_list);
					for(__iv__main__59_name=(collection)/*collection*/(__iv__main__58_list_name);__iv__main__59_name;__iv__main__59_name=(collection)/*z_list_item_type**/(__iv__main__59_name->next)){
						stringlist_item_type* __iv__main__57_stringlist_item;
						__iv__main__57_stringlist_item=(stringlist_item_type*)/*void**/(__iv__main__59_name->data);
						__iv__main__56_total_len=__iv__main__56_total_len + __iv__main__57_stringlist_item->len;
					}
					__iv__main__55_json_post_str=newString(__iv__main__56_total_len);
					__iv__main__60_string_index=0;
					for(__iv__main__61_name=(collection)/*collection*/(__iv__main__58_list_name);__iv__main__61_name;__iv__main__61_name=(collection)/*z_list_item_type**/(__iv__main__61_name->next)){
						stringlist_item_type* __iv__main__57_stringlist_item;
						int __iv__10_stringlist_item_index;
						__iv__main__57_stringlist_item=(stringlist_item_type*)/*void**/(__iv__main__61_name->data);
						for(__iv__10_stringlist_item_index=0;__iv__10_stringlist_item_index < __iv__main__57_stringlist_item->len && __iv__main__57_stringlist_item->str[__iv__10_stringlist_item_index] != '\0';__iv__10_stringlist_item_index=__iv__10_stringlist_item_index + 1){
							__iv__main__55_json_post_str[__iv__main__60_string_index]=__iv__main__57_stringlist_item->str[__iv__10_stringlist_item_index];
							__iv__main__60_string_index=__iv__main__60_string_index + 1;
						}
					}
					__iv__main__55_json_post_str[__iv__main__60_string_index]='\0';
				}
				__iv__main__62_json=(json_type*)/*void**/(NULL);
				__iv__main__63_ret_str=(string)/*void**/(NULL);
				if(0){
					rest_html_write_to_str((char*)/*void**/(NULL), (size_t)/*int*/(0), (size_t)/*int*/(0), (rest_html_write_struct*)/*void**/(NULL));
				}
				__iv__main__64_curl_ptr=curl_easy_init();
/*service_var <==38 rest_html.curl_ptr*/
				if(__iv__main__64_curl_ptr){
					string __iv__main__65_query_url;
					struct curl_slist* __iv__main__68_header;
					string __iv__main__69_tmp_var;
					string __iv__main__70_tmp_var;
					string __iv__main__71_tmp_var;
					string __iv__main__72_tmp_var;
					rest_html_write_struct* __iv__11_user_data;
					string __iv__main__73_error_buffer;
					FILE* __iv__main__74_file_debug;
					__iv__main__65_query_url=(string)/*void**/(NULL);
/*service_var <==39 rest_html.query_url*/
/*service_var 39==> rest_html.query_url*/
					if(__iv__main__65_query_url){
						string __iv__main__66_tmp_var;
						string __iv__main__67_tmp_var;
						__iv__main__66_tmp_var=strconcat((char*)/*string*/(__iv__main__1_infura_url), (char*)/*string*/("?"));
						__iv__main__67_tmp_var=strconcat((char*)/*string*/(__iv__main__66_tmp_var), (char*)/*string*/(__iv__main__65_query_url));
						__iv__main__65_query_url=__iv__main__67_tmp_var;
					}
					else {
						__iv__main__65_query_url=__iv__main__1_infura_url;
					}
					if(__iv__main__65_query_url){
						curl_easy_setopt(__iv__main__64_curl_ptr, CURLOPT_URL, (void*)/*string*/(__iv__main__65_query_url));
					}
					__iv__main__68_header=(struct curl_slist*)/*void**/(NULL);
/*service_var <==40 rest_html.header*/
					__iv__main__69_tmp_var=strconcat((char*)/*string*/("Content-Type"), (char*)/*string*/(": "));
					__iv__main__70_tmp_var=strconcat((char*)/*string*/(__iv__main__69_tmp_var), (char*)/*string*/("application/json"));
					__iv__main__68_header=curl_slist_append(__iv__main__68_header, __iv__main__70_tmp_var);
					__iv__main__71_tmp_var=strconcat((char*)/*string*/("Accept"), (char*)/*string*/(": "));
					__iv__main__72_tmp_var=strconcat((char*)/*string*/(__iv__main__71_tmp_var), (char*)/*string*/("application/json"));
					__iv__main__68_header=curl_slist_append(__iv__main__68_header, __iv__main__72_tmp_var);
/*service_var 40==> rest_html.header*/
					if(__iv__main__68_header){
						curl_easy_setopt(__iv__main__64_curl_ptr, CURLOPT_HTTPHEADER, (void*)/*struct curl_slist**/(__iv__main__68_header));
					}
					if("Zipli"){
						curl_easy_setopt(__iv__main__64_curl_ptr, CURLOPT_USERAGENT, (void*)/*string*/("Zipli"));
					}
					curl_easy_setopt(__iv__main__64_curl_ptr, CURLOPT_CUSTOMREQUEST, (void*)/*string*/("POST"));
					if(__iv__main__55_json_post_str){
						curl_easy_setopt(__iv__main__64_curl_ptr, CURLOPT_POSTFIELDS, (void*)/*string*/(__iv__main__55_json_post_str));
					}
					curl_easy_setopt(__iv__main__64_curl_ptr, CURLOPT_WRITEFUNCTION, (void*)/*void*/(rest_html_write_to_str));
					__iv__11_user_data=calloc(1, sizeof(rest_html_write_struct));
					curl_easy_setopt(__iv__main__64_curl_ptr, CURLOPT_WRITEDATA, (void*)/*rest_html_write_struct**/(__iv__11_user_data));
					__iv__main__73_error_buffer=newString(CURL_ERROR_SIZE);
					curl_easy_setopt(__iv__main__64_curl_ptr, CURLOPT_ERRORBUFFER, (void*)/*string*/(__iv__main__73_error_buffer));
					curl_easy_setopt(__iv__main__64_curl_ptr, CURLOPT_VERBOSE, (void*)/*int*/(1L));
					__iv__main__74_file_debug=fopen((char*)/*string*/("/tmp/rest_debug.txt"), (char*)/*string*/("w"));
					curl_easy_setopt(__iv__main__64_curl_ptr, CURLOPT_STDERR, (void*)/*FILE**/(__iv__main__74_file_debug));
					curl_easy_perform(__iv__main__64_curl_ptr);
					print_html_text_function(prog, __iv__main__73_error_buffer);
					print_html_br(prog);
					fclose(__iv__main__74_file_debug);
					curl_easy_cleanup(__iv__main__64_curl_ptr);
					if(__iv__11_user_data->str){
						int __iv__main__75_total_len;
						collection __iv__main__77_list_name;
						collection __iv__main__78_name;
						int __iv__main__79_string_index;
						collection __iv__main__80_name;
						__iv__main__75_total_len=0;
						__iv__main__77_list_name=(collection)/*stringlist*/(__iv__11_user_data->str);
						for(__iv__main__78_name=(collection)/*collection*/(__iv__main__77_list_name);__iv__main__78_name;__iv__main__78_name=(collection)/*z_list_item_type**/(__iv__main__78_name->next)){
							stringlist_item_type* __iv__main__76_stringlist_item;
							__iv__main__76_stringlist_item=(stringlist_item_type*)/*void**/(__iv__main__78_name->data);
							__iv__main__75_total_len=__iv__main__75_total_len + __iv__main__76_stringlist_item->len;
						}
						__iv__main__63_ret_str=newString(__iv__main__75_total_len);
						__iv__main__79_string_index=0;
						for(__iv__main__80_name=(collection)/*collection*/(__iv__main__77_list_name);__iv__main__80_name;__iv__main__80_name=(collection)/*z_list_item_type**/(__iv__main__80_name->next)){
							stringlist_item_type* __iv__main__76_stringlist_item;
							int __iv__12_stringlist_item_index;
							__iv__main__76_stringlist_item=(stringlist_item_type*)/*void**/(__iv__main__80_name->data);
							for(__iv__12_stringlist_item_index=0;__iv__12_stringlist_item_index < __iv__main__76_stringlist_item->len && __iv__main__76_stringlist_item->str[__iv__12_stringlist_item_index] != '\0';__iv__12_stringlist_item_index=__iv__12_stringlist_item_index + 1){
								__iv__main__63_ret_str[__iv__main__79_string_index]=__iv__main__76_stringlist_item->str[__iv__12_stringlist_item_index];
								__iv__main__79_string_index=__iv__main__79_string_index + 1;
							}
						}
						__iv__main__63_ret_str[__iv__main__79_string_index]='\0';
					}
				}
/*service_var 38==> rest_html.curl_ptr*/
				if(__iv__main__63_ret_str){
					__iv__main__62_json=json_parse(__iv__main__63_ret_str);
				}
				__iv__main__81_json_str=(string)/*void**/(NULL);
				if(__iv__main__62_json && __iv__main__62_json->item){
					stringlist __iv__13_str_list;
					int __iv__main__82_total_len;
					collection __iv__main__84_list_name;
					collection __iv__main__85_name;
					int __iv__main__86_string_index;
					collection __iv__main__87_name;
					__iv__13_str_list=json_to_stringlist(__iv__main__62_json->item, (stringlist)/*void**/(NULL));
					__iv__main__82_total_len=0;
					__iv__main__84_list_name=(collection)/*stringlist*/(__iv__13_str_list);
					for(__iv__main__85_name=(collection)/*collection*/(__iv__main__84_list_name);__iv__main__85_name;__iv__main__85_name=(collection)/*z_list_item_type**/(__iv__main__85_name->next)){
						stringlist_item_type* __iv__main__83_stringlist_item;
						__iv__main__83_stringlist_item=(stringlist_item_type*)/*void**/(__iv__main__85_name->data);
						__iv__main__82_total_len=__iv__main__82_total_len + __iv__main__83_stringlist_item->len;
					}
					__iv__main__81_json_str=newString(__iv__main__82_total_len);
					__iv__main__86_string_index=0;
					for(__iv__main__87_name=(collection)/*collection*/(__iv__main__84_list_name);__iv__main__87_name;__iv__main__87_name=(collection)/*z_list_item_type**/(__iv__main__87_name->next)){
						stringlist_item_type* __iv__main__83_stringlist_item;
						int __iv__14_stringlist_item_index;
						__iv__main__83_stringlist_item=(stringlist_item_type*)/*void**/(__iv__main__87_name->data);
						for(__iv__14_stringlist_item_index=0;__iv__14_stringlist_item_index < __iv__main__83_stringlist_item->len && __iv__main__83_stringlist_item->str[__iv__14_stringlist_item_index] != '\0';__iv__14_stringlist_item_index=__iv__14_stringlist_item_index + 1){
							__iv__main__81_json_str[__iv__main__86_string_index]=__iv__main__83_stringlist_item->str[__iv__14_stringlist_item_index];
							__iv__main__86_string_index=__iv__main__86_string_index + 1;
						}
					}
					__iv__main__81_json_str[__iv__main__86_string_index]='\0';
				}
				__iv__main__89_tmp_var=strconcat((char*)/*string*/(__iv__main__81_json_str), (char*)/*string*/("\n"));
				__iv__main__88_to_print=__iv__main__89_tmp_var;
				if(__iv__main__88_to_print){
					printf((char*)/*string*/("%s"), __iv__main__88_to_print);
				}
/*service_var <==41 json_easy.json_data*/
				__iv__main__90_json_data=json_parse(__iv__main__81_json_str);
				if(__iv__main__90_json_data){
/*service_var <==42 json_easy.json_data*/
/*service_var <==43 json_easy.json_data_name*/
					if(__iv__main__90_json_data->item && __iv__main__90_json_data->item->type_name){
						int __iv__main__94_tmp_var;
						__iv__main__94_tmp_var=string_equal((const char*)/*string*/(__iv__main__90_json_data->item->type_name), (const char*)/*string*/("json_object_type*"));
						if(__iv__main__94_tmp_var){
							json_object_type* __iv__main__93_json_data_parent_object;
							collection __iv__main__96_name;
							__iv__main__93_json_data_parent_object=(json_object_type*)/*void**/(__iv__main__90_json_data->item->var);
							for(__iv__main__96_name=(collection)/*collection*/(__iv__main__93_json_data_parent_object->item);__iv__main__96_name;__iv__main__96_name=(collection)/*z_list_item_type**/(__iv__main__96_name->next)){
								json_object_item_type* __iv__main__95_item;
								string __iv__main__92_name;
								pointerof_type* __iv__main__91_json_data;
								int __iv__main__97_tmp_var;
								__iv__main__95_item=(json_object_item_type*)/*void**/(__iv__main__96_name->data);
								__iv__main__92_name=__iv__main__95_item->name;
								__iv__main__91_json_data=__iv__main__95_item->value;
								__iv__main__97_tmp_var=string_equal_or_null((const char*)/*string*/("result"), (const char*)/*string*/(__iv__main__92_name));
								if(__iv__main__97_tmp_var){
									if(__iv__main__91_json_data && __iv__main__91_json_data->type_name){
										int __iv__main__98_tmp_var;
										__iv__main__98_tmp_var=string_equal((const char*)/*string*/(__iv__main__91_json_data->type_name), (const char*)/*string*/("string"));
										if(__iv__main__98_tmp_var){
											__iv__main__40_amount=(string)/*void**/(__iv__main__91_json_data->var);
										}
									}
								}
							}
						}
					}
/*service_var 43==> json_easy.json_data_name*/
/*service_var 42==> json_easy.json_data*/
				}
/*service_var 41==> json_easy.json_data*/
				__iv__main__100_tmp_var=strconcat((char*)/*string*/("Wallet : "), (char*)/*string*/(__iv__main__28_wallet));
				__iv__main__101_tmp_var=strconcat((char*)/*string*/(__iv__main__100_tmp_var), (char*)/*string*/("\n"));
				__iv__main__99_to_print=__iv__main__101_tmp_var;
				if(__iv__main__99_to_print){
					printf((char*)/*string*/("%s"), __iv__main__99_to_print);
				}
				if("Balance : "){
					string __iv__main__103_tmp_var;
					string __iv__main__102_to_print;
					__iv__main__103_tmp_var=strconcat((char*)/*string*/("Balance : "), (char*)/*string*/(" "));
					__iv__main__102_to_print=__iv__main__103_tmp_var;
					if(__iv__main__102_to_print){
						printf((char*)/*string*/("%s"), __iv__main__102_to_print);
					}
				}
				__iv__main__104_str_dec=(string)/*void**/(NULL);
/*service_var <==44 zgenerator_crypt.buffer*/
/*service_var <==45 zgenerator_crypt.buffer_len*/
				if(__iv__main__40_amount){
					unsigned char* __iv__16_ustr;
					int __iv__15_i;
					int __iv__main__105_len;
					int __iv__17_j;
					unsigned char* __iv__main__106_buffer;
					BIGNUM* __iv__main__107_bn;
					__iv__16_ustr=(unsigned char*)/*string*/(__iv__main__40_amount);
					__iv__15_i=0;
					for(__iv__15_i=0;__iv__16_ustr[__iv__15_i] && !(((__iv__16_ustr[__iv__15_i] >= '0' && __iv__16_ustr[__iv__15_i] <= '9') || (__iv__16_ustr[__iv__15_i] >= 'a' && __iv__16_ustr[__iv__15_i] <= 'f') || (__iv__16_ustr[__iv__15_i] >= 'A' && __iv__16_ustr[__iv__15_i] <= 'F')));__iv__15_i=__iv__15_i + 1){
					}
					if(__iv__16_ustr[__iv__15_i] == '0' && (__iv__16_ustr[__iv__15_i + 1] == 'x' || __iv__16_ustr[__iv__15_i + 1] == 'X')){
						__iv__15_i=__iv__15_i + 2;
					}
					__iv__main__105_len=0;
					for(__iv__17_j=__iv__15_i;__iv__16_ustr[__iv__17_j];__iv__17_j=__iv__17_j + 1){
						if(((__iv__16_ustr[__iv__17_j] >= '0' && __iv__16_ustr[__iv__17_j] <= '9') || (__iv__16_ustr[__iv__17_j] >= 'a' && __iv__16_ustr[__iv__17_j] <= 'f') || (__iv__16_ustr[__iv__17_j] >= 'A' && __iv__16_ustr[__iv__17_j] <= 'F'))){
							int __iv__18_k;
							for(__iv__18_k=__iv__17_j + 1;((__iv__16_ustr[__iv__18_k] >= '0' && __iv__16_ustr[__iv__18_k] <= '9') || (__iv__16_ustr[__iv__18_k] >= 'a' && __iv__16_ustr[__iv__18_k] <= 'f') || (__iv__16_ustr[__iv__18_k] >= 'A' && __iv__16_ustr[__iv__18_k] <= 'F'));__iv__18_k=__iv__18_k + 1){
							}
							if(((__iv__18_k - __iv__17_j) & 1) == 0 && ((__iv__16_ustr[__iv__17_j + 1] >= '0' && __iv__16_ustr[__iv__17_j + 1] <= '9') || (__iv__16_ustr[__iv__17_j + 1] >= 'a' && __iv__16_ustr[__iv__17_j + 1] <= 'f') || (__iv__16_ustr[__iv__17_j + 1] >= 'A' && __iv__16_ustr[__iv__17_j + 1] <= 'F'))){
								__iv__17_j=__iv__17_j + 1;
							}
							__iv__main__105_len=__iv__main__105_len + 1;
						}
					}
					__iv__main__106_buffer=malloc(__iv__main__105_len);
					__iv__main__105_len=0;
					for(__iv__17_j=__iv__15_i;__iv__16_ustr[__iv__17_j];__iv__17_j=__iv__17_j + 1){
						if(((__iv__16_ustr[__iv__17_j] >= '0' && __iv__16_ustr[__iv__17_j] <= '9') || (__iv__16_ustr[__iv__17_j] >= 'a' && __iv__16_ustr[__iv__17_j] <= 'f') || (__iv__16_ustr[__iv__17_j] >= 'A' && __iv__16_ustr[__iv__17_j] <= 'F'))){
							int __iv__18_k;
							if(__iv__16_ustr[__iv__17_j] <= '9'){
								__iv__main__106_buffer[__iv__main__105_len]=__iv__16_ustr[__iv__17_j] - '0';
							}
							else if(__iv__16_ustr[__iv__17_j] <= 'F'){
								__iv__main__106_buffer[__iv__main__105_len]=__iv__16_ustr[__iv__17_j] - 'A' + 10;
							}
							else {
								__iv__main__106_buffer[__iv__main__105_len]=__iv__16_ustr[__iv__17_j] - 'a' + 10;
							}
							for(__iv__18_k=__iv__17_j + 1;((__iv__16_ustr[__iv__18_k] >= '0' && __iv__16_ustr[__iv__18_k] <= '9') || (__iv__16_ustr[__iv__18_k] >= 'a' && __iv__16_ustr[__iv__18_k] <= 'f') || (__iv__16_ustr[__iv__18_k] >= 'A' && __iv__16_ustr[__iv__18_k] <= 'F'));__iv__18_k=__iv__18_k + 1){
							}
							if(((__iv__18_k - __iv__17_j) & 1) == 0 && ((__iv__16_ustr[__iv__17_j + 1] >= '0' && __iv__16_ustr[__iv__17_j + 1] <= '9') || (__iv__16_ustr[__iv__17_j + 1] >= 'a' && __iv__16_ustr[__iv__17_j + 1] <= 'f') || (__iv__16_ustr[__iv__17_j + 1] >= 'A' && __iv__16_ustr[__iv__17_j + 1] <= 'F'))){
								__iv__17_j=__iv__17_j + 1;
								if(__iv__16_ustr[__iv__17_j] <= '9'){
									__iv__main__106_buffer[__iv__main__105_len]=__iv__16_ustr[__iv__17_j] - '0' + (16 * __iv__main__106_buffer[__iv__main__105_len]);
								}
								else if(__iv__16_ustr[__iv__17_j] <= 'F'){
									__iv__main__106_buffer[__iv__main__105_len]=__iv__16_ustr[__iv__17_j] - 'A' + 10 + (16 * __iv__main__106_buffer[__iv__main__105_len]);
								}
								else {
									__iv__main__106_buffer[__iv__main__105_len]=__iv__16_ustr[__iv__17_j] - 'a' + 10 + (16 * __iv__main__106_buffer[__iv__main__105_len]);
								}
							}
							__iv__main__105_len=__iv__main__105_len + 1;
						}
					}
					__iv__main__104_str_dec=(string)/*void**/(NULL);
					__iv__main__107_bn=BN_bin2bn(__iv__main__106_buffer, __iv__main__105_len, (BIGNUM*)/*void**/(NULL));
					__iv__main__104_str_dec="";
					if(__iv__main__107_bn){
						__iv__main__104_str_dec=BN_bn2dec(__iv__main__107_bn);
					}
				}
/*service_var 45==> zgenerator_crypt.buffer_len*/
/*service_var 44==> zgenerator_crypt.buffer*/
				__iv__main__108_str_eth=ethereum_convert_string_wei_to_string_eth_function(__iv__main__104_str_dec, 18);
				__iv__main__109_to_print=__iv__main__108_str_eth;
				if(__iv__main__109_to_print){
					printf((char*)/*string*/("%s"), __iv__main__109_to_print);
				}
				printf((char*)/*string*/("%s"), " ETH");
				printf((char*)/*string*/("%s"), "\n");
				aave_batch(__iv__main__0_chain_id, prog, __iv__main__1_infura_url, __iv__main__5_jsonrpc_id, __iv__main__27_wallet_info, __iv__main__26_ec_key);
/*service_var 15==> ethereum.wallet_info*/
				EC_KEY_free(__iv__main__26_ec_key);
			}
			else {
			}
/*service_var 14==> zgenerator_crypt_key.ec_public*/
			EVP_PKEY_free(__iv__main__23_key);
		}
		else {
		}
		BIO_free_all(__iv__main__24_bp);
	}
	else {
	}
/*service_var 13==> zgenerator_crypt_key.evp_public*/
/*service_var 8==> ethereum.private_file*/
/*service_var 7==> ethereum.public_file*/
/*service_var 6==> ethereum.jsonrpc_id*/
/*service_var 5==> ethereum.jsonrpc_url*/
/*service_var 4==> zgenerator_crypt.protocol_hash*/
/*service_var 3==> zgenerator_crypt.protocol_asymmetric*/
/*service_var 2==> zgenerator_crypt.library_name*/
/*service_var 1==> ethereum.chain_id*/
	return 0;
}

