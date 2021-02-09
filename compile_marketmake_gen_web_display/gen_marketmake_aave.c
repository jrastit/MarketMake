/* ZGenerator */
#include <gen_compiler_type.h>
#include <openssl/ec.h>
#include <stdio.h>
#include <stdlib.h>
#include <gen_zgenerator_crypt_zgenerator_crypt_keccak.h>
#include <string.h>
#include <gen_compiler_string.h>
#include <gen_ethereum_type.h>
#include <gen_compiler_int_type.h>
#include <gen_rest_json.h>
#include <gen_compiler_z_list.h>
#include <gen_compiler_pointerof.h>
#include <gen_compiler_stringlist.h>
#include <gen_rest_rest.h>
#include <curl/curl.h>
#include <gen_compiler_prog_struct_type.h>
#include <gen_compiler_html.h>
#include <gen_rest_json_parse.h>
#include <openssl/bn.h>
#include <gen_ethereum_ethereum_convert.h>
#include <gen_ethereumservice_type.h>
#include <gen_compiler_bufferlist.h>
#include <gen_ethereum_ethereum_contract_call.h>
#include <unistd.h>
#include <openssl/evp.h>
#include <openssl/bio.h>
#include <openssl/pem.h>
#include <gen_ethereum_ethereum_rlp_type.h>
#include <stdint.h>
#include <openssl/ecdsa.h>
#include <gen_zgenerator_crypt_openssl_ec_key_recover.h>

void aave_batch(int __iv__main__0_chain_id, prog_c_type* prog, string __iv__main__1_infura_url, int __iv__main__5_jsonrpc_id, wallet_info_type* __iv__main__27_wallet_info, EC_KEY* __iv__main__26_ec_key){
	string wallet;
	const EC_GROUP* __iv__aave_batch__0_group;
	const EC_POINT* __iv__19_public_key_point;
	string __iv__aave_batch__11_gas_price;
	string __iv__aave_batch__68_nonce;
	string __iv__aave_batch__141_amount_wei;
	blockchain_transaction_ethereum_type* __iv__aave_batch__142_transaction;
	BIGNUM* __iv__43_bn;
	BIGNUM* __iv__44_bn;
	bufferlist __iv__aave_batch__153_buffer_list;
	string __iv__aave_batch__160_value_clean;
	int __iv__aave_batch__162_len;
	int __iv__aave_batch__161_tmp_var;
	int __iv__aave_batch__163_total_len;
	collection __iv__aave_batch__166_list_name;
	collection __iv__aave_batch__167_name;
	unsigned char* __iv__aave_batch__164_buffer;
	int __iv__aave_batch__168_string_index;
	collection __iv__aave_batch__169_name;
	string __iv__aave_batch__171_tmp_var;
	int __iv__aave_batch__170_not_file_exist;
	string __iv__aave_batch__189_tmp_var;
	BIO* __iv__aave_batch__188_bp;
	ethereum_rlp_list_type* __iv__aave_batch__281_rlp;
	int __iv__aave_batch__319_buffer_len;
	collection __iv__aave_batch__321_name;
	void* __iv__aave_batch__318_buffer;
	void* __iv__aave_batch__322_buffer_ptr;
	collection __iv__aave_batch__323_name;
	int __iv__aave_batch__325_buffer_len;
	ethereum_rlp_string_type __iv__aave_batch__324_buffer;
	string __iv__110_tx;
	string __iv__111_transaction_hash;
	string __iv__aave_batch__328_id;
	json_type* __iv__aave_batch__327_json_post;
	json_object_type* __iv__aave_batch__329_json_object;
	json_object_item_type* __iv__aave_batch__330_field;
	pointerof_type* __iv__aave_batch__331_item;
	json_object_item_type* __iv__aave_batch__332_field;
	pointerof_type* __iv__aave_batch__333_item;
	json_object_item_type* __iv__aave_batch__334_field;
	pointerof_type* __iv__aave_batch__335_item;
	json_array_type* __iv__aave_batch__336_json_array;
	pointerof_type* __iv__aave_batch__337_item;
	string __iv__aave_batch__338_tmp_var;
	json_object_item_type* __iv__aave_batch__339_field;
	pointerof_type* __iv__aave_batch__340_item;
	string __iv__aave_batch__341_json_post_str;
	json_type* __iv__aave_batch__348_json;
	string __iv__aave_batch__349_ret_str;
	CURL* __iv__aave_batch__350_curl_ptr;
	string __iv__aave_batch__367_json_str;
	string __iv__aave_batch__375_tmp_var;
	string __iv__aave_batch__374_to_print;
	json_type* __iv__aave_batch__376_json_data;
	string __iv__aave_batch__386_tmp_var;
	string __iv__aave_batch__387_tmp_var;
	string __iv__aave_batch__385_to_print;
	string __iv__aave_batch__388_gas_price;
	string __iv__aave_batch__445_nonce;
	string __iv__aave_batch__518_amount_wei;
	blockchain_transaction_ethereum_type* __iv__aave_batch__519_transaction;
	BIGNUM* __iv__171_bn;
	BIGNUM* __iv__172_bn;
	bufferlist __iv__aave_batch__530_buffer_list;
	string __iv__aave_batch__537_value_clean;
	int __iv__aave_batch__539_len;
	int __iv__aave_batch__538_tmp_var;
	string __iv__aave_batch__540_value_clean;
	int __iv__aave_batch__542_len;
	int __iv__aave_batch__541_tmp_var;
	int __iv__aave_batch__543_total_len;
	collection __iv__aave_batch__546_list_name;
	collection __iv__aave_batch__547_name;
	unsigned char* __iv__aave_batch__544_buffer;
	int __iv__aave_batch__548_string_index;
	collection __iv__aave_batch__549_name;
	string __iv__aave_batch__551_tmp_var;
	int __iv__aave_batch__550_not_file_exist;
	string __iv__aave_batch__569_tmp_var;
	BIO* __iv__aave_batch__568_bp;
	ethereum_rlp_list_type* __iv__aave_batch__661_rlp;
	int __iv__aave_batch__699_buffer_len;
	collection __iv__aave_batch__701_name;
	void* __iv__aave_batch__698_buffer;
	void* __iv__aave_batch__702_buffer_ptr;
	collection __iv__aave_batch__703_name;
	int __iv__aave_batch__705_buffer_len;
	ethereum_rlp_string_type __iv__aave_batch__704_buffer;
	string __iv__238_tx;
	string __iv__239_transaction_hash;
	string __iv__aave_batch__708_id;
	json_type* __iv__aave_batch__707_json_post;
	json_object_type* __iv__aave_batch__709_json_object;
	json_object_item_type* __iv__aave_batch__710_field;
	pointerof_type* __iv__aave_batch__711_item;
	json_object_item_type* __iv__aave_batch__712_field;
	pointerof_type* __iv__aave_batch__713_item;
	json_object_item_type* __iv__aave_batch__714_field;
	pointerof_type* __iv__aave_batch__715_item;
	json_array_type* __iv__aave_batch__716_json_array;
	pointerof_type* __iv__aave_batch__717_item;
	string __iv__aave_batch__718_tmp_var;
	json_object_item_type* __iv__aave_batch__719_field;
	pointerof_type* __iv__aave_batch__720_item;
	string __iv__aave_batch__721_json_post_str;
	json_type* __iv__aave_batch__728_json;
	string __iv__aave_batch__729_ret_str;
	CURL* __iv__aave_batch__730_curl_ptr;
	string __iv__aave_batch__747_json_str;
	string __iv__aave_batch__755_tmp_var;
	string __iv__aave_batch__754_to_print;
	json_type* __iv__aave_batch__756_json_data;
	string __iv__aave_batch__766_tmp_var;
	string __iv__aave_batch__767_tmp_var;
	string __iv__aave_batch__765_to_print;
	string __iv__aave_batch__768_gas_price;
	string __iv__aave_batch__825_nonce;
	string __iv__aave_batch__898_amount_wei;
	blockchain_transaction_ethereum_type* __iv__aave_batch__899_transaction;
	BIGNUM* __iv__299_bn;
	BIGNUM* __iv__300_bn;
	bufferlist __iv__aave_batch__910_buffer_list;
	string __iv__aave_batch__917_value_clean;
	int __iv__aave_batch__919_len;
	int __iv__aave_batch__918_tmp_var;
	string __iv__aave_batch__920_value_clean;
	int __iv__aave_batch__922_len;
	int __iv__aave_batch__921_tmp_var;
	int __iv__aave_batch__923_total_len;
	collection __iv__aave_batch__926_list_name;
	collection __iv__aave_batch__927_name;
	unsigned char* __iv__aave_batch__924_buffer;
	int __iv__aave_batch__928_string_index;
	collection __iv__aave_batch__929_name;
	string __iv__aave_batch__931_tmp_var;
	int __iv__aave_batch__930_not_file_exist;
	string __iv__aave_batch__949_tmp_var;
	BIO* __iv__aave_batch__948_bp;
	ethereum_rlp_list_type* __iv__aave_batch__1041_rlp;
	int __iv__aave_batch__1079_buffer_len;
	collection __iv__aave_batch__1081_name;
	void* __iv__aave_batch__1078_buffer;
	void* __iv__aave_batch__1082_buffer_ptr;
	collection __iv__aave_batch__1083_name;
	int __iv__aave_batch__1085_buffer_len;
	ethereum_rlp_string_type __iv__aave_batch__1084_buffer;
	string __iv__366_tx;
	string __iv__367_transaction_hash;
	string __iv__aave_batch__1088_id;
	json_type* __iv__aave_batch__1087_json_post;
	json_object_type* __iv__aave_batch__1089_json_object;
	json_object_item_type* __iv__aave_batch__1090_field;
	pointerof_type* __iv__aave_batch__1091_item;
	json_object_item_type* __iv__aave_batch__1092_field;
	pointerof_type* __iv__aave_batch__1093_item;
	json_object_item_type* __iv__aave_batch__1094_field;
	pointerof_type* __iv__aave_batch__1095_item;
	json_array_type* __iv__aave_batch__1096_json_array;
	pointerof_type* __iv__aave_batch__1097_item;
	string __iv__aave_batch__1098_tmp_var;
	json_object_item_type* __iv__aave_batch__1099_field;
	pointerof_type* __iv__aave_batch__1100_item;
	string __iv__aave_batch__1101_json_post_str;
	json_type* __iv__aave_batch__1108_json;
	string __iv__aave_batch__1109_ret_str;
	CURL* __iv__aave_batch__1110_curl_ptr;
	string __iv__aave_batch__1127_json_str;
	string __iv__aave_batch__1135_tmp_var;
	string __iv__aave_batch__1134_to_print;
	json_type* __iv__aave_batch__1136_json_data;
	string __iv__aave_batch__1146_tmp_var;
	string __iv__aave_batch__1147_tmp_var;
	string __iv__aave_batch__1145_to_print;
	wallet=(string)/*void**/(NULL);
/*service_var <==46 zgenerator_crypt.buffer*/
/*service_var <==47 zgenerator_crypt.buffer_len*/
/*service_var <==48 openssl_ec.group*/
	__iv__aave_batch__0_group=EC_KEY_get0_group(__iv__main__26_ec_key);
	__iv__19_public_key_point=EC_KEY_get0_public_key(__iv__main__26_ec_key);
	if(__iv__19_public_key_point){
		int __iv__aave_batch__2_buffer_len;
		unsigned char* __iv__aave_batch__1_buffer;
		__iv__aave_batch__2_buffer_len=256;
		__iv__aave_batch__1_buffer=malloc(__iv__aave_batch__2_buffer_len);
		__iv__aave_batch__2_buffer_len=EC_POINT_point2oct((EC_GROUP*)/*const EC_GROUP**/(__iv__aave_batch__0_group), (EC_POINT*)/*const EC_POINT**/(__iv__19_public_key_point), POINT_CONVERSION_UNCOMPRESSED, __iv__aave_batch__1_buffer, (size_t)/*int*/(__iv__aave_batch__2_buffer_len), (BN_CTX*)/*void**/(NULL));
		if(__iv__aave_batch__2_buffer_len){
/*service_var <==49 zgenerator_crypt.buffer*/
/*service_var <==50 zgenerator_crypt.buffer_len*/
			if(__iv__aave_batch__2_buffer_len && __iv__aave_batch__1_buffer[0] == 0x04){
				unsigned char* __iv__aave_batch__3_wallet;
				int __iv__aave_batch__4_wallet_len;
				int __iv__aave_batch__6_hash_len;
				string __iv__aave_batch__5_hash;
				int __iv__aave_batch__8_wallet_len;
				__iv__aave_batch__3_wallet=__iv__aave_batch__1_buffer + 1;
				__iv__aave_batch__4_wallet_len=__iv__aave_batch__2_buffer_len - 1;
/*service_var <==51 zgenerator_crypt.hash*/
/*service_var <==52 zgenerator_crypt.hash_len*/
				__iv__aave_batch__6_hash_len=32;
				__iv__aave_batch__5_hash=malloc(32 + 1);
				__iv__aave_batch__5_hash[0]='\0';
				zgenerator_crypt_keccak256(__iv__aave_batch__3_wallet, (unsigned int)/*int*/(__iv__aave_batch__4_wallet_len), (unsigned char*)/*string*/(__iv__aave_batch__5_hash));
/*service_var <==53 zgenerator_crypt.buffer*/
/*service_var <==54 zgenerator_crypt.buffer_len*/
				__iv__aave_batch__8_wallet_len=20;
				if(__iv__aave_batch__6_hash_len >= __iv__aave_batch__8_wallet_len){
					unsigned char* __iv__aave_batch__7_wallet;
					string __iv__aave_batch__10_tmp_var;
					__iv__aave_batch__7_wallet=malloc(__iv__aave_batch__8_wallet_len);
					memcpy((void*)/*unsigned char**/(__iv__aave_batch__7_wallet), (const void*)/*string*/(__iv__aave_batch__5_hash + __iv__aave_batch__6_hash_len - __iv__aave_batch__8_wallet_len), (size_t)/*int*/(__iv__aave_batch__8_wallet_len));
					wallet=(string)/*void**/(NULL);
					if(__iv__aave_batch__7_wallet){
						unsigned char* __iv__aave_batch__9_u_str;
						int __iv__20_i;
						wallet=malloc(__iv__aave_batch__8_wallet_len * 2 + 1);
						wallet[0]='\0';
						wallet[__iv__aave_batch__8_wallet_len * 2]='\0';
						__iv__aave_batch__9_u_str=(unsigned char*)/*string*/(wallet);
						for(__iv__20_i=0;__iv__20_i < __iv__aave_batch__8_wallet_len;__iv__20_i=__iv__20_i + 1){
							unsigned char __iv__21_c;
							unsigned char __iv__22_c2;
							__iv__21_c=(unsigned char)/*char*/(__iv__aave_batch__7_wallet[__iv__20_i] & 0xf);
							if(__iv__21_c < 10){
								__iv__aave_batch__9_u_str[__iv__20_i * 2 + 1]=__iv__21_c + '0';
							}
							else {
								__iv__aave_batch__9_u_str[__iv__20_i * 2 + 1]=__iv__21_c - 10 + 'a';
							}
							__iv__22_c2=(unsigned char)/*char*/(__iv__aave_batch__7_wallet[__iv__20_i] >> 4);
							if(__iv__22_c2 < 0xa){
								__iv__aave_batch__9_u_str[__iv__20_i * 2]=__iv__22_c2 + '0';
							}
							else {
								__iv__aave_batch__9_u_str[__iv__20_i * 2]=__iv__22_c2 - 10 + 'a';
							}
						}
					}
					__iv__aave_batch__10_tmp_var=strconcat((char*)/*string*/("0x"), (char*)/*string*/(wallet));
					wallet=__iv__aave_batch__10_tmp_var;
				}
/*service_var 54==> zgenerator_crypt.buffer_len*/
/*service_var 53==> zgenerator_crypt.buffer*/
/*service_var 52==> zgenerator_crypt.hash_len*/
/*service_var 51==> zgenerator_crypt.hash*/
			}
/*service_var 50==> zgenerator_crypt.buffer_len*/
/*service_var 49==> zgenerator_crypt.buffer*/
		}
	}
/*service_var 48==> openssl_ec.group*/
/*service_var 47==> zgenerator_crypt.buffer_len*/
/*service_var 46==> zgenerator_crypt.buffer*/
	printf((char*)/*string*/("%s"), "\n\nAAVE batch\n");
	printf((char*)/*string*/("%s"), "AAVE deposit 0.1 ETH\n\n");
	__iv__aave_batch__11_gas_price=(string)/*void**/(NULL);
	if(__iv__main__27_wallet_info->gas_price){
		__iv__aave_batch__11_gas_price=__iv__main__27_wallet_info->gas_price;
	}
	else {
		string __iv__aave_batch__13_id;
		json_type* __iv__aave_batch__12_json_post;
		json_object_type* __iv__aave_batch__14_json_object;
		json_object_item_type* __iv__aave_batch__15_field;
		pointerof_type* __iv__aave_batch__16_item;
		json_object_item_type* __iv__aave_batch__17_field;
		pointerof_type* __iv__aave_batch__18_item;
		json_object_item_type* __iv__aave_batch__19_field;
		pointerof_type* __iv__aave_batch__20_item;
		json_array_type* __iv__aave_batch__21_json_array;
		json_object_item_type* __iv__aave_batch__22_field;
		pointerof_type* __iv__aave_batch__23_item;
		string __iv__aave_batch__24_json_post_str;
		json_type* __iv__aave_batch__31_json;
		string __iv__aave_batch__32_ret_str;
		CURL* __iv__aave_batch__33_curl_ptr;
		string __iv__aave_batch__50_json_str;
		string __iv__aave_batch__58_tmp_var;
		string __iv__aave_batch__57_to_print;
		json_type* __iv__aave_batch__59_json_data;
		__iv__aave_batch__11_gas_price="";
		__iv__main__5_jsonrpc_id=__iv__main__5_jsonrpc_id + 1;
		__iv__aave_batch__13_id=int_to_string(__iv__main__5_jsonrpc_id, 0);
		__iv__aave_batch__12_json_post=calloc(1, sizeof(json_type));
/*service_var <==55 json_add.json*/
		__iv__aave_batch__14_json_object=calloc(1, sizeof(json_object_type));
		__iv__aave_batch__12_json_post->item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__12_json_post->item->var=__iv__aave_batch__14_json_object;
		__iv__aave_batch__12_json_post->item->type_name="json_object_type*";
/*service_var <==56 json_add.json_object*/
		__iv__aave_batch__15_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__14_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__14_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__15_field));
		__iv__aave_batch__15_field->name="json_rpc";
/*service_var <==57 json_add.json_object_field*/
		__iv__aave_batch__16_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==58 json_add.json*/
		__iv__aave_batch__16_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__16_item->var="2.0";
		__iv__aave_batch__16_item->type_name="string";
/*service_var 58==> json_add.json*/
		__iv__aave_batch__15_field->value=__iv__aave_batch__16_item;
/*service_var 57==> json_add.json_object_field*/
		__iv__aave_batch__17_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__14_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__14_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__17_field));
		__iv__aave_batch__17_field->name="method";
/*service_var <==59 json_add.json_object_field*/
		__iv__aave_batch__18_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==60 json_add.json*/
		__iv__aave_batch__18_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__18_item->var="eth_gasPrice";
		__iv__aave_batch__18_item->type_name="string";
/*service_var 60==> json_add.json*/
		__iv__aave_batch__17_field->value=__iv__aave_batch__18_item;
/*service_var 59==> json_add.json_object_field*/
		__iv__aave_batch__19_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__14_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__14_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__19_field));
		__iv__aave_batch__19_field->name="params";
/*service_var <==61 json_add.json_object_field*/
		__iv__aave_batch__20_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==62 json_add.json*/
		__iv__aave_batch__21_json_array=calloc(1, sizeof(json_array_type));
		__iv__aave_batch__20_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__20_item->var=__iv__aave_batch__21_json_array;
		__iv__aave_batch__20_item->type_name="json_array_type*";
/*service_var 62==> json_add.json*/
		__iv__aave_batch__19_field->value=__iv__aave_batch__20_item;
/*service_var 61==> json_add.json_object_field*/
		__iv__aave_batch__22_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__14_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__14_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__22_field));
		__iv__aave_batch__22_field->name="id";
/*service_var <==63 json_add.json_object_field*/
		__iv__aave_batch__23_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==64 json_add.json*/
		__iv__aave_batch__23_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__23_item->var=__iv__aave_batch__13_id;
		__iv__aave_batch__23_item->type_name="string";
/*service_var 64==> json_add.json*/
		__iv__aave_batch__22_field->value=__iv__aave_batch__23_item;
/*service_var 63==> json_add.json_object_field*/
/*service_var 56==> json_add.json_object*/
/*service_var 55==> json_add.json*/
		__iv__aave_batch__24_json_post_str=(string)/*void**/(NULL);
		if(__iv__aave_batch__12_json_post && __iv__aave_batch__12_json_post->item){
			stringlist __iv__23_str_list;
			int __iv__aave_batch__25_total_len;
			collection __iv__aave_batch__27_list_name;
			collection __iv__aave_batch__28_name;
			int __iv__aave_batch__29_string_index;
			collection __iv__aave_batch__30_name;
			__iv__23_str_list=json_to_stringlist(__iv__aave_batch__12_json_post->item, (stringlist)/*void**/(NULL));
			__iv__aave_batch__25_total_len=0;
			__iv__aave_batch__27_list_name=(collection)/*stringlist*/(__iv__23_str_list);
			for(__iv__aave_batch__28_name=(collection)/*collection*/(__iv__aave_batch__27_list_name);__iv__aave_batch__28_name;__iv__aave_batch__28_name=(collection)/*z_list_item_type**/(__iv__aave_batch__28_name->next)){
				stringlist_item_type* __iv__aave_batch__26_stringlist_item;
				__iv__aave_batch__26_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__28_name->data);
				__iv__aave_batch__25_total_len=__iv__aave_batch__25_total_len + __iv__aave_batch__26_stringlist_item->len;
			}
			__iv__aave_batch__24_json_post_str=newString(__iv__aave_batch__25_total_len);
			__iv__aave_batch__29_string_index=0;
			for(__iv__aave_batch__30_name=(collection)/*collection*/(__iv__aave_batch__27_list_name);__iv__aave_batch__30_name;__iv__aave_batch__30_name=(collection)/*z_list_item_type**/(__iv__aave_batch__30_name->next)){
				stringlist_item_type* __iv__aave_batch__26_stringlist_item;
				int __iv__24_stringlist_item_index;
				__iv__aave_batch__26_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__30_name->data);
				for(__iv__24_stringlist_item_index=0;__iv__24_stringlist_item_index < __iv__aave_batch__26_stringlist_item->len && __iv__aave_batch__26_stringlist_item->str[__iv__24_stringlist_item_index] != '\0';__iv__24_stringlist_item_index=__iv__24_stringlist_item_index + 1){
					__iv__aave_batch__24_json_post_str[__iv__aave_batch__29_string_index]=__iv__aave_batch__26_stringlist_item->str[__iv__24_stringlist_item_index];
					__iv__aave_batch__29_string_index=__iv__aave_batch__29_string_index + 1;
				}
			}
			__iv__aave_batch__24_json_post_str[__iv__aave_batch__29_string_index]='\0';
		}
		__iv__aave_batch__31_json=(json_type*)/*void**/(NULL);
		__iv__aave_batch__32_ret_str=(string)/*void**/(NULL);
		if(0){
			rest_html_write_to_str((char*)/*void**/(NULL), (size_t)/*int*/(0), (size_t)/*int*/(0), (rest_html_write_struct*)/*void**/(NULL));
		}
		__iv__aave_batch__33_curl_ptr=curl_easy_init();
/*service_var <==65 rest_html.curl_ptr*/
		if(__iv__aave_batch__33_curl_ptr){
			string __iv__aave_batch__34_query_url;
			struct curl_slist* __iv__aave_batch__37_header;
			string __iv__aave_batch__38_tmp_var;
			string __iv__aave_batch__39_tmp_var;
			string __iv__aave_batch__40_tmp_var;
			string __iv__aave_batch__41_tmp_var;
			rest_html_write_struct* __iv__25_user_data;
			string __iv__aave_batch__42_error_buffer;
			FILE* __iv__aave_batch__43_file_debug;
			__iv__aave_batch__34_query_url=(string)/*void**/(NULL);
/*service_var <==66 rest_html.query_url*/
/*service_var 66==> rest_html.query_url*/
			if(__iv__aave_batch__34_query_url){
				string __iv__aave_batch__35_tmp_var;
				string __iv__aave_batch__36_tmp_var;
				__iv__aave_batch__35_tmp_var=strconcat((char*)/*string*/(__iv__main__1_infura_url), (char*)/*string*/("?"));
				__iv__aave_batch__36_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__35_tmp_var), (char*)/*string*/(__iv__aave_batch__34_query_url));
				__iv__aave_batch__34_query_url=__iv__aave_batch__36_tmp_var;
			}
			else {
				__iv__aave_batch__34_query_url=__iv__main__1_infura_url;
			}
			if(__iv__aave_batch__34_query_url){
				curl_easy_setopt(__iv__aave_batch__33_curl_ptr, CURLOPT_URL, (void*)/*string*/(__iv__aave_batch__34_query_url));
			}
			__iv__aave_batch__37_header=(struct curl_slist*)/*void**/(NULL);
/*service_var <==67 rest_html.header*/
			__iv__aave_batch__38_tmp_var=strconcat((char*)/*string*/("Content-Type"), (char*)/*string*/(": "));
			__iv__aave_batch__39_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__38_tmp_var), (char*)/*string*/("application/json"));
			__iv__aave_batch__37_header=curl_slist_append(__iv__aave_batch__37_header, __iv__aave_batch__39_tmp_var);
			__iv__aave_batch__40_tmp_var=strconcat((char*)/*string*/("Accept"), (char*)/*string*/(": "));
			__iv__aave_batch__41_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__40_tmp_var), (char*)/*string*/("application/json"));
			__iv__aave_batch__37_header=curl_slist_append(__iv__aave_batch__37_header, __iv__aave_batch__41_tmp_var);
/*service_var 67==> rest_html.header*/
			if(__iv__aave_batch__37_header){
				curl_easy_setopt(__iv__aave_batch__33_curl_ptr, CURLOPT_HTTPHEADER, (void*)/*struct curl_slist**/(__iv__aave_batch__37_header));
			}
			if("Zipli"){
				curl_easy_setopt(__iv__aave_batch__33_curl_ptr, CURLOPT_USERAGENT, (void*)/*string*/("Zipli"));
			}
			curl_easy_setopt(__iv__aave_batch__33_curl_ptr, CURLOPT_CUSTOMREQUEST, (void*)/*string*/("POST"));
			if(__iv__aave_batch__24_json_post_str){
				curl_easy_setopt(__iv__aave_batch__33_curl_ptr, CURLOPT_POSTFIELDS, (void*)/*string*/(__iv__aave_batch__24_json_post_str));
			}
			curl_easy_setopt(__iv__aave_batch__33_curl_ptr, CURLOPT_WRITEFUNCTION, (void*)/*void*/(rest_html_write_to_str));
			__iv__25_user_data=calloc(1, sizeof(rest_html_write_struct));
			curl_easy_setopt(__iv__aave_batch__33_curl_ptr, CURLOPT_WRITEDATA, (void*)/*rest_html_write_struct**/(__iv__25_user_data));
			__iv__aave_batch__42_error_buffer=newString(CURL_ERROR_SIZE);
			curl_easy_setopt(__iv__aave_batch__33_curl_ptr, CURLOPT_ERRORBUFFER, (void*)/*string*/(__iv__aave_batch__42_error_buffer));
			curl_easy_setopt(__iv__aave_batch__33_curl_ptr, CURLOPT_VERBOSE, (void*)/*int*/(1L));
			__iv__aave_batch__43_file_debug=fopen((char*)/*string*/("/tmp/rest_debug.txt"), (char*)/*string*/("w"));
			curl_easy_setopt(__iv__aave_batch__33_curl_ptr, CURLOPT_STDERR, (void*)/*FILE**/(__iv__aave_batch__43_file_debug));
			curl_easy_perform(__iv__aave_batch__33_curl_ptr);
			print_html_text_function(prog, __iv__aave_batch__42_error_buffer);
			print_html_br(prog);
			fclose(__iv__aave_batch__43_file_debug);
			curl_easy_cleanup(__iv__aave_batch__33_curl_ptr);
			if(__iv__25_user_data->str){
				int __iv__aave_batch__44_total_len;
				collection __iv__aave_batch__46_list_name;
				collection __iv__aave_batch__47_name;
				int __iv__aave_batch__48_string_index;
				collection __iv__aave_batch__49_name;
				__iv__aave_batch__44_total_len=0;
				__iv__aave_batch__46_list_name=(collection)/*stringlist*/(__iv__25_user_data->str);
				for(__iv__aave_batch__47_name=(collection)/*collection*/(__iv__aave_batch__46_list_name);__iv__aave_batch__47_name;__iv__aave_batch__47_name=(collection)/*z_list_item_type**/(__iv__aave_batch__47_name->next)){
					stringlist_item_type* __iv__aave_batch__45_stringlist_item;
					__iv__aave_batch__45_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__47_name->data);
					__iv__aave_batch__44_total_len=__iv__aave_batch__44_total_len + __iv__aave_batch__45_stringlist_item->len;
				}
				__iv__aave_batch__32_ret_str=newString(__iv__aave_batch__44_total_len);
				__iv__aave_batch__48_string_index=0;
				for(__iv__aave_batch__49_name=(collection)/*collection*/(__iv__aave_batch__46_list_name);__iv__aave_batch__49_name;__iv__aave_batch__49_name=(collection)/*z_list_item_type**/(__iv__aave_batch__49_name->next)){
					stringlist_item_type* __iv__aave_batch__45_stringlist_item;
					int __iv__26_stringlist_item_index;
					__iv__aave_batch__45_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__49_name->data);
					for(__iv__26_stringlist_item_index=0;__iv__26_stringlist_item_index < __iv__aave_batch__45_stringlist_item->len && __iv__aave_batch__45_stringlist_item->str[__iv__26_stringlist_item_index] != '\0';__iv__26_stringlist_item_index=__iv__26_stringlist_item_index + 1){
						__iv__aave_batch__32_ret_str[__iv__aave_batch__48_string_index]=__iv__aave_batch__45_stringlist_item->str[__iv__26_stringlist_item_index];
						__iv__aave_batch__48_string_index=__iv__aave_batch__48_string_index + 1;
					}
				}
				__iv__aave_batch__32_ret_str[__iv__aave_batch__48_string_index]='\0';
			}
		}
/*service_var 65==> rest_html.curl_ptr*/
		if(__iv__aave_batch__32_ret_str){
			__iv__aave_batch__31_json=json_parse(__iv__aave_batch__32_ret_str);
		}
		__iv__aave_batch__50_json_str=(string)/*void**/(NULL);
		if(__iv__aave_batch__31_json && __iv__aave_batch__31_json->item){
			stringlist __iv__27_str_list;
			int __iv__aave_batch__51_total_len;
			collection __iv__aave_batch__53_list_name;
			collection __iv__aave_batch__54_name;
			int __iv__aave_batch__55_string_index;
			collection __iv__aave_batch__56_name;
			__iv__27_str_list=json_to_stringlist(__iv__aave_batch__31_json->item, (stringlist)/*void**/(NULL));
			__iv__aave_batch__51_total_len=0;
			__iv__aave_batch__53_list_name=(collection)/*stringlist*/(__iv__27_str_list);
			for(__iv__aave_batch__54_name=(collection)/*collection*/(__iv__aave_batch__53_list_name);__iv__aave_batch__54_name;__iv__aave_batch__54_name=(collection)/*z_list_item_type**/(__iv__aave_batch__54_name->next)){
				stringlist_item_type* __iv__aave_batch__52_stringlist_item;
				__iv__aave_batch__52_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__54_name->data);
				__iv__aave_batch__51_total_len=__iv__aave_batch__51_total_len + __iv__aave_batch__52_stringlist_item->len;
			}
			__iv__aave_batch__50_json_str=newString(__iv__aave_batch__51_total_len);
			__iv__aave_batch__55_string_index=0;
			for(__iv__aave_batch__56_name=(collection)/*collection*/(__iv__aave_batch__53_list_name);__iv__aave_batch__56_name;__iv__aave_batch__56_name=(collection)/*z_list_item_type**/(__iv__aave_batch__56_name->next)){
				stringlist_item_type* __iv__aave_batch__52_stringlist_item;
				int __iv__28_stringlist_item_index;
				__iv__aave_batch__52_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__56_name->data);
				for(__iv__28_stringlist_item_index=0;__iv__28_stringlist_item_index < __iv__aave_batch__52_stringlist_item->len && __iv__aave_batch__52_stringlist_item->str[__iv__28_stringlist_item_index] != '\0';__iv__28_stringlist_item_index=__iv__28_stringlist_item_index + 1){
					__iv__aave_batch__50_json_str[__iv__aave_batch__55_string_index]=__iv__aave_batch__52_stringlist_item->str[__iv__28_stringlist_item_index];
					__iv__aave_batch__55_string_index=__iv__aave_batch__55_string_index + 1;
				}
			}
			__iv__aave_batch__50_json_str[__iv__aave_batch__55_string_index]='\0';
		}
		__iv__aave_batch__58_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__50_json_str), (char*)/*string*/("\n"));
		__iv__aave_batch__57_to_print=__iv__aave_batch__58_tmp_var;
		if(__iv__aave_batch__57_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__57_to_print);
		}
/*service_var <==68 json_easy.json_data*/
		__iv__aave_batch__59_json_data=json_parse(__iv__aave_batch__50_json_str);
		if(__iv__aave_batch__59_json_data){
/*service_var <==69 json_easy.json_data*/
/*service_var <==70 json_easy.json_data_name*/
			if(__iv__aave_batch__59_json_data->item && __iv__aave_batch__59_json_data->item->type_name){
				int __iv__aave_batch__63_tmp_var;
				__iv__aave_batch__63_tmp_var=string_equal((const char*)/*string*/(__iv__aave_batch__59_json_data->item->type_name), (const char*)/*string*/("json_object_type*"));
				if(__iv__aave_batch__63_tmp_var){
					json_object_type* __iv__aave_batch__62_json_data_parent_object;
					collection __iv__aave_batch__65_name;
					__iv__aave_batch__62_json_data_parent_object=(json_object_type*)/*void**/(__iv__aave_batch__59_json_data->item->var);
					for(__iv__aave_batch__65_name=(collection)/*collection*/(__iv__aave_batch__62_json_data_parent_object->item);__iv__aave_batch__65_name;__iv__aave_batch__65_name=(collection)/*z_list_item_type**/(__iv__aave_batch__65_name->next)){
						json_object_item_type* __iv__aave_batch__64_item;
						string __iv__aave_batch__61_name;
						pointerof_type* __iv__aave_batch__60_json_data;
						int __iv__aave_batch__66_tmp_var;
						__iv__aave_batch__64_item=(json_object_item_type*)/*void**/(__iv__aave_batch__65_name->data);
						__iv__aave_batch__61_name=__iv__aave_batch__64_item->name;
						__iv__aave_batch__60_json_data=__iv__aave_batch__64_item->value;
						__iv__aave_batch__66_tmp_var=string_equal_or_null((const char*)/*string*/("result"), (const char*)/*string*/(__iv__aave_batch__61_name));
						if(__iv__aave_batch__66_tmp_var){
							if(__iv__aave_batch__60_json_data && __iv__aave_batch__60_json_data->type_name){
								int __iv__aave_batch__67_tmp_var;
								__iv__aave_batch__67_tmp_var=string_equal((const char*)/*string*/(__iv__aave_batch__60_json_data->type_name), (const char*)/*string*/("string"));
								if(__iv__aave_batch__67_tmp_var){
									__iv__aave_batch__11_gas_price=(string)/*void**/(__iv__aave_batch__60_json_data->var);
								}
							}
						}
					}
				}
			}
/*service_var 70==> json_easy.json_data_name*/
/*service_var 69==> json_easy.json_data*/
		}
/*service_var 68==> json_easy.json_data*/
		__iv__main__27_wallet_info->gas_price=__iv__aave_batch__11_gas_price;
	}
	__iv__aave_batch__68_nonce=(string)/*void**/(NULL);
	if(__iv__main__27_wallet_info->nonce){
		string __iv__aave_batch__69_to_print;
		string __iv__29_wallet_info_nonce;
		int __iv__aave_batch__71_len;
		int __iv__aave_batch__70_tmp_var;
		BIGNUM* __iv__30_bn;
		BIGNUM* __iv__31_bn_one;
		__iv__aave_batch__69_to_print=__iv__main__27_wallet_info->nonce;
		if(__iv__aave_batch__69_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__69_to_print);
		}
		__iv__29_wallet_info_nonce=__iv__main__27_wallet_info->nonce;
		__iv__aave_batch__71_len=strlen((char*)/*string*/("0x"));
		__iv__aave_batch__70_tmp_var=string_nequal_or_null((const char*)/*string*/(__iv__29_wallet_info_nonce), (const char*)/*string*/("0x"), __iv__aave_batch__71_len);
		if(__iv__aave_batch__70_tmp_var){
			__iv__29_wallet_info_nonce=__iv__29_wallet_info_nonce + 2;
		}
		printf((char*)/*string*/("%s"), "\n");
		__iv__30_bn=(BIGNUM*)/*void**/(NULL);
		if(__iv__29_wallet_info_nonce){
			BN_hex2bn(&__iv__30_bn, (char*)/*string*/(__iv__29_wallet_info_nonce));
		}
		__iv__31_bn_one=BN_new();
		BN_one(__iv__31_bn_one);
		BN_add(__iv__30_bn, __iv__31_bn_one, __iv__30_bn);
		__iv__main__27_wallet_info->nonce="";
		if(__iv__30_bn){
			__iv__main__27_wallet_info->nonce=BN_bn2hex(__iv__30_bn);
		}
		__iv__aave_batch__68_nonce=__iv__main__27_wallet_info->nonce;
	}
	else {
		string __iv__32_wallet;
		const EC_GROUP* __iv__aave_batch__72_group;
		const EC_POINT* __iv__33_public_key_point;
		string __iv__aave_batch__84_id;
		json_type* __iv__aave_batch__83_json_post;
		json_object_type* __iv__aave_batch__85_json_object;
		json_object_item_type* __iv__aave_batch__86_field;
		pointerof_type* __iv__aave_batch__87_item;
		json_object_item_type* __iv__aave_batch__88_field;
		pointerof_type* __iv__aave_batch__89_item;
		json_object_item_type* __iv__aave_batch__90_field;
		pointerof_type* __iv__aave_batch__91_item;
		json_array_type* __iv__aave_batch__92_json_array;
		pointerof_type* __iv__aave_batch__93_item;
		pointerof_type* __iv__aave_batch__94_item;
		json_object_item_type* __iv__aave_batch__95_field;
		pointerof_type* __iv__aave_batch__96_item;
		string __iv__aave_batch__97_json_post_str;
		json_type* __iv__aave_batch__104_json;
		string __iv__aave_batch__105_ret_str;
		CURL* __iv__aave_batch__106_curl_ptr;
		string __iv__aave_batch__123_json_str;
		string __iv__aave_batch__131_tmp_var;
		string __iv__aave_batch__130_to_print;
		json_type* __iv__aave_batch__132_json_data;
		__iv__32_wallet=(string)/*void**/(NULL);
/*service_var <==71 zgenerator_crypt.buffer*/
/*service_var <==72 zgenerator_crypt.buffer_len*/
/*service_var <==73 openssl_ec.group*/
		__iv__aave_batch__72_group=EC_KEY_get0_group(__iv__main__26_ec_key);
		__iv__33_public_key_point=EC_KEY_get0_public_key(__iv__main__26_ec_key);
		if(__iv__33_public_key_point){
			int __iv__aave_batch__74_buffer_len;
			unsigned char* __iv__aave_batch__73_buffer;
			__iv__aave_batch__74_buffer_len=256;
			__iv__aave_batch__73_buffer=malloc(__iv__aave_batch__74_buffer_len);
			__iv__aave_batch__74_buffer_len=EC_POINT_point2oct((EC_GROUP*)/*const EC_GROUP**/(__iv__aave_batch__72_group), (EC_POINT*)/*const EC_POINT**/(__iv__33_public_key_point), POINT_CONVERSION_UNCOMPRESSED, __iv__aave_batch__73_buffer, (size_t)/*int*/(__iv__aave_batch__74_buffer_len), (BN_CTX*)/*void**/(NULL));
			if(__iv__aave_batch__74_buffer_len){
/*service_var <==74 zgenerator_crypt.buffer*/
/*service_var <==75 zgenerator_crypt.buffer_len*/
				if(__iv__aave_batch__74_buffer_len && __iv__aave_batch__73_buffer[0] == 0x04){
					unsigned char* __iv__aave_batch__75_wallet;
					int __iv__aave_batch__76_wallet_len;
					int __iv__aave_batch__78_hash_len;
					string __iv__aave_batch__77_hash;
					int __iv__aave_batch__80_wallet_len;
					__iv__aave_batch__75_wallet=__iv__aave_batch__73_buffer + 1;
					__iv__aave_batch__76_wallet_len=__iv__aave_batch__74_buffer_len - 1;
/*service_var <==76 zgenerator_crypt.hash*/
/*service_var <==77 zgenerator_crypt.hash_len*/
					__iv__aave_batch__78_hash_len=32;
					__iv__aave_batch__77_hash=malloc(32 + 1);
					__iv__aave_batch__77_hash[0]='\0';
					zgenerator_crypt_keccak256(__iv__aave_batch__75_wallet, (unsigned int)/*int*/(__iv__aave_batch__76_wallet_len), (unsigned char*)/*string*/(__iv__aave_batch__77_hash));
/*service_var <==78 zgenerator_crypt.buffer*/
/*service_var <==79 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__80_wallet_len=20;
					if(__iv__aave_batch__78_hash_len >= __iv__aave_batch__80_wallet_len){
						unsigned char* __iv__aave_batch__79_wallet;
						string __iv__aave_batch__82_tmp_var;
						__iv__aave_batch__79_wallet=malloc(__iv__aave_batch__80_wallet_len);
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__79_wallet), (const void*)/*string*/(__iv__aave_batch__77_hash + __iv__aave_batch__78_hash_len - __iv__aave_batch__80_wallet_len), (size_t)/*int*/(__iv__aave_batch__80_wallet_len));
						__iv__32_wallet=(string)/*void**/(NULL);
						if(__iv__aave_batch__79_wallet){
							unsigned char* __iv__aave_batch__81_u_str;
							int __iv__34_i;
							__iv__32_wallet=malloc(__iv__aave_batch__80_wallet_len * 2 + 1);
							__iv__32_wallet[0]='\0';
							__iv__32_wallet[__iv__aave_batch__80_wallet_len * 2]='\0';
							__iv__aave_batch__81_u_str=(unsigned char*)/*string*/(__iv__32_wallet);
							for(__iv__34_i=0;__iv__34_i < __iv__aave_batch__80_wallet_len;__iv__34_i=__iv__34_i + 1){
								unsigned char __iv__35_c;
								unsigned char __iv__36_c2;
								__iv__35_c=(unsigned char)/*char*/(__iv__aave_batch__79_wallet[__iv__34_i] & 0xf);
								if(__iv__35_c < 10){
									__iv__aave_batch__81_u_str[__iv__34_i * 2 + 1]=__iv__35_c + '0';
								}
								else {
									__iv__aave_batch__81_u_str[__iv__34_i * 2 + 1]=__iv__35_c - 10 + 'a';
								}
								__iv__36_c2=(unsigned char)/*char*/(__iv__aave_batch__79_wallet[__iv__34_i] >> 4);
								if(__iv__36_c2 < 0xa){
									__iv__aave_batch__81_u_str[__iv__34_i * 2]=__iv__36_c2 + '0';
								}
								else {
									__iv__aave_batch__81_u_str[__iv__34_i * 2]=__iv__36_c2 - 10 + 'a';
								}
							}
						}
						__iv__aave_batch__82_tmp_var=strconcat((char*)/*string*/("0x"), (char*)/*string*/(__iv__32_wallet));
						__iv__32_wallet=__iv__aave_batch__82_tmp_var;
					}
/*service_var 79==> zgenerator_crypt.buffer_len*/
/*service_var 78==> zgenerator_crypt.buffer*/
/*service_var 77==> zgenerator_crypt.hash_len*/
/*service_var 76==> zgenerator_crypt.hash*/
				}
/*service_var 75==> zgenerator_crypt.buffer_len*/
/*service_var 74==> zgenerator_crypt.buffer*/
			}
		}
/*service_var 73==> openssl_ec.group*/
/*service_var 72==> zgenerator_crypt.buffer_len*/
/*service_var 71==> zgenerator_crypt.buffer*/
		__iv__aave_batch__68_nonce="";
		__iv__main__5_jsonrpc_id=__iv__main__5_jsonrpc_id + 1;
		__iv__aave_batch__84_id=int_to_string(__iv__main__5_jsonrpc_id, 0);
		__iv__aave_batch__83_json_post=calloc(1, sizeof(json_type));
/*service_var <==80 json_add.json*/
		__iv__aave_batch__85_json_object=calloc(1, sizeof(json_object_type));
		__iv__aave_batch__83_json_post->item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__83_json_post->item->var=__iv__aave_batch__85_json_object;
		__iv__aave_batch__83_json_post->item->type_name="json_object_type*";
/*service_var <==81 json_add.json_object*/
		__iv__aave_batch__86_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__85_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__85_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__86_field));
		__iv__aave_batch__86_field->name="json_rpc";
/*service_var <==82 json_add.json_object_field*/
		__iv__aave_batch__87_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==83 json_add.json*/
		__iv__aave_batch__87_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__87_item->var="2.0";
		__iv__aave_batch__87_item->type_name="string";
/*service_var 83==> json_add.json*/
		__iv__aave_batch__86_field->value=__iv__aave_batch__87_item;
/*service_var 82==> json_add.json_object_field*/
		__iv__aave_batch__88_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__85_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__85_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__88_field));
		__iv__aave_batch__88_field->name="method";
/*service_var <==84 json_add.json_object_field*/
		__iv__aave_batch__89_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==85 json_add.json*/
		__iv__aave_batch__89_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__89_item->var="eth_getTransactionCount";
		__iv__aave_batch__89_item->type_name="string";
/*service_var 85==> json_add.json*/
		__iv__aave_batch__88_field->value=__iv__aave_batch__89_item;
/*service_var 84==> json_add.json_object_field*/
		__iv__aave_batch__90_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__85_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__85_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__90_field));
		__iv__aave_batch__90_field->name="params";
/*service_var <==86 json_add.json_object_field*/
		__iv__aave_batch__91_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==87 json_add.json*/
		__iv__aave_batch__92_json_array=calloc(1, sizeof(json_array_type));
		__iv__aave_batch__91_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__91_item->var=__iv__aave_batch__92_json_array;
		__iv__aave_batch__91_item->type_name="json_array_type*";
/*service_var <==88 json_add.json_array*/
		__iv__aave_batch__93_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==89 json_add.json*/
		__iv__aave_batch__93_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__93_item->var=__iv__32_wallet;
		__iv__aave_batch__93_item->type_name="string";
/*service_var 89==> json_add.json*/
		if(__iv__aave_batch__93_item){
			__iv__aave_batch__92_json_array->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__92_json_array->item), (void*)/*pointerof_type**/(__iv__aave_batch__93_item));
		}
		__iv__aave_batch__94_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==90 json_add.json*/
		__iv__aave_batch__94_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__94_item->var="latest";
		__iv__aave_batch__94_item->type_name="string";
/*service_var 90==> json_add.json*/
		if(__iv__aave_batch__94_item){
			__iv__aave_batch__92_json_array->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__92_json_array->item), (void*)/*pointerof_type**/(__iv__aave_batch__94_item));
		}
/*service_var 88==> json_add.json_array*/
/*service_var 87==> json_add.json*/
		__iv__aave_batch__90_field->value=__iv__aave_batch__91_item;
/*service_var 86==> json_add.json_object_field*/
		__iv__aave_batch__95_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__85_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__85_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__95_field));
		__iv__aave_batch__95_field->name="id";
/*service_var <==91 json_add.json_object_field*/
		__iv__aave_batch__96_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==92 json_add.json*/
		__iv__aave_batch__96_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__96_item->var=__iv__aave_batch__84_id;
		__iv__aave_batch__96_item->type_name="string";
/*service_var 92==> json_add.json*/
		__iv__aave_batch__95_field->value=__iv__aave_batch__96_item;
/*service_var 91==> json_add.json_object_field*/
/*service_var 81==> json_add.json_object*/
/*service_var 80==> json_add.json*/
		__iv__aave_batch__97_json_post_str=(string)/*void**/(NULL);
		if(__iv__aave_batch__83_json_post && __iv__aave_batch__83_json_post->item){
			stringlist __iv__37_str_list;
			int __iv__aave_batch__98_total_len;
			collection __iv__aave_batch__100_list_name;
			collection __iv__aave_batch__101_name;
			int __iv__aave_batch__102_string_index;
			collection __iv__aave_batch__103_name;
			__iv__37_str_list=json_to_stringlist(__iv__aave_batch__83_json_post->item, (stringlist)/*void**/(NULL));
			__iv__aave_batch__98_total_len=0;
			__iv__aave_batch__100_list_name=(collection)/*stringlist*/(__iv__37_str_list);
			for(__iv__aave_batch__101_name=(collection)/*collection*/(__iv__aave_batch__100_list_name);__iv__aave_batch__101_name;__iv__aave_batch__101_name=(collection)/*z_list_item_type**/(__iv__aave_batch__101_name->next)){
				stringlist_item_type* __iv__aave_batch__99_stringlist_item;
				__iv__aave_batch__99_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__101_name->data);
				__iv__aave_batch__98_total_len=__iv__aave_batch__98_total_len + __iv__aave_batch__99_stringlist_item->len;
			}
			__iv__aave_batch__97_json_post_str=newString(__iv__aave_batch__98_total_len);
			__iv__aave_batch__102_string_index=0;
			for(__iv__aave_batch__103_name=(collection)/*collection*/(__iv__aave_batch__100_list_name);__iv__aave_batch__103_name;__iv__aave_batch__103_name=(collection)/*z_list_item_type**/(__iv__aave_batch__103_name->next)){
				stringlist_item_type* __iv__aave_batch__99_stringlist_item;
				int __iv__38_stringlist_item_index;
				__iv__aave_batch__99_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__103_name->data);
				for(__iv__38_stringlist_item_index=0;__iv__38_stringlist_item_index < __iv__aave_batch__99_stringlist_item->len && __iv__aave_batch__99_stringlist_item->str[__iv__38_stringlist_item_index] != '\0';__iv__38_stringlist_item_index=__iv__38_stringlist_item_index + 1){
					__iv__aave_batch__97_json_post_str[__iv__aave_batch__102_string_index]=__iv__aave_batch__99_stringlist_item->str[__iv__38_stringlist_item_index];
					__iv__aave_batch__102_string_index=__iv__aave_batch__102_string_index + 1;
				}
			}
			__iv__aave_batch__97_json_post_str[__iv__aave_batch__102_string_index]='\0';
		}
		__iv__aave_batch__104_json=(json_type*)/*void**/(NULL);
		__iv__aave_batch__105_ret_str=(string)/*void**/(NULL);
		if(0){
			rest_html_write_to_str((char*)/*void**/(NULL), (size_t)/*int*/(0), (size_t)/*int*/(0), (rest_html_write_struct*)/*void**/(NULL));
		}
		__iv__aave_batch__106_curl_ptr=curl_easy_init();
/*service_var <==93 rest_html.curl_ptr*/
		if(__iv__aave_batch__106_curl_ptr){
			string __iv__aave_batch__107_query_url;
			struct curl_slist* __iv__aave_batch__110_header;
			string __iv__aave_batch__111_tmp_var;
			string __iv__aave_batch__112_tmp_var;
			string __iv__aave_batch__113_tmp_var;
			string __iv__aave_batch__114_tmp_var;
			rest_html_write_struct* __iv__39_user_data;
			string __iv__aave_batch__115_error_buffer;
			FILE* __iv__aave_batch__116_file_debug;
			__iv__aave_batch__107_query_url=(string)/*void**/(NULL);
/*service_var <==94 rest_html.query_url*/
/*service_var 94==> rest_html.query_url*/
			if(__iv__aave_batch__107_query_url){
				string __iv__aave_batch__108_tmp_var;
				string __iv__aave_batch__109_tmp_var;
				__iv__aave_batch__108_tmp_var=strconcat((char*)/*string*/(__iv__main__1_infura_url), (char*)/*string*/("?"));
				__iv__aave_batch__109_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__108_tmp_var), (char*)/*string*/(__iv__aave_batch__107_query_url));
				__iv__aave_batch__107_query_url=__iv__aave_batch__109_tmp_var;
			}
			else {
				__iv__aave_batch__107_query_url=__iv__main__1_infura_url;
			}
			if(__iv__aave_batch__107_query_url){
				curl_easy_setopt(__iv__aave_batch__106_curl_ptr, CURLOPT_URL, (void*)/*string*/(__iv__aave_batch__107_query_url));
			}
			__iv__aave_batch__110_header=(struct curl_slist*)/*void**/(NULL);
/*service_var <==95 rest_html.header*/
			__iv__aave_batch__111_tmp_var=strconcat((char*)/*string*/("Content-Type"), (char*)/*string*/(": "));
			__iv__aave_batch__112_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__111_tmp_var), (char*)/*string*/("application/json"));
			__iv__aave_batch__110_header=curl_slist_append(__iv__aave_batch__110_header, __iv__aave_batch__112_tmp_var);
			__iv__aave_batch__113_tmp_var=strconcat((char*)/*string*/("Accept"), (char*)/*string*/(": "));
			__iv__aave_batch__114_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__113_tmp_var), (char*)/*string*/("application/json"));
			__iv__aave_batch__110_header=curl_slist_append(__iv__aave_batch__110_header, __iv__aave_batch__114_tmp_var);
/*service_var 95==> rest_html.header*/
			if(__iv__aave_batch__110_header){
				curl_easy_setopt(__iv__aave_batch__106_curl_ptr, CURLOPT_HTTPHEADER, (void*)/*struct curl_slist**/(__iv__aave_batch__110_header));
			}
			if("Zipli"){
				curl_easy_setopt(__iv__aave_batch__106_curl_ptr, CURLOPT_USERAGENT, (void*)/*string*/("Zipli"));
			}
			curl_easy_setopt(__iv__aave_batch__106_curl_ptr, CURLOPT_CUSTOMREQUEST, (void*)/*string*/("POST"));
			if(__iv__aave_batch__97_json_post_str){
				curl_easy_setopt(__iv__aave_batch__106_curl_ptr, CURLOPT_POSTFIELDS, (void*)/*string*/(__iv__aave_batch__97_json_post_str));
			}
			curl_easy_setopt(__iv__aave_batch__106_curl_ptr, CURLOPT_WRITEFUNCTION, (void*)/*void*/(rest_html_write_to_str));
			__iv__39_user_data=calloc(1, sizeof(rest_html_write_struct));
			curl_easy_setopt(__iv__aave_batch__106_curl_ptr, CURLOPT_WRITEDATA, (void*)/*rest_html_write_struct**/(__iv__39_user_data));
			__iv__aave_batch__115_error_buffer=newString(CURL_ERROR_SIZE);
			curl_easy_setopt(__iv__aave_batch__106_curl_ptr, CURLOPT_ERRORBUFFER, (void*)/*string*/(__iv__aave_batch__115_error_buffer));
			curl_easy_setopt(__iv__aave_batch__106_curl_ptr, CURLOPT_VERBOSE, (void*)/*int*/(1L));
			__iv__aave_batch__116_file_debug=fopen((char*)/*string*/("/tmp/rest_debug.txt"), (char*)/*string*/("w"));
			curl_easy_setopt(__iv__aave_batch__106_curl_ptr, CURLOPT_STDERR, (void*)/*FILE**/(__iv__aave_batch__116_file_debug));
			curl_easy_perform(__iv__aave_batch__106_curl_ptr);
			print_html_text_function(prog, __iv__aave_batch__115_error_buffer);
			print_html_br(prog);
			fclose(__iv__aave_batch__116_file_debug);
			curl_easy_cleanup(__iv__aave_batch__106_curl_ptr);
			if(__iv__39_user_data->str){
				int __iv__aave_batch__117_total_len;
				collection __iv__aave_batch__119_list_name;
				collection __iv__aave_batch__120_name;
				int __iv__aave_batch__121_string_index;
				collection __iv__aave_batch__122_name;
				__iv__aave_batch__117_total_len=0;
				__iv__aave_batch__119_list_name=(collection)/*stringlist*/(__iv__39_user_data->str);
				for(__iv__aave_batch__120_name=(collection)/*collection*/(__iv__aave_batch__119_list_name);__iv__aave_batch__120_name;__iv__aave_batch__120_name=(collection)/*z_list_item_type**/(__iv__aave_batch__120_name->next)){
					stringlist_item_type* __iv__aave_batch__118_stringlist_item;
					__iv__aave_batch__118_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__120_name->data);
					__iv__aave_batch__117_total_len=__iv__aave_batch__117_total_len + __iv__aave_batch__118_stringlist_item->len;
				}
				__iv__aave_batch__105_ret_str=newString(__iv__aave_batch__117_total_len);
				__iv__aave_batch__121_string_index=0;
				for(__iv__aave_batch__122_name=(collection)/*collection*/(__iv__aave_batch__119_list_name);__iv__aave_batch__122_name;__iv__aave_batch__122_name=(collection)/*z_list_item_type**/(__iv__aave_batch__122_name->next)){
					stringlist_item_type* __iv__aave_batch__118_stringlist_item;
					int __iv__40_stringlist_item_index;
					__iv__aave_batch__118_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__122_name->data);
					for(__iv__40_stringlist_item_index=0;__iv__40_stringlist_item_index < __iv__aave_batch__118_stringlist_item->len && __iv__aave_batch__118_stringlist_item->str[__iv__40_stringlist_item_index] != '\0';__iv__40_stringlist_item_index=__iv__40_stringlist_item_index + 1){
						__iv__aave_batch__105_ret_str[__iv__aave_batch__121_string_index]=__iv__aave_batch__118_stringlist_item->str[__iv__40_stringlist_item_index];
						__iv__aave_batch__121_string_index=__iv__aave_batch__121_string_index + 1;
					}
				}
				__iv__aave_batch__105_ret_str[__iv__aave_batch__121_string_index]='\0';
			}
		}
/*service_var 93==> rest_html.curl_ptr*/
		if(__iv__aave_batch__105_ret_str){
			__iv__aave_batch__104_json=json_parse(__iv__aave_batch__105_ret_str);
		}
		__iv__aave_batch__123_json_str=(string)/*void**/(NULL);
		if(__iv__aave_batch__104_json && __iv__aave_batch__104_json->item){
			stringlist __iv__41_str_list;
			int __iv__aave_batch__124_total_len;
			collection __iv__aave_batch__126_list_name;
			collection __iv__aave_batch__127_name;
			int __iv__aave_batch__128_string_index;
			collection __iv__aave_batch__129_name;
			__iv__41_str_list=json_to_stringlist(__iv__aave_batch__104_json->item, (stringlist)/*void**/(NULL));
			__iv__aave_batch__124_total_len=0;
			__iv__aave_batch__126_list_name=(collection)/*stringlist*/(__iv__41_str_list);
			for(__iv__aave_batch__127_name=(collection)/*collection*/(__iv__aave_batch__126_list_name);__iv__aave_batch__127_name;__iv__aave_batch__127_name=(collection)/*z_list_item_type**/(__iv__aave_batch__127_name->next)){
				stringlist_item_type* __iv__aave_batch__125_stringlist_item;
				__iv__aave_batch__125_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__127_name->data);
				__iv__aave_batch__124_total_len=__iv__aave_batch__124_total_len + __iv__aave_batch__125_stringlist_item->len;
			}
			__iv__aave_batch__123_json_str=newString(__iv__aave_batch__124_total_len);
			__iv__aave_batch__128_string_index=0;
			for(__iv__aave_batch__129_name=(collection)/*collection*/(__iv__aave_batch__126_list_name);__iv__aave_batch__129_name;__iv__aave_batch__129_name=(collection)/*z_list_item_type**/(__iv__aave_batch__129_name->next)){
				stringlist_item_type* __iv__aave_batch__125_stringlist_item;
				int __iv__42_stringlist_item_index;
				__iv__aave_batch__125_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__129_name->data);
				for(__iv__42_stringlist_item_index=0;__iv__42_stringlist_item_index < __iv__aave_batch__125_stringlist_item->len && __iv__aave_batch__125_stringlist_item->str[__iv__42_stringlist_item_index] != '\0';__iv__42_stringlist_item_index=__iv__42_stringlist_item_index + 1){
					__iv__aave_batch__123_json_str[__iv__aave_batch__128_string_index]=__iv__aave_batch__125_stringlist_item->str[__iv__42_stringlist_item_index];
					__iv__aave_batch__128_string_index=__iv__aave_batch__128_string_index + 1;
				}
			}
			__iv__aave_batch__123_json_str[__iv__aave_batch__128_string_index]='\0';
		}
		__iv__aave_batch__131_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__123_json_str), (char*)/*string*/("\n"));
		__iv__aave_batch__130_to_print=__iv__aave_batch__131_tmp_var;
		if(__iv__aave_batch__130_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__130_to_print);
		}
/*service_var <==96 json_easy.json_data*/
		__iv__aave_batch__132_json_data=json_parse(__iv__aave_batch__123_json_str);
		if(__iv__aave_batch__132_json_data){
/*service_var <==97 json_easy.json_data*/
/*service_var <==98 json_easy.json_data_name*/
			if(__iv__aave_batch__132_json_data->item && __iv__aave_batch__132_json_data->item->type_name){
				int __iv__aave_batch__136_tmp_var;
				__iv__aave_batch__136_tmp_var=string_equal((const char*)/*string*/(__iv__aave_batch__132_json_data->item->type_name), (const char*)/*string*/("json_object_type*"));
				if(__iv__aave_batch__136_tmp_var){
					json_object_type* __iv__aave_batch__135_json_data_parent_object;
					collection __iv__aave_batch__138_name;
					__iv__aave_batch__135_json_data_parent_object=(json_object_type*)/*void**/(__iv__aave_batch__132_json_data->item->var);
					for(__iv__aave_batch__138_name=(collection)/*collection*/(__iv__aave_batch__135_json_data_parent_object->item);__iv__aave_batch__138_name;__iv__aave_batch__138_name=(collection)/*z_list_item_type**/(__iv__aave_batch__138_name->next)){
						json_object_item_type* __iv__aave_batch__137_item;
						string __iv__aave_batch__134_name;
						pointerof_type* __iv__aave_batch__133_json_data;
						int __iv__aave_batch__139_tmp_var;
						__iv__aave_batch__137_item=(json_object_item_type*)/*void**/(__iv__aave_batch__138_name->data);
						__iv__aave_batch__134_name=__iv__aave_batch__137_item->name;
						__iv__aave_batch__133_json_data=__iv__aave_batch__137_item->value;
						__iv__aave_batch__139_tmp_var=string_equal_or_null((const char*)/*string*/("result"), (const char*)/*string*/(__iv__aave_batch__134_name));
						if(__iv__aave_batch__139_tmp_var){
							if(__iv__aave_batch__133_json_data && __iv__aave_batch__133_json_data->type_name){
								int __iv__aave_batch__140_tmp_var;
								__iv__aave_batch__140_tmp_var=string_equal((const char*)/*string*/(__iv__aave_batch__133_json_data->type_name), (const char*)/*string*/("string"));
								if(__iv__aave_batch__140_tmp_var){
									__iv__aave_batch__68_nonce=(string)/*void**/(__iv__aave_batch__133_json_data->var);
								}
							}
						}
					}
				}
			}
/*service_var 98==> json_easy.json_data_name*/
/*service_var 97==> json_easy.json_data*/
		}
/*service_var 96==> json_easy.json_data*/
		__iv__main__27_wallet_info->nonce=strdup2((const string)/*string*/(__iv__aave_batch__68_nonce));
	}
	__iv__aave_batch__141_amount_wei=ethereum_convert_string_eth_to_string_wei_function("0.1", 18);
	__iv__aave_batch__142_transaction=calloc(1, sizeof(blockchain_transaction_ethereum_type));
/*service_var <==99 ethereum.transaction*/
/*service_var <==100 zgenerator_crypt.buffer*/
/*service_var <==101 zgenerator_crypt.buffer_len*/
	if(__iv__aave_batch__68_nonce){
		unsigned char* __iv__46_ustr;
		int __iv__45_i;
		int __iv__aave_batch__143_len;
		int __iv__47_j;
		unsigned char* __iv__aave_batch__144_buffer;
		__iv__46_ustr=(unsigned char*)/*string*/(__iv__aave_batch__68_nonce);
		__iv__45_i=0;
		for(__iv__45_i=0;__iv__46_ustr[__iv__45_i] && !(((__iv__46_ustr[__iv__45_i] >= '0' && __iv__46_ustr[__iv__45_i] <= '9') || (__iv__46_ustr[__iv__45_i] >= 'a' && __iv__46_ustr[__iv__45_i] <= 'f') || (__iv__46_ustr[__iv__45_i] >= 'A' && __iv__46_ustr[__iv__45_i] <= 'F')));__iv__45_i=__iv__45_i + 1){
		}
		if(__iv__46_ustr[__iv__45_i] == '0' && (__iv__46_ustr[__iv__45_i + 1] == 'x' || __iv__46_ustr[__iv__45_i + 1] == 'X')){
			__iv__45_i=__iv__45_i + 2;
		}
		__iv__aave_batch__143_len=0;
		for(__iv__47_j=__iv__45_i;__iv__46_ustr[__iv__47_j];__iv__47_j=__iv__47_j + 1){
			if(((__iv__46_ustr[__iv__47_j] >= '0' && __iv__46_ustr[__iv__47_j] <= '9') || (__iv__46_ustr[__iv__47_j] >= 'a' && __iv__46_ustr[__iv__47_j] <= 'f') || (__iv__46_ustr[__iv__47_j] >= 'A' && __iv__46_ustr[__iv__47_j] <= 'F'))){
				int __iv__48_k;
				for(__iv__48_k=__iv__47_j + 1;((__iv__46_ustr[__iv__48_k] >= '0' && __iv__46_ustr[__iv__48_k] <= '9') || (__iv__46_ustr[__iv__48_k] >= 'a' && __iv__46_ustr[__iv__48_k] <= 'f') || (__iv__46_ustr[__iv__48_k] >= 'A' && __iv__46_ustr[__iv__48_k] <= 'F'));__iv__48_k=__iv__48_k + 1){
				}
				if(((__iv__48_k - __iv__47_j) & 1) == 0 && ((__iv__46_ustr[__iv__47_j + 1] >= '0' && __iv__46_ustr[__iv__47_j + 1] <= '9') || (__iv__46_ustr[__iv__47_j + 1] >= 'a' && __iv__46_ustr[__iv__47_j + 1] <= 'f') || (__iv__46_ustr[__iv__47_j + 1] >= 'A' && __iv__46_ustr[__iv__47_j + 1] <= 'F'))){
					__iv__47_j=__iv__47_j + 1;
				}
				__iv__aave_batch__143_len=__iv__aave_batch__143_len + 1;
			}
		}
		__iv__aave_batch__144_buffer=malloc(__iv__aave_batch__143_len);
		__iv__aave_batch__143_len=0;
		for(__iv__47_j=__iv__45_i;__iv__46_ustr[__iv__47_j];__iv__47_j=__iv__47_j + 1){
			if(((__iv__46_ustr[__iv__47_j] >= '0' && __iv__46_ustr[__iv__47_j] <= '9') || (__iv__46_ustr[__iv__47_j] >= 'a' && __iv__46_ustr[__iv__47_j] <= 'f') || (__iv__46_ustr[__iv__47_j] >= 'A' && __iv__46_ustr[__iv__47_j] <= 'F'))){
				int __iv__48_k;
				if(__iv__46_ustr[__iv__47_j] <= '9'){
					__iv__aave_batch__144_buffer[__iv__aave_batch__143_len]=__iv__46_ustr[__iv__47_j] - '0';
				}
				else if(__iv__46_ustr[__iv__47_j] <= 'F'){
					__iv__aave_batch__144_buffer[__iv__aave_batch__143_len]=__iv__46_ustr[__iv__47_j] - 'A' + 10;
				}
				else {
					__iv__aave_batch__144_buffer[__iv__aave_batch__143_len]=__iv__46_ustr[__iv__47_j] - 'a' + 10;
				}
				for(__iv__48_k=__iv__47_j + 1;((__iv__46_ustr[__iv__48_k] >= '0' && __iv__46_ustr[__iv__48_k] <= '9') || (__iv__46_ustr[__iv__48_k] >= 'a' && __iv__46_ustr[__iv__48_k] <= 'f') || (__iv__46_ustr[__iv__48_k] >= 'A' && __iv__46_ustr[__iv__48_k] <= 'F'));__iv__48_k=__iv__48_k + 1){
				}
				if(((__iv__48_k - __iv__47_j) & 1) == 0 && ((__iv__46_ustr[__iv__47_j + 1] >= '0' && __iv__46_ustr[__iv__47_j + 1] <= '9') || (__iv__46_ustr[__iv__47_j + 1] >= 'a' && __iv__46_ustr[__iv__47_j + 1] <= 'f') || (__iv__46_ustr[__iv__47_j + 1] >= 'A' && __iv__46_ustr[__iv__47_j + 1] <= 'F'))){
					__iv__47_j=__iv__47_j + 1;
					if(__iv__46_ustr[__iv__47_j] <= '9'){
						__iv__aave_batch__144_buffer[__iv__aave_batch__143_len]=__iv__46_ustr[__iv__47_j] - '0' + (16 * __iv__aave_batch__144_buffer[__iv__aave_batch__143_len]);
					}
					else if(__iv__46_ustr[__iv__47_j] <= 'F'){
						__iv__aave_batch__144_buffer[__iv__aave_batch__143_len]=__iv__46_ustr[__iv__47_j] - 'A' + 10 + (16 * __iv__aave_batch__144_buffer[__iv__aave_batch__143_len]);
					}
					else {
						__iv__aave_batch__144_buffer[__iv__aave_batch__143_len]=__iv__46_ustr[__iv__47_j] - 'a' + 10 + (16 * __iv__aave_batch__144_buffer[__iv__aave_batch__143_len]);
					}
				}
				__iv__aave_batch__143_len=__iv__aave_batch__143_len + 1;
			}
		}
		__iv__aave_batch__142_transaction->nonce=BN_bin2bn(__iv__aave_batch__144_buffer, __iv__aave_batch__143_len, (BIGNUM*)/*void**/(NULL));
	}
/*service_var 101==> zgenerator_crypt.buffer_len*/
/*service_var 100==> zgenerator_crypt.buffer*/
/*service_var <==102 zgenerator_crypt.buffer*/
/*service_var <==103 zgenerator_crypt.buffer_len*/
	if(__iv__aave_batch__11_gas_price){
		unsigned char* __iv__50_ustr;
		int __iv__49_i;
		int __iv__aave_batch__145_len;
		int __iv__51_j;
		unsigned char* __iv__aave_batch__146_buffer;
		__iv__50_ustr=(unsigned char*)/*string*/(__iv__aave_batch__11_gas_price);
		__iv__49_i=0;
		for(__iv__49_i=0;__iv__50_ustr[__iv__49_i] && !(((__iv__50_ustr[__iv__49_i] >= '0' && __iv__50_ustr[__iv__49_i] <= '9') || (__iv__50_ustr[__iv__49_i] >= 'a' && __iv__50_ustr[__iv__49_i] <= 'f') || (__iv__50_ustr[__iv__49_i] >= 'A' && __iv__50_ustr[__iv__49_i] <= 'F')));__iv__49_i=__iv__49_i + 1){
		}
		if(__iv__50_ustr[__iv__49_i] == '0' && (__iv__50_ustr[__iv__49_i + 1] == 'x' || __iv__50_ustr[__iv__49_i + 1] == 'X')){
			__iv__49_i=__iv__49_i + 2;
		}
		__iv__aave_batch__145_len=0;
		for(__iv__51_j=__iv__49_i;__iv__50_ustr[__iv__51_j];__iv__51_j=__iv__51_j + 1){
			if(((__iv__50_ustr[__iv__51_j] >= '0' && __iv__50_ustr[__iv__51_j] <= '9') || (__iv__50_ustr[__iv__51_j] >= 'a' && __iv__50_ustr[__iv__51_j] <= 'f') || (__iv__50_ustr[__iv__51_j] >= 'A' && __iv__50_ustr[__iv__51_j] <= 'F'))){
				int __iv__52_k;
				for(__iv__52_k=__iv__51_j + 1;((__iv__50_ustr[__iv__52_k] >= '0' && __iv__50_ustr[__iv__52_k] <= '9') || (__iv__50_ustr[__iv__52_k] >= 'a' && __iv__50_ustr[__iv__52_k] <= 'f') || (__iv__50_ustr[__iv__52_k] >= 'A' && __iv__50_ustr[__iv__52_k] <= 'F'));__iv__52_k=__iv__52_k + 1){
				}
				if(((__iv__52_k - __iv__51_j) & 1) == 0 && ((__iv__50_ustr[__iv__51_j + 1] >= '0' && __iv__50_ustr[__iv__51_j + 1] <= '9') || (__iv__50_ustr[__iv__51_j + 1] >= 'a' && __iv__50_ustr[__iv__51_j + 1] <= 'f') || (__iv__50_ustr[__iv__51_j + 1] >= 'A' && __iv__50_ustr[__iv__51_j + 1] <= 'F'))){
					__iv__51_j=__iv__51_j + 1;
				}
				__iv__aave_batch__145_len=__iv__aave_batch__145_len + 1;
			}
		}
		__iv__aave_batch__146_buffer=malloc(__iv__aave_batch__145_len);
		__iv__aave_batch__145_len=0;
		for(__iv__51_j=__iv__49_i;__iv__50_ustr[__iv__51_j];__iv__51_j=__iv__51_j + 1){
			if(((__iv__50_ustr[__iv__51_j] >= '0' && __iv__50_ustr[__iv__51_j] <= '9') || (__iv__50_ustr[__iv__51_j] >= 'a' && __iv__50_ustr[__iv__51_j] <= 'f') || (__iv__50_ustr[__iv__51_j] >= 'A' && __iv__50_ustr[__iv__51_j] <= 'F'))){
				int __iv__52_k;
				if(__iv__50_ustr[__iv__51_j] <= '9'){
					__iv__aave_batch__146_buffer[__iv__aave_batch__145_len]=__iv__50_ustr[__iv__51_j] - '0';
				}
				else if(__iv__50_ustr[__iv__51_j] <= 'F'){
					__iv__aave_batch__146_buffer[__iv__aave_batch__145_len]=__iv__50_ustr[__iv__51_j] - 'A' + 10;
				}
				else {
					__iv__aave_batch__146_buffer[__iv__aave_batch__145_len]=__iv__50_ustr[__iv__51_j] - 'a' + 10;
				}
				for(__iv__52_k=__iv__51_j + 1;((__iv__50_ustr[__iv__52_k] >= '0' && __iv__50_ustr[__iv__52_k] <= '9') || (__iv__50_ustr[__iv__52_k] >= 'a' && __iv__50_ustr[__iv__52_k] <= 'f') || (__iv__50_ustr[__iv__52_k] >= 'A' && __iv__50_ustr[__iv__52_k] <= 'F'));__iv__52_k=__iv__52_k + 1){
				}
				if(((__iv__52_k - __iv__51_j) & 1) == 0 && ((__iv__50_ustr[__iv__51_j + 1] >= '0' && __iv__50_ustr[__iv__51_j + 1] <= '9') || (__iv__50_ustr[__iv__51_j + 1] >= 'a' && __iv__50_ustr[__iv__51_j + 1] <= 'f') || (__iv__50_ustr[__iv__51_j + 1] >= 'A' && __iv__50_ustr[__iv__51_j + 1] <= 'F'))){
					__iv__51_j=__iv__51_j + 1;
					if(__iv__50_ustr[__iv__51_j] <= '9'){
						__iv__aave_batch__146_buffer[__iv__aave_batch__145_len]=__iv__50_ustr[__iv__51_j] - '0' + (16 * __iv__aave_batch__146_buffer[__iv__aave_batch__145_len]);
					}
					else if(__iv__50_ustr[__iv__51_j] <= 'F'){
						__iv__aave_batch__146_buffer[__iv__aave_batch__145_len]=__iv__50_ustr[__iv__51_j] - 'A' + 10 + (16 * __iv__aave_batch__146_buffer[__iv__aave_batch__145_len]);
					}
					else {
						__iv__aave_batch__146_buffer[__iv__aave_batch__145_len]=__iv__50_ustr[__iv__51_j] - 'a' + 10 + (16 * __iv__aave_batch__146_buffer[__iv__aave_batch__145_len]);
					}
				}
				__iv__aave_batch__145_len=__iv__aave_batch__145_len + 1;
			}
		}
		__iv__aave_batch__142_transaction->gas_price=BN_bin2bn(__iv__aave_batch__146_buffer, __iv__aave_batch__145_len, (BIGNUM*)/*void**/(NULL));
	}
/*service_var 103==> zgenerator_crypt.buffer_len*/
/*service_var 102==> zgenerator_crypt.buffer*/
	__iv__43_bn=(BIGNUM*)/*void**/(NULL);
	if("300000"){
		BN_dec2bn(&__iv__43_bn, (char*)/*string*/("300000"));
		if(__iv__43_bn){
			int __iv__aave_batch__148_buffer_len;
			unsigned char* __iv__aave_batch__147_buffer;
/*service_var <==104 zgenerator_crypt.buffer*/
/*service_var <==105 zgenerator_crypt.buffer_len*/
			__iv__aave_batch__148_buffer_len=BN_num_bytes(__iv__43_bn);
			__iv__aave_batch__147_buffer=malloc(__iv__aave_batch__148_buffer_len);
			__iv__aave_batch__148_buffer_len=BN_bn2bin(__iv__43_bn, __iv__aave_batch__147_buffer);
			__iv__aave_batch__142_transaction->gas_limit=BN_bin2bn(__iv__aave_batch__147_buffer, __iv__aave_batch__148_buffer_len, (BIGNUM*)/*void**/(NULL));
/*service_var 105==> zgenerator_crypt.buffer_len*/
/*service_var 104==> zgenerator_crypt.buffer*/
		}
	}
/*service_var <==106 zgenerator_crypt.buffer*/
/*service_var <==107 zgenerator_crypt.buffer_len*/
	if("0xf8ac10e65f2073460aad5f28e1eabe807dc287cf"){
		unsigned char* __iv__54_ustr;
		int __iv__53_i;
		int __iv__aave_batch__149_len;
		int __iv__55_j;
		unsigned char* __iv__aave_batch__150_buffer;
		__iv__54_ustr=(unsigned char*)/*string*/("0xf8ac10e65f2073460aad5f28e1eabe807dc287cf");
		__iv__53_i=0;
		for(__iv__53_i=0;__iv__54_ustr[__iv__53_i] && !(((__iv__54_ustr[__iv__53_i] >= '0' && __iv__54_ustr[__iv__53_i] <= '9') || (__iv__54_ustr[__iv__53_i] >= 'a' && __iv__54_ustr[__iv__53_i] <= 'f') || (__iv__54_ustr[__iv__53_i] >= 'A' && __iv__54_ustr[__iv__53_i] <= 'F')));__iv__53_i=__iv__53_i + 1){
		}
		if(__iv__54_ustr[__iv__53_i] == '0' && (__iv__54_ustr[__iv__53_i + 1] == 'x' || __iv__54_ustr[__iv__53_i + 1] == 'X')){
			__iv__53_i=__iv__53_i + 2;
		}
		__iv__aave_batch__149_len=0;
		for(__iv__55_j=__iv__53_i;__iv__54_ustr[__iv__55_j];__iv__55_j=__iv__55_j + 1){
			if(((__iv__54_ustr[__iv__55_j] >= '0' && __iv__54_ustr[__iv__55_j] <= '9') || (__iv__54_ustr[__iv__55_j] >= 'a' && __iv__54_ustr[__iv__55_j] <= 'f') || (__iv__54_ustr[__iv__55_j] >= 'A' && __iv__54_ustr[__iv__55_j] <= 'F'))){
				int __iv__56_k;
				for(__iv__56_k=__iv__55_j + 1;((__iv__54_ustr[__iv__56_k] >= '0' && __iv__54_ustr[__iv__56_k] <= '9') || (__iv__54_ustr[__iv__56_k] >= 'a' && __iv__54_ustr[__iv__56_k] <= 'f') || (__iv__54_ustr[__iv__56_k] >= 'A' && __iv__54_ustr[__iv__56_k] <= 'F'));__iv__56_k=__iv__56_k + 1){
				}
				if(((__iv__56_k - __iv__55_j) & 1) == 0 && ((__iv__54_ustr[__iv__55_j + 1] >= '0' && __iv__54_ustr[__iv__55_j + 1] <= '9') || (__iv__54_ustr[__iv__55_j + 1] >= 'a' && __iv__54_ustr[__iv__55_j + 1] <= 'f') || (__iv__54_ustr[__iv__55_j + 1] >= 'A' && __iv__54_ustr[__iv__55_j + 1] <= 'F'))){
					__iv__55_j=__iv__55_j + 1;
				}
				__iv__aave_batch__149_len=__iv__aave_batch__149_len + 1;
			}
		}
		__iv__aave_batch__150_buffer=malloc(__iv__aave_batch__149_len);
		__iv__aave_batch__149_len=0;
		for(__iv__55_j=__iv__53_i;__iv__54_ustr[__iv__55_j];__iv__55_j=__iv__55_j + 1){
			if(((__iv__54_ustr[__iv__55_j] >= '0' && __iv__54_ustr[__iv__55_j] <= '9') || (__iv__54_ustr[__iv__55_j] >= 'a' && __iv__54_ustr[__iv__55_j] <= 'f') || (__iv__54_ustr[__iv__55_j] >= 'A' && __iv__54_ustr[__iv__55_j] <= 'F'))){
				int __iv__56_k;
				if(__iv__54_ustr[__iv__55_j] <= '9'){
					__iv__aave_batch__150_buffer[__iv__aave_batch__149_len]=__iv__54_ustr[__iv__55_j] - '0';
				}
				else if(__iv__54_ustr[__iv__55_j] <= 'F'){
					__iv__aave_batch__150_buffer[__iv__aave_batch__149_len]=__iv__54_ustr[__iv__55_j] - 'A' + 10;
				}
				else {
					__iv__aave_batch__150_buffer[__iv__aave_batch__149_len]=__iv__54_ustr[__iv__55_j] - 'a' + 10;
				}
				for(__iv__56_k=__iv__55_j + 1;((__iv__54_ustr[__iv__56_k] >= '0' && __iv__54_ustr[__iv__56_k] <= '9') || (__iv__54_ustr[__iv__56_k] >= 'a' && __iv__54_ustr[__iv__56_k] <= 'f') || (__iv__54_ustr[__iv__56_k] >= 'A' && __iv__54_ustr[__iv__56_k] <= 'F'));__iv__56_k=__iv__56_k + 1){
				}
				if(((__iv__56_k - __iv__55_j) & 1) == 0 && ((__iv__54_ustr[__iv__55_j + 1] >= '0' && __iv__54_ustr[__iv__55_j + 1] <= '9') || (__iv__54_ustr[__iv__55_j + 1] >= 'a' && __iv__54_ustr[__iv__55_j + 1] <= 'f') || (__iv__54_ustr[__iv__55_j + 1] >= 'A' && __iv__54_ustr[__iv__55_j + 1] <= 'F'))){
					__iv__55_j=__iv__55_j + 1;
					if(__iv__54_ustr[__iv__55_j] <= '9'){
						__iv__aave_batch__150_buffer[__iv__aave_batch__149_len]=__iv__54_ustr[__iv__55_j] - '0' + (16 * __iv__aave_batch__150_buffer[__iv__aave_batch__149_len]);
					}
					else if(__iv__54_ustr[__iv__55_j] <= 'F'){
						__iv__aave_batch__150_buffer[__iv__aave_batch__149_len]=__iv__54_ustr[__iv__55_j] - 'A' + 10 + (16 * __iv__aave_batch__150_buffer[__iv__aave_batch__149_len]);
					}
					else {
						__iv__aave_batch__150_buffer[__iv__aave_batch__149_len]=__iv__54_ustr[__iv__55_j] - 'a' + 10 + (16 * __iv__aave_batch__150_buffer[__iv__aave_batch__149_len]);
					}
				}
				__iv__aave_batch__149_len=__iv__aave_batch__149_len + 1;
			}
		}
		__iv__aave_batch__142_transaction->recipient=BN_bin2bn(__iv__aave_batch__150_buffer, __iv__aave_batch__149_len, (BIGNUM*)/*void**/(NULL));
	}
/*service_var 107==> zgenerator_crypt.buffer_len*/
/*service_var 106==> zgenerator_crypt.buffer*/
	__iv__44_bn=(BIGNUM*)/*void**/(NULL);
	if(__iv__aave_batch__141_amount_wei){
		BN_dec2bn(&__iv__44_bn, (char*)/*string*/(__iv__aave_batch__141_amount_wei));
		if(__iv__44_bn){
			int __iv__aave_batch__152_buffer_len;
			unsigned char* __iv__aave_batch__151_buffer;
/*service_var <==108 zgenerator_crypt.buffer*/
/*service_var <==109 zgenerator_crypt.buffer_len*/
			__iv__aave_batch__152_buffer_len=BN_num_bytes(__iv__44_bn);
			__iv__aave_batch__151_buffer=malloc(__iv__aave_batch__152_buffer_len);
			__iv__aave_batch__152_buffer_len=BN_bn2bin(__iv__44_bn, __iv__aave_batch__151_buffer);
			__iv__aave_batch__142_transaction->value=BN_bin2bn(__iv__aave_batch__151_buffer, __iv__aave_batch__152_buffer_len, (BIGNUM*)/*void**/(NULL));
/*service_var 109==> zgenerator_crypt.buffer_len*/
/*service_var 108==> zgenerator_crypt.buffer*/
		}
	}
	__iv__aave_batch__153_buffer_list=(bufferlist)/*void**/(NULL);
/*service_var <==110 ethereum_contract_call_data.buffer_list*/
/*service_var <==111 zgenerator_crypt.buffer*/
/*service_var <==112 zgenerator_crypt.buffer_len*/
	if("depositETH(address,uint16)"){
		int __iv__aave_batch__154_len;
		int __iv__aave_batch__156_hash_len;
		string __iv__aave_batch__155_hash;
		int __iv__aave_batch__158_method_id_len;
		__iv__aave_batch__154_len=strlen((char*)/*string*/("depositETH(address,uint16)"));
/*service_var <==113 zgenerator_crypt.hash*/
/*service_var <==114 zgenerator_crypt.hash_len*/
		__iv__aave_batch__156_hash_len=32;
		__iv__aave_batch__155_hash=malloc(32 + 1);
		__iv__aave_batch__155_hash[0]='\0';
		zgenerator_crypt_keccak256((unsigned char*)/*string*/("depositETH(address,uint16)"), (unsigned int)/*int*/(__iv__aave_batch__154_len), (unsigned char*)/*string*/(__iv__aave_batch__155_hash));
/*service_var <==115 zgenerator_crypt.buffer*/
/*service_var <==116 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__158_method_id_len=4;
		if(__iv__aave_batch__156_hash_len >= __iv__aave_batch__158_method_id_len){
			unsigned char* __iv__aave_batch__157_method_id;
			buffer_type* __iv__aave_batch__159_buffer_item;
			__iv__aave_batch__157_method_id=malloc(__iv__aave_batch__158_method_id_len);
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__157_method_id), (const void*)/*string*/(__iv__aave_batch__155_hash), (size_t)/*int*/(__iv__aave_batch__158_method_id_len));
			__iv__aave_batch__159_buffer_item=calloc(1, sizeof(buffer_type));
			__iv__aave_batch__159_buffer_item->buffer=__iv__aave_batch__157_method_id;
			__iv__aave_batch__159_buffer_item->size=__iv__aave_batch__158_method_id_len;
			__iv__aave_batch__153_buffer_list=z_list_append_function((z_list_item_type*)/*bufferlist*/(__iv__aave_batch__153_buffer_list), (void*)/*buffer_type**/(__iv__aave_batch__159_buffer_item));
		}
/*service_var 116==> zgenerator_crypt.buffer_len*/
/*service_var 115==> zgenerator_crypt.buffer*/
/*service_var 114==> zgenerator_crypt.hash_len*/
/*service_var 113==> zgenerator_crypt.hash*/
	}
/*service_var 112==> zgenerator_crypt.buffer_len*/
/*service_var 111==> zgenerator_crypt.buffer*/
	__iv__aave_batch__160_value_clean=wallet;
	__iv__aave_batch__162_len=strlen((char*)/*string*/("0x"));
	__iv__aave_batch__161_tmp_var=string_nequal_or_null((const char*)/*string*/(__iv__aave_batch__160_value_clean), (const char*)/*string*/("0x"), __iv__aave_batch__162_len);
	if(__iv__aave_batch__161_tmp_var){
		__iv__aave_batch__160_value_clean=__iv__aave_batch__160_value_clean + 2;
	}
	__iv__aave_batch__153_buffer_list=ethereum_contract_call_uint_from_string_hex_(__iv__aave_batch__153_buffer_list, __iv__aave_batch__160_value_clean);
	__iv__aave_batch__153_buffer_list=ethereum_contract_call_uint_from_string_dec_(__iv__aave_batch__153_buffer_list, "0");
/*service_var 110==> ethereum_contract_call_data.buffer_list*/
	__iv__aave_batch__163_total_len=0;
	__iv__aave_batch__166_list_name=(collection)/*bufferlist*/(__iv__aave_batch__153_buffer_list);
	for(__iv__aave_batch__167_name=(collection)/*collection*/(__iv__aave_batch__166_list_name);__iv__aave_batch__167_name;__iv__aave_batch__167_name=(collection)/*z_list_item_type**/(__iv__aave_batch__167_name->next)){
		buffer_type* __iv__aave_batch__165_buffer_item;
		__iv__aave_batch__165_buffer_item=(buffer_type*)/*void**/(__iv__aave_batch__167_name->data);
		__iv__aave_batch__163_total_len=__iv__aave_batch__163_total_len + __iv__aave_batch__165_buffer_item->size;
	}
	__iv__aave_batch__164_buffer=malloc(__iv__aave_batch__163_total_len);
	__iv__aave_batch__168_string_index=0;
	for(__iv__aave_batch__169_name=(collection)/*collection*/(__iv__aave_batch__166_list_name);__iv__aave_batch__169_name;__iv__aave_batch__169_name=(collection)/*z_list_item_type**/(__iv__aave_batch__169_name->next)){
		buffer_type* __iv__aave_batch__165_buffer_item;
		int __iv__57_buffer_index;
		__iv__aave_batch__165_buffer_item=(buffer_type*)/*void**/(__iv__aave_batch__169_name->data);
		for(__iv__57_buffer_index=0;__iv__57_buffer_index < __iv__aave_batch__165_buffer_item->size;__iv__57_buffer_index=__iv__57_buffer_index + 1){
			__iv__aave_batch__164_buffer[__iv__aave_batch__168_string_index]=__iv__aave_batch__165_buffer_item->buffer[__iv__57_buffer_index];
			__iv__aave_batch__168_string_index=__iv__aave_batch__168_string_index + 1;
		}
	}
/*service_var <==117 zgenerator_crypt.buffer*/
/*service_var <==118 zgenerator_crypt.buffer_len*/
	__iv__aave_batch__142_transaction->data_len=__iv__aave_batch__163_total_len;
	__iv__aave_batch__142_transaction->data=malloc(__iv__aave_batch__142_transaction->data_len);
	memcpy((void*)/*unsigned char**/(__iv__aave_batch__142_transaction->data), (const void*)/*unsigned char**/(__iv__aave_batch__164_buffer), (size_t)/*int*/(__iv__aave_batch__163_total_len));
/*service_var 118==> zgenerator_crypt.buffer_len*/
/*service_var 117==> zgenerator_crypt.buffer*/
/*service_var 99==> ethereum.transaction*/
	__iv__aave_batch__171_tmp_var=strconcat((char*)/*string*/("../resource/ethereum.key"), (char*)/*string*/(".priv"));
	__iv__aave_batch__170_not_file_exist=access(__iv__aave_batch__171_tmp_var, F_OK);
	if(__iv__aave_batch__170_not_file_exist){
		EC_KEY* __iv__aave_batch__172_key;
/*service_var <==119 zgenerator_crypt_key.ec_private*/
/*service_var <==120 zgenerator_crypt_key.ec_public*/
		__iv__aave_batch__172_key=EC_KEY_new_by_curve_name(NID_secp256k1);
		if(__iv__aave_batch__172_key){
			int __iv__58_ret;
			EC_KEY_set_asn1_flag(__iv__aave_batch__172_key, OPENSSL_EC_NAMED_CURVE);
			__iv__58_ret=EC_KEY_generate_key(__iv__aave_batch__172_key);
			if(__iv__58_ret == 1){
				EVP_PKEY* __iv__aave_batch__173_evp_key;
				EVP_PKEY* __iv__aave_batch__180_evp_key;
/*service_var <==121 zgenerator_crypt_key.evp_private*/
				__iv__aave_batch__173_evp_key=EVP_PKEY_new();
				if(__iv__aave_batch__173_evp_key){
					int __iv__59_ret;
					__iv__59_ret=EVP_PKEY_set1_EC_KEY(__iv__aave_batch__173_evp_key, __iv__aave_batch__172_key);
					if(__iv__59_ret){
						string __iv__aave_batch__175_tmp_var;
						BIO* __iv__aave_batch__174_bp;
						__iv__aave_batch__175_tmp_var=strconcat((char*)/*string*/("../resource/ethereum.key"), (char*)/*string*/(".priv"));
						__iv__aave_batch__174_bp=BIO_new_file((char*)/*string*/(__iv__aave_batch__175_tmp_var), (char*)/*string*/("w+"));
						if(__iv__aave_batch__174_bp){
							int __iv__60_ret;
							__iv__60_ret=PEM_write_bio_PrivateKey(__iv__aave_batch__174_bp, __iv__aave_batch__173_evp_key, (EVP_CIPHER*)/*void**/(NULL), (unsigned char*)/*void**/(NULL), 0, (pem_password_cb*)/*void**/(NULL), NULL);
							if(__iv__60_ret == 1){
								string __iv__aave_batch__177_tmp_var;
								string __iv__aave_batch__178_tmp_var;
								string __iv__aave_batch__179_tmp_var;
								string __iv__aave_batch__176_to_print;
								__iv__aave_batch__177_tmp_var=strconcat((char*)/*string*/("write to file "), (char*)/*string*/("../resource/ethereum.key"));
								__iv__aave_batch__178_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__177_tmp_var), (char*)/*string*/(".priv"));
								__iv__aave_batch__179_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__178_tmp_var), (char*)/*string*/("\n"));
								__iv__aave_batch__176_to_print=__iv__aave_batch__179_tmp_var;
								if(__iv__aave_batch__176_to_print){
									printf((char*)/*string*/("%s"), __iv__aave_batch__176_to_print);
								}
							}
							if(__iv__60_ret != 1){
								printf((char*)/*string*/("%s"), "error write private key!!!\n");
							}
							BIO_free_all(__iv__aave_batch__174_bp);
						}
						else {
							printf((char*)/*string*/("%s"), "error write private key!!!\n");
						}
					}
					else {
						printf((char*)/*string*/("%s"), "error write private key!!!\n");
					}
					EVP_PKEY_free(__iv__aave_batch__173_evp_key);
				}
				else {
					printf((char*)/*string*/("%s"), "error write private key!!!\n");
				}
/*service_var 121==> zgenerator_crypt_key.evp_private*/
/*service_var <==122 zgenerator_crypt_key.evp_public*/
				__iv__aave_batch__180_evp_key=EVP_PKEY_new();
				if(__iv__aave_batch__180_evp_key){
					int __iv__61_ret;
					__iv__61_ret=EVP_PKEY_set1_EC_KEY(__iv__aave_batch__180_evp_key, __iv__aave_batch__172_key);
					if(__iv__61_ret){
						string __iv__aave_batch__182_tmp_var;
						BIO* __iv__aave_batch__181_bp;
						__iv__aave_batch__182_tmp_var=strconcat((char*)/*string*/("../resource/ethereum.key"), (char*)/*string*/(".pub"));
						__iv__aave_batch__181_bp=BIO_new_file((char*)/*string*/(__iv__aave_batch__182_tmp_var), (char*)/*string*/("w+"));
						if(__iv__aave_batch__181_bp){
							int __iv__62_ret;
							__iv__62_ret=PEM_write_bio_PUBKEY(__iv__aave_batch__181_bp, __iv__aave_batch__180_evp_key);
							if(__iv__62_ret == 1){
								string __iv__aave_batch__184_tmp_var;
								string __iv__aave_batch__185_tmp_var;
								string __iv__aave_batch__186_tmp_var;
								string __iv__aave_batch__183_to_print;
								__iv__aave_batch__184_tmp_var=strconcat((char*)/*string*/("write to file "), (char*)/*string*/("../resource/ethereum.key"));
								__iv__aave_batch__185_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__184_tmp_var), (char*)/*string*/(".pub"));
								__iv__aave_batch__186_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__185_tmp_var), (char*)/*string*/("\n"));
								__iv__aave_batch__183_to_print=__iv__aave_batch__186_tmp_var;
								if(__iv__aave_batch__183_to_print){
									printf((char*)/*string*/("%s"), __iv__aave_batch__183_to_print);
								}
							}
							if(__iv__62_ret != 1){
								printf((char*)/*string*/("%s"), "error write public key!!!\n");
							}
							BIO_free_all(__iv__aave_batch__181_bp);
						}
						else {
							printf((char*)/*string*/("%s"), "error write public key!!!\n");
						}
					}
					else {
						printf((char*)/*string*/("%s"), "error write public key!!!\n");
					}
					EVP_PKEY_free(__iv__aave_batch__180_evp_key);
				}
				else {
					printf((char*)/*string*/("%s"), "error write public key!!!\n");
				}
/*service_var 122==> zgenerator_crypt_key.evp_public*/
			}
			else {
				printf((char*)/*string*/("%s"), "error gen key!!!\n");
			}
			EC_KEY_free(__iv__aave_batch__172_key);
		}
		else {
			printf((char*)/*string*/("%s"), "error gen key!!!\n");
		}
/*service_var 120==> zgenerator_crypt_key.ec_public*/
/*service_var 119==> zgenerator_crypt_key.ec_private*/
	}
/*service_var <==123 zgenerator_crypt_key.evp_private*/
	__iv__aave_batch__189_tmp_var=strconcat((char*)/*string*/("../resource/ethereum.key"), (char*)/*string*/(".priv"));
	__iv__aave_batch__188_bp=BIO_new_file((char*)/*string*/(__iv__aave_batch__189_tmp_var), (char*)/*string*/("r"));
	if(__iv__aave_batch__188_bp){
		EVP_PKEY* __iv__aave_batch__187_key;
		__iv__aave_batch__187_key=(EVP_PKEY*)/*void**/(NULL);
		__iv__aave_batch__187_key=PEM_read_bio_PrivateKey(__iv__aave_batch__188_bp, &__iv__aave_batch__187_key, (pem_password_cb*)/*void**/(NULL), NULL);
		if(__iv__aave_batch__187_key){
			EC_KEY* __iv__aave_batch__190_ec_key;
/*service_var <==124 zgenerator_crypt_key.ec_private*/
			__iv__aave_batch__190_ec_key=EVP_PKEY_get1_EC_KEY(__iv__aave_batch__187_key);
			if(__iv__aave_batch__190_ec_key){
				ethereum_rlp_list_type* __iv__aave_batch__191_rlp;
				BIGNUM* __iv__aave_batch__192_bn;
				int __iv__aave_batch__234_buffer_len;
				collection __iv__aave_batch__236_name;
				void* __iv__aave_batch__233_buffer;
				void* __iv__aave_batch__237_buffer_ptr;
				collection __iv__aave_batch__238_name;
				int __iv__aave_batch__240_buffer_len;
				ethereum_rlp_string_type __iv__aave_batch__239_buffer;
				int __iv__aave_batch__242_hash_len;
				string __iv__aave_batch__241_hash;
				ECDSA_SIG* __iv__aave_batch__245_sig;
				__iv__aave_batch__191_rlp=calloc(1, sizeof(ethereum_rlp_list_type));
/*service_var <==125 ethereum.transaction*/
				__iv__aave_batch__192_bn=BN_new();
				if(__iv__aave_batch__192_bn){
					int __iv__63_ret;
					__iv__63_ret=BN_set_word(__iv__aave_batch__192_bn, (BN_ULONG)/*int*/(__iv__main__0_chain_id));
					if(__iv__63_ret){
						int __iv__aave_batch__194_buffer_len;
						unsigned char* __iv__aave_batch__193_buffer;
/*service_var <==126 zgenerator_crypt.buffer*/
/*service_var <==127 zgenerator_crypt.buffer_len*/
						__iv__aave_batch__194_buffer_len=BN_num_bytes(__iv__aave_batch__192_bn);
						__iv__aave_batch__193_buffer=malloc(__iv__aave_batch__194_buffer_len);
						__iv__aave_batch__194_buffer_len=BN_bn2bin(__iv__aave_batch__192_bn, __iv__aave_batch__193_buffer);
						__iv__aave_batch__142_transaction->v=BN_bin2bn(__iv__aave_batch__193_buffer, __iv__aave_batch__194_buffer_len, (BIGNUM*)/*void**/(NULL));
/*service_var 127==> zgenerator_crypt.buffer_len*/
/*service_var 126==> zgenerator_crypt.buffer*/
					}
				}
/*service_var <==128 zgenerator_crypt.buffer*/
/*service_var <==129 zgenerator_crypt.buffer_len*/
				if(""){
					unsigned char* __iv__65_ustr;
					int __iv__64_i;
					int __iv__aave_batch__195_len;
					int __iv__66_j;
					unsigned char* __iv__aave_batch__196_buffer;
					__iv__65_ustr=(unsigned char*)/*string*/("");
					__iv__64_i=0;
					for(__iv__64_i=0;__iv__65_ustr[__iv__64_i] && !(((__iv__65_ustr[__iv__64_i] >= '0' && __iv__65_ustr[__iv__64_i] <= '9') || (__iv__65_ustr[__iv__64_i] >= 'a' && __iv__65_ustr[__iv__64_i] <= 'f') || (__iv__65_ustr[__iv__64_i] >= 'A' && __iv__65_ustr[__iv__64_i] <= 'F')));__iv__64_i=__iv__64_i + 1){
					}
					if(__iv__65_ustr[__iv__64_i] == '0' && (__iv__65_ustr[__iv__64_i + 1] == 'x' || __iv__65_ustr[__iv__64_i + 1] == 'X')){
						__iv__64_i=__iv__64_i + 2;
					}
					__iv__aave_batch__195_len=0;
					for(__iv__66_j=__iv__64_i;__iv__65_ustr[__iv__66_j];__iv__66_j=__iv__66_j + 1){
						if(((__iv__65_ustr[__iv__66_j] >= '0' && __iv__65_ustr[__iv__66_j] <= '9') || (__iv__65_ustr[__iv__66_j] >= 'a' && __iv__65_ustr[__iv__66_j] <= 'f') || (__iv__65_ustr[__iv__66_j] >= 'A' && __iv__65_ustr[__iv__66_j] <= 'F'))){
							int __iv__67_k;
							for(__iv__67_k=__iv__66_j + 1;((__iv__65_ustr[__iv__67_k] >= '0' && __iv__65_ustr[__iv__67_k] <= '9') || (__iv__65_ustr[__iv__67_k] >= 'a' && __iv__65_ustr[__iv__67_k] <= 'f') || (__iv__65_ustr[__iv__67_k] >= 'A' && __iv__65_ustr[__iv__67_k] <= 'F'));__iv__67_k=__iv__67_k + 1){
							}
							if(((__iv__67_k - __iv__66_j) & 1) == 0 && ((__iv__65_ustr[__iv__66_j + 1] >= '0' && __iv__65_ustr[__iv__66_j + 1] <= '9') || (__iv__65_ustr[__iv__66_j + 1] >= 'a' && __iv__65_ustr[__iv__66_j + 1] <= 'f') || (__iv__65_ustr[__iv__66_j + 1] >= 'A' && __iv__65_ustr[__iv__66_j + 1] <= 'F'))){
								__iv__66_j=__iv__66_j + 1;
							}
							__iv__aave_batch__195_len=__iv__aave_batch__195_len + 1;
						}
					}
					__iv__aave_batch__196_buffer=malloc(__iv__aave_batch__195_len);
					__iv__aave_batch__195_len=0;
					for(__iv__66_j=__iv__64_i;__iv__65_ustr[__iv__66_j];__iv__66_j=__iv__66_j + 1){
						if(((__iv__65_ustr[__iv__66_j] >= '0' && __iv__65_ustr[__iv__66_j] <= '9') || (__iv__65_ustr[__iv__66_j] >= 'a' && __iv__65_ustr[__iv__66_j] <= 'f') || (__iv__65_ustr[__iv__66_j] >= 'A' && __iv__65_ustr[__iv__66_j] <= 'F'))){
							int __iv__67_k;
							if(__iv__65_ustr[__iv__66_j] <= '9'){
								__iv__aave_batch__196_buffer[__iv__aave_batch__195_len]=__iv__65_ustr[__iv__66_j] - '0';
							}
							else if(__iv__65_ustr[__iv__66_j] <= 'F'){
								__iv__aave_batch__196_buffer[__iv__aave_batch__195_len]=__iv__65_ustr[__iv__66_j] - 'A' + 10;
							}
							else {
								__iv__aave_batch__196_buffer[__iv__aave_batch__195_len]=__iv__65_ustr[__iv__66_j] - 'a' + 10;
							}
							for(__iv__67_k=__iv__66_j + 1;((__iv__65_ustr[__iv__67_k] >= '0' && __iv__65_ustr[__iv__67_k] <= '9') || (__iv__65_ustr[__iv__67_k] >= 'a' && __iv__65_ustr[__iv__67_k] <= 'f') || (__iv__65_ustr[__iv__67_k] >= 'A' && __iv__65_ustr[__iv__67_k] <= 'F'));__iv__67_k=__iv__67_k + 1){
							}
							if(((__iv__67_k - __iv__66_j) & 1) == 0 && ((__iv__65_ustr[__iv__66_j + 1] >= '0' && __iv__65_ustr[__iv__66_j + 1] <= '9') || (__iv__65_ustr[__iv__66_j + 1] >= 'a' && __iv__65_ustr[__iv__66_j + 1] <= 'f') || (__iv__65_ustr[__iv__66_j + 1] >= 'A' && __iv__65_ustr[__iv__66_j + 1] <= 'F'))){
								__iv__66_j=__iv__66_j + 1;
								if(__iv__65_ustr[__iv__66_j] <= '9'){
									__iv__aave_batch__196_buffer[__iv__aave_batch__195_len]=__iv__65_ustr[__iv__66_j] - '0' + (16 * __iv__aave_batch__196_buffer[__iv__aave_batch__195_len]);
								}
								else if(__iv__65_ustr[__iv__66_j] <= 'F'){
									__iv__aave_batch__196_buffer[__iv__aave_batch__195_len]=__iv__65_ustr[__iv__66_j] - 'A' + 10 + (16 * __iv__aave_batch__196_buffer[__iv__aave_batch__195_len]);
								}
								else {
									__iv__aave_batch__196_buffer[__iv__aave_batch__195_len]=__iv__65_ustr[__iv__66_j] - 'a' + 10 + (16 * __iv__aave_batch__196_buffer[__iv__aave_batch__195_len]);
								}
							}
							__iv__aave_batch__195_len=__iv__aave_batch__195_len + 1;
						}
					}
					__iv__aave_batch__142_transaction->r=BN_bin2bn(__iv__aave_batch__196_buffer, __iv__aave_batch__195_len, (BIGNUM*)/*void**/(NULL));
					__iv__aave_batch__142_transaction->s=BN_bin2bn(__iv__aave_batch__196_buffer, __iv__aave_batch__195_len, (BIGNUM*)/*void**/(NULL));
				}
/*service_var 129==> zgenerator_crypt.buffer_len*/
/*service_var 128==> zgenerator_crypt.buffer*/
/*service_var <==130 ethereum.rlp*/
				if(__iv__aave_batch__142_transaction){
					int __iv__aave_batch__198_buffer_len;
					unsigned char* __iv__aave_batch__197_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__199_children;
					unsigned char* __iv__aave_batch__200_uvalue;
					int __iv__aave_batch__202_buffer_len;
					unsigned char* __iv__aave_batch__201_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__203_children;
					unsigned char* __iv__aave_batch__204_uvalue;
					int __iv__aave_batch__206_buffer_len;
					unsigned char* __iv__aave_batch__205_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__207_children;
					unsigned char* __iv__aave_batch__208_uvalue;
					int __iv__aave_batch__210_buffer_len;
					unsigned char* __iv__aave_batch__209_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__211_children;
					unsigned char* __iv__aave_batch__212_uvalue;
					int __iv__aave_batch__214_buffer_len;
					unsigned char* __iv__aave_batch__213_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__215_children;
					unsigned char* __iv__aave_batch__216_uvalue;
					ethereum_rlp_list_type* __iv__aave_batch__217_children;
					unsigned char* __iv__aave_batch__218_uvalue;
					int __iv__aave_batch__220_buffer_len;
					unsigned char* __iv__aave_batch__219_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__221_children;
					unsigned char* __iv__aave_batch__222_uvalue;
					int __iv__aave_batch__224_buffer_len;
					unsigned char* __iv__aave_batch__223_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__225_children;
					unsigned char* __iv__aave_batch__226_uvalue;
					int __iv__aave_batch__228_buffer_len;
					unsigned char* __iv__aave_batch__227_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__229_children;
					unsigned char* __iv__aave_batch__230_uvalue;
/*service_var <==131 zgenerator_crypt.buffer*/
/*service_var <==132 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__198_buffer_len=BN_num_bytes(__iv__aave_batch__142_transaction->nonce);
					__iv__aave_batch__197_buffer=malloc(__iv__aave_batch__198_buffer_len);
					__iv__aave_batch__198_buffer_len=BN_bn2bin(__iv__aave_batch__142_transaction->nonce, __iv__aave_batch__197_buffer);
					__iv__aave_batch__199_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__199_children->buffer_len=0;
					__iv__aave_batch__199_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__200_uvalue=__iv__aave_batch__197_buffer;
					if(__iv__aave_batch__198_buffer_len == 1 && __iv__aave_batch__200_uvalue[0] < 0x80){
						__iv__aave_batch__199_children->buffer_len=1;
						__iv__aave_batch__199_children->buffer=malloc(__iv__aave_batch__199_children->buffer_len);
						__iv__aave_batch__199_children->buffer[0]=__iv__aave_batch__200_uvalue[0];
					}
					else if(__iv__aave_batch__198_buffer_len < 56){
						__iv__aave_batch__199_children->buffer_len=1 + __iv__aave_batch__198_buffer_len;
						__iv__aave_batch__199_children->buffer=malloc(__iv__aave_batch__199_children->buffer_len);
						__iv__aave_batch__199_children->buffer[0]=0x80 + __iv__aave_batch__198_buffer_len;
						if(__iv__aave_batch__198_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__199_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__197_buffer), (size_t)/*int*/(__iv__aave_batch__198_buffer_len));
						}
					}
					else {
						int __iv__68_len_length;
						u_int64_t __iv__69_i;
						unsigned char* __iv__70_value_len_chr;
						__iv__68_len_length=1;
						for(__iv__69_i=(u_int64_t)/*int*/(__iv__aave_batch__198_buffer_len);__iv__69_i > 0xff;__iv__69_i=__iv__69_i / 0x100){
							__iv__68_len_length=__iv__68_len_length + 1;
						}
						__iv__aave_batch__199_children->buffer_len=1 + __iv__68_len_length + __iv__aave_batch__198_buffer_len;
						__iv__aave_batch__199_children->buffer=malloc(__iv__aave_batch__199_children->buffer_len);
						__iv__aave_batch__199_children->buffer[0]=0xb7 + __iv__68_len_length;
						__iv__70_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__198_buffer_len);
						for(__iv__69_i=(u_int64_t)/*int*/(__iv__68_len_length);__iv__69_i > 0;__iv__69_i=__iv__69_i - 1){
							__iv__aave_batch__199_children->buffer[__iv__69_i]=__iv__70_value_len_chr[__iv__68_len_length - __iv__69_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__199_children->buffer + 1 + __iv__68_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__197_buffer), (size_t)/*int*/(__iv__aave_batch__198_buffer_len));
					}
					__iv__aave_batch__191_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__191_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__199_children));
/*service_var 132==> zgenerator_crypt.buffer_len*/
/*service_var 131==> zgenerator_crypt.buffer*/
/*service_var <==133 zgenerator_crypt.buffer*/
/*service_var <==134 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__202_buffer_len=BN_num_bytes(__iv__aave_batch__142_transaction->gas_price);
					__iv__aave_batch__201_buffer=malloc(__iv__aave_batch__202_buffer_len);
					__iv__aave_batch__202_buffer_len=BN_bn2bin(__iv__aave_batch__142_transaction->gas_price, __iv__aave_batch__201_buffer);
					__iv__aave_batch__203_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__203_children->buffer_len=0;
					__iv__aave_batch__203_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__204_uvalue=__iv__aave_batch__201_buffer;
					if(__iv__aave_batch__202_buffer_len == 1 && __iv__aave_batch__204_uvalue[0] < 0x80){
						__iv__aave_batch__203_children->buffer_len=1;
						__iv__aave_batch__203_children->buffer=malloc(__iv__aave_batch__203_children->buffer_len);
						__iv__aave_batch__203_children->buffer[0]=__iv__aave_batch__204_uvalue[0];
					}
					else if(__iv__aave_batch__202_buffer_len < 56){
						__iv__aave_batch__203_children->buffer_len=1 + __iv__aave_batch__202_buffer_len;
						__iv__aave_batch__203_children->buffer=malloc(__iv__aave_batch__203_children->buffer_len);
						__iv__aave_batch__203_children->buffer[0]=0x80 + __iv__aave_batch__202_buffer_len;
						if(__iv__aave_batch__202_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__203_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__201_buffer), (size_t)/*int*/(__iv__aave_batch__202_buffer_len));
						}
					}
					else {
						int __iv__71_len_length;
						u_int64_t __iv__72_i;
						unsigned char* __iv__73_value_len_chr;
						__iv__71_len_length=1;
						for(__iv__72_i=(u_int64_t)/*int*/(__iv__aave_batch__202_buffer_len);__iv__72_i > 0xff;__iv__72_i=__iv__72_i / 0x100){
							__iv__71_len_length=__iv__71_len_length + 1;
						}
						__iv__aave_batch__203_children->buffer_len=1 + __iv__71_len_length + __iv__aave_batch__202_buffer_len;
						__iv__aave_batch__203_children->buffer=malloc(__iv__aave_batch__203_children->buffer_len);
						__iv__aave_batch__203_children->buffer[0]=0xb7 + __iv__71_len_length;
						__iv__73_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__202_buffer_len);
						for(__iv__72_i=(u_int64_t)/*int*/(__iv__71_len_length);__iv__72_i > 0;__iv__72_i=__iv__72_i - 1){
							__iv__aave_batch__203_children->buffer[__iv__72_i]=__iv__73_value_len_chr[__iv__71_len_length - __iv__72_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__203_children->buffer + 1 + __iv__71_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__201_buffer), (size_t)/*int*/(__iv__aave_batch__202_buffer_len));
					}
					__iv__aave_batch__191_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__191_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__203_children));
/*service_var 134==> zgenerator_crypt.buffer_len*/
/*service_var 133==> zgenerator_crypt.buffer*/
/*service_var <==135 zgenerator_crypt.buffer*/
/*service_var <==136 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__206_buffer_len=BN_num_bytes(__iv__aave_batch__142_transaction->gas_limit);
					__iv__aave_batch__205_buffer=malloc(__iv__aave_batch__206_buffer_len);
					__iv__aave_batch__206_buffer_len=BN_bn2bin(__iv__aave_batch__142_transaction->gas_limit, __iv__aave_batch__205_buffer);
					__iv__aave_batch__207_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__207_children->buffer_len=0;
					__iv__aave_batch__207_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__208_uvalue=__iv__aave_batch__205_buffer;
					if(__iv__aave_batch__206_buffer_len == 1 && __iv__aave_batch__208_uvalue[0] < 0x80){
						__iv__aave_batch__207_children->buffer_len=1;
						__iv__aave_batch__207_children->buffer=malloc(__iv__aave_batch__207_children->buffer_len);
						__iv__aave_batch__207_children->buffer[0]=__iv__aave_batch__208_uvalue[0];
					}
					else if(__iv__aave_batch__206_buffer_len < 56){
						__iv__aave_batch__207_children->buffer_len=1 + __iv__aave_batch__206_buffer_len;
						__iv__aave_batch__207_children->buffer=malloc(__iv__aave_batch__207_children->buffer_len);
						__iv__aave_batch__207_children->buffer[0]=0x80 + __iv__aave_batch__206_buffer_len;
						if(__iv__aave_batch__206_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__207_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__205_buffer), (size_t)/*int*/(__iv__aave_batch__206_buffer_len));
						}
					}
					else {
						int __iv__74_len_length;
						u_int64_t __iv__75_i;
						unsigned char* __iv__76_value_len_chr;
						__iv__74_len_length=1;
						for(__iv__75_i=(u_int64_t)/*int*/(__iv__aave_batch__206_buffer_len);__iv__75_i > 0xff;__iv__75_i=__iv__75_i / 0x100){
							__iv__74_len_length=__iv__74_len_length + 1;
						}
						__iv__aave_batch__207_children->buffer_len=1 + __iv__74_len_length + __iv__aave_batch__206_buffer_len;
						__iv__aave_batch__207_children->buffer=malloc(__iv__aave_batch__207_children->buffer_len);
						__iv__aave_batch__207_children->buffer[0]=0xb7 + __iv__74_len_length;
						__iv__76_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__206_buffer_len);
						for(__iv__75_i=(u_int64_t)/*int*/(__iv__74_len_length);__iv__75_i > 0;__iv__75_i=__iv__75_i - 1){
							__iv__aave_batch__207_children->buffer[__iv__75_i]=__iv__76_value_len_chr[__iv__74_len_length - __iv__75_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__207_children->buffer + 1 + __iv__74_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__205_buffer), (size_t)/*int*/(__iv__aave_batch__206_buffer_len));
					}
					__iv__aave_batch__191_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__191_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__207_children));
/*service_var 136==> zgenerator_crypt.buffer_len*/
/*service_var 135==> zgenerator_crypt.buffer*/
/*service_var <==137 zgenerator_crypt.buffer*/
/*service_var <==138 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__210_buffer_len=BN_num_bytes(__iv__aave_batch__142_transaction->recipient);
					__iv__aave_batch__209_buffer=malloc(__iv__aave_batch__210_buffer_len);
					__iv__aave_batch__210_buffer_len=BN_bn2bin(__iv__aave_batch__142_transaction->recipient, __iv__aave_batch__209_buffer);
					__iv__aave_batch__211_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__211_children->buffer_len=0;
					__iv__aave_batch__211_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__212_uvalue=__iv__aave_batch__209_buffer;
					if(__iv__aave_batch__210_buffer_len == 1 && __iv__aave_batch__212_uvalue[0] < 0x80){
						__iv__aave_batch__211_children->buffer_len=1;
						__iv__aave_batch__211_children->buffer=malloc(__iv__aave_batch__211_children->buffer_len);
						__iv__aave_batch__211_children->buffer[0]=__iv__aave_batch__212_uvalue[0];
					}
					else if(__iv__aave_batch__210_buffer_len < 56){
						__iv__aave_batch__211_children->buffer_len=1 + __iv__aave_batch__210_buffer_len;
						__iv__aave_batch__211_children->buffer=malloc(__iv__aave_batch__211_children->buffer_len);
						__iv__aave_batch__211_children->buffer[0]=0x80 + __iv__aave_batch__210_buffer_len;
						if(__iv__aave_batch__210_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__211_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__209_buffer), (size_t)/*int*/(__iv__aave_batch__210_buffer_len));
						}
					}
					else {
						int __iv__77_len_length;
						u_int64_t __iv__78_i;
						unsigned char* __iv__79_value_len_chr;
						__iv__77_len_length=1;
						for(__iv__78_i=(u_int64_t)/*int*/(__iv__aave_batch__210_buffer_len);__iv__78_i > 0xff;__iv__78_i=__iv__78_i / 0x100){
							__iv__77_len_length=__iv__77_len_length + 1;
						}
						__iv__aave_batch__211_children->buffer_len=1 + __iv__77_len_length + __iv__aave_batch__210_buffer_len;
						__iv__aave_batch__211_children->buffer=malloc(__iv__aave_batch__211_children->buffer_len);
						__iv__aave_batch__211_children->buffer[0]=0xb7 + __iv__77_len_length;
						__iv__79_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__210_buffer_len);
						for(__iv__78_i=(u_int64_t)/*int*/(__iv__77_len_length);__iv__78_i > 0;__iv__78_i=__iv__78_i - 1){
							__iv__aave_batch__211_children->buffer[__iv__78_i]=__iv__79_value_len_chr[__iv__77_len_length - __iv__78_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__211_children->buffer + 1 + __iv__77_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__209_buffer), (size_t)/*int*/(__iv__aave_batch__210_buffer_len));
					}
					__iv__aave_batch__191_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__191_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__211_children));
/*service_var 138==> zgenerator_crypt.buffer_len*/
/*service_var 137==> zgenerator_crypt.buffer*/
/*service_var <==139 zgenerator_crypt.buffer*/
/*service_var <==140 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__214_buffer_len=BN_num_bytes(__iv__aave_batch__142_transaction->value);
					__iv__aave_batch__213_buffer=malloc(__iv__aave_batch__214_buffer_len);
					__iv__aave_batch__214_buffer_len=BN_bn2bin(__iv__aave_batch__142_transaction->value, __iv__aave_batch__213_buffer);
					__iv__aave_batch__215_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__215_children->buffer_len=0;
					__iv__aave_batch__215_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__216_uvalue=__iv__aave_batch__213_buffer;
					if(__iv__aave_batch__214_buffer_len == 1 && __iv__aave_batch__216_uvalue[0] < 0x80){
						__iv__aave_batch__215_children->buffer_len=1;
						__iv__aave_batch__215_children->buffer=malloc(__iv__aave_batch__215_children->buffer_len);
						__iv__aave_batch__215_children->buffer[0]=__iv__aave_batch__216_uvalue[0];
					}
					else if(__iv__aave_batch__214_buffer_len < 56){
						__iv__aave_batch__215_children->buffer_len=1 + __iv__aave_batch__214_buffer_len;
						__iv__aave_batch__215_children->buffer=malloc(__iv__aave_batch__215_children->buffer_len);
						__iv__aave_batch__215_children->buffer[0]=0x80 + __iv__aave_batch__214_buffer_len;
						if(__iv__aave_batch__214_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__215_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__213_buffer), (size_t)/*int*/(__iv__aave_batch__214_buffer_len));
						}
					}
					else {
						int __iv__80_len_length;
						u_int64_t __iv__81_i;
						unsigned char* __iv__82_value_len_chr;
						__iv__80_len_length=1;
						for(__iv__81_i=(u_int64_t)/*int*/(__iv__aave_batch__214_buffer_len);__iv__81_i > 0xff;__iv__81_i=__iv__81_i / 0x100){
							__iv__80_len_length=__iv__80_len_length + 1;
						}
						__iv__aave_batch__215_children->buffer_len=1 + __iv__80_len_length + __iv__aave_batch__214_buffer_len;
						__iv__aave_batch__215_children->buffer=malloc(__iv__aave_batch__215_children->buffer_len);
						__iv__aave_batch__215_children->buffer[0]=0xb7 + __iv__80_len_length;
						__iv__82_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__214_buffer_len);
						for(__iv__81_i=(u_int64_t)/*int*/(__iv__80_len_length);__iv__81_i > 0;__iv__81_i=__iv__81_i - 1){
							__iv__aave_batch__215_children->buffer[__iv__81_i]=__iv__82_value_len_chr[__iv__80_len_length - __iv__81_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__215_children->buffer + 1 + __iv__80_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__213_buffer), (size_t)/*int*/(__iv__aave_batch__214_buffer_len));
					}
					__iv__aave_batch__191_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__191_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__215_children));
/*service_var 140==> zgenerator_crypt.buffer_len*/
/*service_var 139==> zgenerator_crypt.buffer*/
					__iv__aave_batch__217_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__217_children->buffer_len=0;
					__iv__aave_batch__217_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__218_uvalue=__iv__aave_batch__142_transaction->data;
					if(__iv__aave_batch__142_transaction->data_len == 1 && __iv__aave_batch__218_uvalue[0] < 0x80){
						__iv__aave_batch__217_children->buffer_len=1;
						__iv__aave_batch__217_children->buffer=malloc(__iv__aave_batch__217_children->buffer_len);
						__iv__aave_batch__217_children->buffer[0]=__iv__aave_batch__218_uvalue[0];
					}
					else if(__iv__aave_batch__142_transaction->data_len < 56){
						__iv__aave_batch__217_children->buffer_len=1 + __iv__aave_batch__142_transaction->data_len;
						__iv__aave_batch__217_children->buffer=malloc(__iv__aave_batch__217_children->buffer_len);
						__iv__aave_batch__217_children->buffer[0]=0x80 + __iv__aave_batch__142_transaction->data_len;
						if(__iv__aave_batch__142_transaction->data_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__217_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__142_transaction->data), (size_t)/*int*/(__iv__aave_batch__142_transaction->data_len));
						}
					}
					else {
						int __iv__83_len_length;
						u_int64_t __iv__84_i;
						unsigned char* __iv__85_value_len_chr;
						__iv__83_len_length=1;
						for(__iv__84_i=(u_int64_t)/*int*/(__iv__aave_batch__142_transaction->data_len);__iv__84_i > 0xff;__iv__84_i=__iv__84_i / 0x100){
							__iv__83_len_length=__iv__83_len_length + 1;
						}
						__iv__aave_batch__217_children->buffer_len=1 + __iv__83_len_length + __iv__aave_batch__142_transaction->data_len;
						__iv__aave_batch__217_children->buffer=malloc(__iv__aave_batch__217_children->buffer_len);
						__iv__aave_batch__217_children->buffer[0]=0xb7 + __iv__83_len_length;
						__iv__85_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__142_transaction->data_len);
						for(__iv__84_i=(u_int64_t)/*int*/(__iv__83_len_length);__iv__84_i > 0;__iv__84_i=__iv__84_i - 1){
							__iv__aave_batch__217_children->buffer[__iv__84_i]=__iv__85_value_len_chr[__iv__83_len_length - __iv__84_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__217_children->buffer + 1 + __iv__83_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__142_transaction->data), (size_t)/*int*/(__iv__aave_batch__142_transaction->data_len));
					}
					__iv__aave_batch__191_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__191_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__217_children));
/*service_var <==141 zgenerator_crypt.buffer*/
/*service_var <==142 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__220_buffer_len=BN_num_bytes(__iv__aave_batch__142_transaction->v);
					__iv__aave_batch__219_buffer=malloc(__iv__aave_batch__220_buffer_len);
					__iv__aave_batch__220_buffer_len=BN_bn2bin(__iv__aave_batch__142_transaction->v, __iv__aave_batch__219_buffer);
					__iv__aave_batch__221_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__221_children->buffer_len=0;
					__iv__aave_batch__221_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__222_uvalue=__iv__aave_batch__219_buffer;
					if(__iv__aave_batch__220_buffer_len == 1 && __iv__aave_batch__222_uvalue[0] < 0x80){
						__iv__aave_batch__221_children->buffer_len=1;
						__iv__aave_batch__221_children->buffer=malloc(__iv__aave_batch__221_children->buffer_len);
						__iv__aave_batch__221_children->buffer[0]=__iv__aave_batch__222_uvalue[0];
					}
					else if(__iv__aave_batch__220_buffer_len < 56){
						__iv__aave_batch__221_children->buffer_len=1 + __iv__aave_batch__220_buffer_len;
						__iv__aave_batch__221_children->buffer=malloc(__iv__aave_batch__221_children->buffer_len);
						__iv__aave_batch__221_children->buffer[0]=0x80 + __iv__aave_batch__220_buffer_len;
						if(__iv__aave_batch__220_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__221_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__219_buffer), (size_t)/*int*/(__iv__aave_batch__220_buffer_len));
						}
					}
					else {
						int __iv__86_len_length;
						u_int64_t __iv__87_i;
						unsigned char* __iv__88_value_len_chr;
						__iv__86_len_length=1;
						for(__iv__87_i=(u_int64_t)/*int*/(__iv__aave_batch__220_buffer_len);__iv__87_i > 0xff;__iv__87_i=__iv__87_i / 0x100){
							__iv__86_len_length=__iv__86_len_length + 1;
						}
						__iv__aave_batch__221_children->buffer_len=1 + __iv__86_len_length + __iv__aave_batch__220_buffer_len;
						__iv__aave_batch__221_children->buffer=malloc(__iv__aave_batch__221_children->buffer_len);
						__iv__aave_batch__221_children->buffer[0]=0xb7 + __iv__86_len_length;
						__iv__88_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__220_buffer_len);
						for(__iv__87_i=(u_int64_t)/*int*/(__iv__86_len_length);__iv__87_i > 0;__iv__87_i=__iv__87_i - 1){
							__iv__aave_batch__221_children->buffer[__iv__87_i]=__iv__88_value_len_chr[__iv__86_len_length - __iv__87_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__221_children->buffer + 1 + __iv__86_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__219_buffer), (size_t)/*int*/(__iv__aave_batch__220_buffer_len));
					}
					__iv__aave_batch__191_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__191_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__221_children));
/*service_var 142==> zgenerator_crypt.buffer_len*/
/*service_var 141==> zgenerator_crypt.buffer*/
/*service_var <==143 zgenerator_crypt.buffer*/
/*service_var <==144 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__224_buffer_len=BN_num_bytes(__iv__aave_batch__142_transaction->r);
					__iv__aave_batch__223_buffer=malloc(__iv__aave_batch__224_buffer_len);
					__iv__aave_batch__224_buffer_len=BN_bn2bin(__iv__aave_batch__142_transaction->r, __iv__aave_batch__223_buffer);
					__iv__aave_batch__225_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__225_children->buffer_len=0;
					__iv__aave_batch__225_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__226_uvalue=__iv__aave_batch__223_buffer;
					if(__iv__aave_batch__224_buffer_len == 1 && __iv__aave_batch__226_uvalue[0] < 0x80){
						__iv__aave_batch__225_children->buffer_len=1;
						__iv__aave_batch__225_children->buffer=malloc(__iv__aave_batch__225_children->buffer_len);
						__iv__aave_batch__225_children->buffer[0]=__iv__aave_batch__226_uvalue[0];
					}
					else if(__iv__aave_batch__224_buffer_len < 56){
						__iv__aave_batch__225_children->buffer_len=1 + __iv__aave_batch__224_buffer_len;
						__iv__aave_batch__225_children->buffer=malloc(__iv__aave_batch__225_children->buffer_len);
						__iv__aave_batch__225_children->buffer[0]=0x80 + __iv__aave_batch__224_buffer_len;
						if(__iv__aave_batch__224_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__225_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__223_buffer), (size_t)/*int*/(__iv__aave_batch__224_buffer_len));
						}
					}
					else {
						int __iv__89_len_length;
						u_int64_t __iv__90_i;
						unsigned char* __iv__91_value_len_chr;
						__iv__89_len_length=1;
						for(__iv__90_i=(u_int64_t)/*int*/(__iv__aave_batch__224_buffer_len);__iv__90_i > 0xff;__iv__90_i=__iv__90_i / 0x100){
							__iv__89_len_length=__iv__89_len_length + 1;
						}
						__iv__aave_batch__225_children->buffer_len=1 + __iv__89_len_length + __iv__aave_batch__224_buffer_len;
						__iv__aave_batch__225_children->buffer=malloc(__iv__aave_batch__225_children->buffer_len);
						__iv__aave_batch__225_children->buffer[0]=0xb7 + __iv__89_len_length;
						__iv__91_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__224_buffer_len);
						for(__iv__90_i=(u_int64_t)/*int*/(__iv__89_len_length);__iv__90_i > 0;__iv__90_i=__iv__90_i - 1){
							__iv__aave_batch__225_children->buffer[__iv__90_i]=__iv__91_value_len_chr[__iv__89_len_length - __iv__90_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__225_children->buffer + 1 + __iv__89_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__223_buffer), (size_t)/*int*/(__iv__aave_batch__224_buffer_len));
					}
					__iv__aave_batch__191_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__191_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__225_children));
/*service_var 144==> zgenerator_crypt.buffer_len*/
/*service_var 143==> zgenerator_crypt.buffer*/
/*service_var <==145 zgenerator_crypt.buffer*/
/*service_var <==146 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__228_buffer_len=BN_num_bytes(__iv__aave_batch__142_transaction->s);
					__iv__aave_batch__227_buffer=malloc(__iv__aave_batch__228_buffer_len);
					__iv__aave_batch__228_buffer_len=BN_bn2bin(__iv__aave_batch__142_transaction->s, __iv__aave_batch__227_buffer);
					__iv__aave_batch__229_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__229_children->buffer_len=0;
					__iv__aave_batch__229_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__230_uvalue=__iv__aave_batch__227_buffer;
					if(__iv__aave_batch__228_buffer_len == 1 && __iv__aave_batch__230_uvalue[0] < 0x80){
						__iv__aave_batch__229_children->buffer_len=1;
						__iv__aave_batch__229_children->buffer=malloc(__iv__aave_batch__229_children->buffer_len);
						__iv__aave_batch__229_children->buffer[0]=__iv__aave_batch__230_uvalue[0];
					}
					else if(__iv__aave_batch__228_buffer_len < 56){
						__iv__aave_batch__229_children->buffer_len=1 + __iv__aave_batch__228_buffer_len;
						__iv__aave_batch__229_children->buffer=malloc(__iv__aave_batch__229_children->buffer_len);
						__iv__aave_batch__229_children->buffer[0]=0x80 + __iv__aave_batch__228_buffer_len;
						if(__iv__aave_batch__228_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__229_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__227_buffer), (size_t)/*int*/(__iv__aave_batch__228_buffer_len));
						}
					}
					else {
						int __iv__92_len_length;
						u_int64_t __iv__93_i;
						unsigned char* __iv__94_value_len_chr;
						__iv__92_len_length=1;
						for(__iv__93_i=(u_int64_t)/*int*/(__iv__aave_batch__228_buffer_len);__iv__93_i > 0xff;__iv__93_i=__iv__93_i / 0x100){
							__iv__92_len_length=__iv__92_len_length + 1;
						}
						__iv__aave_batch__229_children->buffer_len=1 + __iv__92_len_length + __iv__aave_batch__228_buffer_len;
						__iv__aave_batch__229_children->buffer=malloc(__iv__aave_batch__229_children->buffer_len);
						__iv__aave_batch__229_children->buffer[0]=0xb7 + __iv__92_len_length;
						__iv__94_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__228_buffer_len);
						for(__iv__93_i=(u_int64_t)/*int*/(__iv__92_len_length);__iv__93_i > 0;__iv__93_i=__iv__93_i - 1){
							__iv__aave_batch__229_children->buffer[__iv__93_i]=__iv__94_value_len_chr[__iv__92_len_length - __iv__93_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__229_children->buffer + 1 + __iv__92_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__227_buffer), (size_t)/*int*/(__iv__aave_batch__228_buffer_len));
					}
					__iv__aave_batch__191_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__191_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__229_children));
/*service_var 146==> zgenerator_crypt.buffer_len*/
/*service_var 145==> zgenerator_crypt.buffer*/
				}
/*service_var 130==> ethereum.rlp*/
/*service_var <==147 zgenerator_crypt.buffer*/
/*service_var <==148 zgenerator_crypt.buffer_len*/
/*service_var <==149 zgenerator_crypt.buffer*/
/*service_var <==150 zgenerator_crypt.buffer_len*/
				__iv__aave_batch__234_buffer_len=0;
				for(__iv__aave_batch__236_name=(collection)/*collection*/(__iv__aave_batch__191_rlp->children);__iv__aave_batch__236_name;__iv__aave_batch__236_name=(collection)/*z_list_item_type**/(__iv__aave_batch__236_name->next)){
					ethereum_rlp_list_type* __iv__aave_batch__235_children;
					__iv__aave_batch__235_children=(ethereum_rlp_list_type*)/*void**/(__iv__aave_batch__236_name->data);
					__iv__aave_batch__234_buffer_len=__iv__aave_batch__234_buffer_len + __iv__aave_batch__235_children->buffer_len;
				}
				__iv__aave_batch__233_buffer=malloc(__iv__aave_batch__234_buffer_len);
				__iv__aave_batch__237_buffer_ptr=__iv__aave_batch__233_buffer;
				for(__iv__aave_batch__238_name=(collection)/*collection*/(__iv__aave_batch__191_rlp->children);__iv__aave_batch__238_name;__iv__aave_batch__238_name=(collection)/*z_list_item_type**/(__iv__aave_batch__238_name->next)){
					ethereum_rlp_list_type* __iv__aave_batch__235_children;
					__iv__aave_batch__235_children=(ethereum_rlp_list_type*)/*void**/(__iv__aave_batch__238_name->data);
					memcpy(__iv__aave_batch__237_buffer_ptr, (const void*)/*unsigned char**/(__iv__aave_batch__235_children->buffer), (size_t)/*int*/(__iv__aave_batch__235_children->buffer_len));
					__iv__aave_batch__237_buffer_ptr=__iv__aave_batch__237_buffer_ptr + __iv__aave_batch__235_children->buffer_len;
				}
/*service_var <==151 zgenerator_crypt.buffer*/
/*service_var <==152 zgenerator_crypt.buffer_len*/
				__iv__aave_batch__240_buffer_len=0;
				__iv__aave_batch__239_buffer=(ethereum_rlp_string_type)/*void**/(NULL);
				if(__iv__aave_batch__234_buffer_len < 56){
					__iv__aave_batch__240_buffer_len=1 + __iv__aave_batch__234_buffer_len;
					__iv__aave_batch__239_buffer=malloc(__iv__aave_batch__240_buffer_len);
					__iv__aave_batch__239_buffer[0]=0xc0 + __iv__aave_batch__234_buffer_len;
					if(__iv__aave_batch__234_buffer_len){
						memcpy((void*)/*ethereum_rlp_string_type*/(__iv__aave_batch__239_buffer + 1), (const void*)/*void**/(__iv__aave_batch__233_buffer), (size_t)/*int*/(__iv__aave_batch__234_buffer_len));
					}
				}
				else {
					int __iv__95_len_length;
					u_int64_t __iv__96_i;
					unsigned char* __iv__97_value_len_chr;
					__iv__95_len_length=1;
					for(__iv__96_i=(u_int64_t)/*int*/(__iv__aave_batch__234_buffer_len);__iv__96_i > 0xff;__iv__96_i=__iv__96_i / 0x100){
						__iv__95_len_length=__iv__95_len_length + 1;
					}
					__iv__aave_batch__240_buffer_len=1 + __iv__95_len_length + __iv__aave_batch__234_buffer_len;
					__iv__aave_batch__239_buffer=malloc(__iv__aave_batch__240_buffer_len);
					__iv__aave_batch__239_buffer[0]=0xf7 + __iv__95_len_length;
					__iv__97_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__234_buffer_len);
					for(__iv__96_i=(u_int64_t)/*int*/(__iv__95_len_length);__iv__96_i > 0;__iv__96_i=__iv__96_i - 1){
						__iv__aave_batch__239_buffer[__iv__96_i]=__iv__97_value_len_chr[__iv__95_len_length - __iv__96_i];
					}
					memcpy((void*)/*ethereum_rlp_string_type*/(__iv__aave_batch__239_buffer + 1 + __iv__95_len_length), (const void*)/*void**/(__iv__aave_batch__233_buffer), (size_t)/*int*/(__iv__aave_batch__234_buffer_len));
				}
/*service_var <==153 zgenerator_crypt.hash*/
/*service_var <==154 zgenerator_crypt.hash_len*/
				__iv__aave_batch__242_hash_len=32;
				__iv__aave_batch__241_hash=malloc(32 + 1);
				__iv__aave_batch__241_hash[0]='\0';
				zgenerator_crypt_keccak256((unsigned char*)/*ethereum_rlp_string_type*/(__iv__aave_batch__239_buffer), (unsigned int)/*int*/(__iv__aave_batch__240_buffer_len), (unsigned char*)/*string*/(__iv__aave_batch__241_hash));
/*service_var <==155 zgenerator_crypt.bn_signature_r*/
/*service_var <==156 zgenerator_crypt.bn_signature_s*/
				__iv__aave_batch__245_sig=ECDSA_do_sign((unsigned char*)/*string*/(__iv__aave_batch__241_hash), __iv__aave_batch__242_hash_len, __iv__aave_batch__190_ec_key);
				if(__iv__aave_batch__245_sig){
					const BIGNUM* __iv__aave_batch__243_pr;
					const BIGNUM* __iv__aave_batch__244_ps;
					__iv__aave_batch__243_pr=(const BIGNUM*)/*void**/(NULL);
					__iv__aave_batch__244_ps=(const BIGNUM*)/*void**/(NULL);
					ECDSA_SIG_get0(__iv__aave_batch__245_sig, &__iv__aave_batch__243_pr, &__iv__aave_batch__244_ps);
					if(__iv__aave_batch__244_ps){
						const EC_GROUP* __iv__aave_batch__247_group;
						const BIGNUM* __iv__aave_batch__246_order;
						BIGNUM* __iv__98_halforder;
						int __iv__99_sup;
/*service_var <==157 openssl_ec.group*/
						__iv__aave_batch__247_group=EC_KEY_get0_group(__iv__aave_batch__190_ec_key);
/*service_var <==158 openssl_ec.order*/
						__iv__aave_batch__246_order=EC_GROUP_get0_order(__iv__aave_batch__247_group);
						__iv__98_halforder=BN_new();
						BN_rshift1(__iv__98_halforder, (BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__246_order));
						__iv__99_sup=BN_cmp((BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__244_ps), __iv__98_halforder);
						if(__iv__99_sup > 0){
							BN_sub((BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__244_ps), (BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__246_order), (BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__244_ps));
						}
/*service_var 158==> openssl_ec.order*/
/*service_var 157==> openssl_ec.group*/
					}
					if(__iv__aave_batch__243_pr && __iv__aave_batch__244_ps){
						unsigned long __iv__100_v_int;
						int __iv__102_loop;
						int __iv__101_recid;
						__iv__100_v_int=(unsigned long)/*int*/((0x23 + (__iv__main__0_chain_id * 2)));
						__iv__102_loop=1;
						for(__iv__101_recid=0;__iv__101_recid < 4 && __iv__102_loop;__iv__101_recid=__iv__101_recid + 1){
							EC_KEY* __iv__103_key;
							int __iv__104_ret;
							__iv__103_key=EC_KEY_new_by_curve_name(NID_secp256k1);
							if(__iv__103_key){
							}
							__iv__104_ret=openssl_ec_key_recover(__iv__103_key, (BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__243_pr), (BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__244_ps), (unsigned char*)/*string*/(__iv__aave_batch__241_hash), __iv__aave_batch__242_hash_len, __iv__101_recid, 1);
							if(__iv__104_ret == 1){
								const EC_GROUP* __iv__aave_batch__248_group;
								const EC_POINT* __iv__107_public_key_point;
/*service_var <==159 zgenerator_crypt.buffer*/
/*service_var <==160 zgenerator_crypt.buffer_len*/
/*service_var <==161 openssl_ec.group*/
								__iv__aave_batch__248_group=EC_KEY_get0_group(__iv__main__26_ec_key);
								__iv__107_public_key_point=EC_KEY_get0_public_key(__iv__main__26_ec_key);
								if(__iv__107_public_key_point){
									int __iv__aave_batch__250_buffer_len;
									unsigned char* __iv__aave_batch__249_buffer;
									__iv__aave_batch__250_buffer_len=256;
									__iv__aave_batch__249_buffer=malloc(__iv__aave_batch__250_buffer_len);
									__iv__aave_batch__250_buffer_len=EC_POINT_point2oct((EC_GROUP*)/*const EC_GROUP**/(__iv__aave_batch__248_group), (EC_POINT*)/*const EC_POINT**/(__iv__107_public_key_point), POINT_CONVERSION_UNCOMPRESSED, __iv__aave_batch__249_buffer, (size_t)/*int*/(__iv__aave_batch__250_buffer_len), (BN_CTX*)/*void**/(NULL));
									if(__iv__aave_batch__250_buffer_len){
										const EC_GROUP* __iv__aave_batch__251_group;
										const EC_POINT* __iv__108_public_key_point;
/*service_var <==162 zgenerator_crypt.buffer2*/
/*service_var <==163 zgenerator_crypt.buffer2_len*/
/*service_var <==164 openssl_ec.group*/
										__iv__aave_batch__251_group=EC_KEY_get0_group(__iv__103_key);
										__iv__108_public_key_point=EC_KEY_get0_public_key(__iv__103_key);
										if(__iv__108_public_key_point){
											int __iv__aave_batch__253_buffer_len;
											unsigned char* __iv__aave_batch__252_buffer;
											__iv__aave_batch__253_buffer_len=256;
											__iv__aave_batch__252_buffer=malloc(__iv__aave_batch__253_buffer_len);
											__iv__aave_batch__253_buffer_len=EC_POINT_point2oct((EC_GROUP*)/*const EC_GROUP**/(__iv__aave_batch__251_group), (EC_POINT*)/*const EC_POINT**/(__iv__108_public_key_point), POINT_CONVERSION_UNCOMPRESSED, __iv__aave_batch__252_buffer, (size_t)/*int*/(__iv__aave_batch__253_buffer_len), (BN_CTX*)/*void**/(NULL));
											if(__iv__aave_batch__253_buffer_len){
												int __iv__aave_batch__254_not_equal;
												__iv__aave_batch__254_not_equal=1;
												if(__iv__aave_batch__253_buffer_len == __iv__aave_batch__250_buffer_len){
													__iv__aave_batch__254_not_equal=memcmp((const void*)/*unsigned char**/(__iv__aave_batch__252_buffer), (const void*)/*unsigned char**/(__iv__aave_batch__249_buffer), (size_t)/*int*/(__iv__aave_batch__253_buffer_len));
												}
												if(!__iv__aave_batch__254_not_equal){
													BIGNUM* __iv__105_bn;
													int __iv__aave_batch__256_buffer_len;
													unsigned char* __iv__aave_batch__255_buffer;
													__iv__100_v_int=__iv__100_v_int + __iv__101_recid;
													__iv__105_bn=BN_new();
													if(__iv__105_bn){
														int __iv__109_ret;
														__iv__109_ret=BN_set_word(__iv__105_bn, (BN_ULONG)/*unsigned long*/(__iv__100_v_int));
														if(__iv__109_ret){
														}
													}
/*service_var <==165 zgenerator_crypt.signature_v*/
/*service_var <==166 zgenerator_crypt.signature_v_len*/
													__iv__aave_batch__256_buffer_len=BN_num_bytes(__iv__105_bn);
													__iv__aave_batch__255_buffer=malloc(__iv__aave_batch__256_buffer_len);
													__iv__aave_batch__256_buffer_len=BN_bn2bin(__iv__105_bn, __iv__aave_batch__255_buffer);
													__iv__aave_batch__142_transaction->v=BN_bin2bn(__iv__aave_batch__255_buffer, __iv__aave_batch__256_buffer_len, (BIGNUM*)/*void**/(NULL));
/*service_var 166==> zgenerator_crypt.signature_v_len*/
/*service_var 165==> zgenerator_crypt.signature_v*/
													__iv__102_loop=0;
												}
											}
										}
/*service_var 164==> openssl_ec.group*/
/*service_var 163==> zgenerator_crypt.buffer2_len*/
/*service_var 162==> zgenerator_crypt.buffer2*/
									}
								}
/*service_var 161==> openssl_ec.group*/
/*service_var 160==> zgenerator_crypt.buffer_len*/
/*service_var 159==> zgenerator_crypt.buffer*/
							}
						}
						if(__iv__102_loop){
							int __iv__106_is_odd;
							__iv__106_is_odd=BN_is_odd((BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__243_pr));
							if(__iv__106_is_odd){
								__iv__100_v_int=__iv__100_v_int + 1;
							}
						}
					}
					__iv__aave_batch__142_transaction->r=BN_dup((BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__243_pr));
					__iv__aave_batch__142_transaction->s=BN_dup((BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__244_ps));
				}
				else {
				}
/*service_var 156==> zgenerator_crypt.bn_signature_s*/
/*service_var 155==> zgenerator_crypt.bn_signature_r*/
/*service_var 154==> zgenerator_crypt.hash_len*/
/*service_var 153==> zgenerator_crypt.hash*/
/*service_var 152==> zgenerator_crypt.buffer_len*/
/*service_var 151==> zgenerator_crypt.buffer*/
/*service_var 150==> zgenerator_crypt.buffer_len*/
/*service_var 149==> zgenerator_crypt.buffer*/
/*service_var 148==> zgenerator_crypt.buffer_len*/
/*service_var 147==> zgenerator_crypt.buffer*/
/*service_var 125==> ethereum.transaction*/
				EC_KEY_free(__iv__aave_batch__190_ec_key);
			}
			else {
			}
/*service_var 124==> zgenerator_crypt_key.ec_private*/
			EVP_PKEY_free(__iv__aave_batch__187_key);
		}
		else {
		}
		BIO_free_all(__iv__aave_batch__188_bp);
	}
	else {
	}
/*service_var 123==> zgenerator_crypt_key.evp_private*/
/*service_var <==167 ethereum.transaction*/
	if(__iv__aave_batch__142_transaction){
		string __iv__aave_batch__257_str;
		string __iv__aave_batch__258_to_print;
		string __iv__aave_batch__259_str;
		string __iv__aave_batch__260_str_eth;
		string __iv__aave_batch__262_tmp_var;
		string __iv__aave_batch__261_to_print;
		string __iv__aave_batch__263_str;
		string __iv__aave_batch__264_to_print;
		string __iv__aave_batch__265_str;
		string __iv__aave_batch__266_to_print;
		string __iv__aave_batch__267_str;
		string __iv__aave_batch__268_str_eth;
		string __iv__aave_batch__270_tmp_var;
		string __iv__aave_batch__269_to_print;
		unsigned char* __iv__aave_batch__273_u_buffer;
		string __iv__aave_batch__272_str;
		int __iv__aave_batch__271_i;
		string __iv__aave_batch__275_str;
		string __iv__aave_batch__276_to_print;
		string __iv__aave_batch__277_str;
		string __iv__aave_batch__278_to_print;
		string __iv__aave_batch__279_str;
		string __iv__aave_batch__280_to_print;
		printf((char*)/*string*/("%s"), "nonce");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__257_str="";
		if(__iv__aave_batch__142_transaction->nonce){
			__iv__aave_batch__257_str=BN_bn2dec(__iv__aave_batch__142_transaction->nonce);
		}
		__iv__aave_batch__258_to_print=__iv__aave_batch__257_str;
		if(__iv__aave_batch__258_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__258_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "gas_price");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__259_str="";
		if(__iv__aave_batch__142_transaction->gas_price){
			__iv__aave_batch__259_str=BN_bn2dec(__iv__aave_batch__142_transaction->gas_price);
		}
		__iv__aave_batch__260_str_eth=ethereum_convert_string_wei_to_string_eth_function(__iv__aave_batch__259_str, 9);
		__iv__aave_batch__262_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__260_str_eth), (char*)/*string*/(" Gwei"));
		__iv__aave_batch__261_to_print=__iv__aave_batch__262_tmp_var;
		if(__iv__aave_batch__261_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__261_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "gas_limit");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__263_str="";
		if(__iv__aave_batch__142_transaction->gas_limit){
			__iv__aave_batch__263_str=BN_bn2dec(__iv__aave_batch__142_transaction->gas_limit);
		}
		__iv__aave_batch__264_to_print=__iv__aave_batch__263_str;
		if(__iv__aave_batch__264_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__264_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "recipient");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__265_str="";
		if(__iv__aave_batch__142_transaction->recipient){
			__iv__aave_batch__265_str=BN_bn2hex(__iv__aave_batch__142_transaction->recipient);
		}
		__iv__aave_batch__265_str=string_lowercase(__iv__aave_batch__265_str, 0);
		printf((char*)/*string*/("%s"), "0x");
		__iv__aave_batch__266_to_print=__iv__aave_batch__265_str;
		if(__iv__aave_batch__266_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__266_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "value");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__267_str="";
		if(__iv__aave_batch__142_transaction->value){
			__iv__aave_batch__267_str=BN_bn2dec(__iv__aave_batch__142_transaction->value);
		}
		__iv__aave_batch__268_str_eth=ethereum_convert_string_wei_to_string_eth_function(__iv__aave_batch__267_str, 18);
		__iv__aave_batch__270_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__268_str_eth), (char*)/*string*/(" ETH"));
		__iv__aave_batch__269_to_print=__iv__aave_batch__270_tmp_var;
		if(__iv__aave_batch__269_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__269_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "data");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__273_u_buffer=__iv__aave_batch__142_transaction->data;
		__iv__aave_batch__272_str=malloc(3 + 1);
		__iv__aave_batch__272_str[0]='\0';
		__iv__aave_batch__272_str[2]=0;
		for(__iv__aave_batch__271_i=0;__iv__aave_batch__271_i < __iv__aave_batch__142_transaction->data_len;__iv__aave_batch__271_i=__iv__aave_batch__271_i + 1){
			string __iv__aave_batch__274_to_print;
			__iv__aave_batch__272_str[1]=__iv__aave_batch__273_u_buffer[__iv__aave_batch__271_i] % 16;
			__iv__aave_batch__272_str[0]=__iv__aave_batch__273_u_buffer[__iv__aave_batch__271_i] / 16;
			if(__iv__aave_batch__272_str[1] < 10){
				__iv__aave_batch__272_str[1]=__iv__aave_batch__272_str[1] + '0';
			}
			else {
				__iv__aave_batch__272_str[1]=__iv__aave_batch__272_str[1] - 10 + 'a';
			}
			if(__iv__aave_batch__272_str[0] < 10){
				__iv__aave_batch__272_str[0]=__iv__aave_batch__272_str[0] + '0';
			}
			else {
				__iv__aave_batch__272_str[0]=__iv__aave_batch__272_str[0] - 10 + 'a';
			}
			__iv__aave_batch__274_to_print=__iv__aave_batch__272_str;
			if(__iv__aave_batch__274_to_print){
				printf((char*)/*string*/("%s"), __iv__aave_batch__274_to_print);
			}
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "v");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__275_str="";
		if(__iv__aave_batch__142_transaction->v){
			__iv__aave_batch__275_str=BN_bn2hex(__iv__aave_batch__142_transaction->v);
		}
		__iv__aave_batch__275_str=string_lowercase(__iv__aave_batch__275_str, 0);
		printf((char*)/*string*/("%s"), "0x");
		__iv__aave_batch__276_to_print=__iv__aave_batch__275_str;
		if(__iv__aave_batch__276_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__276_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "r");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__277_str="";
		if(__iv__aave_batch__142_transaction->r){
			__iv__aave_batch__277_str=BN_bn2hex(__iv__aave_batch__142_transaction->r);
		}
		__iv__aave_batch__277_str=string_lowercase(__iv__aave_batch__277_str, 0);
		printf((char*)/*string*/("%s"), "0x");
		__iv__aave_batch__278_to_print=__iv__aave_batch__277_str;
		if(__iv__aave_batch__278_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__278_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "s");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__279_str="";
		if(__iv__aave_batch__142_transaction->s){
			__iv__aave_batch__279_str=BN_bn2hex(__iv__aave_batch__142_transaction->s);
		}
		__iv__aave_batch__279_str=string_lowercase(__iv__aave_batch__279_str, 0);
		printf((char*)/*string*/("%s"), "0x");
		__iv__aave_batch__280_to_print=__iv__aave_batch__279_str;
		if(__iv__aave_batch__280_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__280_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
	}
/*service_var 167==> ethereum.transaction*/
	__iv__aave_batch__281_rlp=calloc(1, sizeof(ethereum_rlp_list_type));
/*service_var <==168 ethereum.transaction*/
/*service_var <==169 ethereum.rlp*/
	if(__iv__aave_batch__142_transaction){
		int __iv__aave_batch__283_buffer_len;
		unsigned char* __iv__aave_batch__282_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__284_children;
		unsigned char* __iv__aave_batch__285_uvalue;
		int __iv__aave_batch__287_buffer_len;
		unsigned char* __iv__aave_batch__286_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__288_children;
		unsigned char* __iv__aave_batch__289_uvalue;
		int __iv__aave_batch__291_buffer_len;
		unsigned char* __iv__aave_batch__290_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__292_children;
		unsigned char* __iv__aave_batch__293_uvalue;
		int __iv__aave_batch__295_buffer_len;
		unsigned char* __iv__aave_batch__294_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__296_children;
		unsigned char* __iv__aave_batch__297_uvalue;
		int __iv__aave_batch__299_buffer_len;
		unsigned char* __iv__aave_batch__298_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__300_children;
		unsigned char* __iv__aave_batch__301_uvalue;
		ethereum_rlp_list_type* __iv__aave_batch__302_children;
		unsigned char* __iv__aave_batch__303_uvalue;
		int __iv__aave_batch__305_buffer_len;
		unsigned char* __iv__aave_batch__304_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__306_children;
		unsigned char* __iv__aave_batch__307_uvalue;
		int __iv__aave_batch__309_buffer_len;
		unsigned char* __iv__aave_batch__308_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__310_children;
		unsigned char* __iv__aave_batch__311_uvalue;
		int __iv__aave_batch__313_buffer_len;
		unsigned char* __iv__aave_batch__312_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__314_children;
		unsigned char* __iv__aave_batch__315_uvalue;
/*service_var <==170 zgenerator_crypt.buffer*/
/*service_var <==171 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__283_buffer_len=BN_num_bytes(__iv__aave_batch__142_transaction->nonce);
		__iv__aave_batch__282_buffer=malloc(__iv__aave_batch__283_buffer_len);
		__iv__aave_batch__283_buffer_len=BN_bn2bin(__iv__aave_batch__142_transaction->nonce, __iv__aave_batch__282_buffer);
		__iv__aave_batch__284_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__284_children->buffer_len=0;
		__iv__aave_batch__284_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__285_uvalue=__iv__aave_batch__282_buffer;
		if(__iv__aave_batch__283_buffer_len == 1 && __iv__aave_batch__285_uvalue[0] < 0x80){
			__iv__aave_batch__284_children->buffer_len=1;
			__iv__aave_batch__284_children->buffer=malloc(__iv__aave_batch__284_children->buffer_len);
			__iv__aave_batch__284_children->buffer[0]=__iv__aave_batch__285_uvalue[0];
		}
		else if(__iv__aave_batch__283_buffer_len < 56){
			__iv__aave_batch__284_children->buffer_len=1 + __iv__aave_batch__283_buffer_len;
			__iv__aave_batch__284_children->buffer=malloc(__iv__aave_batch__284_children->buffer_len);
			__iv__aave_batch__284_children->buffer[0]=0x80 + __iv__aave_batch__283_buffer_len;
			if(__iv__aave_batch__283_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__284_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__282_buffer), (size_t)/*int*/(__iv__aave_batch__283_buffer_len));
			}
		}
		else {
			int __iv__112_len_length;
			u_int64_t __iv__113_i;
			unsigned char* __iv__114_value_len_chr;
			__iv__112_len_length=1;
			for(__iv__113_i=(u_int64_t)/*int*/(__iv__aave_batch__283_buffer_len);__iv__113_i > 0xff;__iv__113_i=__iv__113_i / 0x100){
				__iv__112_len_length=__iv__112_len_length + 1;
			}
			__iv__aave_batch__284_children->buffer_len=1 + __iv__112_len_length + __iv__aave_batch__283_buffer_len;
			__iv__aave_batch__284_children->buffer=malloc(__iv__aave_batch__284_children->buffer_len);
			__iv__aave_batch__284_children->buffer[0]=0xb7 + __iv__112_len_length;
			__iv__114_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__283_buffer_len);
			for(__iv__113_i=(u_int64_t)/*int*/(__iv__112_len_length);__iv__113_i > 0;__iv__113_i=__iv__113_i - 1){
				__iv__aave_batch__284_children->buffer[__iv__113_i]=__iv__114_value_len_chr[__iv__112_len_length - __iv__113_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__284_children->buffer + 1 + __iv__112_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__282_buffer), (size_t)/*int*/(__iv__aave_batch__283_buffer_len));
		}
		__iv__aave_batch__281_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__281_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__284_children));
/*service_var 171==> zgenerator_crypt.buffer_len*/
/*service_var 170==> zgenerator_crypt.buffer*/
/*service_var <==172 zgenerator_crypt.buffer*/
/*service_var <==173 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__287_buffer_len=BN_num_bytes(__iv__aave_batch__142_transaction->gas_price);
		__iv__aave_batch__286_buffer=malloc(__iv__aave_batch__287_buffer_len);
		__iv__aave_batch__287_buffer_len=BN_bn2bin(__iv__aave_batch__142_transaction->gas_price, __iv__aave_batch__286_buffer);
		__iv__aave_batch__288_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__288_children->buffer_len=0;
		__iv__aave_batch__288_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__289_uvalue=__iv__aave_batch__286_buffer;
		if(__iv__aave_batch__287_buffer_len == 1 && __iv__aave_batch__289_uvalue[0] < 0x80){
			__iv__aave_batch__288_children->buffer_len=1;
			__iv__aave_batch__288_children->buffer=malloc(__iv__aave_batch__288_children->buffer_len);
			__iv__aave_batch__288_children->buffer[0]=__iv__aave_batch__289_uvalue[0];
		}
		else if(__iv__aave_batch__287_buffer_len < 56){
			__iv__aave_batch__288_children->buffer_len=1 + __iv__aave_batch__287_buffer_len;
			__iv__aave_batch__288_children->buffer=malloc(__iv__aave_batch__288_children->buffer_len);
			__iv__aave_batch__288_children->buffer[0]=0x80 + __iv__aave_batch__287_buffer_len;
			if(__iv__aave_batch__287_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__288_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__286_buffer), (size_t)/*int*/(__iv__aave_batch__287_buffer_len));
			}
		}
		else {
			int __iv__115_len_length;
			u_int64_t __iv__116_i;
			unsigned char* __iv__117_value_len_chr;
			__iv__115_len_length=1;
			for(__iv__116_i=(u_int64_t)/*int*/(__iv__aave_batch__287_buffer_len);__iv__116_i > 0xff;__iv__116_i=__iv__116_i / 0x100){
				__iv__115_len_length=__iv__115_len_length + 1;
			}
			__iv__aave_batch__288_children->buffer_len=1 + __iv__115_len_length + __iv__aave_batch__287_buffer_len;
			__iv__aave_batch__288_children->buffer=malloc(__iv__aave_batch__288_children->buffer_len);
			__iv__aave_batch__288_children->buffer[0]=0xb7 + __iv__115_len_length;
			__iv__117_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__287_buffer_len);
			for(__iv__116_i=(u_int64_t)/*int*/(__iv__115_len_length);__iv__116_i > 0;__iv__116_i=__iv__116_i - 1){
				__iv__aave_batch__288_children->buffer[__iv__116_i]=__iv__117_value_len_chr[__iv__115_len_length - __iv__116_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__288_children->buffer + 1 + __iv__115_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__286_buffer), (size_t)/*int*/(__iv__aave_batch__287_buffer_len));
		}
		__iv__aave_batch__281_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__281_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__288_children));
/*service_var 173==> zgenerator_crypt.buffer_len*/
/*service_var 172==> zgenerator_crypt.buffer*/
/*service_var <==174 zgenerator_crypt.buffer*/
/*service_var <==175 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__291_buffer_len=BN_num_bytes(__iv__aave_batch__142_transaction->gas_limit);
		__iv__aave_batch__290_buffer=malloc(__iv__aave_batch__291_buffer_len);
		__iv__aave_batch__291_buffer_len=BN_bn2bin(__iv__aave_batch__142_transaction->gas_limit, __iv__aave_batch__290_buffer);
		__iv__aave_batch__292_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__292_children->buffer_len=0;
		__iv__aave_batch__292_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__293_uvalue=__iv__aave_batch__290_buffer;
		if(__iv__aave_batch__291_buffer_len == 1 && __iv__aave_batch__293_uvalue[0] < 0x80){
			__iv__aave_batch__292_children->buffer_len=1;
			__iv__aave_batch__292_children->buffer=malloc(__iv__aave_batch__292_children->buffer_len);
			__iv__aave_batch__292_children->buffer[0]=__iv__aave_batch__293_uvalue[0];
		}
		else if(__iv__aave_batch__291_buffer_len < 56){
			__iv__aave_batch__292_children->buffer_len=1 + __iv__aave_batch__291_buffer_len;
			__iv__aave_batch__292_children->buffer=malloc(__iv__aave_batch__292_children->buffer_len);
			__iv__aave_batch__292_children->buffer[0]=0x80 + __iv__aave_batch__291_buffer_len;
			if(__iv__aave_batch__291_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__292_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__290_buffer), (size_t)/*int*/(__iv__aave_batch__291_buffer_len));
			}
		}
		else {
			int __iv__118_len_length;
			u_int64_t __iv__119_i;
			unsigned char* __iv__120_value_len_chr;
			__iv__118_len_length=1;
			for(__iv__119_i=(u_int64_t)/*int*/(__iv__aave_batch__291_buffer_len);__iv__119_i > 0xff;__iv__119_i=__iv__119_i / 0x100){
				__iv__118_len_length=__iv__118_len_length + 1;
			}
			__iv__aave_batch__292_children->buffer_len=1 + __iv__118_len_length + __iv__aave_batch__291_buffer_len;
			__iv__aave_batch__292_children->buffer=malloc(__iv__aave_batch__292_children->buffer_len);
			__iv__aave_batch__292_children->buffer[0]=0xb7 + __iv__118_len_length;
			__iv__120_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__291_buffer_len);
			for(__iv__119_i=(u_int64_t)/*int*/(__iv__118_len_length);__iv__119_i > 0;__iv__119_i=__iv__119_i - 1){
				__iv__aave_batch__292_children->buffer[__iv__119_i]=__iv__120_value_len_chr[__iv__118_len_length - __iv__119_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__292_children->buffer + 1 + __iv__118_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__290_buffer), (size_t)/*int*/(__iv__aave_batch__291_buffer_len));
		}
		__iv__aave_batch__281_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__281_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__292_children));
/*service_var 175==> zgenerator_crypt.buffer_len*/
/*service_var 174==> zgenerator_crypt.buffer*/
/*service_var <==176 zgenerator_crypt.buffer*/
/*service_var <==177 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__295_buffer_len=BN_num_bytes(__iv__aave_batch__142_transaction->recipient);
		__iv__aave_batch__294_buffer=malloc(__iv__aave_batch__295_buffer_len);
		__iv__aave_batch__295_buffer_len=BN_bn2bin(__iv__aave_batch__142_transaction->recipient, __iv__aave_batch__294_buffer);
		__iv__aave_batch__296_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__296_children->buffer_len=0;
		__iv__aave_batch__296_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__297_uvalue=__iv__aave_batch__294_buffer;
		if(__iv__aave_batch__295_buffer_len == 1 && __iv__aave_batch__297_uvalue[0] < 0x80){
			__iv__aave_batch__296_children->buffer_len=1;
			__iv__aave_batch__296_children->buffer=malloc(__iv__aave_batch__296_children->buffer_len);
			__iv__aave_batch__296_children->buffer[0]=__iv__aave_batch__297_uvalue[0];
		}
		else if(__iv__aave_batch__295_buffer_len < 56){
			__iv__aave_batch__296_children->buffer_len=1 + __iv__aave_batch__295_buffer_len;
			__iv__aave_batch__296_children->buffer=malloc(__iv__aave_batch__296_children->buffer_len);
			__iv__aave_batch__296_children->buffer[0]=0x80 + __iv__aave_batch__295_buffer_len;
			if(__iv__aave_batch__295_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__296_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__294_buffer), (size_t)/*int*/(__iv__aave_batch__295_buffer_len));
			}
		}
		else {
			int __iv__121_len_length;
			u_int64_t __iv__122_i;
			unsigned char* __iv__123_value_len_chr;
			__iv__121_len_length=1;
			for(__iv__122_i=(u_int64_t)/*int*/(__iv__aave_batch__295_buffer_len);__iv__122_i > 0xff;__iv__122_i=__iv__122_i / 0x100){
				__iv__121_len_length=__iv__121_len_length + 1;
			}
			__iv__aave_batch__296_children->buffer_len=1 + __iv__121_len_length + __iv__aave_batch__295_buffer_len;
			__iv__aave_batch__296_children->buffer=malloc(__iv__aave_batch__296_children->buffer_len);
			__iv__aave_batch__296_children->buffer[0]=0xb7 + __iv__121_len_length;
			__iv__123_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__295_buffer_len);
			for(__iv__122_i=(u_int64_t)/*int*/(__iv__121_len_length);__iv__122_i > 0;__iv__122_i=__iv__122_i - 1){
				__iv__aave_batch__296_children->buffer[__iv__122_i]=__iv__123_value_len_chr[__iv__121_len_length - __iv__122_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__296_children->buffer + 1 + __iv__121_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__294_buffer), (size_t)/*int*/(__iv__aave_batch__295_buffer_len));
		}
		__iv__aave_batch__281_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__281_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__296_children));
/*service_var 177==> zgenerator_crypt.buffer_len*/
/*service_var 176==> zgenerator_crypt.buffer*/
/*service_var <==178 zgenerator_crypt.buffer*/
/*service_var <==179 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__299_buffer_len=BN_num_bytes(__iv__aave_batch__142_transaction->value);
		__iv__aave_batch__298_buffer=malloc(__iv__aave_batch__299_buffer_len);
		__iv__aave_batch__299_buffer_len=BN_bn2bin(__iv__aave_batch__142_transaction->value, __iv__aave_batch__298_buffer);
		__iv__aave_batch__300_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__300_children->buffer_len=0;
		__iv__aave_batch__300_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__301_uvalue=__iv__aave_batch__298_buffer;
		if(__iv__aave_batch__299_buffer_len == 1 && __iv__aave_batch__301_uvalue[0] < 0x80){
			__iv__aave_batch__300_children->buffer_len=1;
			__iv__aave_batch__300_children->buffer=malloc(__iv__aave_batch__300_children->buffer_len);
			__iv__aave_batch__300_children->buffer[0]=__iv__aave_batch__301_uvalue[0];
		}
		else if(__iv__aave_batch__299_buffer_len < 56){
			__iv__aave_batch__300_children->buffer_len=1 + __iv__aave_batch__299_buffer_len;
			__iv__aave_batch__300_children->buffer=malloc(__iv__aave_batch__300_children->buffer_len);
			__iv__aave_batch__300_children->buffer[0]=0x80 + __iv__aave_batch__299_buffer_len;
			if(__iv__aave_batch__299_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__300_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__298_buffer), (size_t)/*int*/(__iv__aave_batch__299_buffer_len));
			}
		}
		else {
			int __iv__124_len_length;
			u_int64_t __iv__125_i;
			unsigned char* __iv__126_value_len_chr;
			__iv__124_len_length=1;
			for(__iv__125_i=(u_int64_t)/*int*/(__iv__aave_batch__299_buffer_len);__iv__125_i > 0xff;__iv__125_i=__iv__125_i / 0x100){
				__iv__124_len_length=__iv__124_len_length + 1;
			}
			__iv__aave_batch__300_children->buffer_len=1 + __iv__124_len_length + __iv__aave_batch__299_buffer_len;
			__iv__aave_batch__300_children->buffer=malloc(__iv__aave_batch__300_children->buffer_len);
			__iv__aave_batch__300_children->buffer[0]=0xb7 + __iv__124_len_length;
			__iv__126_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__299_buffer_len);
			for(__iv__125_i=(u_int64_t)/*int*/(__iv__124_len_length);__iv__125_i > 0;__iv__125_i=__iv__125_i - 1){
				__iv__aave_batch__300_children->buffer[__iv__125_i]=__iv__126_value_len_chr[__iv__124_len_length - __iv__125_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__300_children->buffer + 1 + __iv__124_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__298_buffer), (size_t)/*int*/(__iv__aave_batch__299_buffer_len));
		}
		__iv__aave_batch__281_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__281_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__300_children));
/*service_var 179==> zgenerator_crypt.buffer_len*/
/*service_var 178==> zgenerator_crypt.buffer*/
		__iv__aave_batch__302_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__302_children->buffer_len=0;
		__iv__aave_batch__302_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__303_uvalue=__iv__aave_batch__142_transaction->data;
		if(__iv__aave_batch__142_transaction->data_len == 1 && __iv__aave_batch__303_uvalue[0] < 0x80){
			__iv__aave_batch__302_children->buffer_len=1;
			__iv__aave_batch__302_children->buffer=malloc(__iv__aave_batch__302_children->buffer_len);
			__iv__aave_batch__302_children->buffer[0]=__iv__aave_batch__303_uvalue[0];
		}
		else if(__iv__aave_batch__142_transaction->data_len < 56){
			__iv__aave_batch__302_children->buffer_len=1 + __iv__aave_batch__142_transaction->data_len;
			__iv__aave_batch__302_children->buffer=malloc(__iv__aave_batch__302_children->buffer_len);
			__iv__aave_batch__302_children->buffer[0]=0x80 + __iv__aave_batch__142_transaction->data_len;
			if(__iv__aave_batch__142_transaction->data_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__302_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__142_transaction->data), (size_t)/*int*/(__iv__aave_batch__142_transaction->data_len));
			}
		}
		else {
			int __iv__127_len_length;
			u_int64_t __iv__128_i;
			unsigned char* __iv__129_value_len_chr;
			__iv__127_len_length=1;
			for(__iv__128_i=(u_int64_t)/*int*/(__iv__aave_batch__142_transaction->data_len);__iv__128_i > 0xff;__iv__128_i=__iv__128_i / 0x100){
				__iv__127_len_length=__iv__127_len_length + 1;
			}
			__iv__aave_batch__302_children->buffer_len=1 + __iv__127_len_length + __iv__aave_batch__142_transaction->data_len;
			__iv__aave_batch__302_children->buffer=malloc(__iv__aave_batch__302_children->buffer_len);
			__iv__aave_batch__302_children->buffer[0]=0xb7 + __iv__127_len_length;
			__iv__129_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__142_transaction->data_len);
			for(__iv__128_i=(u_int64_t)/*int*/(__iv__127_len_length);__iv__128_i > 0;__iv__128_i=__iv__128_i - 1){
				__iv__aave_batch__302_children->buffer[__iv__128_i]=__iv__129_value_len_chr[__iv__127_len_length - __iv__128_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__302_children->buffer + 1 + __iv__127_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__142_transaction->data), (size_t)/*int*/(__iv__aave_batch__142_transaction->data_len));
		}
		__iv__aave_batch__281_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__281_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__302_children));
/*service_var <==180 zgenerator_crypt.buffer*/
/*service_var <==181 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__305_buffer_len=BN_num_bytes(__iv__aave_batch__142_transaction->v);
		__iv__aave_batch__304_buffer=malloc(__iv__aave_batch__305_buffer_len);
		__iv__aave_batch__305_buffer_len=BN_bn2bin(__iv__aave_batch__142_transaction->v, __iv__aave_batch__304_buffer);
		__iv__aave_batch__306_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__306_children->buffer_len=0;
		__iv__aave_batch__306_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__307_uvalue=__iv__aave_batch__304_buffer;
		if(__iv__aave_batch__305_buffer_len == 1 && __iv__aave_batch__307_uvalue[0] < 0x80){
			__iv__aave_batch__306_children->buffer_len=1;
			__iv__aave_batch__306_children->buffer=malloc(__iv__aave_batch__306_children->buffer_len);
			__iv__aave_batch__306_children->buffer[0]=__iv__aave_batch__307_uvalue[0];
		}
		else if(__iv__aave_batch__305_buffer_len < 56){
			__iv__aave_batch__306_children->buffer_len=1 + __iv__aave_batch__305_buffer_len;
			__iv__aave_batch__306_children->buffer=malloc(__iv__aave_batch__306_children->buffer_len);
			__iv__aave_batch__306_children->buffer[0]=0x80 + __iv__aave_batch__305_buffer_len;
			if(__iv__aave_batch__305_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__306_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__304_buffer), (size_t)/*int*/(__iv__aave_batch__305_buffer_len));
			}
		}
		else {
			int __iv__130_len_length;
			u_int64_t __iv__131_i;
			unsigned char* __iv__132_value_len_chr;
			__iv__130_len_length=1;
			for(__iv__131_i=(u_int64_t)/*int*/(__iv__aave_batch__305_buffer_len);__iv__131_i > 0xff;__iv__131_i=__iv__131_i / 0x100){
				__iv__130_len_length=__iv__130_len_length + 1;
			}
			__iv__aave_batch__306_children->buffer_len=1 + __iv__130_len_length + __iv__aave_batch__305_buffer_len;
			__iv__aave_batch__306_children->buffer=malloc(__iv__aave_batch__306_children->buffer_len);
			__iv__aave_batch__306_children->buffer[0]=0xb7 + __iv__130_len_length;
			__iv__132_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__305_buffer_len);
			for(__iv__131_i=(u_int64_t)/*int*/(__iv__130_len_length);__iv__131_i > 0;__iv__131_i=__iv__131_i - 1){
				__iv__aave_batch__306_children->buffer[__iv__131_i]=__iv__132_value_len_chr[__iv__130_len_length - __iv__131_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__306_children->buffer + 1 + __iv__130_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__304_buffer), (size_t)/*int*/(__iv__aave_batch__305_buffer_len));
		}
		__iv__aave_batch__281_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__281_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__306_children));
/*service_var 181==> zgenerator_crypt.buffer_len*/
/*service_var 180==> zgenerator_crypt.buffer*/
/*service_var <==182 zgenerator_crypt.buffer*/
/*service_var <==183 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__309_buffer_len=BN_num_bytes(__iv__aave_batch__142_transaction->r);
		__iv__aave_batch__308_buffer=malloc(__iv__aave_batch__309_buffer_len);
		__iv__aave_batch__309_buffer_len=BN_bn2bin(__iv__aave_batch__142_transaction->r, __iv__aave_batch__308_buffer);
		__iv__aave_batch__310_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__310_children->buffer_len=0;
		__iv__aave_batch__310_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__311_uvalue=__iv__aave_batch__308_buffer;
		if(__iv__aave_batch__309_buffer_len == 1 && __iv__aave_batch__311_uvalue[0] < 0x80){
			__iv__aave_batch__310_children->buffer_len=1;
			__iv__aave_batch__310_children->buffer=malloc(__iv__aave_batch__310_children->buffer_len);
			__iv__aave_batch__310_children->buffer[0]=__iv__aave_batch__311_uvalue[0];
		}
		else if(__iv__aave_batch__309_buffer_len < 56){
			__iv__aave_batch__310_children->buffer_len=1 + __iv__aave_batch__309_buffer_len;
			__iv__aave_batch__310_children->buffer=malloc(__iv__aave_batch__310_children->buffer_len);
			__iv__aave_batch__310_children->buffer[0]=0x80 + __iv__aave_batch__309_buffer_len;
			if(__iv__aave_batch__309_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__310_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__308_buffer), (size_t)/*int*/(__iv__aave_batch__309_buffer_len));
			}
		}
		else {
			int __iv__133_len_length;
			u_int64_t __iv__134_i;
			unsigned char* __iv__135_value_len_chr;
			__iv__133_len_length=1;
			for(__iv__134_i=(u_int64_t)/*int*/(__iv__aave_batch__309_buffer_len);__iv__134_i > 0xff;__iv__134_i=__iv__134_i / 0x100){
				__iv__133_len_length=__iv__133_len_length + 1;
			}
			__iv__aave_batch__310_children->buffer_len=1 + __iv__133_len_length + __iv__aave_batch__309_buffer_len;
			__iv__aave_batch__310_children->buffer=malloc(__iv__aave_batch__310_children->buffer_len);
			__iv__aave_batch__310_children->buffer[0]=0xb7 + __iv__133_len_length;
			__iv__135_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__309_buffer_len);
			for(__iv__134_i=(u_int64_t)/*int*/(__iv__133_len_length);__iv__134_i > 0;__iv__134_i=__iv__134_i - 1){
				__iv__aave_batch__310_children->buffer[__iv__134_i]=__iv__135_value_len_chr[__iv__133_len_length - __iv__134_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__310_children->buffer + 1 + __iv__133_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__308_buffer), (size_t)/*int*/(__iv__aave_batch__309_buffer_len));
		}
		__iv__aave_batch__281_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__281_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__310_children));
/*service_var 183==> zgenerator_crypt.buffer_len*/
/*service_var 182==> zgenerator_crypt.buffer*/
/*service_var <==184 zgenerator_crypt.buffer*/
/*service_var <==185 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__313_buffer_len=BN_num_bytes(__iv__aave_batch__142_transaction->s);
		__iv__aave_batch__312_buffer=malloc(__iv__aave_batch__313_buffer_len);
		__iv__aave_batch__313_buffer_len=BN_bn2bin(__iv__aave_batch__142_transaction->s, __iv__aave_batch__312_buffer);
		__iv__aave_batch__314_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__314_children->buffer_len=0;
		__iv__aave_batch__314_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__315_uvalue=__iv__aave_batch__312_buffer;
		if(__iv__aave_batch__313_buffer_len == 1 && __iv__aave_batch__315_uvalue[0] < 0x80){
			__iv__aave_batch__314_children->buffer_len=1;
			__iv__aave_batch__314_children->buffer=malloc(__iv__aave_batch__314_children->buffer_len);
			__iv__aave_batch__314_children->buffer[0]=__iv__aave_batch__315_uvalue[0];
		}
		else if(__iv__aave_batch__313_buffer_len < 56){
			__iv__aave_batch__314_children->buffer_len=1 + __iv__aave_batch__313_buffer_len;
			__iv__aave_batch__314_children->buffer=malloc(__iv__aave_batch__314_children->buffer_len);
			__iv__aave_batch__314_children->buffer[0]=0x80 + __iv__aave_batch__313_buffer_len;
			if(__iv__aave_batch__313_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__314_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__312_buffer), (size_t)/*int*/(__iv__aave_batch__313_buffer_len));
			}
		}
		else {
			int __iv__136_len_length;
			u_int64_t __iv__137_i;
			unsigned char* __iv__138_value_len_chr;
			__iv__136_len_length=1;
			for(__iv__137_i=(u_int64_t)/*int*/(__iv__aave_batch__313_buffer_len);__iv__137_i > 0xff;__iv__137_i=__iv__137_i / 0x100){
				__iv__136_len_length=__iv__136_len_length + 1;
			}
			__iv__aave_batch__314_children->buffer_len=1 + __iv__136_len_length + __iv__aave_batch__313_buffer_len;
			__iv__aave_batch__314_children->buffer=malloc(__iv__aave_batch__314_children->buffer_len);
			__iv__aave_batch__314_children->buffer[0]=0xb7 + __iv__136_len_length;
			__iv__138_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__313_buffer_len);
			for(__iv__137_i=(u_int64_t)/*int*/(__iv__136_len_length);__iv__137_i > 0;__iv__137_i=__iv__137_i - 1){
				__iv__aave_batch__314_children->buffer[__iv__137_i]=__iv__138_value_len_chr[__iv__136_len_length - __iv__137_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__314_children->buffer + 1 + __iv__136_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__312_buffer), (size_t)/*int*/(__iv__aave_batch__313_buffer_len));
		}
		__iv__aave_batch__281_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__281_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__314_children));
/*service_var 185==> zgenerator_crypt.buffer_len*/
/*service_var 184==> zgenerator_crypt.buffer*/
	}
/*service_var 169==> ethereum.rlp*/
/*service_var 168==> ethereum.transaction*/
/*service_var <==186 zgenerator_crypt.buffer*/
/*service_var <==187 zgenerator_crypt.buffer_len*/
/*service_var <==188 zgenerator_crypt.buffer*/
/*service_var <==189 zgenerator_crypt.buffer_len*/
	__iv__aave_batch__319_buffer_len=0;
	for(__iv__aave_batch__321_name=(collection)/*collection*/(__iv__aave_batch__281_rlp->children);__iv__aave_batch__321_name;__iv__aave_batch__321_name=(collection)/*z_list_item_type**/(__iv__aave_batch__321_name->next)){
		ethereum_rlp_list_type* __iv__aave_batch__320_children;
		__iv__aave_batch__320_children=(ethereum_rlp_list_type*)/*void**/(__iv__aave_batch__321_name->data);
		__iv__aave_batch__319_buffer_len=__iv__aave_batch__319_buffer_len + __iv__aave_batch__320_children->buffer_len;
	}
	__iv__aave_batch__318_buffer=malloc(__iv__aave_batch__319_buffer_len);
	__iv__aave_batch__322_buffer_ptr=__iv__aave_batch__318_buffer;
	for(__iv__aave_batch__323_name=(collection)/*collection*/(__iv__aave_batch__281_rlp->children);__iv__aave_batch__323_name;__iv__aave_batch__323_name=(collection)/*z_list_item_type**/(__iv__aave_batch__323_name->next)){
		ethereum_rlp_list_type* __iv__aave_batch__320_children;
		__iv__aave_batch__320_children=(ethereum_rlp_list_type*)/*void**/(__iv__aave_batch__323_name->data);
		memcpy(__iv__aave_batch__322_buffer_ptr, (const void*)/*unsigned char**/(__iv__aave_batch__320_children->buffer), (size_t)/*int*/(__iv__aave_batch__320_children->buffer_len));
		__iv__aave_batch__322_buffer_ptr=__iv__aave_batch__322_buffer_ptr + __iv__aave_batch__320_children->buffer_len;
	}
/*service_var <==190 zgenerator_crypt.buffer*/
/*service_var <==191 zgenerator_crypt.buffer_len*/
	__iv__aave_batch__325_buffer_len=0;
	__iv__aave_batch__324_buffer=(ethereum_rlp_string_type)/*void**/(NULL);
	if(__iv__aave_batch__319_buffer_len < 56){
		__iv__aave_batch__325_buffer_len=1 + __iv__aave_batch__319_buffer_len;
		__iv__aave_batch__324_buffer=malloc(__iv__aave_batch__325_buffer_len);
		__iv__aave_batch__324_buffer[0]=0xc0 + __iv__aave_batch__319_buffer_len;
		if(__iv__aave_batch__319_buffer_len){
			memcpy((void*)/*ethereum_rlp_string_type*/(__iv__aave_batch__324_buffer + 1), (const void*)/*void**/(__iv__aave_batch__318_buffer), (size_t)/*int*/(__iv__aave_batch__319_buffer_len));
		}
	}
	else {
		int __iv__139_len_length;
		u_int64_t __iv__140_i;
		unsigned char* __iv__141_value_len_chr;
		__iv__139_len_length=1;
		for(__iv__140_i=(u_int64_t)/*int*/(__iv__aave_batch__319_buffer_len);__iv__140_i > 0xff;__iv__140_i=__iv__140_i / 0x100){
			__iv__139_len_length=__iv__139_len_length + 1;
		}
		__iv__aave_batch__325_buffer_len=1 + __iv__139_len_length + __iv__aave_batch__319_buffer_len;
		__iv__aave_batch__324_buffer=malloc(__iv__aave_batch__325_buffer_len);
		__iv__aave_batch__324_buffer[0]=0xf7 + __iv__139_len_length;
		__iv__141_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__319_buffer_len);
		for(__iv__140_i=(u_int64_t)/*int*/(__iv__139_len_length);__iv__140_i > 0;__iv__140_i=__iv__140_i - 1){
			__iv__aave_batch__324_buffer[__iv__140_i]=__iv__141_value_len_chr[__iv__139_len_length - __iv__140_i];
		}
		memcpy((void*)/*ethereum_rlp_string_type*/(__iv__aave_batch__324_buffer + 1 + __iv__139_len_length), (const void*)/*void**/(__iv__aave_batch__318_buffer), (size_t)/*int*/(__iv__aave_batch__319_buffer_len));
	}
	__iv__110_tx=(string)/*void**/(NULL);
	if(__iv__aave_batch__324_buffer){
		unsigned char* __iv__aave_batch__326_u_str;
		int __iv__142_i;
		__iv__110_tx=malloc(__iv__aave_batch__325_buffer_len * 2 + 1);
		__iv__110_tx[0]='\0';
		__iv__110_tx[__iv__aave_batch__325_buffer_len * 2]='\0';
		__iv__aave_batch__326_u_str=(unsigned char*)/*string*/(__iv__110_tx);
		for(__iv__142_i=0;__iv__142_i < __iv__aave_batch__325_buffer_len;__iv__142_i=__iv__142_i + 1){
			unsigned char __iv__143_c;
			unsigned char __iv__144_c2;
			__iv__143_c=(unsigned char)/*char*/(__iv__aave_batch__324_buffer[__iv__142_i] & 0xf);
			if(__iv__143_c < 10){
				__iv__aave_batch__326_u_str[__iv__142_i * 2 + 1]=__iv__143_c + '0';
			}
			else {
				__iv__aave_batch__326_u_str[__iv__142_i * 2 + 1]=__iv__143_c - 10 + 'a';
			}
			__iv__144_c2=(unsigned char)/*char*/(__iv__aave_batch__324_buffer[__iv__142_i] >> 4);
			if(__iv__144_c2 < 0xa){
				__iv__aave_batch__326_u_str[__iv__142_i * 2]=__iv__144_c2 + '0';
			}
			else {
				__iv__aave_batch__326_u_str[__iv__142_i * 2]=__iv__144_c2 - 10 + 'a';
			}
		}
	}
	__iv__111_transaction_hash="";
	__iv__main__5_jsonrpc_id=__iv__main__5_jsonrpc_id + 1;
	__iv__aave_batch__328_id=int_to_string(__iv__main__5_jsonrpc_id, 0);
	__iv__aave_batch__327_json_post=calloc(1, sizeof(json_type));
/*service_var <==192 json_add.json*/
	__iv__aave_batch__329_json_object=calloc(1, sizeof(json_object_type));
	__iv__aave_batch__327_json_post->item=calloc(1, sizeof(pointerof_type));
	__iv__aave_batch__327_json_post->item->var=__iv__aave_batch__329_json_object;
	__iv__aave_batch__327_json_post->item->type_name="json_object_type*";
/*service_var <==193 json_add.json_object*/
	__iv__aave_batch__330_field=calloc(1, sizeof(json_object_item_type));
	__iv__aave_batch__329_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__329_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__330_field));
	__iv__aave_batch__330_field->name="json_rpc";
/*service_var <==194 json_add.json_object_field*/
	__iv__aave_batch__331_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==195 json_add.json*/
	__iv__aave_batch__331_item=calloc(1, sizeof(pointerof_type));
	__iv__aave_batch__331_item->var="2.0";
	__iv__aave_batch__331_item->type_name="string";
/*service_var 195==> json_add.json*/
	__iv__aave_batch__330_field->value=__iv__aave_batch__331_item;
/*service_var 194==> json_add.json_object_field*/
	__iv__aave_batch__332_field=calloc(1, sizeof(json_object_item_type));
	__iv__aave_batch__329_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__329_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__332_field));
	__iv__aave_batch__332_field->name="method";
/*service_var <==196 json_add.json_object_field*/
	__iv__aave_batch__333_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==197 json_add.json*/
	__iv__aave_batch__333_item=calloc(1, sizeof(pointerof_type));
	__iv__aave_batch__333_item->var="eth_sendRawTransaction";
	__iv__aave_batch__333_item->type_name="string";
/*service_var 197==> json_add.json*/
	__iv__aave_batch__332_field->value=__iv__aave_batch__333_item;
/*service_var 196==> json_add.json_object_field*/
	__iv__aave_batch__334_field=calloc(1, sizeof(json_object_item_type));
	__iv__aave_batch__329_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__329_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__334_field));
	__iv__aave_batch__334_field->name="params";
/*service_var <==198 json_add.json_object_field*/
	__iv__aave_batch__335_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==199 json_add.json*/
	__iv__aave_batch__336_json_array=calloc(1, sizeof(json_array_type));
	__iv__aave_batch__335_item=calloc(1, sizeof(pointerof_type));
	__iv__aave_batch__335_item->var=__iv__aave_batch__336_json_array;
	__iv__aave_batch__335_item->type_name="json_array_type*";
/*service_var <==200 json_add.json_array*/
	__iv__aave_batch__337_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==201 json_add.json*/
	__iv__aave_batch__337_item=calloc(1, sizeof(pointerof_type));
	__iv__aave_batch__338_tmp_var=strconcat((char*)/*string*/("0x"), (char*)/*string*/(__iv__110_tx));
	__iv__aave_batch__337_item->var=__iv__aave_batch__338_tmp_var;
	__iv__aave_batch__337_item->type_name="string";
/*service_var 201==> json_add.json*/
	if(__iv__aave_batch__337_item){
		__iv__aave_batch__336_json_array->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__336_json_array->item), (void*)/*pointerof_type**/(__iv__aave_batch__337_item));
	}
/*service_var 200==> json_add.json_array*/
/*service_var 199==> json_add.json*/
	__iv__aave_batch__334_field->value=__iv__aave_batch__335_item;
/*service_var 198==> json_add.json_object_field*/
	__iv__aave_batch__339_field=calloc(1, sizeof(json_object_item_type));
	__iv__aave_batch__329_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__329_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__339_field));
	__iv__aave_batch__339_field->name="id";
/*service_var <==202 json_add.json_object_field*/
	__iv__aave_batch__340_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==203 json_add.json*/
	__iv__aave_batch__340_item=calloc(1, sizeof(pointerof_type));
	__iv__aave_batch__340_item->var=__iv__aave_batch__328_id;
	__iv__aave_batch__340_item->type_name="string";
/*service_var 203==> json_add.json*/
	__iv__aave_batch__339_field->value=__iv__aave_batch__340_item;
/*service_var 202==> json_add.json_object_field*/
/*service_var 193==> json_add.json_object*/
/*service_var 192==> json_add.json*/
	__iv__aave_batch__341_json_post_str=(string)/*void**/(NULL);
	if(__iv__aave_batch__327_json_post && __iv__aave_batch__327_json_post->item){
		stringlist __iv__145_str_list;
		int __iv__aave_batch__342_total_len;
		collection __iv__aave_batch__344_list_name;
		collection __iv__aave_batch__345_name;
		int __iv__aave_batch__346_string_index;
		collection __iv__aave_batch__347_name;
		__iv__145_str_list=json_to_stringlist(__iv__aave_batch__327_json_post->item, (stringlist)/*void**/(NULL));
		__iv__aave_batch__342_total_len=0;
		__iv__aave_batch__344_list_name=(collection)/*stringlist*/(__iv__145_str_list);
		for(__iv__aave_batch__345_name=(collection)/*collection*/(__iv__aave_batch__344_list_name);__iv__aave_batch__345_name;__iv__aave_batch__345_name=(collection)/*z_list_item_type**/(__iv__aave_batch__345_name->next)){
			stringlist_item_type* __iv__aave_batch__343_stringlist_item;
			__iv__aave_batch__343_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__345_name->data);
			__iv__aave_batch__342_total_len=__iv__aave_batch__342_total_len + __iv__aave_batch__343_stringlist_item->len;
		}
		__iv__aave_batch__341_json_post_str=newString(__iv__aave_batch__342_total_len);
		__iv__aave_batch__346_string_index=0;
		for(__iv__aave_batch__347_name=(collection)/*collection*/(__iv__aave_batch__344_list_name);__iv__aave_batch__347_name;__iv__aave_batch__347_name=(collection)/*z_list_item_type**/(__iv__aave_batch__347_name->next)){
			stringlist_item_type* __iv__aave_batch__343_stringlist_item;
			int __iv__146_stringlist_item_index;
			__iv__aave_batch__343_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__347_name->data);
			for(__iv__146_stringlist_item_index=0;__iv__146_stringlist_item_index < __iv__aave_batch__343_stringlist_item->len && __iv__aave_batch__343_stringlist_item->str[__iv__146_stringlist_item_index] != '\0';__iv__146_stringlist_item_index=__iv__146_stringlist_item_index + 1){
				__iv__aave_batch__341_json_post_str[__iv__aave_batch__346_string_index]=__iv__aave_batch__343_stringlist_item->str[__iv__146_stringlist_item_index];
				__iv__aave_batch__346_string_index=__iv__aave_batch__346_string_index + 1;
			}
		}
		__iv__aave_batch__341_json_post_str[__iv__aave_batch__346_string_index]='\0';
	}
	__iv__aave_batch__348_json=(json_type*)/*void**/(NULL);
	__iv__aave_batch__349_ret_str=(string)/*void**/(NULL);
	if(0){
		rest_html_write_to_str((char*)/*void**/(NULL), (size_t)/*int*/(0), (size_t)/*int*/(0), (rest_html_write_struct*)/*void**/(NULL));
	}
	__iv__aave_batch__350_curl_ptr=curl_easy_init();
/*service_var <==204 rest_html.curl_ptr*/
	if(__iv__aave_batch__350_curl_ptr){
		string __iv__aave_batch__351_query_url;
		struct curl_slist* __iv__aave_batch__354_header;
		string __iv__aave_batch__355_tmp_var;
		string __iv__aave_batch__356_tmp_var;
		string __iv__aave_batch__357_tmp_var;
		string __iv__aave_batch__358_tmp_var;
		rest_html_write_struct* __iv__147_user_data;
		string __iv__aave_batch__359_error_buffer;
		FILE* __iv__aave_batch__360_file_debug;
		__iv__aave_batch__351_query_url=(string)/*void**/(NULL);
/*service_var <==205 rest_html.query_url*/
/*service_var 205==> rest_html.query_url*/
		if(__iv__aave_batch__351_query_url){
			string __iv__aave_batch__352_tmp_var;
			string __iv__aave_batch__353_tmp_var;
			__iv__aave_batch__352_tmp_var=strconcat((char*)/*string*/(__iv__main__1_infura_url), (char*)/*string*/("?"));
			__iv__aave_batch__353_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__352_tmp_var), (char*)/*string*/(__iv__aave_batch__351_query_url));
			__iv__aave_batch__351_query_url=__iv__aave_batch__353_tmp_var;
		}
		else {
			__iv__aave_batch__351_query_url=__iv__main__1_infura_url;
		}
		if(__iv__aave_batch__351_query_url){
			curl_easy_setopt(__iv__aave_batch__350_curl_ptr, CURLOPT_URL, (void*)/*string*/(__iv__aave_batch__351_query_url));
		}
		__iv__aave_batch__354_header=(struct curl_slist*)/*void**/(NULL);
/*service_var <==206 rest_html.header*/
		__iv__aave_batch__355_tmp_var=strconcat((char*)/*string*/("Content-Type"), (char*)/*string*/(": "));
		__iv__aave_batch__356_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__355_tmp_var), (char*)/*string*/("application/json"));
		__iv__aave_batch__354_header=curl_slist_append(__iv__aave_batch__354_header, __iv__aave_batch__356_tmp_var);
		__iv__aave_batch__357_tmp_var=strconcat((char*)/*string*/("Accept"), (char*)/*string*/(": "));
		__iv__aave_batch__358_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__357_tmp_var), (char*)/*string*/("application/json"));
		__iv__aave_batch__354_header=curl_slist_append(__iv__aave_batch__354_header, __iv__aave_batch__358_tmp_var);
/*service_var 206==> rest_html.header*/
		if(__iv__aave_batch__354_header){
			curl_easy_setopt(__iv__aave_batch__350_curl_ptr, CURLOPT_HTTPHEADER, (void*)/*struct curl_slist**/(__iv__aave_batch__354_header));
		}
		if("Zipli"){
			curl_easy_setopt(__iv__aave_batch__350_curl_ptr, CURLOPT_USERAGENT, (void*)/*string*/("Zipli"));
		}
		curl_easy_setopt(__iv__aave_batch__350_curl_ptr, CURLOPT_CUSTOMREQUEST, (void*)/*string*/("POST"));
		if(__iv__aave_batch__341_json_post_str){
			curl_easy_setopt(__iv__aave_batch__350_curl_ptr, CURLOPT_POSTFIELDS, (void*)/*string*/(__iv__aave_batch__341_json_post_str));
		}
		curl_easy_setopt(__iv__aave_batch__350_curl_ptr, CURLOPT_WRITEFUNCTION, (void*)/*void*/(rest_html_write_to_str));
		__iv__147_user_data=calloc(1, sizeof(rest_html_write_struct));
		curl_easy_setopt(__iv__aave_batch__350_curl_ptr, CURLOPT_WRITEDATA, (void*)/*rest_html_write_struct**/(__iv__147_user_data));
		__iv__aave_batch__359_error_buffer=newString(CURL_ERROR_SIZE);
		curl_easy_setopt(__iv__aave_batch__350_curl_ptr, CURLOPT_ERRORBUFFER, (void*)/*string*/(__iv__aave_batch__359_error_buffer));
		curl_easy_setopt(__iv__aave_batch__350_curl_ptr, CURLOPT_VERBOSE, (void*)/*int*/(1L));
		__iv__aave_batch__360_file_debug=fopen((char*)/*string*/("/tmp/rest_debug.txt"), (char*)/*string*/("w"));
		curl_easy_setopt(__iv__aave_batch__350_curl_ptr, CURLOPT_STDERR, (void*)/*FILE**/(__iv__aave_batch__360_file_debug));
		curl_easy_perform(__iv__aave_batch__350_curl_ptr);
		print_html_text_function(prog, __iv__aave_batch__359_error_buffer);
		print_html_br(prog);
		fclose(__iv__aave_batch__360_file_debug);
		curl_easy_cleanup(__iv__aave_batch__350_curl_ptr);
		if(__iv__147_user_data->str){
			int __iv__aave_batch__361_total_len;
			collection __iv__aave_batch__363_list_name;
			collection __iv__aave_batch__364_name;
			int __iv__aave_batch__365_string_index;
			collection __iv__aave_batch__366_name;
			__iv__aave_batch__361_total_len=0;
			__iv__aave_batch__363_list_name=(collection)/*stringlist*/(__iv__147_user_data->str);
			for(__iv__aave_batch__364_name=(collection)/*collection*/(__iv__aave_batch__363_list_name);__iv__aave_batch__364_name;__iv__aave_batch__364_name=(collection)/*z_list_item_type**/(__iv__aave_batch__364_name->next)){
				stringlist_item_type* __iv__aave_batch__362_stringlist_item;
				__iv__aave_batch__362_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__364_name->data);
				__iv__aave_batch__361_total_len=__iv__aave_batch__361_total_len + __iv__aave_batch__362_stringlist_item->len;
			}
			__iv__aave_batch__349_ret_str=newString(__iv__aave_batch__361_total_len);
			__iv__aave_batch__365_string_index=0;
			for(__iv__aave_batch__366_name=(collection)/*collection*/(__iv__aave_batch__363_list_name);__iv__aave_batch__366_name;__iv__aave_batch__366_name=(collection)/*z_list_item_type**/(__iv__aave_batch__366_name->next)){
				stringlist_item_type* __iv__aave_batch__362_stringlist_item;
				int __iv__148_stringlist_item_index;
				__iv__aave_batch__362_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__366_name->data);
				for(__iv__148_stringlist_item_index=0;__iv__148_stringlist_item_index < __iv__aave_batch__362_stringlist_item->len && __iv__aave_batch__362_stringlist_item->str[__iv__148_stringlist_item_index] != '\0';__iv__148_stringlist_item_index=__iv__148_stringlist_item_index + 1){
					__iv__aave_batch__349_ret_str[__iv__aave_batch__365_string_index]=__iv__aave_batch__362_stringlist_item->str[__iv__148_stringlist_item_index];
					__iv__aave_batch__365_string_index=__iv__aave_batch__365_string_index + 1;
				}
			}
			__iv__aave_batch__349_ret_str[__iv__aave_batch__365_string_index]='\0';
		}
	}
/*service_var 204==> rest_html.curl_ptr*/
	if(__iv__aave_batch__349_ret_str){
		__iv__aave_batch__348_json=json_parse(__iv__aave_batch__349_ret_str);
	}
	__iv__aave_batch__367_json_str=(string)/*void**/(NULL);
	if(__iv__aave_batch__348_json && __iv__aave_batch__348_json->item){
		stringlist __iv__149_str_list;
		int __iv__aave_batch__368_total_len;
		collection __iv__aave_batch__370_list_name;
		collection __iv__aave_batch__371_name;
		int __iv__aave_batch__372_string_index;
		collection __iv__aave_batch__373_name;
		__iv__149_str_list=json_to_stringlist(__iv__aave_batch__348_json->item, (stringlist)/*void**/(NULL));
		__iv__aave_batch__368_total_len=0;
		__iv__aave_batch__370_list_name=(collection)/*stringlist*/(__iv__149_str_list);
		for(__iv__aave_batch__371_name=(collection)/*collection*/(__iv__aave_batch__370_list_name);__iv__aave_batch__371_name;__iv__aave_batch__371_name=(collection)/*z_list_item_type**/(__iv__aave_batch__371_name->next)){
			stringlist_item_type* __iv__aave_batch__369_stringlist_item;
			__iv__aave_batch__369_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__371_name->data);
			__iv__aave_batch__368_total_len=__iv__aave_batch__368_total_len + __iv__aave_batch__369_stringlist_item->len;
		}
		__iv__aave_batch__367_json_str=newString(__iv__aave_batch__368_total_len);
		__iv__aave_batch__372_string_index=0;
		for(__iv__aave_batch__373_name=(collection)/*collection*/(__iv__aave_batch__370_list_name);__iv__aave_batch__373_name;__iv__aave_batch__373_name=(collection)/*z_list_item_type**/(__iv__aave_batch__373_name->next)){
			stringlist_item_type* __iv__aave_batch__369_stringlist_item;
			int __iv__150_stringlist_item_index;
			__iv__aave_batch__369_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__373_name->data);
			for(__iv__150_stringlist_item_index=0;__iv__150_stringlist_item_index < __iv__aave_batch__369_stringlist_item->len && __iv__aave_batch__369_stringlist_item->str[__iv__150_stringlist_item_index] != '\0';__iv__150_stringlist_item_index=__iv__150_stringlist_item_index + 1){
				__iv__aave_batch__367_json_str[__iv__aave_batch__372_string_index]=__iv__aave_batch__369_stringlist_item->str[__iv__150_stringlist_item_index];
				__iv__aave_batch__372_string_index=__iv__aave_batch__372_string_index + 1;
			}
		}
		__iv__aave_batch__367_json_str[__iv__aave_batch__372_string_index]='\0';
	}
	__iv__aave_batch__375_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__367_json_str), (char*)/*string*/("\n"));
	__iv__aave_batch__374_to_print=__iv__aave_batch__375_tmp_var;
	if(__iv__aave_batch__374_to_print){
		printf((char*)/*string*/("%s"), __iv__aave_batch__374_to_print);
	}
/*service_var <==207 json_easy.json_data*/
	__iv__aave_batch__376_json_data=json_parse(__iv__aave_batch__367_json_str);
	if(__iv__aave_batch__376_json_data){
/*service_var <==208 json_easy.json_data*/
/*service_var <==209 json_easy.json_data_name*/
		if(__iv__aave_batch__376_json_data->item && __iv__aave_batch__376_json_data->item->type_name){
			int __iv__aave_batch__380_tmp_var;
			__iv__aave_batch__380_tmp_var=string_equal((const char*)/*string*/(__iv__aave_batch__376_json_data->item->type_name), (const char*)/*string*/("json_object_type*"));
			if(__iv__aave_batch__380_tmp_var){
				json_object_type* __iv__aave_batch__379_json_data_parent_object;
				collection __iv__aave_batch__382_name;
				__iv__aave_batch__379_json_data_parent_object=(json_object_type*)/*void**/(__iv__aave_batch__376_json_data->item->var);
				for(__iv__aave_batch__382_name=(collection)/*collection*/(__iv__aave_batch__379_json_data_parent_object->item);__iv__aave_batch__382_name;__iv__aave_batch__382_name=(collection)/*z_list_item_type**/(__iv__aave_batch__382_name->next)){
					json_object_item_type* __iv__aave_batch__381_item;
					string __iv__aave_batch__378_name;
					pointerof_type* __iv__aave_batch__377_json_data;
					int __iv__aave_batch__383_tmp_var;
					__iv__aave_batch__381_item=(json_object_item_type*)/*void**/(__iv__aave_batch__382_name->data);
					__iv__aave_batch__378_name=__iv__aave_batch__381_item->name;
					__iv__aave_batch__377_json_data=__iv__aave_batch__381_item->value;
					__iv__aave_batch__383_tmp_var=string_equal_or_null((const char*)/*string*/("result"), (const char*)/*string*/(__iv__aave_batch__378_name));
					if(__iv__aave_batch__383_tmp_var){
						if(__iv__aave_batch__377_json_data && __iv__aave_batch__377_json_data->type_name){
							int __iv__aave_batch__384_tmp_var;
							__iv__aave_batch__384_tmp_var=string_equal((const char*)/*string*/(__iv__aave_batch__377_json_data->type_name), (const char*)/*string*/("string"));
							if(__iv__aave_batch__384_tmp_var){
								__iv__111_transaction_hash=(string)/*void**/(__iv__aave_batch__377_json_data->var);
							}
						}
					}
				}
			}
		}
/*service_var 209==> json_easy.json_data_name*/
/*service_var 208==> json_easy.json_data*/
	}
/*service_var 207==> json_easy.json_data*/
	__iv__aave_batch__386_tmp_var=strconcat((char*)/*string*/("transaction sent : "), (char*)/*string*/(__iv__111_transaction_hash));
	__iv__aave_batch__387_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__386_tmp_var), (char*)/*string*/("\n"));
	__iv__aave_batch__385_to_print=__iv__aave_batch__387_tmp_var;
	if(__iv__aave_batch__385_to_print){
		printf((char*)/*string*/("%s"), __iv__aave_batch__385_to_print);
	}
/*service_var 191==> zgenerator_crypt.buffer_len*/
/*service_var 190==> zgenerator_crypt.buffer*/
/*service_var 189==> zgenerator_crypt.buffer_len*/
/*service_var 188==> zgenerator_crypt.buffer*/
/*service_var 187==> zgenerator_crypt.buffer_len*/
/*service_var 186==> zgenerator_crypt.buffer*/
	printf((char*)/*string*/("%s"), "\n\nAAVE approve\n\n");
	__iv__aave_batch__388_gas_price=(string)/*void**/(NULL);
	if(__iv__main__27_wallet_info->gas_price){
		__iv__aave_batch__388_gas_price=__iv__main__27_wallet_info->gas_price;
	}
	else {
		string __iv__aave_batch__390_id;
		json_type* __iv__aave_batch__389_json_post;
		json_object_type* __iv__aave_batch__391_json_object;
		json_object_item_type* __iv__aave_batch__392_field;
		pointerof_type* __iv__aave_batch__393_item;
		json_object_item_type* __iv__aave_batch__394_field;
		pointerof_type* __iv__aave_batch__395_item;
		json_object_item_type* __iv__aave_batch__396_field;
		pointerof_type* __iv__aave_batch__397_item;
		json_array_type* __iv__aave_batch__398_json_array;
		json_object_item_type* __iv__aave_batch__399_field;
		pointerof_type* __iv__aave_batch__400_item;
		string __iv__aave_batch__401_json_post_str;
		json_type* __iv__aave_batch__408_json;
		string __iv__aave_batch__409_ret_str;
		CURL* __iv__aave_batch__410_curl_ptr;
		string __iv__aave_batch__427_json_str;
		string __iv__aave_batch__435_tmp_var;
		string __iv__aave_batch__434_to_print;
		json_type* __iv__aave_batch__436_json_data;
		__iv__aave_batch__388_gas_price="";
		__iv__main__5_jsonrpc_id=__iv__main__5_jsonrpc_id + 1;
		__iv__aave_batch__390_id=int_to_string(__iv__main__5_jsonrpc_id, 0);
		__iv__aave_batch__389_json_post=calloc(1, sizeof(json_type));
/*service_var <==210 json_add.json*/
		__iv__aave_batch__391_json_object=calloc(1, sizeof(json_object_type));
		__iv__aave_batch__389_json_post->item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__389_json_post->item->var=__iv__aave_batch__391_json_object;
		__iv__aave_batch__389_json_post->item->type_name="json_object_type*";
/*service_var <==211 json_add.json_object*/
		__iv__aave_batch__392_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__391_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__391_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__392_field));
		__iv__aave_batch__392_field->name="json_rpc";
/*service_var <==212 json_add.json_object_field*/
		__iv__aave_batch__393_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==213 json_add.json*/
		__iv__aave_batch__393_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__393_item->var="2.0";
		__iv__aave_batch__393_item->type_name="string";
/*service_var 213==> json_add.json*/
		__iv__aave_batch__392_field->value=__iv__aave_batch__393_item;
/*service_var 212==> json_add.json_object_field*/
		__iv__aave_batch__394_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__391_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__391_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__394_field));
		__iv__aave_batch__394_field->name="method";
/*service_var <==214 json_add.json_object_field*/
		__iv__aave_batch__395_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==215 json_add.json*/
		__iv__aave_batch__395_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__395_item->var="eth_gasPrice";
		__iv__aave_batch__395_item->type_name="string";
/*service_var 215==> json_add.json*/
		__iv__aave_batch__394_field->value=__iv__aave_batch__395_item;
/*service_var 214==> json_add.json_object_field*/
		__iv__aave_batch__396_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__391_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__391_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__396_field));
		__iv__aave_batch__396_field->name="params";
/*service_var <==216 json_add.json_object_field*/
		__iv__aave_batch__397_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==217 json_add.json*/
		__iv__aave_batch__398_json_array=calloc(1, sizeof(json_array_type));
		__iv__aave_batch__397_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__397_item->var=__iv__aave_batch__398_json_array;
		__iv__aave_batch__397_item->type_name="json_array_type*";
/*service_var 217==> json_add.json*/
		__iv__aave_batch__396_field->value=__iv__aave_batch__397_item;
/*service_var 216==> json_add.json_object_field*/
		__iv__aave_batch__399_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__391_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__391_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__399_field));
		__iv__aave_batch__399_field->name="id";
/*service_var <==218 json_add.json_object_field*/
		__iv__aave_batch__400_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==219 json_add.json*/
		__iv__aave_batch__400_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__400_item->var=__iv__aave_batch__390_id;
		__iv__aave_batch__400_item->type_name="string";
/*service_var 219==> json_add.json*/
		__iv__aave_batch__399_field->value=__iv__aave_batch__400_item;
/*service_var 218==> json_add.json_object_field*/
/*service_var 211==> json_add.json_object*/
/*service_var 210==> json_add.json*/
		__iv__aave_batch__401_json_post_str=(string)/*void**/(NULL);
		if(__iv__aave_batch__389_json_post && __iv__aave_batch__389_json_post->item){
			stringlist __iv__151_str_list;
			int __iv__aave_batch__402_total_len;
			collection __iv__aave_batch__404_list_name;
			collection __iv__aave_batch__405_name;
			int __iv__aave_batch__406_string_index;
			collection __iv__aave_batch__407_name;
			__iv__151_str_list=json_to_stringlist(__iv__aave_batch__389_json_post->item, (stringlist)/*void**/(NULL));
			__iv__aave_batch__402_total_len=0;
			__iv__aave_batch__404_list_name=(collection)/*stringlist*/(__iv__151_str_list);
			for(__iv__aave_batch__405_name=(collection)/*collection*/(__iv__aave_batch__404_list_name);__iv__aave_batch__405_name;__iv__aave_batch__405_name=(collection)/*z_list_item_type**/(__iv__aave_batch__405_name->next)){
				stringlist_item_type* __iv__aave_batch__403_stringlist_item;
				__iv__aave_batch__403_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__405_name->data);
				__iv__aave_batch__402_total_len=__iv__aave_batch__402_total_len + __iv__aave_batch__403_stringlist_item->len;
			}
			__iv__aave_batch__401_json_post_str=newString(__iv__aave_batch__402_total_len);
			__iv__aave_batch__406_string_index=0;
			for(__iv__aave_batch__407_name=(collection)/*collection*/(__iv__aave_batch__404_list_name);__iv__aave_batch__407_name;__iv__aave_batch__407_name=(collection)/*z_list_item_type**/(__iv__aave_batch__407_name->next)){
				stringlist_item_type* __iv__aave_batch__403_stringlist_item;
				int __iv__152_stringlist_item_index;
				__iv__aave_batch__403_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__407_name->data);
				for(__iv__152_stringlist_item_index=0;__iv__152_stringlist_item_index < __iv__aave_batch__403_stringlist_item->len && __iv__aave_batch__403_stringlist_item->str[__iv__152_stringlist_item_index] != '\0';__iv__152_stringlist_item_index=__iv__152_stringlist_item_index + 1){
					__iv__aave_batch__401_json_post_str[__iv__aave_batch__406_string_index]=__iv__aave_batch__403_stringlist_item->str[__iv__152_stringlist_item_index];
					__iv__aave_batch__406_string_index=__iv__aave_batch__406_string_index + 1;
				}
			}
			__iv__aave_batch__401_json_post_str[__iv__aave_batch__406_string_index]='\0';
		}
		__iv__aave_batch__408_json=(json_type*)/*void**/(NULL);
		__iv__aave_batch__409_ret_str=(string)/*void**/(NULL);
		if(0){
			rest_html_write_to_str((char*)/*void**/(NULL), (size_t)/*int*/(0), (size_t)/*int*/(0), (rest_html_write_struct*)/*void**/(NULL));
		}
		__iv__aave_batch__410_curl_ptr=curl_easy_init();
/*service_var <==220 rest_html.curl_ptr*/
		if(__iv__aave_batch__410_curl_ptr){
			string __iv__aave_batch__411_query_url;
			struct curl_slist* __iv__aave_batch__414_header;
			string __iv__aave_batch__415_tmp_var;
			string __iv__aave_batch__416_tmp_var;
			string __iv__aave_batch__417_tmp_var;
			string __iv__aave_batch__418_tmp_var;
			rest_html_write_struct* __iv__153_user_data;
			string __iv__aave_batch__419_error_buffer;
			FILE* __iv__aave_batch__420_file_debug;
			__iv__aave_batch__411_query_url=(string)/*void**/(NULL);
/*service_var <==221 rest_html.query_url*/
/*service_var 221==> rest_html.query_url*/
			if(__iv__aave_batch__411_query_url){
				string __iv__aave_batch__412_tmp_var;
				string __iv__aave_batch__413_tmp_var;
				__iv__aave_batch__412_tmp_var=strconcat((char*)/*string*/(__iv__main__1_infura_url), (char*)/*string*/("?"));
				__iv__aave_batch__413_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__412_tmp_var), (char*)/*string*/(__iv__aave_batch__411_query_url));
				__iv__aave_batch__411_query_url=__iv__aave_batch__413_tmp_var;
			}
			else {
				__iv__aave_batch__411_query_url=__iv__main__1_infura_url;
			}
			if(__iv__aave_batch__411_query_url){
				curl_easy_setopt(__iv__aave_batch__410_curl_ptr, CURLOPT_URL, (void*)/*string*/(__iv__aave_batch__411_query_url));
			}
			__iv__aave_batch__414_header=(struct curl_slist*)/*void**/(NULL);
/*service_var <==222 rest_html.header*/
			__iv__aave_batch__415_tmp_var=strconcat((char*)/*string*/("Content-Type"), (char*)/*string*/(": "));
			__iv__aave_batch__416_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__415_tmp_var), (char*)/*string*/("application/json"));
			__iv__aave_batch__414_header=curl_slist_append(__iv__aave_batch__414_header, __iv__aave_batch__416_tmp_var);
			__iv__aave_batch__417_tmp_var=strconcat((char*)/*string*/("Accept"), (char*)/*string*/(": "));
			__iv__aave_batch__418_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__417_tmp_var), (char*)/*string*/("application/json"));
			__iv__aave_batch__414_header=curl_slist_append(__iv__aave_batch__414_header, __iv__aave_batch__418_tmp_var);
/*service_var 222==> rest_html.header*/
			if(__iv__aave_batch__414_header){
				curl_easy_setopt(__iv__aave_batch__410_curl_ptr, CURLOPT_HTTPHEADER, (void*)/*struct curl_slist**/(__iv__aave_batch__414_header));
			}
			if("Zipli"){
				curl_easy_setopt(__iv__aave_batch__410_curl_ptr, CURLOPT_USERAGENT, (void*)/*string*/("Zipli"));
			}
			curl_easy_setopt(__iv__aave_batch__410_curl_ptr, CURLOPT_CUSTOMREQUEST, (void*)/*string*/("POST"));
			if(__iv__aave_batch__401_json_post_str){
				curl_easy_setopt(__iv__aave_batch__410_curl_ptr, CURLOPT_POSTFIELDS, (void*)/*string*/(__iv__aave_batch__401_json_post_str));
			}
			curl_easy_setopt(__iv__aave_batch__410_curl_ptr, CURLOPT_WRITEFUNCTION, (void*)/*void*/(rest_html_write_to_str));
			__iv__153_user_data=calloc(1, sizeof(rest_html_write_struct));
			curl_easy_setopt(__iv__aave_batch__410_curl_ptr, CURLOPT_WRITEDATA, (void*)/*rest_html_write_struct**/(__iv__153_user_data));
			__iv__aave_batch__419_error_buffer=newString(CURL_ERROR_SIZE);
			curl_easy_setopt(__iv__aave_batch__410_curl_ptr, CURLOPT_ERRORBUFFER, (void*)/*string*/(__iv__aave_batch__419_error_buffer));
			curl_easy_setopt(__iv__aave_batch__410_curl_ptr, CURLOPT_VERBOSE, (void*)/*int*/(1L));
			__iv__aave_batch__420_file_debug=fopen((char*)/*string*/("/tmp/rest_debug.txt"), (char*)/*string*/("w"));
			curl_easy_setopt(__iv__aave_batch__410_curl_ptr, CURLOPT_STDERR, (void*)/*FILE**/(__iv__aave_batch__420_file_debug));
			curl_easy_perform(__iv__aave_batch__410_curl_ptr);
			print_html_text_function(prog, __iv__aave_batch__419_error_buffer);
			print_html_br(prog);
			fclose(__iv__aave_batch__420_file_debug);
			curl_easy_cleanup(__iv__aave_batch__410_curl_ptr);
			if(__iv__153_user_data->str){
				int __iv__aave_batch__421_total_len;
				collection __iv__aave_batch__423_list_name;
				collection __iv__aave_batch__424_name;
				int __iv__aave_batch__425_string_index;
				collection __iv__aave_batch__426_name;
				__iv__aave_batch__421_total_len=0;
				__iv__aave_batch__423_list_name=(collection)/*stringlist*/(__iv__153_user_data->str);
				for(__iv__aave_batch__424_name=(collection)/*collection*/(__iv__aave_batch__423_list_name);__iv__aave_batch__424_name;__iv__aave_batch__424_name=(collection)/*z_list_item_type**/(__iv__aave_batch__424_name->next)){
					stringlist_item_type* __iv__aave_batch__422_stringlist_item;
					__iv__aave_batch__422_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__424_name->data);
					__iv__aave_batch__421_total_len=__iv__aave_batch__421_total_len + __iv__aave_batch__422_stringlist_item->len;
				}
				__iv__aave_batch__409_ret_str=newString(__iv__aave_batch__421_total_len);
				__iv__aave_batch__425_string_index=0;
				for(__iv__aave_batch__426_name=(collection)/*collection*/(__iv__aave_batch__423_list_name);__iv__aave_batch__426_name;__iv__aave_batch__426_name=(collection)/*z_list_item_type**/(__iv__aave_batch__426_name->next)){
					stringlist_item_type* __iv__aave_batch__422_stringlist_item;
					int __iv__154_stringlist_item_index;
					__iv__aave_batch__422_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__426_name->data);
					for(__iv__154_stringlist_item_index=0;__iv__154_stringlist_item_index < __iv__aave_batch__422_stringlist_item->len && __iv__aave_batch__422_stringlist_item->str[__iv__154_stringlist_item_index] != '\0';__iv__154_stringlist_item_index=__iv__154_stringlist_item_index + 1){
						__iv__aave_batch__409_ret_str[__iv__aave_batch__425_string_index]=__iv__aave_batch__422_stringlist_item->str[__iv__154_stringlist_item_index];
						__iv__aave_batch__425_string_index=__iv__aave_batch__425_string_index + 1;
					}
				}
				__iv__aave_batch__409_ret_str[__iv__aave_batch__425_string_index]='\0';
			}
		}
/*service_var 220==> rest_html.curl_ptr*/
		if(__iv__aave_batch__409_ret_str){
			__iv__aave_batch__408_json=json_parse(__iv__aave_batch__409_ret_str);
		}
		__iv__aave_batch__427_json_str=(string)/*void**/(NULL);
		if(__iv__aave_batch__408_json && __iv__aave_batch__408_json->item){
			stringlist __iv__155_str_list;
			int __iv__aave_batch__428_total_len;
			collection __iv__aave_batch__430_list_name;
			collection __iv__aave_batch__431_name;
			int __iv__aave_batch__432_string_index;
			collection __iv__aave_batch__433_name;
			__iv__155_str_list=json_to_stringlist(__iv__aave_batch__408_json->item, (stringlist)/*void**/(NULL));
			__iv__aave_batch__428_total_len=0;
			__iv__aave_batch__430_list_name=(collection)/*stringlist*/(__iv__155_str_list);
			for(__iv__aave_batch__431_name=(collection)/*collection*/(__iv__aave_batch__430_list_name);__iv__aave_batch__431_name;__iv__aave_batch__431_name=(collection)/*z_list_item_type**/(__iv__aave_batch__431_name->next)){
				stringlist_item_type* __iv__aave_batch__429_stringlist_item;
				__iv__aave_batch__429_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__431_name->data);
				__iv__aave_batch__428_total_len=__iv__aave_batch__428_total_len + __iv__aave_batch__429_stringlist_item->len;
			}
			__iv__aave_batch__427_json_str=newString(__iv__aave_batch__428_total_len);
			__iv__aave_batch__432_string_index=0;
			for(__iv__aave_batch__433_name=(collection)/*collection*/(__iv__aave_batch__430_list_name);__iv__aave_batch__433_name;__iv__aave_batch__433_name=(collection)/*z_list_item_type**/(__iv__aave_batch__433_name->next)){
				stringlist_item_type* __iv__aave_batch__429_stringlist_item;
				int __iv__156_stringlist_item_index;
				__iv__aave_batch__429_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__433_name->data);
				for(__iv__156_stringlist_item_index=0;__iv__156_stringlist_item_index < __iv__aave_batch__429_stringlist_item->len && __iv__aave_batch__429_stringlist_item->str[__iv__156_stringlist_item_index] != '\0';__iv__156_stringlist_item_index=__iv__156_stringlist_item_index + 1){
					__iv__aave_batch__427_json_str[__iv__aave_batch__432_string_index]=__iv__aave_batch__429_stringlist_item->str[__iv__156_stringlist_item_index];
					__iv__aave_batch__432_string_index=__iv__aave_batch__432_string_index + 1;
				}
			}
			__iv__aave_batch__427_json_str[__iv__aave_batch__432_string_index]='\0';
		}
		__iv__aave_batch__435_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__427_json_str), (char*)/*string*/("\n"));
		__iv__aave_batch__434_to_print=__iv__aave_batch__435_tmp_var;
		if(__iv__aave_batch__434_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__434_to_print);
		}
/*service_var <==223 json_easy.json_data*/
		__iv__aave_batch__436_json_data=json_parse(__iv__aave_batch__427_json_str);
		if(__iv__aave_batch__436_json_data){
/*service_var <==224 json_easy.json_data*/
/*service_var <==225 json_easy.json_data_name*/
			if(__iv__aave_batch__436_json_data->item && __iv__aave_batch__436_json_data->item->type_name){
				int __iv__aave_batch__440_tmp_var;
				__iv__aave_batch__440_tmp_var=string_equal((const char*)/*string*/(__iv__aave_batch__436_json_data->item->type_name), (const char*)/*string*/("json_object_type*"));
				if(__iv__aave_batch__440_tmp_var){
					json_object_type* __iv__aave_batch__439_json_data_parent_object;
					collection __iv__aave_batch__442_name;
					__iv__aave_batch__439_json_data_parent_object=(json_object_type*)/*void**/(__iv__aave_batch__436_json_data->item->var);
					for(__iv__aave_batch__442_name=(collection)/*collection*/(__iv__aave_batch__439_json_data_parent_object->item);__iv__aave_batch__442_name;__iv__aave_batch__442_name=(collection)/*z_list_item_type**/(__iv__aave_batch__442_name->next)){
						json_object_item_type* __iv__aave_batch__441_item;
						string __iv__aave_batch__438_name;
						pointerof_type* __iv__aave_batch__437_json_data;
						int __iv__aave_batch__443_tmp_var;
						__iv__aave_batch__441_item=(json_object_item_type*)/*void**/(__iv__aave_batch__442_name->data);
						__iv__aave_batch__438_name=__iv__aave_batch__441_item->name;
						__iv__aave_batch__437_json_data=__iv__aave_batch__441_item->value;
						__iv__aave_batch__443_tmp_var=string_equal_or_null((const char*)/*string*/("result"), (const char*)/*string*/(__iv__aave_batch__438_name));
						if(__iv__aave_batch__443_tmp_var){
							if(__iv__aave_batch__437_json_data && __iv__aave_batch__437_json_data->type_name){
								int __iv__aave_batch__444_tmp_var;
								__iv__aave_batch__444_tmp_var=string_equal((const char*)/*string*/(__iv__aave_batch__437_json_data->type_name), (const char*)/*string*/("string"));
								if(__iv__aave_batch__444_tmp_var){
									__iv__aave_batch__388_gas_price=(string)/*void**/(__iv__aave_batch__437_json_data->var);
								}
							}
						}
					}
				}
			}
/*service_var 225==> json_easy.json_data_name*/
/*service_var 224==> json_easy.json_data*/
		}
/*service_var 223==> json_easy.json_data*/
		__iv__main__27_wallet_info->gas_price=__iv__aave_batch__388_gas_price;
	}
	__iv__aave_batch__445_nonce=(string)/*void**/(NULL);
	if(__iv__main__27_wallet_info->nonce){
		string __iv__aave_batch__446_to_print;
		string __iv__157_wallet_info_nonce;
		int __iv__aave_batch__448_len;
		int __iv__aave_batch__447_tmp_var;
		BIGNUM* __iv__158_bn;
		BIGNUM* __iv__159_bn_one;
		__iv__aave_batch__446_to_print=__iv__main__27_wallet_info->nonce;
		if(__iv__aave_batch__446_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__446_to_print);
		}
		__iv__157_wallet_info_nonce=__iv__main__27_wallet_info->nonce;
		__iv__aave_batch__448_len=strlen((char*)/*string*/("0x"));
		__iv__aave_batch__447_tmp_var=string_nequal_or_null((const char*)/*string*/(__iv__157_wallet_info_nonce), (const char*)/*string*/("0x"), __iv__aave_batch__448_len);
		if(__iv__aave_batch__447_tmp_var){
			__iv__157_wallet_info_nonce=__iv__157_wallet_info_nonce + 2;
		}
		printf((char*)/*string*/("%s"), "\n");
		__iv__158_bn=(BIGNUM*)/*void**/(NULL);
		if(__iv__157_wallet_info_nonce){
			BN_hex2bn(&__iv__158_bn, (char*)/*string*/(__iv__157_wallet_info_nonce));
		}
		__iv__159_bn_one=BN_new();
		BN_one(__iv__159_bn_one);
		BN_add(__iv__158_bn, __iv__159_bn_one, __iv__158_bn);
		__iv__main__27_wallet_info->nonce="";
		if(__iv__158_bn){
			__iv__main__27_wallet_info->nonce=BN_bn2hex(__iv__158_bn);
		}
		__iv__aave_batch__445_nonce=__iv__main__27_wallet_info->nonce;
	}
	else {
		string __iv__160_wallet;
		const EC_GROUP* __iv__aave_batch__449_group;
		const EC_POINT* __iv__161_public_key_point;
		string __iv__aave_batch__461_id;
		json_type* __iv__aave_batch__460_json_post;
		json_object_type* __iv__aave_batch__462_json_object;
		json_object_item_type* __iv__aave_batch__463_field;
		pointerof_type* __iv__aave_batch__464_item;
		json_object_item_type* __iv__aave_batch__465_field;
		pointerof_type* __iv__aave_batch__466_item;
		json_object_item_type* __iv__aave_batch__467_field;
		pointerof_type* __iv__aave_batch__468_item;
		json_array_type* __iv__aave_batch__469_json_array;
		pointerof_type* __iv__aave_batch__470_item;
		pointerof_type* __iv__aave_batch__471_item;
		json_object_item_type* __iv__aave_batch__472_field;
		pointerof_type* __iv__aave_batch__473_item;
		string __iv__aave_batch__474_json_post_str;
		json_type* __iv__aave_batch__481_json;
		string __iv__aave_batch__482_ret_str;
		CURL* __iv__aave_batch__483_curl_ptr;
		string __iv__aave_batch__500_json_str;
		string __iv__aave_batch__508_tmp_var;
		string __iv__aave_batch__507_to_print;
		json_type* __iv__aave_batch__509_json_data;
		__iv__160_wallet=(string)/*void**/(NULL);
/*service_var <==226 zgenerator_crypt.buffer*/
/*service_var <==227 zgenerator_crypt.buffer_len*/
/*service_var <==228 openssl_ec.group*/
		__iv__aave_batch__449_group=EC_KEY_get0_group(__iv__main__26_ec_key);
		__iv__161_public_key_point=EC_KEY_get0_public_key(__iv__main__26_ec_key);
		if(__iv__161_public_key_point){
			int __iv__aave_batch__451_buffer_len;
			unsigned char* __iv__aave_batch__450_buffer;
			__iv__aave_batch__451_buffer_len=256;
			__iv__aave_batch__450_buffer=malloc(__iv__aave_batch__451_buffer_len);
			__iv__aave_batch__451_buffer_len=EC_POINT_point2oct((EC_GROUP*)/*const EC_GROUP**/(__iv__aave_batch__449_group), (EC_POINT*)/*const EC_POINT**/(__iv__161_public_key_point), POINT_CONVERSION_UNCOMPRESSED, __iv__aave_batch__450_buffer, (size_t)/*int*/(__iv__aave_batch__451_buffer_len), (BN_CTX*)/*void**/(NULL));
			if(__iv__aave_batch__451_buffer_len){
/*service_var <==229 zgenerator_crypt.buffer*/
/*service_var <==230 zgenerator_crypt.buffer_len*/
				if(__iv__aave_batch__451_buffer_len && __iv__aave_batch__450_buffer[0] == 0x04){
					unsigned char* __iv__aave_batch__452_wallet;
					int __iv__aave_batch__453_wallet_len;
					int __iv__aave_batch__455_hash_len;
					string __iv__aave_batch__454_hash;
					int __iv__aave_batch__457_wallet_len;
					__iv__aave_batch__452_wallet=__iv__aave_batch__450_buffer + 1;
					__iv__aave_batch__453_wallet_len=__iv__aave_batch__451_buffer_len - 1;
/*service_var <==231 zgenerator_crypt.hash*/
/*service_var <==232 zgenerator_crypt.hash_len*/
					__iv__aave_batch__455_hash_len=32;
					__iv__aave_batch__454_hash=malloc(32 + 1);
					__iv__aave_batch__454_hash[0]='\0';
					zgenerator_crypt_keccak256(__iv__aave_batch__452_wallet, (unsigned int)/*int*/(__iv__aave_batch__453_wallet_len), (unsigned char*)/*string*/(__iv__aave_batch__454_hash));
/*service_var <==233 zgenerator_crypt.buffer*/
/*service_var <==234 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__457_wallet_len=20;
					if(__iv__aave_batch__455_hash_len >= __iv__aave_batch__457_wallet_len){
						unsigned char* __iv__aave_batch__456_wallet;
						string __iv__aave_batch__459_tmp_var;
						__iv__aave_batch__456_wallet=malloc(__iv__aave_batch__457_wallet_len);
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__456_wallet), (const void*)/*string*/(__iv__aave_batch__454_hash + __iv__aave_batch__455_hash_len - __iv__aave_batch__457_wallet_len), (size_t)/*int*/(__iv__aave_batch__457_wallet_len));
						__iv__160_wallet=(string)/*void**/(NULL);
						if(__iv__aave_batch__456_wallet){
							unsigned char* __iv__aave_batch__458_u_str;
							int __iv__162_i;
							__iv__160_wallet=malloc(__iv__aave_batch__457_wallet_len * 2 + 1);
							__iv__160_wallet[0]='\0';
							__iv__160_wallet[__iv__aave_batch__457_wallet_len * 2]='\0';
							__iv__aave_batch__458_u_str=(unsigned char*)/*string*/(__iv__160_wallet);
							for(__iv__162_i=0;__iv__162_i < __iv__aave_batch__457_wallet_len;__iv__162_i=__iv__162_i + 1){
								unsigned char __iv__163_c;
								unsigned char __iv__164_c2;
								__iv__163_c=(unsigned char)/*char*/(__iv__aave_batch__456_wallet[__iv__162_i] & 0xf);
								if(__iv__163_c < 10){
									__iv__aave_batch__458_u_str[__iv__162_i * 2 + 1]=__iv__163_c + '0';
								}
								else {
									__iv__aave_batch__458_u_str[__iv__162_i * 2 + 1]=__iv__163_c - 10 + 'a';
								}
								__iv__164_c2=(unsigned char)/*char*/(__iv__aave_batch__456_wallet[__iv__162_i] >> 4);
								if(__iv__164_c2 < 0xa){
									__iv__aave_batch__458_u_str[__iv__162_i * 2]=__iv__164_c2 + '0';
								}
								else {
									__iv__aave_batch__458_u_str[__iv__162_i * 2]=__iv__164_c2 - 10 + 'a';
								}
							}
						}
						__iv__aave_batch__459_tmp_var=strconcat((char*)/*string*/("0x"), (char*)/*string*/(__iv__160_wallet));
						__iv__160_wallet=__iv__aave_batch__459_tmp_var;
					}
/*service_var 234==> zgenerator_crypt.buffer_len*/
/*service_var 233==> zgenerator_crypt.buffer*/
/*service_var 232==> zgenerator_crypt.hash_len*/
/*service_var 231==> zgenerator_crypt.hash*/
				}
/*service_var 230==> zgenerator_crypt.buffer_len*/
/*service_var 229==> zgenerator_crypt.buffer*/
			}
		}
/*service_var 228==> openssl_ec.group*/
/*service_var 227==> zgenerator_crypt.buffer_len*/
/*service_var 226==> zgenerator_crypt.buffer*/
		__iv__aave_batch__445_nonce="";
		__iv__main__5_jsonrpc_id=__iv__main__5_jsonrpc_id + 1;
		__iv__aave_batch__461_id=int_to_string(__iv__main__5_jsonrpc_id, 0);
		__iv__aave_batch__460_json_post=calloc(1, sizeof(json_type));
/*service_var <==235 json_add.json*/
		__iv__aave_batch__462_json_object=calloc(1, sizeof(json_object_type));
		__iv__aave_batch__460_json_post->item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__460_json_post->item->var=__iv__aave_batch__462_json_object;
		__iv__aave_batch__460_json_post->item->type_name="json_object_type*";
/*service_var <==236 json_add.json_object*/
		__iv__aave_batch__463_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__462_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__462_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__463_field));
		__iv__aave_batch__463_field->name="json_rpc";
/*service_var <==237 json_add.json_object_field*/
		__iv__aave_batch__464_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==238 json_add.json*/
		__iv__aave_batch__464_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__464_item->var="2.0";
		__iv__aave_batch__464_item->type_name="string";
/*service_var 238==> json_add.json*/
		__iv__aave_batch__463_field->value=__iv__aave_batch__464_item;
/*service_var 237==> json_add.json_object_field*/
		__iv__aave_batch__465_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__462_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__462_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__465_field));
		__iv__aave_batch__465_field->name="method";
/*service_var <==239 json_add.json_object_field*/
		__iv__aave_batch__466_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==240 json_add.json*/
		__iv__aave_batch__466_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__466_item->var="eth_getTransactionCount";
		__iv__aave_batch__466_item->type_name="string";
/*service_var 240==> json_add.json*/
		__iv__aave_batch__465_field->value=__iv__aave_batch__466_item;
/*service_var 239==> json_add.json_object_field*/
		__iv__aave_batch__467_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__462_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__462_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__467_field));
		__iv__aave_batch__467_field->name="params";
/*service_var <==241 json_add.json_object_field*/
		__iv__aave_batch__468_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==242 json_add.json*/
		__iv__aave_batch__469_json_array=calloc(1, sizeof(json_array_type));
		__iv__aave_batch__468_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__468_item->var=__iv__aave_batch__469_json_array;
		__iv__aave_batch__468_item->type_name="json_array_type*";
/*service_var <==243 json_add.json_array*/
		__iv__aave_batch__470_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==244 json_add.json*/
		__iv__aave_batch__470_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__470_item->var=__iv__160_wallet;
		__iv__aave_batch__470_item->type_name="string";
/*service_var 244==> json_add.json*/
		if(__iv__aave_batch__470_item){
			__iv__aave_batch__469_json_array->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__469_json_array->item), (void*)/*pointerof_type**/(__iv__aave_batch__470_item));
		}
		__iv__aave_batch__471_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==245 json_add.json*/
		__iv__aave_batch__471_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__471_item->var="latest";
		__iv__aave_batch__471_item->type_name="string";
/*service_var 245==> json_add.json*/
		if(__iv__aave_batch__471_item){
			__iv__aave_batch__469_json_array->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__469_json_array->item), (void*)/*pointerof_type**/(__iv__aave_batch__471_item));
		}
/*service_var 243==> json_add.json_array*/
/*service_var 242==> json_add.json*/
		__iv__aave_batch__467_field->value=__iv__aave_batch__468_item;
/*service_var 241==> json_add.json_object_field*/
		__iv__aave_batch__472_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__462_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__462_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__472_field));
		__iv__aave_batch__472_field->name="id";
/*service_var <==246 json_add.json_object_field*/
		__iv__aave_batch__473_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==247 json_add.json*/
		__iv__aave_batch__473_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__473_item->var=__iv__aave_batch__461_id;
		__iv__aave_batch__473_item->type_name="string";
/*service_var 247==> json_add.json*/
		__iv__aave_batch__472_field->value=__iv__aave_batch__473_item;
/*service_var 246==> json_add.json_object_field*/
/*service_var 236==> json_add.json_object*/
/*service_var 235==> json_add.json*/
		__iv__aave_batch__474_json_post_str=(string)/*void**/(NULL);
		if(__iv__aave_batch__460_json_post && __iv__aave_batch__460_json_post->item){
			stringlist __iv__165_str_list;
			int __iv__aave_batch__475_total_len;
			collection __iv__aave_batch__477_list_name;
			collection __iv__aave_batch__478_name;
			int __iv__aave_batch__479_string_index;
			collection __iv__aave_batch__480_name;
			__iv__165_str_list=json_to_stringlist(__iv__aave_batch__460_json_post->item, (stringlist)/*void**/(NULL));
			__iv__aave_batch__475_total_len=0;
			__iv__aave_batch__477_list_name=(collection)/*stringlist*/(__iv__165_str_list);
			for(__iv__aave_batch__478_name=(collection)/*collection*/(__iv__aave_batch__477_list_name);__iv__aave_batch__478_name;__iv__aave_batch__478_name=(collection)/*z_list_item_type**/(__iv__aave_batch__478_name->next)){
				stringlist_item_type* __iv__aave_batch__476_stringlist_item;
				__iv__aave_batch__476_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__478_name->data);
				__iv__aave_batch__475_total_len=__iv__aave_batch__475_total_len + __iv__aave_batch__476_stringlist_item->len;
			}
			__iv__aave_batch__474_json_post_str=newString(__iv__aave_batch__475_total_len);
			__iv__aave_batch__479_string_index=0;
			for(__iv__aave_batch__480_name=(collection)/*collection*/(__iv__aave_batch__477_list_name);__iv__aave_batch__480_name;__iv__aave_batch__480_name=(collection)/*z_list_item_type**/(__iv__aave_batch__480_name->next)){
				stringlist_item_type* __iv__aave_batch__476_stringlist_item;
				int __iv__166_stringlist_item_index;
				__iv__aave_batch__476_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__480_name->data);
				for(__iv__166_stringlist_item_index=0;__iv__166_stringlist_item_index < __iv__aave_batch__476_stringlist_item->len && __iv__aave_batch__476_stringlist_item->str[__iv__166_stringlist_item_index] != '\0';__iv__166_stringlist_item_index=__iv__166_stringlist_item_index + 1){
					__iv__aave_batch__474_json_post_str[__iv__aave_batch__479_string_index]=__iv__aave_batch__476_stringlist_item->str[__iv__166_stringlist_item_index];
					__iv__aave_batch__479_string_index=__iv__aave_batch__479_string_index + 1;
				}
			}
			__iv__aave_batch__474_json_post_str[__iv__aave_batch__479_string_index]='\0';
		}
		__iv__aave_batch__481_json=(json_type*)/*void**/(NULL);
		__iv__aave_batch__482_ret_str=(string)/*void**/(NULL);
		if(0){
			rest_html_write_to_str((char*)/*void**/(NULL), (size_t)/*int*/(0), (size_t)/*int*/(0), (rest_html_write_struct*)/*void**/(NULL));
		}
		__iv__aave_batch__483_curl_ptr=curl_easy_init();
/*service_var <==248 rest_html.curl_ptr*/
		if(__iv__aave_batch__483_curl_ptr){
			string __iv__aave_batch__484_query_url;
			struct curl_slist* __iv__aave_batch__487_header;
			string __iv__aave_batch__488_tmp_var;
			string __iv__aave_batch__489_tmp_var;
			string __iv__aave_batch__490_tmp_var;
			string __iv__aave_batch__491_tmp_var;
			rest_html_write_struct* __iv__167_user_data;
			string __iv__aave_batch__492_error_buffer;
			FILE* __iv__aave_batch__493_file_debug;
			__iv__aave_batch__484_query_url=(string)/*void**/(NULL);
/*service_var <==249 rest_html.query_url*/
/*service_var 249==> rest_html.query_url*/
			if(__iv__aave_batch__484_query_url){
				string __iv__aave_batch__485_tmp_var;
				string __iv__aave_batch__486_tmp_var;
				__iv__aave_batch__485_tmp_var=strconcat((char*)/*string*/(__iv__main__1_infura_url), (char*)/*string*/("?"));
				__iv__aave_batch__486_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__485_tmp_var), (char*)/*string*/(__iv__aave_batch__484_query_url));
				__iv__aave_batch__484_query_url=__iv__aave_batch__486_tmp_var;
			}
			else {
				__iv__aave_batch__484_query_url=__iv__main__1_infura_url;
			}
			if(__iv__aave_batch__484_query_url){
				curl_easy_setopt(__iv__aave_batch__483_curl_ptr, CURLOPT_URL, (void*)/*string*/(__iv__aave_batch__484_query_url));
			}
			__iv__aave_batch__487_header=(struct curl_slist*)/*void**/(NULL);
/*service_var <==250 rest_html.header*/
			__iv__aave_batch__488_tmp_var=strconcat((char*)/*string*/("Content-Type"), (char*)/*string*/(": "));
			__iv__aave_batch__489_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__488_tmp_var), (char*)/*string*/("application/json"));
			__iv__aave_batch__487_header=curl_slist_append(__iv__aave_batch__487_header, __iv__aave_batch__489_tmp_var);
			__iv__aave_batch__490_tmp_var=strconcat((char*)/*string*/("Accept"), (char*)/*string*/(": "));
			__iv__aave_batch__491_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__490_tmp_var), (char*)/*string*/("application/json"));
			__iv__aave_batch__487_header=curl_slist_append(__iv__aave_batch__487_header, __iv__aave_batch__491_tmp_var);
/*service_var 250==> rest_html.header*/
			if(__iv__aave_batch__487_header){
				curl_easy_setopt(__iv__aave_batch__483_curl_ptr, CURLOPT_HTTPHEADER, (void*)/*struct curl_slist**/(__iv__aave_batch__487_header));
			}
			if("Zipli"){
				curl_easy_setopt(__iv__aave_batch__483_curl_ptr, CURLOPT_USERAGENT, (void*)/*string*/("Zipli"));
			}
			curl_easy_setopt(__iv__aave_batch__483_curl_ptr, CURLOPT_CUSTOMREQUEST, (void*)/*string*/("POST"));
			if(__iv__aave_batch__474_json_post_str){
				curl_easy_setopt(__iv__aave_batch__483_curl_ptr, CURLOPT_POSTFIELDS, (void*)/*string*/(__iv__aave_batch__474_json_post_str));
			}
			curl_easy_setopt(__iv__aave_batch__483_curl_ptr, CURLOPT_WRITEFUNCTION, (void*)/*void*/(rest_html_write_to_str));
			__iv__167_user_data=calloc(1, sizeof(rest_html_write_struct));
			curl_easy_setopt(__iv__aave_batch__483_curl_ptr, CURLOPT_WRITEDATA, (void*)/*rest_html_write_struct**/(__iv__167_user_data));
			__iv__aave_batch__492_error_buffer=newString(CURL_ERROR_SIZE);
			curl_easy_setopt(__iv__aave_batch__483_curl_ptr, CURLOPT_ERRORBUFFER, (void*)/*string*/(__iv__aave_batch__492_error_buffer));
			curl_easy_setopt(__iv__aave_batch__483_curl_ptr, CURLOPT_VERBOSE, (void*)/*int*/(1L));
			__iv__aave_batch__493_file_debug=fopen((char*)/*string*/("/tmp/rest_debug.txt"), (char*)/*string*/("w"));
			curl_easy_setopt(__iv__aave_batch__483_curl_ptr, CURLOPT_STDERR, (void*)/*FILE**/(__iv__aave_batch__493_file_debug));
			curl_easy_perform(__iv__aave_batch__483_curl_ptr);
			print_html_text_function(prog, __iv__aave_batch__492_error_buffer);
			print_html_br(prog);
			fclose(__iv__aave_batch__493_file_debug);
			curl_easy_cleanup(__iv__aave_batch__483_curl_ptr);
			if(__iv__167_user_data->str){
				int __iv__aave_batch__494_total_len;
				collection __iv__aave_batch__496_list_name;
				collection __iv__aave_batch__497_name;
				int __iv__aave_batch__498_string_index;
				collection __iv__aave_batch__499_name;
				__iv__aave_batch__494_total_len=0;
				__iv__aave_batch__496_list_name=(collection)/*stringlist*/(__iv__167_user_data->str);
				for(__iv__aave_batch__497_name=(collection)/*collection*/(__iv__aave_batch__496_list_name);__iv__aave_batch__497_name;__iv__aave_batch__497_name=(collection)/*z_list_item_type**/(__iv__aave_batch__497_name->next)){
					stringlist_item_type* __iv__aave_batch__495_stringlist_item;
					__iv__aave_batch__495_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__497_name->data);
					__iv__aave_batch__494_total_len=__iv__aave_batch__494_total_len + __iv__aave_batch__495_stringlist_item->len;
				}
				__iv__aave_batch__482_ret_str=newString(__iv__aave_batch__494_total_len);
				__iv__aave_batch__498_string_index=0;
				for(__iv__aave_batch__499_name=(collection)/*collection*/(__iv__aave_batch__496_list_name);__iv__aave_batch__499_name;__iv__aave_batch__499_name=(collection)/*z_list_item_type**/(__iv__aave_batch__499_name->next)){
					stringlist_item_type* __iv__aave_batch__495_stringlist_item;
					int __iv__168_stringlist_item_index;
					__iv__aave_batch__495_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__499_name->data);
					for(__iv__168_stringlist_item_index=0;__iv__168_stringlist_item_index < __iv__aave_batch__495_stringlist_item->len && __iv__aave_batch__495_stringlist_item->str[__iv__168_stringlist_item_index] != '\0';__iv__168_stringlist_item_index=__iv__168_stringlist_item_index + 1){
						__iv__aave_batch__482_ret_str[__iv__aave_batch__498_string_index]=__iv__aave_batch__495_stringlist_item->str[__iv__168_stringlist_item_index];
						__iv__aave_batch__498_string_index=__iv__aave_batch__498_string_index + 1;
					}
				}
				__iv__aave_batch__482_ret_str[__iv__aave_batch__498_string_index]='\0';
			}
		}
/*service_var 248==> rest_html.curl_ptr*/
		if(__iv__aave_batch__482_ret_str){
			__iv__aave_batch__481_json=json_parse(__iv__aave_batch__482_ret_str);
		}
		__iv__aave_batch__500_json_str=(string)/*void**/(NULL);
		if(__iv__aave_batch__481_json && __iv__aave_batch__481_json->item){
			stringlist __iv__169_str_list;
			int __iv__aave_batch__501_total_len;
			collection __iv__aave_batch__503_list_name;
			collection __iv__aave_batch__504_name;
			int __iv__aave_batch__505_string_index;
			collection __iv__aave_batch__506_name;
			__iv__169_str_list=json_to_stringlist(__iv__aave_batch__481_json->item, (stringlist)/*void**/(NULL));
			__iv__aave_batch__501_total_len=0;
			__iv__aave_batch__503_list_name=(collection)/*stringlist*/(__iv__169_str_list);
			for(__iv__aave_batch__504_name=(collection)/*collection*/(__iv__aave_batch__503_list_name);__iv__aave_batch__504_name;__iv__aave_batch__504_name=(collection)/*z_list_item_type**/(__iv__aave_batch__504_name->next)){
				stringlist_item_type* __iv__aave_batch__502_stringlist_item;
				__iv__aave_batch__502_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__504_name->data);
				__iv__aave_batch__501_total_len=__iv__aave_batch__501_total_len + __iv__aave_batch__502_stringlist_item->len;
			}
			__iv__aave_batch__500_json_str=newString(__iv__aave_batch__501_total_len);
			__iv__aave_batch__505_string_index=0;
			for(__iv__aave_batch__506_name=(collection)/*collection*/(__iv__aave_batch__503_list_name);__iv__aave_batch__506_name;__iv__aave_batch__506_name=(collection)/*z_list_item_type**/(__iv__aave_batch__506_name->next)){
				stringlist_item_type* __iv__aave_batch__502_stringlist_item;
				int __iv__170_stringlist_item_index;
				__iv__aave_batch__502_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__506_name->data);
				for(__iv__170_stringlist_item_index=0;__iv__170_stringlist_item_index < __iv__aave_batch__502_stringlist_item->len && __iv__aave_batch__502_stringlist_item->str[__iv__170_stringlist_item_index] != '\0';__iv__170_stringlist_item_index=__iv__170_stringlist_item_index + 1){
					__iv__aave_batch__500_json_str[__iv__aave_batch__505_string_index]=__iv__aave_batch__502_stringlist_item->str[__iv__170_stringlist_item_index];
					__iv__aave_batch__505_string_index=__iv__aave_batch__505_string_index + 1;
				}
			}
			__iv__aave_batch__500_json_str[__iv__aave_batch__505_string_index]='\0';
		}
		__iv__aave_batch__508_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__500_json_str), (char*)/*string*/("\n"));
		__iv__aave_batch__507_to_print=__iv__aave_batch__508_tmp_var;
		if(__iv__aave_batch__507_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__507_to_print);
		}
/*service_var <==251 json_easy.json_data*/
		__iv__aave_batch__509_json_data=json_parse(__iv__aave_batch__500_json_str);
		if(__iv__aave_batch__509_json_data){
/*service_var <==252 json_easy.json_data*/
/*service_var <==253 json_easy.json_data_name*/
			if(__iv__aave_batch__509_json_data->item && __iv__aave_batch__509_json_data->item->type_name){
				int __iv__aave_batch__513_tmp_var;
				__iv__aave_batch__513_tmp_var=string_equal((const char*)/*string*/(__iv__aave_batch__509_json_data->item->type_name), (const char*)/*string*/("json_object_type*"));
				if(__iv__aave_batch__513_tmp_var){
					json_object_type* __iv__aave_batch__512_json_data_parent_object;
					collection __iv__aave_batch__515_name;
					__iv__aave_batch__512_json_data_parent_object=(json_object_type*)/*void**/(__iv__aave_batch__509_json_data->item->var);
					for(__iv__aave_batch__515_name=(collection)/*collection*/(__iv__aave_batch__512_json_data_parent_object->item);__iv__aave_batch__515_name;__iv__aave_batch__515_name=(collection)/*z_list_item_type**/(__iv__aave_batch__515_name->next)){
						json_object_item_type* __iv__aave_batch__514_item;
						string __iv__aave_batch__511_name;
						pointerof_type* __iv__aave_batch__510_json_data;
						int __iv__aave_batch__516_tmp_var;
						__iv__aave_batch__514_item=(json_object_item_type*)/*void**/(__iv__aave_batch__515_name->data);
						__iv__aave_batch__511_name=__iv__aave_batch__514_item->name;
						__iv__aave_batch__510_json_data=__iv__aave_batch__514_item->value;
						__iv__aave_batch__516_tmp_var=string_equal_or_null((const char*)/*string*/("result"), (const char*)/*string*/(__iv__aave_batch__511_name));
						if(__iv__aave_batch__516_tmp_var){
							if(__iv__aave_batch__510_json_data && __iv__aave_batch__510_json_data->type_name){
								int __iv__aave_batch__517_tmp_var;
								__iv__aave_batch__517_tmp_var=string_equal((const char*)/*string*/(__iv__aave_batch__510_json_data->type_name), (const char*)/*string*/("string"));
								if(__iv__aave_batch__517_tmp_var){
									__iv__aave_batch__445_nonce=(string)/*void**/(__iv__aave_batch__510_json_data->var);
								}
							}
						}
					}
				}
			}
/*service_var 253==> json_easy.json_data_name*/
/*service_var 252==> json_easy.json_data*/
		}
/*service_var 251==> json_easy.json_data*/
		__iv__main__27_wallet_info->nonce=strdup2((const string)/*string*/(__iv__aave_batch__445_nonce));
	}
	__iv__aave_batch__518_amount_wei=ethereum_convert_string_eth_to_string_wei_function("0", 18);
	__iv__aave_batch__519_transaction=calloc(1, sizeof(blockchain_transaction_ethereum_type));
/*service_var <==254 ethereum.transaction*/
/*service_var <==255 zgenerator_crypt.buffer*/
/*service_var <==256 zgenerator_crypt.buffer_len*/
	if(__iv__aave_batch__445_nonce){
		unsigned char* __iv__174_ustr;
		int __iv__173_i;
		int __iv__aave_batch__520_len;
		int __iv__175_j;
		unsigned char* __iv__aave_batch__521_buffer;
		__iv__174_ustr=(unsigned char*)/*string*/(__iv__aave_batch__445_nonce);
		__iv__173_i=0;
		for(__iv__173_i=0;__iv__174_ustr[__iv__173_i] && !(((__iv__174_ustr[__iv__173_i] >= '0' && __iv__174_ustr[__iv__173_i] <= '9') || (__iv__174_ustr[__iv__173_i] >= 'a' && __iv__174_ustr[__iv__173_i] <= 'f') || (__iv__174_ustr[__iv__173_i] >= 'A' && __iv__174_ustr[__iv__173_i] <= 'F')));__iv__173_i=__iv__173_i + 1){
		}
		if(__iv__174_ustr[__iv__173_i] == '0' && (__iv__174_ustr[__iv__173_i + 1] == 'x' || __iv__174_ustr[__iv__173_i + 1] == 'X')){
			__iv__173_i=__iv__173_i + 2;
		}
		__iv__aave_batch__520_len=0;
		for(__iv__175_j=__iv__173_i;__iv__174_ustr[__iv__175_j];__iv__175_j=__iv__175_j + 1){
			if(((__iv__174_ustr[__iv__175_j] >= '0' && __iv__174_ustr[__iv__175_j] <= '9') || (__iv__174_ustr[__iv__175_j] >= 'a' && __iv__174_ustr[__iv__175_j] <= 'f') || (__iv__174_ustr[__iv__175_j] >= 'A' && __iv__174_ustr[__iv__175_j] <= 'F'))){
				int __iv__176_k;
				for(__iv__176_k=__iv__175_j + 1;((__iv__174_ustr[__iv__176_k] >= '0' && __iv__174_ustr[__iv__176_k] <= '9') || (__iv__174_ustr[__iv__176_k] >= 'a' && __iv__174_ustr[__iv__176_k] <= 'f') || (__iv__174_ustr[__iv__176_k] >= 'A' && __iv__174_ustr[__iv__176_k] <= 'F'));__iv__176_k=__iv__176_k + 1){
				}
				if(((__iv__176_k - __iv__175_j) & 1) == 0 && ((__iv__174_ustr[__iv__175_j + 1] >= '0' && __iv__174_ustr[__iv__175_j + 1] <= '9') || (__iv__174_ustr[__iv__175_j + 1] >= 'a' && __iv__174_ustr[__iv__175_j + 1] <= 'f') || (__iv__174_ustr[__iv__175_j + 1] >= 'A' && __iv__174_ustr[__iv__175_j + 1] <= 'F'))){
					__iv__175_j=__iv__175_j + 1;
				}
				__iv__aave_batch__520_len=__iv__aave_batch__520_len + 1;
			}
		}
		__iv__aave_batch__521_buffer=malloc(__iv__aave_batch__520_len);
		__iv__aave_batch__520_len=0;
		for(__iv__175_j=__iv__173_i;__iv__174_ustr[__iv__175_j];__iv__175_j=__iv__175_j + 1){
			if(((__iv__174_ustr[__iv__175_j] >= '0' && __iv__174_ustr[__iv__175_j] <= '9') || (__iv__174_ustr[__iv__175_j] >= 'a' && __iv__174_ustr[__iv__175_j] <= 'f') || (__iv__174_ustr[__iv__175_j] >= 'A' && __iv__174_ustr[__iv__175_j] <= 'F'))){
				int __iv__176_k;
				if(__iv__174_ustr[__iv__175_j] <= '9'){
					__iv__aave_batch__521_buffer[__iv__aave_batch__520_len]=__iv__174_ustr[__iv__175_j] - '0';
				}
				else if(__iv__174_ustr[__iv__175_j] <= 'F'){
					__iv__aave_batch__521_buffer[__iv__aave_batch__520_len]=__iv__174_ustr[__iv__175_j] - 'A' + 10;
				}
				else {
					__iv__aave_batch__521_buffer[__iv__aave_batch__520_len]=__iv__174_ustr[__iv__175_j] - 'a' + 10;
				}
				for(__iv__176_k=__iv__175_j + 1;((__iv__174_ustr[__iv__176_k] >= '0' && __iv__174_ustr[__iv__176_k] <= '9') || (__iv__174_ustr[__iv__176_k] >= 'a' && __iv__174_ustr[__iv__176_k] <= 'f') || (__iv__174_ustr[__iv__176_k] >= 'A' && __iv__174_ustr[__iv__176_k] <= 'F'));__iv__176_k=__iv__176_k + 1){
				}
				if(((__iv__176_k - __iv__175_j) & 1) == 0 && ((__iv__174_ustr[__iv__175_j + 1] >= '0' && __iv__174_ustr[__iv__175_j + 1] <= '9') || (__iv__174_ustr[__iv__175_j + 1] >= 'a' && __iv__174_ustr[__iv__175_j + 1] <= 'f') || (__iv__174_ustr[__iv__175_j + 1] >= 'A' && __iv__174_ustr[__iv__175_j + 1] <= 'F'))){
					__iv__175_j=__iv__175_j + 1;
					if(__iv__174_ustr[__iv__175_j] <= '9'){
						__iv__aave_batch__521_buffer[__iv__aave_batch__520_len]=__iv__174_ustr[__iv__175_j] - '0' + (16 * __iv__aave_batch__521_buffer[__iv__aave_batch__520_len]);
					}
					else if(__iv__174_ustr[__iv__175_j] <= 'F'){
						__iv__aave_batch__521_buffer[__iv__aave_batch__520_len]=__iv__174_ustr[__iv__175_j] - 'A' + 10 + (16 * __iv__aave_batch__521_buffer[__iv__aave_batch__520_len]);
					}
					else {
						__iv__aave_batch__521_buffer[__iv__aave_batch__520_len]=__iv__174_ustr[__iv__175_j] - 'a' + 10 + (16 * __iv__aave_batch__521_buffer[__iv__aave_batch__520_len]);
					}
				}
				__iv__aave_batch__520_len=__iv__aave_batch__520_len + 1;
			}
		}
		__iv__aave_batch__519_transaction->nonce=BN_bin2bn(__iv__aave_batch__521_buffer, __iv__aave_batch__520_len, (BIGNUM*)/*void**/(NULL));
	}
/*service_var 256==> zgenerator_crypt.buffer_len*/
/*service_var 255==> zgenerator_crypt.buffer*/
/*service_var <==257 zgenerator_crypt.buffer*/
/*service_var <==258 zgenerator_crypt.buffer_len*/
	if(__iv__aave_batch__388_gas_price){
		unsigned char* __iv__178_ustr;
		int __iv__177_i;
		int __iv__aave_batch__522_len;
		int __iv__179_j;
		unsigned char* __iv__aave_batch__523_buffer;
		__iv__178_ustr=(unsigned char*)/*string*/(__iv__aave_batch__388_gas_price);
		__iv__177_i=0;
		for(__iv__177_i=0;__iv__178_ustr[__iv__177_i] && !(((__iv__178_ustr[__iv__177_i] >= '0' && __iv__178_ustr[__iv__177_i] <= '9') || (__iv__178_ustr[__iv__177_i] >= 'a' && __iv__178_ustr[__iv__177_i] <= 'f') || (__iv__178_ustr[__iv__177_i] >= 'A' && __iv__178_ustr[__iv__177_i] <= 'F')));__iv__177_i=__iv__177_i + 1){
		}
		if(__iv__178_ustr[__iv__177_i] == '0' && (__iv__178_ustr[__iv__177_i + 1] == 'x' || __iv__178_ustr[__iv__177_i + 1] == 'X')){
			__iv__177_i=__iv__177_i + 2;
		}
		__iv__aave_batch__522_len=0;
		for(__iv__179_j=__iv__177_i;__iv__178_ustr[__iv__179_j];__iv__179_j=__iv__179_j + 1){
			if(((__iv__178_ustr[__iv__179_j] >= '0' && __iv__178_ustr[__iv__179_j] <= '9') || (__iv__178_ustr[__iv__179_j] >= 'a' && __iv__178_ustr[__iv__179_j] <= 'f') || (__iv__178_ustr[__iv__179_j] >= 'A' && __iv__178_ustr[__iv__179_j] <= 'F'))){
				int __iv__180_k;
				for(__iv__180_k=__iv__179_j + 1;((__iv__178_ustr[__iv__180_k] >= '0' && __iv__178_ustr[__iv__180_k] <= '9') || (__iv__178_ustr[__iv__180_k] >= 'a' && __iv__178_ustr[__iv__180_k] <= 'f') || (__iv__178_ustr[__iv__180_k] >= 'A' && __iv__178_ustr[__iv__180_k] <= 'F'));__iv__180_k=__iv__180_k + 1){
				}
				if(((__iv__180_k - __iv__179_j) & 1) == 0 && ((__iv__178_ustr[__iv__179_j + 1] >= '0' && __iv__178_ustr[__iv__179_j + 1] <= '9') || (__iv__178_ustr[__iv__179_j + 1] >= 'a' && __iv__178_ustr[__iv__179_j + 1] <= 'f') || (__iv__178_ustr[__iv__179_j + 1] >= 'A' && __iv__178_ustr[__iv__179_j + 1] <= 'F'))){
					__iv__179_j=__iv__179_j + 1;
				}
				__iv__aave_batch__522_len=__iv__aave_batch__522_len + 1;
			}
		}
		__iv__aave_batch__523_buffer=malloc(__iv__aave_batch__522_len);
		__iv__aave_batch__522_len=0;
		for(__iv__179_j=__iv__177_i;__iv__178_ustr[__iv__179_j];__iv__179_j=__iv__179_j + 1){
			if(((__iv__178_ustr[__iv__179_j] >= '0' && __iv__178_ustr[__iv__179_j] <= '9') || (__iv__178_ustr[__iv__179_j] >= 'a' && __iv__178_ustr[__iv__179_j] <= 'f') || (__iv__178_ustr[__iv__179_j] >= 'A' && __iv__178_ustr[__iv__179_j] <= 'F'))){
				int __iv__180_k;
				if(__iv__178_ustr[__iv__179_j] <= '9'){
					__iv__aave_batch__523_buffer[__iv__aave_batch__522_len]=__iv__178_ustr[__iv__179_j] - '0';
				}
				else if(__iv__178_ustr[__iv__179_j] <= 'F'){
					__iv__aave_batch__523_buffer[__iv__aave_batch__522_len]=__iv__178_ustr[__iv__179_j] - 'A' + 10;
				}
				else {
					__iv__aave_batch__523_buffer[__iv__aave_batch__522_len]=__iv__178_ustr[__iv__179_j] - 'a' + 10;
				}
				for(__iv__180_k=__iv__179_j + 1;((__iv__178_ustr[__iv__180_k] >= '0' && __iv__178_ustr[__iv__180_k] <= '9') || (__iv__178_ustr[__iv__180_k] >= 'a' && __iv__178_ustr[__iv__180_k] <= 'f') || (__iv__178_ustr[__iv__180_k] >= 'A' && __iv__178_ustr[__iv__180_k] <= 'F'));__iv__180_k=__iv__180_k + 1){
				}
				if(((__iv__180_k - __iv__179_j) & 1) == 0 && ((__iv__178_ustr[__iv__179_j + 1] >= '0' && __iv__178_ustr[__iv__179_j + 1] <= '9') || (__iv__178_ustr[__iv__179_j + 1] >= 'a' && __iv__178_ustr[__iv__179_j + 1] <= 'f') || (__iv__178_ustr[__iv__179_j + 1] >= 'A' && __iv__178_ustr[__iv__179_j + 1] <= 'F'))){
					__iv__179_j=__iv__179_j + 1;
					if(__iv__178_ustr[__iv__179_j] <= '9'){
						__iv__aave_batch__523_buffer[__iv__aave_batch__522_len]=__iv__178_ustr[__iv__179_j] - '0' + (16 * __iv__aave_batch__523_buffer[__iv__aave_batch__522_len]);
					}
					else if(__iv__178_ustr[__iv__179_j] <= 'F'){
						__iv__aave_batch__523_buffer[__iv__aave_batch__522_len]=__iv__178_ustr[__iv__179_j] - 'A' + 10 + (16 * __iv__aave_batch__523_buffer[__iv__aave_batch__522_len]);
					}
					else {
						__iv__aave_batch__523_buffer[__iv__aave_batch__522_len]=__iv__178_ustr[__iv__179_j] - 'a' + 10 + (16 * __iv__aave_batch__523_buffer[__iv__aave_batch__522_len]);
					}
				}
				__iv__aave_batch__522_len=__iv__aave_batch__522_len + 1;
			}
		}
		__iv__aave_batch__519_transaction->gas_price=BN_bin2bn(__iv__aave_batch__523_buffer, __iv__aave_batch__522_len, (BIGNUM*)/*void**/(NULL));
	}
/*service_var 258==> zgenerator_crypt.buffer_len*/
/*service_var 257==> zgenerator_crypt.buffer*/
	__iv__171_bn=(BIGNUM*)/*void**/(NULL);
	if("300000"){
		BN_dec2bn(&__iv__171_bn, (char*)/*string*/("300000"));
		if(__iv__171_bn){
			int __iv__aave_batch__525_buffer_len;
			unsigned char* __iv__aave_batch__524_buffer;
/*service_var <==259 zgenerator_crypt.buffer*/
/*service_var <==260 zgenerator_crypt.buffer_len*/
			__iv__aave_batch__525_buffer_len=BN_num_bytes(__iv__171_bn);
			__iv__aave_batch__524_buffer=malloc(__iv__aave_batch__525_buffer_len);
			__iv__aave_batch__525_buffer_len=BN_bn2bin(__iv__171_bn, __iv__aave_batch__524_buffer);
			__iv__aave_batch__519_transaction->gas_limit=BN_bin2bn(__iv__aave_batch__524_buffer, __iv__aave_batch__525_buffer_len, (BIGNUM*)/*void**/(NULL));
/*service_var 260==> zgenerator_crypt.buffer_len*/
/*service_var 259==> zgenerator_crypt.buffer*/
		}
	}
/*service_var <==261 zgenerator_crypt.buffer*/
/*service_var <==262 zgenerator_crypt.buffer_len*/
	if("0xf8ac10e65f2073460aad5f28e1eabe807dc287cf"){
		unsigned char* __iv__182_ustr;
		int __iv__181_i;
		int __iv__aave_batch__526_len;
		int __iv__183_j;
		unsigned char* __iv__aave_batch__527_buffer;
		__iv__182_ustr=(unsigned char*)/*string*/("0xf8ac10e65f2073460aad5f28e1eabe807dc287cf");
		__iv__181_i=0;
		for(__iv__181_i=0;__iv__182_ustr[__iv__181_i] && !(((__iv__182_ustr[__iv__181_i] >= '0' && __iv__182_ustr[__iv__181_i] <= '9') || (__iv__182_ustr[__iv__181_i] >= 'a' && __iv__182_ustr[__iv__181_i] <= 'f') || (__iv__182_ustr[__iv__181_i] >= 'A' && __iv__182_ustr[__iv__181_i] <= 'F')));__iv__181_i=__iv__181_i + 1){
		}
		if(__iv__182_ustr[__iv__181_i] == '0' && (__iv__182_ustr[__iv__181_i + 1] == 'x' || __iv__182_ustr[__iv__181_i + 1] == 'X')){
			__iv__181_i=__iv__181_i + 2;
		}
		__iv__aave_batch__526_len=0;
		for(__iv__183_j=__iv__181_i;__iv__182_ustr[__iv__183_j];__iv__183_j=__iv__183_j + 1){
			if(((__iv__182_ustr[__iv__183_j] >= '0' && __iv__182_ustr[__iv__183_j] <= '9') || (__iv__182_ustr[__iv__183_j] >= 'a' && __iv__182_ustr[__iv__183_j] <= 'f') || (__iv__182_ustr[__iv__183_j] >= 'A' && __iv__182_ustr[__iv__183_j] <= 'F'))){
				int __iv__184_k;
				for(__iv__184_k=__iv__183_j + 1;((__iv__182_ustr[__iv__184_k] >= '0' && __iv__182_ustr[__iv__184_k] <= '9') || (__iv__182_ustr[__iv__184_k] >= 'a' && __iv__182_ustr[__iv__184_k] <= 'f') || (__iv__182_ustr[__iv__184_k] >= 'A' && __iv__182_ustr[__iv__184_k] <= 'F'));__iv__184_k=__iv__184_k + 1){
				}
				if(((__iv__184_k - __iv__183_j) & 1) == 0 && ((__iv__182_ustr[__iv__183_j + 1] >= '0' && __iv__182_ustr[__iv__183_j + 1] <= '9') || (__iv__182_ustr[__iv__183_j + 1] >= 'a' && __iv__182_ustr[__iv__183_j + 1] <= 'f') || (__iv__182_ustr[__iv__183_j + 1] >= 'A' && __iv__182_ustr[__iv__183_j + 1] <= 'F'))){
					__iv__183_j=__iv__183_j + 1;
				}
				__iv__aave_batch__526_len=__iv__aave_batch__526_len + 1;
			}
		}
		__iv__aave_batch__527_buffer=malloc(__iv__aave_batch__526_len);
		__iv__aave_batch__526_len=0;
		for(__iv__183_j=__iv__181_i;__iv__182_ustr[__iv__183_j];__iv__183_j=__iv__183_j + 1){
			if(((__iv__182_ustr[__iv__183_j] >= '0' && __iv__182_ustr[__iv__183_j] <= '9') || (__iv__182_ustr[__iv__183_j] >= 'a' && __iv__182_ustr[__iv__183_j] <= 'f') || (__iv__182_ustr[__iv__183_j] >= 'A' && __iv__182_ustr[__iv__183_j] <= 'F'))){
				int __iv__184_k;
				if(__iv__182_ustr[__iv__183_j] <= '9'){
					__iv__aave_batch__527_buffer[__iv__aave_batch__526_len]=__iv__182_ustr[__iv__183_j] - '0';
				}
				else if(__iv__182_ustr[__iv__183_j] <= 'F'){
					__iv__aave_batch__527_buffer[__iv__aave_batch__526_len]=__iv__182_ustr[__iv__183_j] - 'A' + 10;
				}
				else {
					__iv__aave_batch__527_buffer[__iv__aave_batch__526_len]=__iv__182_ustr[__iv__183_j] - 'a' + 10;
				}
				for(__iv__184_k=__iv__183_j + 1;((__iv__182_ustr[__iv__184_k] >= '0' && __iv__182_ustr[__iv__184_k] <= '9') || (__iv__182_ustr[__iv__184_k] >= 'a' && __iv__182_ustr[__iv__184_k] <= 'f') || (__iv__182_ustr[__iv__184_k] >= 'A' && __iv__182_ustr[__iv__184_k] <= 'F'));__iv__184_k=__iv__184_k + 1){
				}
				if(((__iv__184_k - __iv__183_j) & 1) == 0 && ((__iv__182_ustr[__iv__183_j + 1] >= '0' && __iv__182_ustr[__iv__183_j + 1] <= '9') || (__iv__182_ustr[__iv__183_j + 1] >= 'a' && __iv__182_ustr[__iv__183_j + 1] <= 'f') || (__iv__182_ustr[__iv__183_j + 1] >= 'A' && __iv__182_ustr[__iv__183_j + 1] <= 'F'))){
					__iv__183_j=__iv__183_j + 1;
					if(__iv__182_ustr[__iv__183_j] <= '9'){
						__iv__aave_batch__527_buffer[__iv__aave_batch__526_len]=__iv__182_ustr[__iv__183_j] - '0' + (16 * __iv__aave_batch__527_buffer[__iv__aave_batch__526_len]);
					}
					else if(__iv__182_ustr[__iv__183_j] <= 'F'){
						__iv__aave_batch__527_buffer[__iv__aave_batch__526_len]=__iv__182_ustr[__iv__183_j] - 'A' + 10 + (16 * __iv__aave_batch__527_buffer[__iv__aave_batch__526_len]);
					}
					else {
						__iv__aave_batch__527_buffer[__iv__aave_batch__526_len]=__iv__182_ustr[__iv__183_j] - 'a' + 10 + (16 * __iv__aave_batch__527_buffer[__iv__aave_batch__526_len]);
					}
				}
				__iv__aave_batch__526_len=__iv__aave_batch__526_len + 1;
			}
		}
		__iv__aave_batch__519_transaction->recipient=BN_bin2bn(__iv__aave_batch__527_buffer, __iv__aave_batch__526_len, (BIGNUM*)/*void**/(NULL));
	}
/*service_var 262==> zgenerator_crypt.buffer_len*/
/*service_var 261==> zgenerator_crypt.buffer*/
	__iv__172_bn=(BIGNUM*)/*void**/(NULL);
	if(__iv__aave_batch__518_amount_wei){
		BN_dec2bn(&__iv__172_bn, (char*)/*string*/(__iv__aave_batch__518_amount_wei));
		if(__iv__172_bn){
			int __iv__aave_batch__529_buffer_len;
			unsigned char* __iv__aave_batch__528_buffer;
/*service_var <==263 zgenerator_crypt.buffer*/
/*service_var <==264 zgenerator_crypt.buffer_len*/
			__iv__aave_batch__529_buffer_len=BN_num_bytes(__iv__172_bn);
			__iv__aave_batch__528_buffer=malloc(__iv__aave_batch__529_buffer_len);
			__iv__aave_batch__529_buffer_len=BN_bn2bin(__iv__172_bn, __iv__aave_batch__528_buffer);
			__iv__aave_batch__519_transaction->value=BN_bin2bn(__iv__aave_batch__528_buffer, __iv__aave_batch__529_buffer_len, (BIGNUM*)/*void**/(NULL));
/*service_var 264==> zgenerator_crypt.buffer_len*/
/*service_var 263==> zgenerator_crypt.buffer*/
		}
	}
	__iv__aave_batch__530_buffer_list=(bufferlist)/*void**/(NULL);
/*service_var <==265 ethereum_contract_call_data.buffer_list*/
/*service_var <==266 zgenerator_crypt.buffer*/
/*service_var <==267 zgenerator_crypt.buffer_len*/
	if("approve(address,uint256)"){
		int __iv__aave_batch__531_len;
		int __iv__aave_batch__533_hash_len;
		string __iv__aave_batch__532_hash;
		int __iv__aave_batch__535_method_id_len;
		__iv__aave_batch__531_len=strlen((char*)/*string*/("approve(address,uint256)"));
/*service_var <==268 zgenerator_crypt.hash*/
/*service_var <==269 zgenerator_crypt.hash_len*/
		__iv__aave_batch__533_hash_len=32;
		__iv__aave_batch__532_hash=malloc(32 + 1);
		__iv__aave_batch__532_hash[0]='\0';
		zgenerator_crypt_keccak256((unsigned char*)/*string*/("approve(address,uint256)"), (unsigned int)/*int*/(__iv__aave_batch__531_len), (unsigned char*)/*string*/(__iv__aave_batch__532_hash));
/*service_var <==270 zgenerator_crypt.buffer*/
/*service_var <==271 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__535_method_id_len=4;
		if(__iv__aave_batch__533_hash_len >= __iv__aave_batch__535_method_id_len){
			unsigned char* __iv__aave_batch__534_method_id;
			buffer_type* __iv__aave_batch__536_buffer_item;
			__iv__aave_batch__534_method_id=malloc(__iv__aave_batch__535_method_id_len);
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__534_method_id), (const void*)/*string*/(__iv__aave_batch__532_hash), (size_t)/*int*/(__iv__aave_batch__535_method_id_len));
			__iv__aave_batch__536_buffer_item=calloc(1, sizeof(buffer_type));
			__iv__aave_batch__536_buffer_item->buffer=__iv__aave_batch__534_method_id;
			__iv__aave_batch__536_buffer_item->size=__iv__aave_batch__535_method_id_len;
			__iv__aave_batch__530_buffer_list=z_list_append_function((z_list_item_type*)/*bufferlist*/(__iv__aave_batch__530_buffer_list), (void*)/*buffer_type**/(__iv__aave_batch__536_buffer_item));
		}
/*service_var 271==> zgenerator_crypt.buffer_len*/
/*service_var 270==> zgenerator_crypt.buffer*/
/*service_var 269==> zgenerator_crypt.hash_len*/
/*service_var 268==> zgenerator_crypt.hash*/
	}
/*service_var 267==> zgenerator_crypt.buffer_len*/
/*service_var 266==> zgenerator_crypt.buffer*/
	__iv__aave_batch__537_value_clean=wallet;
	__iv__aave_batch__539_len=strlen((char*)/*string*/("0x"));
	__iv__aave_batch__538_tmp_var=string_nequal_or_null((const char*)/*string*/(__iv__aave_batch__537_value_clean), (const char*)/*string*/("0x"), __iv__aave_batch__539_len);
	if(__iv__aave_batch__538_tmp_var){
		__iv__aave_batch__537_value_clean=__iv__aave_batch__537_value_clean + 2;
	}
	__iv__aave_batch__530_buffer_list=ethereum_contract_call_uint_from_string_hex_(__iv__aave_batch__530_buffer_list, __iv__aave_batch__537_value_clean);
	__iv__aave_batch__540_value_clean="ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff";
	__iv__aave_batch__542_len=strlen((char*)/*string*/("0x"));
	__iv__aave_batch__541_tmp_var=string_nequal_or_null((const char*)/*string*/(__iv__aave_batch__540_value_clean), (const char*)/*string*/("0x"), __iv__aave_batch__542_len);
	if(__iv__aave_batch__541_tmp_var){
		__iv__aave_batch__540_value_clean=__iv__aave_batch__540_value_clean + 2;
	}
	__iv__aave_batch__530_buffer_list=ethereum_contract_call_uint_from_string_hex_(__iv__aave_batch__530_buffer_list, __iv__aave_batch__540_value_clean);
/*service_var 265==> ethereum_contract_call_data.buffer_list*/
	__iv__aave_batch__543_total_len=0;
	__iv__aave_batch__546_list_name=(collection)/*bufferlist*/(__iv__aave_batch__530_buffer_list);
	for(__iv__aave_batch__547_name=(collection)/*collection*/(__iv__aave_batch__546_list_name);__iv__aave_batch__547_name;__iv__aave_batch__547_name=(collection)/*z_list_item_type**/(__iv__aave_batch__547_name->next)){
		buffer_type* __iv__aave_batch__545_buffer_item;
		__iv__aave_batch__545_buffer_item=(buffer_type*)/*void**/(__iv__aave_batch__547_name->data);
		__iv__aave_batch__543_total_len=__iv__aave_batch__543_total_len + __iv__aave_batch__545_buffer_item->size;
	}
	__iv__aave_batch__544_buffer=malloc(__iv__aave_batch__543_total_len);
	__iv__aave_batch__548_string_index=0;
	for(__iv__aave_batch__549_name=(collection)/*collection*/(__iv__aave_batch__546_list_name);__iv__aave_batch__549_name;__iv__aave_batch__549_name=(collection)/*z_list_item_type**/(__iv__aave_batch__549_name->next)){
		buffer_type* __iv__aave_batch__545_buffer_item;
		int __iv__185_buffer_index;
		__iv__aave_batch__545_buffer_item=(buffer_type*)/*void**/(__iv__aave_batch__549_name->data);
		for(__iv__185_buffer_index=0;__iv__185_buffer_index < __iv__aave_batch__545_buffer_item->size;__iv__185_buffer_index=__iv__185_buffer_index + 1){
			__iv__aave_batch__544_buffer[__iv__aave_batch__548_string_index]=__iv__aave_batch__545_buffer_item->buffer[__iv__185_buffer_index];
			__iv__aave_batch__548_string_index=__iv__aave_batch__548_string_index + 1;
		}
	}
/*service_var <==272 zgenerator_crypt.buffer*/
/*service_var <==273 zgenerator_crypt.buffer_len*/
	__iv__aave_batch__519_transaction->data_len=__iv__aave_batch__543_total_len;
	__iv__aave_batch__519_transaction->data=malloc(__iv__aave_batch__519_transaction->data_len);
	memcpy((void*)/*unsigned char**/(__iv__aave_batch__519_transaction->data), (const void*)/*unsigned char**/(__iv__aave_batch__544_buffer), (size_t)/*int*/(__iv__aave_batch__543_total_len));
/*service_var 273==> zgenerator_crypt.buffer_len*/
/*service_var 272==> zgenerator_crypt.buffer*/
/*service_var 254==> ethereum.transaction*/
	__iv__aave_batch__551_tmp_var=strconcat((char*)/*string*/("../resource/ethereum.key"), (char*)/*string*/(".priv"));
	__iv__aave_batch__550_not_file_exist=access(__iv__aave_batch__551_tmp_var, F_OK);
	if(__iv__aave_batch__550_not_file_exist){
		EC_KEY* __iv__aave_batch__552_key;
/*service_var <==274 zgenerator_crypt_key.ec_private*/
/*service_var <==275 zgenerator_crypt_key.ec_public*/
		__iv__aave_batch__552_key=EC_KEY_new_by_curve_name(NID_secp256k1);
		if(__iv__aave_batch__552_key){
			int __iv__186_ret;
			EC_KEY_set_asn1_flag(__iv__aave_batch__552_key, OPENSSL_EC_NAMED_CURVE);
			__iv__186_ret=EC_KEY_generate_key(__iv__aave_batch__552_key);
			if(__iv__186_ret == 1){
				EVP_PKEY* __iv__aave_batch__553_evp_key;
				EVP_PKEY* __iv__aave_batch__560_evp_key;
/*service_var <==276 zgenerator_crypt_key.evp_private*/
				__iv__aave_batch__553_evp_key=EVP_PKEY_new();
				if(__iv__aave_batch__553_evp_key){
					int __iv__187_ret;
					__iv__187_ret=EVP_PKEY_set1_EC_KEY(__iv__aave_batch__553_evp_key, __iv__aave_batch__552_key);
					if(__iv__187_ret){
						string __iv__aave_batch__555_tmp_var;
						BIO* __iv__aave_batch__554_bp;
						__iv__aave_batch__555_tmp_var=strconcat((char*)/*string*/("../resource/ethereum.key"), (char*)/*string*/(".priv"));
						__iv__aave_batch__554_bp=BIO_new_file((char*)/*string*/(__iv__aave_batch__555_tmp_var), (char*)/*string*/("w+"));
						if(__iv__aave_batch__554_bp){
							int __iv__188_ret;
							__iv__188_ret=PEM_write_bio_PrivateKey(__iv__aave_batch__554_bp, __iv__aave_batch__553_evp_key, (EVP_CIPHER*)/*void**/(NULL), (unsigned char*)/*void**/(NULL), 0, (pem_password_cb*)/*void**/(NULL), NULL);
							if(__iv__188_ret == 1){
								string __iv__aave_batch__557_tmp_var;
								string __iv__aave_batch__558_tmp_var;
								string __iv__aave_batch__559_tmp_var;
								string __iv__aave_batch__556_to_print;
								__iv__aave_batch__557_tmp_var=strconcat((char*)/*string*/("write to file "), (char*)/*string*/("../resource/ethereum.key"));
								__iv__aave_batch__558_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__557_tmp_var), (char*)/*string*/(".priv"));
								__iv__aave_batch__559_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__558_tmp_var), (char*)/*string*/("\n"));
								__iv__aave_batch__556_to_print=__iv__aave_batch__559_tmp_var;
								if(__iv__aave_batch__556_to_print){
									printf((char*)/*string*/("%s"), __iv__aave_batch__556_to_print);
								}
							}
							if(__iv__188_ret != 1){
								printf((char*)/*string*/("%s"), "error write private key!!!\n");
							}
							BIO_free_all(__iv__aave_batch__554_bp);
						}
						else {
							printf((char*)/*string*/("%s"), "error write private key!!!\n");
						}
					}
					else {
						printf((char*)/*string*/("%s"), "error write private key!!!\n");
					}
					EVP_PKEY_free(__iv__aave_batch__553_evp_key);
				}
				else {
					printf((char*)/*string*/("%s"), "error write private key!!!\n");
				}
/*service_var 276==> zgenerator_crypt_key.evp_private*/
/*service_var <==277 zgenerator_crypt_key.evp_public*/
				__iv__aave_batch__560_evp_key=EVP_PKEY_new();
				if(__iv__aave_batch__560_evp_key){
					int __iv__189_ret;
					__iv__189_ret=EVP_PKEY_set1_EC_KEY(__iv__aave_batch__560_evp_key, __iv__aave_batch__552_key);
					if(__iv__189_ret){
						string __iv__aave_batch__562_tmp_var;
						BIO* __iv__aave_batch__561_bp;
						__iv__aave_batch__562_tmp_var=strconcat((char*)/*string*/("../resource/ethereum.key"), (char*)/*string*/(".pub"));
						__iv__aave_batch__561_bp=BIO_new_file((char*)/*string*/(__iv__aave_batch__562_tmp_var), (char*)/*string*/("w+"));
						if(__iv__aave_batch__561_bp){
							int __iv__190_ret;
							__iv__190_ret=PEM_write_bio_PUBKEY(__iv__aave_batch__561_bp, __iv__aave_batch__560_evp_key);
							if(__iv__190_ret == 1){
								string __iv__aave_batch__564_tmp_var;
								string __iv__aave_batch__565_tmp_var;
								string __iv__aave_batch__566_tmp_var;
								string __iv__aave_batch__563_to_print;
								__iv__aave_batch__564_tmp_var=strconcat((char*)/*string*/("write to file "), (char*)/*string*/("../resource/ethereum.key"));
								__iv__aave_batch__565_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__564_tmp_var), (char*)/*string*/(".pub"));
								__iv__aave_batch__566_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__565_tmp_var), (char*)/*string*/("\n"));
								__iv__aave_batch__563_to_print=__iv__aave_batch__566_tmp_var;
								if(__iv__aave_batch__563_to_print){
									printf((char*)/*string*/("%s"), __iv__aave_batch__563_to_print);
								}
							}
							if(__iv__190_ret != 1){
								printf((char*)/*string*/("%s"), "error write public key!!!\n");
							}
							BIO_free_all(__iv__aave_batch__561_bp);
						}
						else {
							printf((char*)/*string*/("%s"), "error write public key!!!\n");
						}
					}
					else {
						printf((char*)/*string*/("%s"), "error write public key!!!\n");
					}
					EVP_PKEY_free(__iv__aave_batch__560_evp_key);
				}
				else {
					printf((char*)/*string*/("%s"), "error write public key!!!\n");
				}
/*service_var 277==> zgenerator_crypt_key.evp_public*/
			}
			else {
				printf((char*)/*string*/("%s"), "error gen key!!!\n");
			}
			EC_KEY_free(__iv__aave_batch__552_key);
		}
		else {
			printf((char*)/*string*/("%s"), "error gen key!!!\n");
		}
/*service_var 275==> zgenerator_crypt_key.ec_public*/
/*service_var 274==> zgenerator_crypt_key.ec_private*/
	}
/*service_var <==278 zgenerator_crypt_key.evp_private*/
	__iv__aave_batch__569_tmp_var=strconcat((char*)/*string*/("../resource/ethereum.key"), (char*)/*string*/(".priv"));
	__iv__aave_batch__568_bp=BIO_new_file((char*)/*string*/(__iv__aave_batch__569_tmp_var), (char*)/*string*/("r"));
	if(__iv__aave_batch__568_bp){
		EVP_PKEY* __iv__aave_batch__567_key;
		__iv__aave_batch__567_key=(EVP_PKEY*)/*void**/(NULL);
		__iv__aave_batch__567_key=PEM_read_bio_PrivateKey(__iv__aave_batch__568_bp, &__iv__aave_batch__567_key, (pem_password_cb*)/*void**/(NULL), NULL);
		if(__iv__aave_batch__567_key){
			EC_KEY* __iv__aave_batch__570_ec_key;
/*service_var <==279 zgenerator_crypt_key.ec_private*/
			__iv__aave_batch__570_ec_key=EVP_PKEY_get1_EC_KEY(__iv__aave_batch__567_key);
			if(__iv__aave_batch__570_ec_key){
				ethereum_rlp_list_type* __iv__aave_batch__571_rlp;
				BIGNUM* __iv__aave_batch__572_bn;
				int __iv__aave_batch__614_buffer_len;
				collection __iv__aave_batch__616_name;
				void* __iv__aave_batch__613_buffer;
				void* __iv__aave_batch__617_buffer_ptr;
				collection __iv__aave_batch__618_name;
				int __iv__aave_batch__620_buffer_len;
				ethereum_rlp_string_type __iv__aave_batch__619_buffer;
				int __iv__aave_batch__622_hash_len;
				string __iv__aave_batch__621_hash;
				ECDSA_SIG* __iv__aave_batch__625_sig;
				__iv__aave_batch__571_rlp=calloc(1, sizeof(ethereum_rlp_list_type));
/*service_var <==280 ethereum.transaction*/
				__iv__aave_batch__572_bn=BN_new();
				if(__iv__aave_batch__572_bn){
					int __iv__191_ret;
					__iv__191_ret=BN_set_word(__iv__aave_batch__572_bn, (BN_ULONG)/*int*/(__iv__main__0_chain_id));
					if(__iv__191_ret){
						int __iv__aave_batch__574_buffer_len;
						unsigned char* __iv__aave_batch__573_buffer;
/*service_var <==281 zgenerator_crypt.buffer*/
/*service_var <==282 zgenerator_crypt.buffer_len*/
						__iv__aave_batch__574_buffer_len=BN_num_bytes(__iv__aave_batch__572_bn);
						__iv__aave_batch__573_buffer=malloc(__iv__aave_batch__574_buffer_len);
						__iv__aave_batch__574_buffer_len=BN_bn2bin(__iv__aave_batch__572_bn, __iv__aave_batch__573_buffer);
						__iv__aave_batch__519_transaction->v=BN_bin2bn(__iv__aave_batch__573_buffer, __iv__aave_batch__574_buffer_len, (BIGNUM*)/*void**/(NULL));
/*service_var 282==> zgenerator_crypt.buffer_len*/
/*service_var 281==> zgenerator_crypt.buffer*/
					}
				}
/*service_var <==283 zgenerator_crypt.buffer*/
/*service_var <==284 zgenerator_crypt.buffer_len*/
				if(""){
					unsigned char* __iv__193_ustr;
					int __iv__192_i;
					int __iv__aave_batch__575_len;
					int __iv__194_j;
					unsigned char* __iv__aave_batch__576_buffer;
					__iv__193_ustr=(unsigned char*)/*string*/("");
					__iv__192_i=0;
					for(__iv__192_i=0;__iv__193_ustr[__iv__192_i] && !(((__iv__193_ustr[__iv__192_i] >= '0' && __iv__193_ustr[__iv__192_i] <= '9') || (__iv__193_ustr[__iv__192_i] >= 'a' && __iv__193_ustr[__iv__192_i] <= 'f') || (__iv__193_ustr[__iv__192_i] >= 'A' && __iv__193_ustr[__iv__192_i] <= 'F')));__iv__192_i=__iv__192_i + 1){
					}
					if(__iv__193_ustr[__iv__192_i] == '0' && (__iv__193_ustr[__iv__192_i + 1] == 'x' || __iv__193_ustr[__iv__192_i + 1] == 'X')){
						__iv__192_i=__iv__192_i + 2;
					}
					__iv__aave_batch__575_len=0;
					for(__iv__194_j=__iv__192_i;__iv__193_ustr[__iv__194_j];__iv__194_j=__iv__194_j + 1){
						if(((__iv__193_ustr[__iv__194_j] >= '0' && __iv__193_ustr[__iv__194_j] <= '9') || (__iv__193_ustr[__iv__194_j] >= 'a' && __iv__193_ustr[__iv__194_j] <= 'f') || (__iv__193_ustr[__iv__194_j] >= 'A' && __iv__193_ustr[__iv__194_j] <= 'F'))){
							int __iv__195_k;
							for(__iv__195_k=__iv__194_j + 1;((__iv__193_ustr[__iv__195_k] >= '0' && __iv__193_ustr[__iv__195_k] <= '9') || (__iv__193_ustr[__iv__195_k] >= 'a' && __iv__193_ustr[__iv__195_k] <= 'f') || (__iv__193_ustr[__iv__195_k] >= 'A' && __iv__193_ustr[__iv__195_k] <= 'F'));__iv__195_k=__iv__195_k + 1){
							}
							if(((__iv__195_k - __iv__194_j) & 1) == 0 && ((__iv__193_ustr[__iv__194_j + 1] >= '0' && __iv__193_ustr[__iv__194_j + 1] <= '9') || (__iv__193_ustr[__iv__194_j + 1] >= 'a' && __iv__193_ustr[__iv__194_j + 1] <= 'f') || (__iv__193_ustr[__iv__194_j + 1] >= 'A' && __iv__193_ustr[__iv__194_j + 1] <= 'F'))){
								__iv__194_j=__iv__194_j + 1;
							}
							__iv__aave_batch__575_len=__iv__aave_batch__575_len + 1;
						}
					}
					__iv__aave_batch__576_buffer=malloc(__iv__aave_batch__575_len);
					__iv__aave_batch__575_len=0;
					for(__iv__194_j=__iv__192_i;__iv__193_ustr[__iv__194_j];__iv__194_j=__iv__194_j + 1){
						if(((__iv__193_ustr[__iv__194_j] >= '0' && __iv__193_ustr[__iv__194_j] <= '9') || (__iv__193_ustr[__iv__194_j] >= 'a' && __iv__193_ustr[__iv__194_j] <= 'f') || (__iv__193_ustr[__iv__194_j] >= 'A' && __iv__193_ustr[__iv__194_j] <= 'F'))){
							int __iv__195_k;
							if(__iv__193_ustr[__iv__194_j] <= '9'){
								__iv__aave_batch__576_buffer[__iv__aave_batch__575_len]=__iv__193_ustr[__iv__194_j] - '0';
							}
							else if(__iv__193_ustr[__iv__194_j] <= 'F'){
								__iv__aave_batch__576_buffer[__iv__aave_batch__575_len]=__iv__193_ustr[__iv__194_j] - 'A' + 10;
							}
							else {
								__iv__aave_batch__576_buffer[__iv__aave_batch__575_len]=__iv__193_ustr[__iv__194_j] - 'a' + 10;
							}
							for(__iv__195_k=__iv__194_j + 1;((__iv__193_ustr[__iv__195_k] >= '0' && __iv__193_ustr[__iv__195_k] <= '9') || (__iv__193_ustr[__iv__195_k] >= 'a' && __iv__193_ustr[__iv__195_k] <= 'f') || (__iv__193_ustr[__iv__195_k] >= 'A' && __iv__193_ustr[__iv__195_k] <= 'F'));__iv__195_k=__iv__195_k + 1){
							}
							if(((__iv__195_k - __iv__194_j) & 1) == 0 && ((__iv__193_ustr[__iv__194_j + 1] >= '0' && __iv__193_ustr[__iv__194_j + 1] <= '9') || (__iv__193_ustr[__iv__194_j + 1] >= 'a' && __iv__193_ustr[__iv__194_j + 1] <= 'f') || (__iv__193_ustr[__iv__194_j + 1] >= 'A' && __iv__193_ustr[__iv__194_j + 1] <= 'F'))){
								__iv__194_j=__iv__194_j + 1;
								if(__iv__193_ustr[__iv__194_j] <= '9'){
									__iv__aave_batch__576_buffer[__iv__aave_batch__575_len]=__iv__193_ustr[__iv__194_j] - '0' + (16 * __iv__aave_batch__576_buffer[__iv__aave_batch__575_len]);
								}
								else if(__iv__193_ustr[__iv__194_j] <= 'F'){
									__iv__aave_batch__576_buffer[__iv__aave_batch__575_len]=__iv__193_ustr[__iv__194_j] - 'A' + 10 + (16 * __iv__aave_batch__576_buffer[__iv__aave_batch__575_len]);
								}
								else {
									__iv__aave_batch__576_buffer[__iv__aave_batch__575_len]=__iv__193_ustr[__iv__194_j] - 'a' + 10 + (16 * __iv__aave_batch__576_buffer[__iv__aave_batch__575_len]);
								}
							}
							__iv__aave_batch__575_len=__iv__aave_batch__575_len + 1;
						}
					}
					__iv__aave_batch__519_transaction->r=BN_bin2bn(__iv__aave_batch__576_buffer, __iv__aave_batch__575_len, (BIGNUM*)/*void**/(NULL));
					__iv__aave_batch__519_transaction->s=BN_bin2bn(__iv__aave_batch__576_buffer, __iv__aave_batch__575_len, (BIGNUM*)/*void**/(NULL));
				}
/*service_var 284==> zgenerator_crypt.buffer_len*/
/*service_var 283==> zgenerator_crypt.buffer*/
/*service_var <==285 ethereum.rlp*/
				if(__iv__aave_batch__519_transaction){
					int __iv__aave_batch__578_buffer_len;
					unsigned char* __iv__aave_batch__577_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__579_children;
					unsigned char* __iv__aave_batch__580_uvalue;
					int __iv__aave_batch__582_buffer_len;
					unsigned char* __iv__aave_batch__581_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__583_children;
					unsigned char* __iv__aave_batch__584_uvalue;
					int __iv__aave_batch__586_buffer_len;
					unsigned char* __iv__aave_batch__585_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__587_children;
					unsigned char* __iv__aave_batch__588_uvalue;
					int __iv__aave_batch__590_buffer_len;
					unsigned char* __iv__aave_batch__589_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__591_children;
					unsigned char* __iv__aave_batch__592_uvalue;
					int __iv__aave_batch__594_buffer_len;
					unsigned char* __iv__aave_batch__593_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__595_children;
					unsigned char* __iv__aave_batch__596_uvalue;
					ethereum_rlp_list_type* __iv__aave_batch__597_children;
					unsigned char* __iv__aave_batch__598_uvalue;
					int __iv__aave_batch__600_buffer_len;
					unsigned char* __iv__aave_batch__599_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__601_children;
					unsigned char* __iv__aave_batch__602_uvalue;
					int __iv__aave_batch__604_buffer_len;
					unsigned char* __iv__aave_batch__603_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__605_children;
					unsigned char* __iv__aave_batch__606_uvalue;
					int __iv__aave_batch__608_buffer_len;
					unsigned char* __iv__aave_batch__607_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__609_children;
					unsigned char* __iv__aave_batch__610_uvalue;
/*service_var <==286 zgenerator_crypt.buffer*/
/*service_var <==287 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__578_buffer_len=BN_num_bytes(__iv__aave_batch__519_transaction->nonce);
					__iv__aave_batch__577_buffer=malloc(__iv__aave_batch__578_buffer_len);
					__iv__aave_batch__578_buffer_len=BN_bn2bin(__iv__aave_batch__519_transaction->nonce, __iv__aave_batch__577_buffer);
					__iv__aave_batch__579_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__579_children->buffer_len=0;
					__iv__aave_batch__579_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__580_uvalue=__iv__aave_batch__577_buffer;
					if(__iv__aave_batch__578_buffer_len == 1 && __iv__aave_batch__580_uvalue[0] < 0x80){
						__iv__aave_batch__579_children->buffer_len=1;
						__iv__aave_batch__579_children->buffer=malloc(__iv__aave_batch__579_children->buffer_len);
						__iv__aave_batch__579_children->buffer[0]=__iv__aave_batch__580_uvalue[0];
					}
					else if(__iv__aave_batch__578_buffer_len < 56){
						__iv__aave_batch__579_children->buffer_len=1 + __iv__aave_batch__578_buffer_len;
						__iv__aave_batch__579_children->buffer=malloc(__iv__aave_batch__579_children->buffer_len);
						__iv__aave_batch__579_children->buffer[0]=0x80 + __iv__aave_batch__578_buffer_len;
						if(__iv__aave_batch__578_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__579_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__577_buffer), (size_t)/*int*/(__iv__aave_batch__578_buffer_len));
						}
					}
					else {
						int __iv__196_len_length;
						u_int64_t __iv__197_i;
						unsigned char* __iv__198_value_len_chr;
						__iv__196_len_length=1;
						for(__iv__197_i=(u_int64_t)/*int*/(__iv__aave_batch__578_buffer_len);__iv__197_i > 0xff;__iv__197_i=__iv__197_i / 0x100){
							__iv__196_len_length=__iv__196_len_length + 1;
						}
						__iv__aave_batch__579_children->buffer_len=1 + __iv__196_len_length + __iv__aave_batch__578_buffer_len;
						__iv__aave_batch__579_children->buffer=malloc(__iv__aave_batch__579_children->buffer_len);
						__iv__aave_batch__579_children->buffer[0]=0xb7 + __iv__196_len_length;
						__iv__198_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__578_buffer_len);
						for(__iv__197_i=(u_int64_t)/*int*/(__iv__196_len_length);__iv__197_i > 0;__iv__197_i=__iv__197_i - 1){
							__iv__aave_batch__579_children->buffer[__iv__197_i]=__iv__198_value_len_chr[__iv__196_len_length - __iv__197_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__579_children->buffer + 1 + __iv__196_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__577_buffer), (size_t)/*int*/(__iv__aave_batch__578_buffer_len));
					}
					__iv__aave_batch__571_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__571_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__579_children));
/*service_var 287==> zgenerator_crypt.buffer_len*/
/*service_var 286==> zgenerator_crypt.buffer*/
/*service_var <==288 zgenerator_crypt.buffer*/
/*service_var <==289 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__582_buffer_len=BN_num_bytes(__iv__aave_batch__519_transaction->gas_price);
					__iv__aave_batch__581_buffer=malloc(__iv__aave_batch__582_buffer_len);
					__iv__aave_batch__582_buffer_len=BN_bn2bin(__iv__aave_batch__519_transaction->gas_price, __iv__aave_batch__581_buffer);
					__iv__aave_batch__583_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__583_children->buffer_len=0;
					__iv__aave_batch__583_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__584_uvalue=__iv__aave_batch__581_buffer;
					if(__iv__aave_batch__582_buffer_len == 1 && __iv__aave_batch__584_uvalue[0] < 0x80){
						__iv__aave_batch__583_children->buffer_len=1;
						__iv__aave_batch__583_children->buffer=malloc(__iv__aave_batch__583_children->buffer_len);
						__iv__aave_batch__583_children->buffer[0]=__iv__aave_batch__584_uvalue[0];
					}
					else if(__iv__aave_batch__582_buffer_len < 56){
						__iv__aave_batch__583_children->buffer_len=1 + __iv__aave_batch__582_buffer_len;
						__iv__aave_batch__583_children->buffer=malloc(__iv__aave_batch__583_children->buffer_len);
						__iv__aave_batch__583_children->buffer[0]=0x80 + __iv__aave_batch__582_buffer_len;
						if(__iv__aave_batch__582_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__583_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__581_buffer), (size_t)/*int*/(__iv__aave_batch__582_buffer_len));
						}
					}
					else {
						int __iv__199_len_length;
						u_int64_t __iv__200_i;
						unsigned char* __iv__201_value_len_chr;
						__iv__199_len_length=1;
						for(__iv__200_i=(u_int64_t)/*int*/(__iv__aave_batch__582_buffer_len);__iv__200_i > 0xff;__iv__200_i=__iv__200_i / 0x100){
							__iv__199_len_length=__iv__199_len_length + 1;
						}
						__iv__aave_batch__583_children->buffer_len=1 + __iv__199_len_length + __iv__aave_batch__582_buffer_len;
						__iv__aave_batch__583_children->buffer=malloc(__iv__aave_batch__583_children->buffer_len);
						__iv__aave_batch__583_children->buffer[0]=0xb7 + __iv__199_len_length;
						__iv__201_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__582_buffer_len);
						for(__iv__200_i=(u_int64_t)/*int*/(__iv__199_len_length);__iv__200_i > 0;__iv__200_i=__iv__200_i - 1){
							__iv__aave_batch__583_children->buffer[__iv__200_i]=__iv__201_value_len_chr[__iv__199_len_length - __iv__200_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__583_children->buffer + 1 + __iv__199_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__581_buffer), (size_t)/*int*/(__iv__aave_batch__582_buffer_len));
					}
					__iv__aave_batch__571_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__571_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__583_children));
/*service_var 289==> zgenerator_crypt.buffer_len*/
/*service_var 288==> zgenerator_crypt.buffer*/
/*service_var <==290 zgenerator_crypt.buffer*/
/*service_var <==291 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__586_buffer_len=BN_num_bytes(__iv__aave_batch__519_transaction->gas_limit);
					__iv__aave_batch__585_buffer=malloc(__iv__aave_batch__586_buffer_len);
					__iv__aave_batch__586_buffer_len=BN_bn2bin(__iv__aave_batch__519_transaction->gas_limit, __iv__aave_batch__585_buffer);
					__iv__aave_batch__587_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__587_children->buffer_len=0;
					__iv__aave_batch__587_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__588_uvalue=__iv__aave_batch__585_buffer;
					if(__iv__aave_batch__586_buffer_len == 1 && __iv__aave_batch__588_uvalue[0] < 0x80){
						__iv__aave_batch__587_children->buffer_len=1;
						__iv__aave_batch__587_children->buffer=malloc(__iv__aave_batch__587_children->buffer_len);
						__iv__aave_batch__587_children->buffer[0]=__iv__aave_batch__588_uvalue[0];
					}
					else if(__iv__aave_batch__586_buffer_len < 56){
						__iv__aave_batch__587_children->buffer_len=1 + __iv__aave_batch__586_buffer_len;
						__iv__aave_batch__587_children->buffer=malloc(__iv__aave_batch__587_children->buffer_len);
						__iv__aave_batch__587_children->buffer[0]=0x80 + __iv__aave_batch__586_buffer_len;
						if(__iv__aave_batch__586_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__587_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__585_buffer), (size_t)/*int*/(__iv__aave_batch__586_buffer_len));
						}
					}
					else {
						int __iv__202_len_length;
						u_int64_t __iv__203_i;
						unsigned char* __iv__204_value_len_chr;
						__iv__202_len_length=1;
						for(__iv__203_i=(u_int64_t)/*int*/(__iv__aave_batch__586_buffer_len);__iv__203_i > 0xff;__iv__203_i=__iv__203_i / 0x100){
							__iv__202_len_length=__iv__202_len_length + 1;
						}
						__iv__aave_batch__587_children->buffer_len=1 + __iv__202_len_length + __iv__aave_batch__586_buffer_len;
						__iv__aave_batch__587_children->buffer=malloc(__iv__aave_batch__587_children->buffer_len);
						__iv__aave_batch__587_children->buffer[0]=0xb7 + __iv__202_len_length;
						__iv__204_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__586_buffer_len);
						for(__iv__203_i=(u_int64_t)/*int*/(__iv__202_len_length);__iv__203_i > 0;__iv__203_i=__iv__203_i - 1){
							__iv__aave_batch__587_children->buffer[__iv__203_i]=__iv__204_value_len_chr[__iv__202_len_length - __iv__203_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__587_children->buffer + 1 + __iv__202_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__585_buffer), (size_t)/*int*/(__iv__aave_batch__586_buffer_len));
					}
					__iv__aave_batch__571_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__571_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__587_children));
/*service_var 291==> zgenerator_crypt.buffer_len*/
/*service_var 290==> zgenerator_crypt.buffer*/
/*service_var <==292 zgenerator_crypt.buffer*/
/*service_var <==293 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__590_buffer_len=BN_num_bytes(__iv__aave_batch__519_transaction->recipient);
					__iv__aave_batch__589_buffer=malloc(__iv__aave_batch__590_buffer_len);
					__iv__aave_batch__590_buffer_len=BN_bn2bin(__iv__aave_batch__519_transaction->recipient, __iv__aave_batch__589_buffer);
					__iv__aave_batch__591_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__591_children->buffer_len=0;
					__iv__aave_batch__591_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__592_uvalue=__iv__aave_batch__589_buffer;
					if(__iv__aave_batch__590_buffer_len == 1 && __iv__aave_batch__592_uvalue[0] < 0x80){
						__iv__aave_batch__591_children->buffer_len=1;
						__iv__aave_batch__591_children->buffer=malloc(__iv__aave_batch__591_children->buffer_len);
						__iv__aave_batch__591_children->buffer[0]=__iv__aave_batch__592_uvalue[0];
					}
					else if(__iv__aave_batch__590_buffer_len < 56){
						__iv__aave_batch__591_children->buffer_len=1 + __iv__aave_batch__590_buffer_len;
						__iv__aave_batch__591_children->buffer=malloc(__iv__aave_batch__591_children->buffer_len);
						__iv__aave_batch__591_children->buffer[0]=0x80 + __iv__aave_batch__590_buffer_len;
						if(__iv__aave_batch__590_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__591_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__589_buffer), (size_t)/*int*/(__iv__aave_batch__590_buffer_len));
						}
					}
					else {
						int __iv__205_len_length;
						u_int64_t __iv__206_i;
						unsigned char* __iv__207_value_len_chr;
						__iv__205_len_length=1;
						for(__iv__206_i=(u_int64_t)/*int*/(__iv__aave_batch__590_buffer_len);__iv__206_i > 0xff;__iv__206_i=__iv__206_i / 0x100){
							__iv__205_len_length=__iv__205_len_length + 1;
						}
						__iv__aave_batch__591_children->buffer_len=1 + __iv__205_len_length + __iv__aave_batch__590_buffer_len;
						__iv__aave_batch__591_children->buffer=malloc(__iv__aave_batch__591_children->buffer_len);
						__iv__aave_batch__591_children->buffer[0]=0xb7 + __iv__205_len_length;
						__iv__207_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__590_buffer_len);
						for(__iv__206_i=(u_int64_t)/*int*/(__iv__205_len_length);__iv__206_i > 0;__iv__206_i=__iv__206_i - 1){
							__iv__aave_batch__591_children->buffer[__iv__206_i]=__iv__207_value_len_chr[__iv__205_len_length - __iv__206_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__591_children->buffer + 1 + __iv__205_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__589_buffer), (size_t)/*int*/(__iv__aave_batch__590_buffer_len));
					}
					__iv__aave_batch__571_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__571_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__591_children));
/*service_var 293==> zgenerator_crypt.buffer_len*/
/*service_var 292==> zgenerator_crypt.buffer*/
/*service_var <==294 zgenerator_crypt.buffer*/
/*service_var <==295 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__594_buffer_len=BN_num_bytes(__iv__aave_batch__519_transaction->value);
					__iv__aave_batch__593_buffer=malloc(__iv__aave_batch__594_buffer_len);
					__iv__aave_batch__594_buffer_len=BN_bn2bin(__iv__aave_batch__519_transaction->value, __iv__aave_batch__593_buffer);
					__iv__aave_batch__595_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__595_children->buffer_len=0;
					__iv__aave_batch__595_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__596_uvalue=__iv__aave_batch__593_buffer;
					if(__iv__aave_batch__594_buffer_len == 1 && __iv__aave_batch__596_uvalue[0] < 0x80){
						__iv__aave_batch__595_children->buffer_len=1;
						__iv__aave_batch__595_children->buffer=malloc(__iv__aave_batch__595_children->buffer_len);
						__iv__aave_batch__595_children->buffer[0]=__iv__aave_batch__596_uvalue[0];
					}
					else if(__iv__aave_batch__594_buffer_len < 56){
						__iv__aave_batch__595_children->buffer_len=1 + __iv__aave_batch__594_buffer_len;
						__iv__aave_batch__595_children->buffer=malloc(__iv__aave_batch__595_children->buffer_len);
						__iv__aave_batch__595_children->buffer[0]=0x80 + __iv__aave_batch__594_buffer_len;
						if(__iv__aave_batch__594_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__595_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__593_buffer), (size_t)/*int*/(__iv__aave_batch__594_buffer_len));
						}
					}
					else {
						int __iv__208_len_length;
						u_int64_t __iv__209_i;
						unsigned char* __iv__210_value_len_chr;
						__iv__208_len_length=1;
						for(__iv__209_i=(u_int64_t)/*int*/(__iv__aave_batch__594_buffer_len);__iv__209_i > 0xff;__iv__209_i=__iv__209_i / 0x100){
							__iv__208_len_length=__iv__208_len_length + 1;
						}
						__iv__aave_batch__595_children->buffer_len=1 + __iv__208_len_length + __iv__aave_batch__594_buffer_len;
						__iv__aave_batch__595_children->buffer=malloc(__iv__aave_batch__595_children->buffer_len);
						__iv__aave_batch__595_children->buffer[0]=0xb7 + __iv__208_len_length;
						__iv__210_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__594_buffer_len);
						for(__iv__209_i=(u_int64_t)/*int*/(__iv__208_len_length);__iv__209_i > 0;__iv__209_i=__iv__209_i - 1){
							__iv__aave_batch__595_children->buffer[__iv__209_i]=__iv__210_value_len_chr[__iv__208_len_length - __iv__209_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__595_children->buffer + 1 + __iv__208_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__593_buffer), (size_t)/*int*/(__iv__aave_batch__594_buffer_len));
					}
					__iv__aave_batch__571_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__571_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__595_children));
/*service_var 295==> zgenerator_crypt.buffer_len*/
/*service_var 294==> zgenerator_crypt.buffer*/
					__iv__aave_batch__597_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__597_children->buffer_len=0;
					__iv__aave_batch__597_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__598_uvalue=__iv__aave_batch__519_transaction->data;
					if(__iv__aave_batch__519_transaction->data_len == 1 && __iv__aave_batch__598_uvalue[0] < 0x80){
						__iv__aave_batch__597_children->buffer_len=1;
						__iv__aave_batch__597_children->buffer=malloc(__iv__aave_batch__597_children->buffer_len);
						__iv__aave_batch__597_children->buffer[0]=__iv__aave_batch__598_uvalue[0];
					}
					else if(__iv__aave_batch__519_transaction->data_len < 56){
						__iv__aave_batch__597_children->buffer_len=1 + __iv__aave_batch__519_transaction->data_len;
						__iv__aave_batch__597_children->buffer=malloc(__iv__aave_batch__597_children->buffer_len);
						__iv__aave_batch__597_children->buffer[0]=0x80 + __iv__aave_batch__519_transaction->data_len;
						if(__iv__aave_batch__519_transaction->data_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__597_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__519_transaction->data), (size_t)/*int*/(__iv__aave_batch__519_transaction->data_len));
						}
					}
					else {
						int __iv__211_len_length;
						u_int64_t __iv__212_i;
						unsigned char* __iv__213_value_len_chr;
						__iv__211_len_length=1;
						for(__iv__212_i=(u_int64_t)/*int*/(__iv__aave_batch__519_transaction->data_len);__iv__212_i > 0xff;__iv__212_i=__iv__212_i / 0x100){
							__iv__211_len_length=__iv__211_len_length + 1;
						}
						__iv__aave_batch__597_children->buffer_len=1 + __iv__211_len_length + __iv__aave_batch__519_transaction->data_len;
						__iv__aave_batch__597_children->buffer=malloc(__iv__aave_batch__597_children->buffer_len);
						__iv__aave_batch__597_children->buffer[0]=0xb7 + __iv__211_len_length;
						__iv__213_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__519_transaction->data_len);
						for(__iv__212_i=(u_int64_t)/*int*/(__iv__211_len_length);__iv__212_i > 0;__iv__212_i=__iv__212_i - 1){
							__iv__aave_batch__597_children->buffer[__iv__212_i]=__iv__213_value_len_chr[__iv__211_len_length - __iv__212_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__597_children->buffer + 1 + __iv__211_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__519_transaction->data), (size_t)/*int*/(__iv__aave_batch__519_transaction->data_len));
					}
					__iv__aave_batch__571_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__571_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__597_children));
/*service_var <==296 zgenerator_crypt.buffer*/
/*service_var <==297 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__600_buffer_len=BN_num_bytes(__iv__aave_batch__519_transaction->v);
					__iv__aave_batch__599_buffer=malloc(__iv__aave_batch__600_buffer_len);
					__iv__aave_batch__600_buffer_len=BN_bn2bin(__iv__aave_batch__519_transaction->v, __iv__aave_batch__599_buffer);
					__iv__aave_batch__601_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__601_children->buffer_len=0;
					__iv__aave_batch__601_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__602_uvalue=__iv__aave_batch__599_buffer;
					if(__iv__aave_batch__600_buffer_len == 1 && __iv__aave_batch__602_uvalue[0] < 0x80){
						__iv__aave_batch__601_children->buffer_len=1;
						__iv__aave_batch__601_children->buffer=malloc(__iv__aave_batch__601_children->buffer_len);
						__iv__aave_batch__601_children->buffer[0]=__iv__aave_batch__602_uvalue[0];
					}
					else if(__iv__aave_batch__600_buffer_len < 56){
						__iv__aave_batch__601_children->buffer_len=1 + __iv__aave_batch__600_buffer_len;
						__iv__aave_batch__601_children->buffer=malloc(__iv__aave_batch__601_children->buffer_len);
						__iv__aave_batch__601_children->buffer[0]=0x80 + __iv__aave_batch__600_buffer_len;
						if(__iv__aave_batch__600_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__601_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__599_buffer), (size_t)/*int*/(__iv__aave_batch__600_buffer_len));
						}
					}
					else {
						int __iv__214_len_length;
						u_int64_t __iv__215_i;
						unsigned char* __iv__216_value_len_chr;
						__iv__214_len_length=1;
						for(__iv__215_i=(u_int64_t)/*int*/(__iv__aave_batch__600_buffer_len);__iv__215_i > 0xff;__iv__215_i=__iv__215_i / 0x100){
							__iv__214_len_length=__iv__214_len_length + 1;
						}
						__iv__aave_batch__601_children->buffer_len=1 + __iv__214_len_length + __iv__aave_batch__600_buffer_len;
						__iv__aave_batch__601_children->buffer=malloc(__iv__aave_batch__601_children->buffer_len);
						__iv__aave_batch__601_children->buffer[0]=0xb7 + __iv__214_len_length;
						__iv__216_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__600_buffer_len);
						for(__iv__215_i=(u_int64_t)/*int*/(__iv__214_len_length);__iv__215_i > 0;__iv__215_i=__iv__215_i - 1){
							__iv__aave_batch__601_children->buffer[__iv__215_i]=__iv__216_value_len_chr[__iv__214_len_length - __iv__215_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__601_children->buffer + 1 + __iv__214_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__599_buffer), (size_t)/*int*/(__iv__aave_batch__600_buffer_len));
					}
					__iv__aave_batch__571_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__571_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__601_children));
/*service_var 297==> zgenerator_crypt.buffer_len*/
/*service_var 296==> zgenerator_crypt.buffer*/
/*service_var <==298 zgenerator_crypt.buffer*/
/*service_var <==299 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__604_buffer_len=BN_num_bytes(__iv__aave_batch__519_transaction->r);
					__iv__aave_batch__603_buffer=malloc(__iv__aave_batch__604_buffer_len);
					__iv__aave_batch__604_buffer_len=BN_bn2bin(__iv__aave_batch__519_transaction->r, __iv__aave_batch__603_buffer);
					__iv__aave_batch__605_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__605_children->buffer_len=0;
					__iv__aave_batch__605_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__606_uvalue=__iv__aave_batch__603_buffer;
					if(__iv__aave_batch__604_buffer_len == 1 && __iv__aave_batch__606_uvalue[0] < 0x80){
						__iv__aave_batch__605_children->buffer_len=1;
						__iv__aave_batch__605_children->buffer=malloc(__iv__aave_batch__605_children->buffer_len);
						__iv__aave_batch__605_children->buffer[0]=__iv__aave_batch__606_uvalue[0];
					}
					else if(__iv__aave_batch__604_buffer_len < 56){
						__iv__aave_batch__605_children->buffer_len=1 + __iv__aave_batch__604_buffer_len;
						__iv__aave_batch__605_children->buffer=malloc(__iv__aave_batch__605_children->buffer_len);
						__iv__aave_batch__605_children->buffer[0]=0x80 + __iv__aave_batch__604_buffer_len;
						if(__iv__aave_batch__604_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__605_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__603_buffer), (size_t)/*int*/(__iv__aave_batch__604_buffer_len));
						}
					}
					else {
						int __iv__217_len_length;
						u_int64_t __iv__218_i;
						unsigned char* __iv__219_value_len_chr;
						__iv__217_len_length=1;
						for(__iv__218_i=(u_int64_t)/*int*/(__iv__aave_batch__604_buffer_len);__iv__218_i > 0xff;__iv__218_i=__iv__218_i / 0x100){
							__iv__217_len_length=__iv__217_len_length + 1;
						}
						__iv__aave_batch__605_children->buffer_len=1 + __iv__217_len_length + __iv__aave_batch__604_buffer_len;
						__iv__aave_batch__605_children->buffer=malloc(__iv__aave_batch__605_children->buffer_len);
						__iv__aave_batch__605_children->buffer[0]=0xb7 + __iv__217_len_length;
						__iv__219_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__604_buffer_len);
						for(__iv__218_i=(u_int64_t)/*int*/(__iv__217_len_length);__iv__218_i > 0;__iv__218_i=__iv__218_i - 1){
							__iv__aave_batch__605_children->buffer[__iv__218_i]=__iv__219_value_len_chr[__iv__217_len_length - __iv__218_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__605_children->buffer + 1 + __iv__217_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__603_buffer), (size_t)/*int*/(__iv__aave_batch__604_buffer_len));
					}
					__iv__aave_batch__571_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__571_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__605_children));
/*service_var 299==> zgenerator_crypt.buffer_len*/
/*service_var 298==> zgenerator_crypt.buffer*/
/*service_var <==300 zgenerator_crypt.buffer*/
/*service_var <==301 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__608_buffer_len=BN_num_bytes(__iv__aave_batch__519_transaction->s);
					__iv__aave_batch__607_buffer=malloc(__iv__aave_batch__608_buffer_len);
					__iv__aave_batch__608_buffer_len=BN_bn2bin(__iv__aave_batch__519_transaction->s, __iv__aave_batch__607_buffer);
					__iv__aave_batch__609_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__609_children->buffer_len=0;
					__iv__aave_batch__609_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__610_uvalue=__iv__aave_batch__607_buffer;
					if(__iv__aave_batch__608_buffer_len == 1 && __iv__aave_batch__610_uvalue[0] < 0x80){
						__iv__aave_batch__609_children->buffer_len=1;
						__iv__aave_batch__609_children->buffer=malloc(__iv__aave_batch__609_children->buffer_len);
						__iv__aave_batch__609_children->buffer[0]=__iv__aave_batch__610_uvalue[0];
					}
					else if(__iv__aave_batch__608_buffer_len < 56){
						__iv__aave_batch__609_children->buffer_len=1 + __iv__aave_batch__608_buffer_len;
						__iv__aave_batch__609_children->buffer=malloc(__iv__aave_batch__609_children->buffer_len);
						__iv__aave_batch__609_children->buffer[0]=0x80 + __iv__aave_batch__608_buffer_len;
						if(__iv__aave_batch__608_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__609_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__607_buffer), (size_t)/*int*/(__iv__aave_batch__608_buffer_len));
						}
					}
					else {
						int __iv__220_len_length;
						u_int64_t __iv__221_i;
						unsigned char* __iv__222_value_len_chr;
						__iv__220_len_length=1;
						for(__iv__221_i=(u_int64_t)/*int*/(__iv__aave_batch__608_buffer_len);__iv__221_i > 0xff;__iv__221_i=__iv__221_i / 0x100){
							__iv__220_len_length=__iv__220_len_length + 1;
						}
						__iv__aave_batch__609_children->buffer_len=1 + __iv__220_len_length + __iv__aave_batch__608_buffer_len;
						__iv__aave_batch__609_children->buffer=malloc(__iv__aave_batch__609_children->buffer_len);
						__iv__aave_batch__609_children->buffer[0]=0xb7 + __iv__220_len_length;
						__iv__222_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__608_buffer_len);
						for(__iv__221_i=(u_int64_t)/*int*/(__iv__220_len_length);__iv__221_i > 0;__iv__221_i=__iv__221_i - 1){
							__iv__aave_batch__609_children->buffer[__iv__221_i]=__iv__222_value_len_chr[__iv__220_len_length - __iv__221_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__609_children->buffer + 1 + __iv__220_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__607_buffer), (size_t)/*int*/(__iv__aave_batch__608_buffer_len));
					}
					__iv__aave_batch__571_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__571_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__609_children));
/*service_var 301==> zgenerator_crypt.buffer_len*/
/*service_var 300==> zgenerator_crypt.buffer*/
				}
/*service_var 285==> ethereum.rlp*/
/*service_var <==302 zgenerator_crypt.buffer*/
/*service_var <==303 zgenerator_crypt.buffer_len*/
/*service_var <==304 zgenerator_crypt.buffer*/
/*service_var <==305 zgenerator_crypt.buffer_len*/
				__iv__aave_batch__614_buffer_len=0;
				for(__iv__aave_batch__616_name=(collection)/*collection*/(__iv__aave_batch__571_rlp->children);__iv__aave_batch__616_name;__iv__aave_batch__616_name=(collection)/*z_list_item_type**/(__iv__aave_batch__616_name->next)){
					ethereum_rlp_list_type* __iv__aave_batch__615_children;
					__iv__aave_batch__615_children=(ethereum_rlp_list_type*)/*void**/(__iv__aave_batch__616_name->data);
					__iv__aave_batch__614_buffer_len=__iv__aave_batch__614_buffer_len + __iv__aave_batch__615_children->buffer_len;
				}
				__iv__aave_batch__613_buffer=malloc(__iv__aave_batch__614_buffer_len);
				__iv__aave_batch__617_buffer_ptr=__iv__aave_batch__613_buffer;
				for(__iv__aave_batch__618_name=(collection)/*collection*/(__iv__aave_batch__571_rlp->children);__iv__aave_batch__618_name;__iv__aave_batch__618_name=(collection)/*z_list_item_type**/(__iv__aave_batch__618_name->next)){
					ethereum_rlp_list_type* __iv__aave_batch__615_children;
					__iv__aave_batch__615_children=(ethereum_rlp_list_type*)/*void**/(__iv__aave_batch__618_name->data);
					memcpy(__iv__aave_batch__617_buffer_ptr, (const void*)/*unsigned char**/(__iv__aave_batch__615_children->buffer), (size_t)/*int*/(__iv__aave_batch__615_children->buffer_len));
					__iv__aave_batch__617_buffer_ptr=__iv__aave_batch__617_buffer_ptr + __iv__aave_batch__615_children->buffer_len;
				}
/*service_var <==306 zgenerator_crypt.buffer*/
/*service_var <==307 zgenerator_crypt.buffer_len*/
				__iv__aave_batch__620_buffer_len=0;
				__iv__aave_batch__619_buffer=(ethereum_rlp_string_type)/*void**/(NULL);
				if(__iv__aave_batch__614_buffer_len < 56){
					__iv__aave_batch__620_buffer_len=1 + __iv__aave_batch__614_buffer_len;
					__iv__aave_batch__619_buffer=malloc(__iv__aave_batch__620_buffer_len);
					__iv__aave_batch__619_buffer[0]=0xc0 + __iv__aave_batch__614_buffer_len;
					if(__iv__aave_batch__614_buffer_len){
						memcpy((void*)/*ethereum_rlp_string_type*/(__iv__aave_batch__619_buffer + 1), (const void*)/*void**/(__iv__aave_batch__613_buffer), (size_t)/*int*/(__iv__aave_batch__614_buffer_len));
					}
				}
				else {
					int __iv__223_len_length;
					u_int64_t __iv__224_i;
					unsigned char* __iv__225_value_len_chr;
					__iv__223_len_length=1;
					for(__iv__224_i=(u_int64_t)/*int*/(__iv__aave_batch__614_buffer_len);__iv__224_i > 0xff;__iv__224_i=__iv__224_i / 0x100){
						__iv__223_len_length=__iv__223_len_length + 1;
					}
					__iv__aave_batch__620_buffer_len=1 + __iv__223_len_length + __iv__aave_batch__614_buffer_len;
					__iv__aave_batch__619_buffer=malloc(__iv__aave_batch__620_buffer_len);
					__iv__aave_batch__619_buffer[0]=0xf7 + __iv__223_len_length;
					__iv__225_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__614_buffer_len);
					for(__iv__224_i=(u_int64_t)/*int*/(__iv__223_len_length);__iv__224_i > 0;__iv__224_i=__iv__224_i - 1){
						__iv__aave_batch__619_buffer[__iv__224_i]=__iv__225_value_len_chr[__iv__223_len_length - __iv__224_i];
					}
					memcpy((void*)/*ethereum_rlp_string_type*/(__iv__aave_batch__619_buffer + 1 + __iv__223_len_length), (const void*)/*void**/(__iv__aave_batch__613_buffer), (size_t)/*int*/(__iv__aave_batch__614_buffer_len));
				}
/*service_var <==308 zgenerator_crypt.hash*/
/*service_var <==309 zgenerator_crypt.hash_len*/
				__iv__aave_batch__622_hash_len=32;
				__iv__aave_batch__621_hash=malloc(32 + 1);
				__iv__aave_batch__621_hash[0]='\0';
				zgenerator_crypt_keccak256((unsigned char*)/*ethereum_rlp_string_type*/(__iv__aave_batch__619_buffer), (unsigned int)/*int*/(__iv__aave_batch__620_buffer_len), (unsigned char*)/*string*/(__iv__aave_batch__621_hash));
/*service_var <==310 zgenerator_crypt.bn_signature_r*/
/*service_var <==311 zgenerator_crypt.bn_signature_s*/
				__iv__aave_batch__625_sig=ECDSA_do_sign((unsigned char*)/*string*/(__iv__aave_batch__621_hash), __iv__aave_batch__622_hash_len, __iv__aave_batch__570_ec_key);
				if(__iv__aave_batch__625_sig){
					const BIGNUM* __iv__aave_batch__623_pr;
					const BIGNUM* __iv__aave_batch__624_ps;
					__iv__aave_batch__623_pr=(const BIGNUM*)/*void**/(NULL);
					__iv__aave_batch__624_ps=(const BIGNUM*)/*void**/(NULL);
					ECDSA_SIG_get0(__iv__aave_batch__625_sig, &__iv__aave_batch__623_pr, &__iv__aave_batch__624_ps);
					if(__iv__aave_batch__624_ps){
						const EC_GROUP* __iv__aave_batch__627_group;
						const BIGNUM* __iv__aave_batch__626_order;
						BIGNUM* __iv__226_halforder;
						int __iv__227_sup;
/*service_var <==312 openssl_ec.group*/
						__iv__aave_batch__627_group=EC_KEY_get0_group(__iv__aave_batch__570_ec_key);
/*service_var <==313 openssl_ec.order*/
						__iv__aave_batch__626_order=EC_GROUP_get0_order(__iv__aave_batch__627_group);
						__iv__226_halforder=BN_new();
						BN_rshift1(__iv__226_halforder, (BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__626_order));
						__iv__227_sup=BN_cmp((BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__624_ps), __iv__226_halforder);
						if(__iv__227_sup > 0){
							BN_sub((BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__624_ps), (BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__626_order), (BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__624_ps));
						}
/*service_var 313==> openssl_ec.order*/
/*service_var 312==> openssl_ec.group*/
					}
					if(__iv__aave_batch__623_pr && __iv__aave_batch__624_ps){
						unsigned long __iv__228_v_int;
						int __iv__230_loop;
						int __iv__229_recid;
						__iv__228_v_int=(unsigned long)/*int*/((0x23 + (__iv__main__0_chain_id * 2)));
						__iv__230_loop=1;
						for(__iv__229_recid=0;__iv__229_recid < 4 && __iv__230_loop;__iv__229_recid=__iv__229_recid + 1){
							EC_KEY* __iv__231_key;
							int __iv__232_ret;
							__iv__231_key=EC_KEY_new_by_curve_name(NID_secp256k1);
							if(__iv__231_key){
							}
							__iv__232_ret=openssl_ec_key_recover(__iv__231_key, (BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__623_pr), (BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__624_ps), (unsigned char*)/*string*/(__iv__aave_batch__621_hash), __iv__aave_batch__622_hash_len, __iv__229_recid, 1);
							if(__iv__232_ret == 1){
								const EC_GROUP* __iv__aave_batch__628_group;
								const EC_POINT* __iv__235_public_key_point;
/*service_var <==314 zgenerator_crypt.buffer*/
/*service_var <==315 zgenerator_crypt.buffer_len*/
/*service_var <==316 openssl_ec.group*/
								__iv__aave_batch__628_group=EC_KEY_get0_group(__iv__main__26_ec_key);
								__iv__235_public_key_point=EC_KEY_get0_public_key(__iv__main__26_ec_key);
								if(__iv__235_public_key_point){
									int __iv__aave_batch__630_buffer_len;
									unsigned char* __iv__aave_batch__629_buffer;
									__iv__aave_batch__630_buffer_len=256;
									__iv__aave_batch__629_buffer=malloc(__iv__aave_batch__630_buffer_len);
									__iv__aave_batch__630_buffer_len=EC_POINT_point2oct((EC_GROUP*)/*const EC_GROUP**/(__iv__aave_batch__628_group), (EC_POINT*)/*const EC_POINT**/(__iv__235_public_key_point), POINT_CONVERSION_UNCOMPRESSED, __iv__aave_batch__629_buffer, (size_t)/*int*/(__iv__aave_batch__630_buffer_len), (BN_CTX*)/*void**/(NULL));
									if(__iv__aave_batch__630_buffer_len){
										const EC_GROUP* __iv__aave_batch__631_group;
										const EC_POINT* __iv__236_public_key_point;
/*service_var <==317 zgenerator_crypt.buffer2*/
/*service_var <==318 zgenerator_crypt.buffer2_len*/
/*service_var <==319 openssl_ec.group*/
										__iv__aave_batch__631_group=EC_KEY_get0_group(__iv__231_key);
										__iv__236_public_key_point=EC_KEY_get0_public_key(__iv__231_key);
										if(__iv__236_public_key_point){
											int __iv__aave_batch__633_buffer_len;
											unsigned char* __iv__aave_batch__632_buffer;
											__iv__aave_batch__633_buffer_len=256;
											__iv__aave_batch__632_buffer=malloc(__iv__aave_batch__633_buffer_len);
											__iv__aave_batch__633_buffer_len=EC_POINT_point2oct((EC_GROUP*)/*const EC_GROUP**/(__iv__aave_batch__631_group), (EC_POINT*)/*const EC_POINT**/(__iv__236_public_key_point), POINT_CONVERSION_UNCOMPRESSED, __iv__aave_batch__632_buffer, (size_t)/*int*/(__iv__aave_batch__633_buffer_len), (BN_CTX*)/*void**/(NULL));
											if(__iv__aave_batch__633_buffer_len){
												int __iv__aave_batch__634_not_equal;
												__iv__aave_batch__634_not_equal=1;
												if(__iv__aave_batch__633_buffer_len == __iv__aave_batch__630_buffer_len){
													__iv__aave_batch__634_not_equal=memcmp((const void*)/*unsigned char**/(__iv__aave_batch__632_buffer), (const void*)/*unsigned char**/(__iv__aave_batch__629_buffer), (size_t)/*int*/(__iv__aave_batch__633_buffer_len));
												}
												if(!__iv__aave_batch__634_not_equal){
													BIGNUM* __iv__233_bn;
													int __iv__aave_batch__636_buffer_len;
													unsigned char* __iv__aave_batch__635_buffer;
													__iv__228_v_int=__iv__228_v_int + __iv__229_recid;
													__iv__233_bn=BN_new();
													if(__iv__233_bn){
														int __iv__237_ret;
														__iv__237_ret=BN_set_word(__iv__233_bn, (BN_ULONG)/*unsigned long*/(__iv__228_v_int));
														if(__iv__237_ret){
														}
													}
/*service_var <==320 zgenerator_crypt.signature_v*/
/*service_var <==321 zgenerator_crypt.signature_v_len*/
													__iv__aave_batch__636_buffer_len=BN_num_bytes(__iv__233_bn);
													__iv__aave_batch__635_buffer=malloc(__iv__aave_batch__636_buffer_len);
													__iv__aave_batch__636_buffer_len=BN_bn2bin(__iv__233_bn, __iv__aave_batch__635_buffer);
													__iv__aave_batch__519_transaction->v=BN_bin2bn(__iv__aave_batch__635_buffer, __iv__aave_batch__636_buffer_len, (BIGNUM*)/*void**/(NULL));
/*service_var 321==> zgenerator_crypt.signature_v_len*/
/*service_var 320==> zgenerator_crypt.signature_v*/
													__iv__230_loop=0;
												}
											}
										}
/*service_var 319==> openssl_ec.group*/
/*service_var 318==> zgenerator_crypt.buffer2_len*/
/*service_var 317==> zgenerator_crypt.buffer2*/
									}
								}
/*service_var 316==> openssl_ec.group*/
/*service_var 315==> zgenerator_crypt.buffer_len*/
/*service_var 314==> zgenerator_crypt.buffer*/
							}
						}
						if(__iv__230_loop){
							int __iv__234_is_odd;
							__iv__234_is_odd=BN_is_odd((BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__623_pr));
							if(__iv__234_is_odd){
								__iv__228_v_int=__iv__228_v_int + 1;
							}
						}
					}
					__iv__aave_batch__519_transaction->r=BN_dup((BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__623_pr));
					__iv__aave_batch__519_transaction->s=BN_dup((BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__624_ps));
				}
				else {
				}
/*service_var 311==> zgenerator_crypt.bn_signature_s*/
/*service_var 310==> zgenerator_crypt.bn_signature_r*/
/*service_var 309==> zgenerator_crypt.hash_len*/
/*service_var 308==> zgenerator_crypt.hash*/
/*service_var 307==> zgenerator_crypt.buffer_len*/
/*service_var 306==> zgenerator_crypt.buffer*/
/*service_var 305==> zgenerator_crypt.buffer_len*/
/*service_var 304==> zgenerator_crypt.buffer*/
/*service_var 303==> zgenerator_crypt.buffer_len*/
/*service_var 302==> zgenerator_crypt.buffer*/
/*service_var 280==> ethereum.transaction*/
				EC_KEY_free(__iv__aave_batch__570_ec_key);
			}
			else {
			}
/*service_var 279==> zgenerator_crypt_key.ec_private*/
			EVP_PKEY_free(__iv__aave_batch__567_key);
		}
		else {
		}
		BIO_free_all(__iv__aave_batch__568_bp);
	}
	else {
	}
/*service_var 278==> zgenerator_crypt_key.evp_private*/
/*service_var <==322 ethereum.transaction*/
	if(__iv__aave_batch__519_transaction){
		string __iv__aave_batch__637_str;
		string __iv__aave_batch__638_to_print;
		string __iv__aave_batch__639_str;
		string __iv__aave_batch__640_str_eth;
		string __iv__aave_batch__642_tmp_var;
		string __iv__aave_batch__641_to_print;
		string __iv__aave_batch__643_str;
		string __iv__aave_batch__644_to_print;
		string __iv__aave_batch__645_str;
		string __iv__aave_batch__646_to_print;
		string __iv__aave_batch__647_str;
		string __iv__aave_batch__648_str_eth;
		string __iv__aave_batch__650_tmp_var;
		string __iv__aave_batch__649_to_print;
		unsigned char* __iv__aave_batch__653_u_buffer;
		string __iv__aave_batch__652_str;
		int __iv__aave_batch__651_i;
		string __iv__aave_batch__655_str;
		string __iv__aave_batch__656_to_print;
		string __iv__aave_batch__657_str;
		string __iv__aave_batch__658_to_print;
		string __iv__aave_batch__659_str;
		string __iv__aave_batch__660_to_print;
		printf((char*)/*string*/("%s"), "nonce");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__637_str="";
		if(__iv__aave_batch__519_transaction->nonce){
			__iv__aave_batch__637_str=BN_bn2dec(__iv__aave_batch__519_transaction->nonce);
		}
		__iv__aave_batch__638_to_print=__iv__aave_batch__637_str;
		if(__iv__aave_batch__638_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__638_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "gas_price");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__639_str="";
		if(__iv__aave_batch__519_transaction->gas_price){
			__iv__aave_batch__639_str=BN_bn2dec(__iv__aave_batch__519_transaction->gas_price);
		}
		__iv__aave_batch__640_str_eth=ethereum_convert_string_wei_to_string_eth_function(__iv__aave_batch__639_str, 9);
		__iv__aave_batch__642_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__640_str_eth), (char*)/*string*/(" Gwei"));
		__iv__aave_batch__641_to_print=__iv__aave_batch__642_tmp_var;
		if(__iv__aave_batch__641_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__641_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "gas_limit");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__643_str="";
		if(__iv__aave_batch__519_transaction->gas_limit){
			__iv__aave_batch__643_str=BN_bn2dec(__iv__aave_batch__519_transaction->gas_limit);
		}
		__iv__aave_batch__644_to_print=__iv__aave_batch__643_str;
		if(__iv__aave_batch__644_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__644_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "recipient");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__645_str="";
		if(__iv__aave_batch__519_transaction->recipient){
			__iv__aave_batch__645_str=BN_bn2hex(__iv__aave_batch__519_transaction->recipient);
		}
		__iv__aave_batch__645_str=string_lowercase(__iv__aave_batch__645_str, 0);
		printf((char*)/*string*/("%s"), "0x");
		__iv__aave_batch__646_to_print=__iv__aave_batch__645_str;
		if(__iv__aave_batch__646_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__646_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "value");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__647_str="";
		if(__iv__aave_batch__519_transaction->value){
			__iv__aave_batch__647_str=BN_bn2dec(__iv__aave_batch__519_transaction->value);
		}
		__iv__aave_batch__648_str_eth=ethereum_convert_string_wei_to_string_eth_function(__iv__aave_batch__647_str, 18);
		__iv__aave_batch__650_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__648_str_eth), (char*)/*string*/(" ETH"));
		__iv__aave_batch__649_to_print=__iv__aave_batch__650_tmp_var;
		if(__iv__aave_batch__649_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__649_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "data");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__653_u_buffer=__iv__aave_batch__519_transaction->data;
		__iv__aave_batch__652_str=malloc(3 + 1);
		__iv__aave_batch__652_str[0]='\0';
		__iv__aave_batch__652_str[2]=0;
		for(__iv__aave_batch__651_i=0;__iv__aave_batch__651_i < __iv__aave_batch__519_transaction->data_len;__iv__aave_batch__651_i=__iv__aave_batch__651_i + 1){
			string __iv__aave_batch__654_to_print;
			__iv__aave_batch__652_str[1]=__iv__aave_batch__653_u_buffer[__iv__aave_batch__651_i] % 16;
			__iv__aave_batch__652_str[0]=__iv__aave_batch__653_u_buffer[__iv__aave_batch__651_i] / 16;
			if(__iv__aave_batch__652_str[1] < 10){
				__iv__aave_batch__652_str[1]=__iv__aave_batch__652_str[1] + '0';
			}
			else {
				__iv__aave_batch__652_str[1]=__iv__aave_batch__652_str[1] - 10 + 'a';
			}
			if(__iv__aave_batch__652_str[0] < 10){
				__iv__aave_batch__652_str[0]=__iv__aave_batch__652_str[0] + '0';
			}
			else {
				__iv__aave_batch__652_str[0]=__iv__aave_batch__652_str[0] - 10 + 'a';
			}
			__iv__aave_batch__654_to_print=__iv__aave_batch__652_str;
			if(__iv__aave_batch__654_to_print){
				printf((char*)/*string*/("%s"), __iv__aave_batch__654_to_print);
			}
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "v");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__655_str="";
		if(__iv__aave_batch__519_transaction->v){
			__iv__aave_batch__655_str=BN_bn2hex(__iv__aave_batch__519_transaction->v);
		}
		__iv__aave_batch__655_str=string_lowercase(__iv__aave_batch__655_str, 0);
		printf((char*)/*string*/("%s"), "0x");
		__iv__aave_batch__656_to_print=__iv__aave_batch__655_str;
		if(__iv__aave_batch__656_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__656_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "r");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__657_str="";
		if(__iv__aave_batch__519_transaction->r){
			__iv__aave_batch__657_str=BN_bn2hex(__iv__aave_batch__519_transaction->r);
		}
		__iv__aave_batch__657_str=string_lowercase(__iv__aave_batch__657_str, 0);
		printf((char*)/*string*/("%s"), "0x");
		__iv__aave_batch__658_to_print=__iv__aave_batch__657_str;
		if(__iv__aave_batch__658_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__658_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "s");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__659_str="";
		if(__iv__aave_batch__519_transaction->s){
			__iv__aave_batch__659_str=BN_bn2hex(__iv__aave_batch__519_transaction->s);
		}
		__iv__aave_batch__659_str=string_lowercase(__iv__aave_batch__659_str, 0);
		printf((char*)/*string*/("%s"), "0x");
		__iv__aave_batch__660_to_print=__iv__aave_batch__659_str;
		if(__iv__aave_batch__660_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__660_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
	}
/*service_var 322==> ethereum.transaction*/
	__iv__aave_batch__661_rlp=calloc(1, sizeof(ethereum_rlp_list_type));
/*service_var <==323 ethereum.transaction*/
/*service_var <==324 ethereum.rlp*/
	if(__iv__aave_batch__519_transaction){
		int __iv__aave_batch__663_buffer_len;
		unsigned char* __iv__aave_batch__662_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__664_children;
		unsigned char* __iv__aave_batch__665_uvalue;
		int __iv__aave_batch__667_buffer_len;
		unsigned char* __iv__aave_batch__666_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__668_children;
		unsigned char* __iv__aave_batch__669_uvalue;
		int __iv__aave_batch__671_buffer_len;
		unsigned char* __iv__aave_batch__670_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__672_children;
		unsigned char* __iv__aave_batch__673_uvalue;
		int __iv__aave_batch__675_buffer_len;
		unsigned char* __iv__aave_batch__674_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__676_children;
		unsigned char* __iv__aave_batch__677_uvalue;
		int __iv__aave_batch__679_buffer_len;
		unsigned char* __iv__aave_batch__678_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__680_children;
		unsigned char* __iv__aave_batch__681_uvalue;
		ethereum_rlp_list_type* __iv__aave_batch__682_children;
		unsigned char* __iv__aave_batch__683_uvalue;
		int __iv__aave_batch__685_buffer_len;
		unsigned char* __iv__aave_batch__684_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__686_children;
		unsigned char* __iv__aave_batch__687_uvalue;
		int __iv__aave_batch__689_buffer_len;
		unsigned char* __iv__aave_batch__688_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__690_children;
		unsigned char* __iv__aave_batch__691_uvalue;
		int __iv__aave_batch__693_buffer_len;
		unsigned char* __iv__aave_batch__692_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__694_children;
		unsigned char* __iv__aave_batch__695_uvalue;
/*service_var <==325 zgenerator_crypt.buffer*/
/*service_var <==326 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__663_buffer_len=BN_num_bytes(__iv__aave_batch__519_transaction->nonce);
		__iv__aave_batch__662_buffer=malloc(__iv__aave_batch__663_buffer_len);
		__iv__aave_batch__663_buffer_len=BN_bn2bin(__iv__aave_batch__519_transaction->nonce, __iv__aave_batch__662_buffer);
		__iv__aave_batch__664_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__664_children->buffer_len=0;
		__iv__aave_batch__664_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__665_uvalue=__iv__aave_batch__662_buffer;
		if(__iv__aave_batch__663_buffer_len == 1 && __iv__aave_batch__665_uvalue[0] < 0x80){
			__iv__aave_batch__664_children->buffer_len=1;
			__iv__aave_batch__664_children->buffer=malloc(__iv__aave_batch__664_children->buffer_len);
			__iv__aave_batch__664_children->buffer[0]=__iv__aave_batch__665_uvalue[0];
		}
		else if(__iv__aave_batch__663_buffer_len < 56){
			__iv__aave_batch__664_children->buffer_len=1 + __iv__aave_batch__663_buffer_len;
			__iv__aave_batch__664_children->buffer=malloc(__iv__aave_batch__664_children->buffer_len);
			__iv__aave_batch__664_children->buffer[0]=0x80 + __iv__aave_batch__663_buffer_len;
			if(__iv__aave_batch__663_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__664_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__662_buffer), (size_t)/*int*/(__iv__aave_batch__663_buffer_len));
			}
		}
		else {
			int __iv__240_len_length;
			u_int64_t __iv__241_i;
			unsigned char* __iv__242_value_len_chr;
			__iv__240_len_length=1;
			for(__iv__241_i=(u_int64_t)/*int*/(__iv__aave_batch__663_buffer_len);__iv__241_i > 0xff;__iv__241_i=__iv__241_i / 0x100){
				__iv__240_len_length=__iv__240_len_length + 1;
			}
			__iv__aave_batch__664_children->buffer_len=1 + __iv__240_len_length + __iv__aave_batch__663_buffer_len;
			__iv__aave_batch__664_children->buffer=malloc(__iv__aave_batch__664_children->buffer_len);
			__iv__aave_batch__664_children->buffer[0]=0xb7 + __iv__240_len_length;
			__iv__242_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__663_buffer_len);
			for(__iv__241_i=(u_int64_t)/*int*/(__iv__240_len_length);__iv__241_i > 0;__iv__241_i=__iv__241_i - 1){
				__iv__aave_batch__664_children->buffer[__iv__241_i]=__iv__242_value_len_chr[__iv__240_len_length - __iv__241_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__664_children->buffer + 1 + __iv__240_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__662_buffer), (size_t)/*int*/(__iv__aave_batch__663_buffer_len));
		}
		__iv__aave_batch__661_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__661_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__664_children));
/*service_var 326==> zgenerator_crypt.buffer_len*/
/*service_var 325==> zgenerator_crypt.buffer*/
/*service_var <==327 zgenerator_crypt.buffer*/
/*service_var <==328 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__667_buffer_len=BN_num_bytes(__iv__aave_batch__519_transaction->gas_price);
		__iv__aave_batch__666_buffer=malloc(__iv__aave_batch__667_buffer_len);
		__iv__aave_batch__667_buffer_len=BN_bn2bin(__iv__aave_batch__519_transaction->gas_price, __iv__aave_batch__666_buffer);
		__iv__aave_batch__668_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__668_children->buffer_len=0;
		__iv__aave_batch__668_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__669_uvalue=__iv__aave_batch__666_buffer;
		if(__iv__aave_batch__667_buffer_len == 1 && __iv__aave_batch__669_uvalue[0] < 0x80){
			__iv__aave_batch__668_children->buffer_len=1;
			__iv__aave_batch__668_children->buffer=malloc(__iv__aave_batch__668_children->buffer_len);
			__iv__aave_batch__668_children->buffer[0]=__iv__aave_batch__669_uvalue[0];
		}
		else if(__iv__aave_batch__667_buffer_len < 56){
			__iv__aave_batch__668_children->buffer_len=1 + __iv__aave_batch__667_buffer_len;
			__iv__aave_batch__668_children->buffer=malloc(__iv__aave_batch__668_children->buffer_len);
			__iv__aave_batch__668_children->buffer[0]=0x80 + __iv__aave_batch__667_buffer_len;
			if(__iv__aave_batch__667_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__668_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__666_buffer), (size_t)/*int*/(__iv__aave_batch__667_buffer_len));
			}
		}
		else {
			int __iv__243_len_length;
			u_int64_t __iv__244_i;
			unsigned char* __iv__245_value_len_chr;
			__iv__243_len_length=1;
			for(__iv__244_i=(u_int64_t)/*int*/(__iv__aave_batch__667_buffer_len);__iv__244_i > 0xff;__iv__244_i=__iv__244_i / 0x100){
				__iv__243_len_length=__iv__243_len_length + 1;
			}
			__iv__aave_batch__668_children->buffer_len=1 + __iv__243_len_length + __iv__aave_batch__667_buffer_len;
			__iv__aave_batch__668_children->buffer=malloc(__iv__aave_batch__668_children->buffer_len);
			__iv__aave_batch__668_children->buffer[0]=0xb7 + __iv__243_len_length;
			__iv__245_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__667_buffer_len);
			for(__iv__244_i=(u_int64_t)/*int*/(__iv__243_len_length);__iv__244_i > 0;__iv__244_i=__iv__244_i - 1){
				__iv__aave_batch__668_children->buffer[__iv__244_i]=__iv__245_value_len_chr[__iv__243_len_length - __iv__244_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__668_children->buffer + 1 + __iv__243_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__666_buffer), (size_t)/*int*/(__iv__aave_batch__667_buffer_len));
		}
		__iv__aave_batch__661_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__661_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__668_children));
/*service_var 328==> zgenerator_crypt.buffer_len*/
/*service_var 327==> zgenerator_crypt.buffer*/
/*service_var <==329 zgenerator_crypt.buffer*/
/*service_var <==330 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__671_buffer_len=BN_num_bytes(__iv__aave_batch__519_transaction->gas_limit);
		__iv__aave_batch__670_buffer=malloc(__iv__aave_batch__671_buffer_len);
		__iv__aave_batch__671_buffer_len=BN_bn2bin(__iv__aave_batch__519_transaction->gas_limit, __iv__aave_batch__670_buffer);
		__iv__aave_batch__672_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__672_children->buffer_len=0;
		__iv__aave_batch__672_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__673_uvalue=__iv__aave_batch__670_buffer;
		if(__iv__aave_batch__671_buffer_len == 1 && __iv__aave_batch__673_uvalue[0] < 0x80){
			__iv__aave_batch__672_children->buffer_len=1;
			__iv__aave_batch__672_children->buffer=malloc(__iv__aave_batch__672_children->buffer_len);
			__iv__aave_batch__672_children->buffer[0]=__iv__aave_batch__673_uvalue[0];
		}
		else if(__iv__aave_batch__671_buffer_len < 56){
			__iv__aave_batch__672_children->buffer_len=1 + __iv__aave_batch__671_buffer_len;
			__iv__aave_batch__672_children->buffer=malloc(__iv__aave_batch__672_children->buffer_len);
			__iv__aave_batch__672_children->buffer[0]=0x80 + __iv__aave_batch__671_buffer_len;
			if(__iv__aave_batch__671_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__672_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__670_buffer), (size_t)/*int*/(__iv__aave_batch__671_buffer_len));
			}
		}
		else {
			int __iv__246_len_length;
			u_int64_t __iv__247_i;
			unsigned char* __iv__248_value_len_chr;
			__iv__246_len_length=1;
			for(__iv__247_i=(u_int64_t)/*int*/(__iv__aave_batch__671_buffer_len);__iv__247_i > 0xff;__iv__247_i=__iv__247_i / 0x100){
				__iv__246_len_length=__iv__246_len_length + 1;
			}
			__iv__aave_batch__672_children->buffer_len=1 + __iv__246_len_length + __iv__aave_batch__671_buffer_len;
			__iv__aave_batch__672_children->buffer=malloc(__iv__aave_batch__672_children->buffer_len);
			__iv__aave_batch__672_children->buffer[0]=0xb7 + __iv__246_len_length;
			__iv__248_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__671_buffer_len);
			for(__iv__247_i=(u_int64_t)/*int*/(__iv__246_len_length);__iv__247_i > 0;__iv__247_i=__iv__247_i - 1){
				__iv__aave_batch__672_children->buffer[__iv__247_i]=__iv__248_value_len_chr[__iv__246_len_length - __iv__247_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__672_children->buffer + 1 + __iv__246_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__670_buffer), (size_t)/*int*/(__iv__aave_batch__671_buffer_len));
		}
		__iv__aave_batch__661_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__661_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__672_children));
/*service_var 330==> zgenerator_crypt.buffer_len*/
/*service_var 329==> zgenerator_crypt.buffer*/
/*service_var <==331 zgenerator_crypt.buffer*/
/*service_var <==332 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__675_buffer_len=BN_num_bytes(__iv__aave_batch__519_transaction->recipient);
		__iv__aave_batch__674_buffer=malloc(__iv__aave_batch__675_buffer_len);
		__iv__aave_batch__675_buffer_len=BN_bn2bin(__iv__aave_batch__519_transaction->recipient, __iv__aave_batch__674_buffer);
		__iv__aave_batch__676_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__676_children->buffer_len=0;
		__iv__aave_batch__676_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__677_uvalue=__iv__aave_batch__674_buffer;
		if(__iv__aave_batch__675_buffer_len == 1 && __iv__aave_batch__677_uvalue[0] < 0x80){
			__iv__aave_batch__676_children->buffer_len=1;
			__iv__aave_batch__676_children->buffer=malloc(__iv__aave_batch__676_children->buffer_len);
			__iv__aave_batch__676_children->buffer[0]=__iv__aave_batch__677_uvalue[0];
		}
		else if(__iv__aave_batch__675_buffer_len < 56){
			__iv__aave_batch__676_children->buffer_len=1 + __iv__aave_batch__675_buffer_len;
			__iv__aave_batch__676_children->buffer=malloc(__iv__aave_batch__676_children->buffer_len);
			__iv__aave_batch__676_children->buffer[0]=0x80 + __iv__aave_batch__675_buffer_len;
			if(__iv__aave_batch__675_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__676_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__674_buffer), (size_t)/*int*/(__iv__aave_batch__675_buffer_len));
			}
		}
		else {
			int __iv__249_len_length;
			u_int64_t __iv__250_i;
			unsigned char* __iv__251_value_len_chr;
			__iv__249_len_length=1;
			for(__iv__250_i=(u_int64_t)/*int*/(__iv__aave_batch__675_buffer_len);__iv__250_i > 0xff;__iv__250_i=__iv__250_i / 0x100){
				__iv__249_len_length=__iv__249_len_length + 1;
			}
			__iv__aave_batch__676_children->buffer_len=1 + __iv__249_len_length + __iv__aave_batch__675_buffer_len;
			__iv__aave_batch__676_children->buffer=malloc(__iv__aave_batch__676_children->buffer_len);
			__iv__aave_batch__676_children->buffer[0]=0xb7 + __iv__249_len_length;
			__iv__251_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__675_buffer_len);
			for(__iv__250_i=(u_int64_t)/*int*/(__iv__249_len_length);__iv__250_i > 0;__iv__250_i=__iv__250_i - 1){
				__iv__aave_batch__676_children->buffer[__iv__250_i]=__iv__251_value_len_chr[__iv__249_len_length - __iv__250_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__676_children->buffer + 1 + __iv__249_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__674_buffer), (size_t)/*int*/(__iv__aave_batch__675_buffer_len));
		}
		__iv__aave_batch__661_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__661_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__676_children));
/*service_var 332==> zgenerator_crypt.buffer_len*/
/*service_var 331==> zgenerator_crypt.buffer*/
/*service_var <==333 zgenerator_crypt.buffer*/
/*service_var <==334 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__679_buffer_len=BN_num_bytes(__iv__aave_batch__519_transaction->value);
		__iv__aave_batch__678_buffer=malloc(__iv__aave_batch__679_buffer_len);
		__iv__aave_batch__679_buffer_len=BN_bn2bin(__iv__aave_batch__519_transaction->value, __iv__aave_batch__678_buffer);
		__iv__aave_batch__680_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__680_children->buffer_len=0;
		__iv__aave_batch__680_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__681_uvalue=__iv__aave_batch__678_buffer;
		if(__iv__aave_batch__679_buffer_len == 1 && __iv__aave_batch__681_uvalue[0] < 0x80){
			__iv__aave_batch__680_children->buffer_len=1;
			__iv__aave_batch__680_children->buffer=malloc(__iv__aave_batch__680_children->buffer_len);
			__iv__aave_batch__680_children->buffer[0]=__iv__aave_batch__681_uvalue[0];
		}
		else if(__iv__aave_batch__679_buffer_len < 56){
			__iv__aave_batch__680_children->buffer_len=1 + __iv__aave_batch__679_buffer_len;
			__iv__aave_batch__680_children->buffer=malloc(__iv__aave_batch__680_children->buffer_len);
			__iv__aave_batch__680_children->buffer[0]=0x80 + __iv__aave_batch__679_buffer_len;
			if(__iv__aave_batch__679_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__680_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__678_buffer), (size_t)/*int*/(__iv__aave_batch__679_buffer_len));
			}
		}
		else {
			int __iv__252_len_length;
			u_int64_t __iv__253_i;
			unsigned char* __iv__254_value_len_chr;
			__iv__252_len_length=1;
			for(__iv__253_i=(u_int64_t)/*int*/(__iv__aave_batch__679_buffer_len);__iv__253_i > 0xff;__iv__253_i=__iv__253_i / 0x100){
				__iv__252_len_length=__iv__252_len_length + 1;
			}
			__iv__aave_batch__680_children->buffer_len=1 + __iv__252_len_length + __iv__aave_batch__679_buffer_len;
			__iv__aave_batch__680_children->buffer=malloc(__iv__aave_batch__680_children->buffer_len);
			__iv__aave_batch__680_children->buffer[0]=0xb7 + __iv__252_len_length;
			__iv__254_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__679_buffer_len);
			for(__iv__253_i=(u_int64_t)/*int*/(__iv__252_len_length);__iv__253_i > 0;__iv__253_i=__iv__253_i - 1){
				__iv__aave_batch__680_children->buffer[__iv__253_i]=__iv__254_value_len_chr[__iv__252_len_length - __iv__253_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__680_children->buffer + 1 + __iv__252_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__678_buffer), (size_t)/*int*/(__iv__aave_batch__679_buffer_len));
		}
		__iv__aave_batch__661_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__661_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__680_children));
/*service_var 334==> zgenerator_crypt.buffer_len*/
/*service_var 333==> zgenerator_crypt.buffer*/
		__iv__aave_batch__682_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__682_children->buffer_len=0;
		__iv__aave_batch__682_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__683_uvalue=__iv__aave_batch__519_transaction->data;
		if(__iv__aave_batch__519_transaction->data_len == 1 && __iv__aave_batch__683_uvalue[0] < 0x80){
			__iv__aave_batch__682_children->buffer_len=1;
			__iv__aave_batch__682_children->buffer=malloc(__iv__aave_batch__682_children->buffer_len);
			__iv__aave_batch__682_children->buffer[0]=__iv__aave_batch__683_uvalue[0];
		}
		else if(__iv__aave_batch__519_transaction->data_len < 56){
			__iv__aave_batch__682_children->buffer_len=1 + __iv__aave_batch__519_transaction->data_len;
			__iv__aave_batch__682_children->buffer=malloc(__iv__aave_batch__682_children->buffer_len);
			__iv__aave_batch__682_children->buffer[0]=0x80 + __iv__aave_batch__519_transaction->data_len;
			if(__iv__aave_batch__519_transaction->data_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__682_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__519_transaction->data), (size_t)/*int*/(__iv__aave_batch__519_transaction->data_len));
			}
		}
		else {
			int __iv__255_len_length;
			u_int64_t __iv__256_i;
			unsigned char* __iv__257_value_len_chr;
			__iv__255_len_length=1;
			for(__iv__256_i=(u_int64_t)/*int*/(__iv__aave_batch__519_transaction->data_len);__iv__256_i > 0xff;__iv__256_i=__iv__256_i / 0x100){
				__iv__255_len_length=__iv__255_len_length + 1;
			}
			__iv__aave_batch__682_children->buffer_len=1 + __iv__255_len_length + __iv__aave_batch__519_transaction->data_len;
			__iv__aave_batch__682_children->buffer=malloc(__iv__aave_batch__682_children->buffer_len);
			__iv__aave_batch__682_children->buffer[0]=0xb7 + __iv__255_len_length;
			__iv__257_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__519_transaction->data_len);
			for(__iv__256_i=(u_int64_t)/*int*/(__iv__255_len_length);__iv__256_i > 0;__iv__256_i=__iv__256_i - 1){
				__iv__aave_batch__682_children->buffer[__iv__256_i]=__iv__257_value_len_chr[__iv__255_len_length - __iv__256_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__682_children->buffer + 1 + __iv__255_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__519_transaction->data), (size_t)/*int*/(__iv__aave_batch__519_transaction->data_len));
		}
		__iv__aave_batch__661_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__661_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__682_children));
/*service_var <==335 zgenerator_crypt.buffer*/
/*service_var <==336 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__685_buffer_len=BN_num_bytes(__iv__aave_batch__519_transaction->v);
		__iv__aave_batch__684_buffer=malloc(__iv__aave_batch__685_buffer_len);
		__iv__aave_batch__685_buffer_len=BN_bn2bin(__iv__aave_batch__519_transaction->v, __iv__aave_batch__684_buffer);
		__iv__aave_batch__686_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__686_children->buffer_len=0;
		__iv__aave_batch__686_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__687_uvalue=__iv__aave_batch__684_buffer;
		if(__iv__aave_batch__685_buffer_len == 1 && __iv__aave_batch__687_uvalue[0] < 0x80){
			__iv__aave_batch__686_children->buffer_len=1;
			__iv__aave_batch__686_children->buffer=malloc(__iv__aave_batch__686_children->buffer_len);
			__iv__aave_batch__686_children->buffer[0]=__iv__aave_batch__687_uvalue[0];
		}
		else if(__iv__aave_batch__685_buffer_len < 56){
			__iv__aave_batch__686_children->buffer_len=1 + __iv__aave_batch__685_buffer_len;
			__iv__aave_batch__686_children->buffer=malloc(__iv__aave_batch__686_children->buffer_len);
			__iv__aave_batch__686_children->buffer[0]=0x80 + __iv__aave_batch__685_buffer_len;
			if(__iv__aave_batch__685_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__686_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__684_buffer), (size_t)/*int*/(__iv__aave_batch__685_buffer_len));
			}
		}
		else {
			int __iv__258_len_length;
			u_int64_t __iv__259_i;
			unsigned char* __iv__260_value_len_chr;
			__iv__258_len_length=1;
			for(__iv__259_i=(u_int64_t)/*int*/(__iv__aave_batch__685_buffer_len);__iv__259_i > 0xff;__iv__259_i=__iv__259_i / 0x100){
				__iv__258_len_length=__iv__258_len_length + 1;
			}
			__iv__aave_batch__686_children->buffer_len=1 + __iv__258_len_length + __iv__aave_batch__685_buffer_len;
			__iv__aave_batch__686_children->buffer=malloc(__iv__aave_batch__686_children->buffer_len);
			__iv__aave_batch__686_children->buffer[0]=0xb7 + __iv__258_len_length;
			__iv__260_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__685_buffer_len);
			for(__iv__259_i=(u_int64_t)/*int*/(__iv__258_len_length);__iv__259_i > 0;__iv__259_i=__iv__259_i - 1){
				__iv__aave_batch__686_children->buffer[__iv__259_i]=__iv__260_value_len_chr[__iv__258_len_length - __iv__259_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__686_children->buffer + 1 + __iv__258_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__684_buffer), (size_t)/*int*/(__iv__aave_batch__685_buffer_len));
		}
		__iv__aave_batch__661_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__661_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__686_children));
/*service_var 336==> zgenerator_crypt.buffer_len*/
/*service_var 335==> zgenerator_crypt.buffer*/
/*service_var <==337 zgenerator_crypt.buffer*/
/*service_var <==338 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__689_buffer_len=BN_num_bytes(__iv__aave_batch__519_transaction->r);
		__iv__aave_batch__688_buffer=malloc(__iv__aave_batch__689_buffer_len);
		__iv__aave_batch__689_buffer_len=BN_bn2bin(__iv__aave_batch__519_transaction->r, __iv__aave_batch__688_buffer);
		__iv__aave_batch__690_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__690_children->buffer_len=0;
		__iv__aave_batch__690_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__691_uvalue=__iv__aave_batch__688_buffer;
		if(__iv__aave_batch__689_buffer_len == 1 && __iv__aave_batch__691_uvalue[0] < 0x80){
			__iv__aave_batch__690_children->buffer_len=1;
			__iv__aave_batch__690_children->buffer=malloc(__iv__aave_batch__690_children->buffer_len);
			__iv__aave_batch__690_children->buffer[0]=__iv__aave_batch__691_uvalue[0];
		}
		else if(__iv__aave_batch__689_buffer_len < 56){
			__iv__aave_batch__690_children->buffer_len=1 + __iv__aave_batch__689_buffer_len;
			__iv__aave_batch__690_children->buffer=malloc(__iv__aave_batch__690_children->buffer_len);
			__iv__aave_batch__690_children->buffer[0]=0x80 + __iv__aave_batch__689_buffer_len;
			if(__iv__aave_batch__689_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__690_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__688_buffer), (size_t)/*int*/(__iv__aave_batch__689_buffer_len));
			}
		}
		else {
			int __iv__261_len_length;
			u_int64_t __iv__262_i;
			unsigned char* __iv__263_value_len_chr;
			__iv__261_len_length=1;
			for(__iv__262_i=(u_int64_t)/*int*/(__iv__aave_batch__689_buffer_len);__iv__262_i > 0xff;__iv__262_i=__iv__262_i / 0x100){
				__iv__261_len_length=__iv__261_len_length + 1;
			}
			__iv__aave_batch__690_children->buffer_len=1 + __iv__261_len_length + __iv__aave_batch__689_buffer_len;
			__iv__aave_batch__690_children->buffer=malloc(__iv__aave_batch__690_children->buffer_len);
			__iv__aave_batch__690_children->buffer[0]=0xb7 + __iv__261_len_length;
			__iv__263_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__689_buffer_len);
			for(__iv__262_i=(u_int64_t)/*int*/(__iv__261_len_length);__iv__262_i > 0;__iv__262_i=__iv__262_i - 1){
				__iv__aave_batch__690_children->buffer[__iv__262_i]=__iv__263_value_len_chr[__iv__261_len_length - __iv__262_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__690_children->buffer + 1 + __iv__261_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__688_buffer), (size_t)/*int*/(__iv__aave_batch__689_buffer_len));
		}
		__iv__aave_batch__661_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__661_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__690_children));
/*service_var 338==> zgenerator_crypt.buffer_len*/
/*service_var 337==> zgenerator_crypt.buffer*/
/*service_var <==339 zgenerator_crypt.buffer*/
/*service_var <==340 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__693_buffer_len=BN_num_bytes(__iv__aave_batch__519_transaction->s);
		__iv__aave_batch__692_buffer=malloc(__iv__aave_batch__693_buffer_len);
		__iv__aave_batch__693_buffer_len=BN_bn2bin(__iv__aave_batch__519_transaction->s, __iv__aave_batch__692_buffer);
		__iv__aave_batch__694_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__694_children->buffer_len=0;
		__iv__aave_batch__694_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__695_uvalue=__iv__aave_batch__692_buffer;
		if(__iv__aave_batch__693_buffer_len == 1 && __iv__aave_batch__695_uvalue[0] < 0x80){
			__iv__aave_batch__694_children->buffer_len=1;
			__iv__aave_batch__694_children->buffer=malloc(__iv__aave_batch__694_children->buffer_len);
			__iv__aave_batch__694_children->buffer[0]=__iv__aave_batch__695_uvalue[0];
		}
		else if(__iv__aave_batch__693_buffer_len < 56){
			__iv__aave_batch__694_children->buffer_len=1 + __iv__aave_batch__693_buffer_len;
			__iv__aave_batch__694_children->buffer=malloc(__iv__aave_batch__694_children->buffer_len);
			__iv__aave_batch__694_children->buffer[0]=0x80 + __iv__aave_batch__693_buffer_len;
			if(__iv__aave_batch__693_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__694_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__692_buffer), (size_t)/*int*/(__iv__aave_batch__693_buffer_len));
			}
		}
		else {
			int __iv__264_len_length;
			u_int64_t __iv__265_i;
			unsigned char* __iv__266_value_len_chr;
			__iv__264_len_length=1;
			for(__iv__265_i=(u_int64_t)/*int*/(__iv__aave_batch__693_buffer_len);__iv__265_i > 0xff;__iv__265_i=__iv__265_i / 0x100){
				__iv__264_len_length=__iv__264_len_length + 1;
			}
			__iv__aave_batch__694_children->buffer_len=1 + __iv__264_len_length + __iv__aave_batch__693_buffer_len;
			__iv__aave_batch__694_children->buffer=malloc(__iv__aave_batch__694_children->buffer_len);
			__iv__aave_batch__694_children->buffer[0]=0xb7 + __iv__264_len_length;
			__iv__266_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__693_buffer_len);
			for(__iv__265_i=(u_int64_t)/*int*/(__iv__264_len_length);__iv__265_i > 0;__iv__265_i=__iv__265_i - 1){
				__iv__aave_batch__694_children->buffer[__iv__265_i]=__iv__266_value_len_chr[__iv__264_len_length - __iv__265_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__694_children->buffer + 1 + __iv__264_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__692_buffer), (size_t)/*int*/(__iv__aave_batch__693_buffer_len));
		}
		__iv__aave_batch__661_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__661_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__694_children));
/*service_var 340==> zgenerator_crypt.buffer_len*/
/*service_var 339==> zgenerator_crypt.buffer*/
	}
/*service_var 324==> ethereum.rlp*/
/*service_var 323==> ethereum.transaction*/
/*service_var <==341 zgenerator_crypt.buffer*/
/*service_var <==342 zgenerator_crypt.buffer_len*/
/*service_var <==343 zgenerator_crypt.buffer*/
/*service_var <==344 zgenerator_crypt.buffer_len*/
	__iv__aave_batch__699_buffer_len=0;
	for(__iv__aave_batch__701_name=(collection)/*collection*/(__iv__aave_batch__661_rlp->children);__iv__aave_batch__701_name;__iv__aave_batch__701_name=(collection)/*z_list_item_type**/(__iv__aave_batch__701_name->next)){
		ethereum_rlp_list_type* __iv__aave_batch__700_children;
		__iv__aave_batch__700_children=(ethereum_rlp_list_type*)/*void**/(__iv__aave_batch__701_name->data);
		__iv__aave_batch__699_buffer_len=__iv__aave_batch__699_buffer_len + __iv__aave_batch__700_children->buffer_len;
	}
	__iv__aave_batch__698_buffer=malloc(__iv__aave_batch__699_buffer_len);
	__iv__aave_batch__702_buffer_ptr=__iv__aave_batch__698_buffer;
	for(__iv__aave_batch__703_name=(collection)/*collection*/(__iv__aave_batch__661_rlp->children);__iv__aave_batch__703_name;__iv__aave_batch__703_name=(collection)/*z_list_item_type**/(__iv__aave_batch__703_name->next)){
		ethereum_rlp_list_type* __iv__aave_batch__700_children;
		__iv__aave_batch__700_children=(ethereum_rlp_list_type*)/*void**/(__iv__aave_batch__703_name->data);
		memcpy(__iv__aave_batch__702_buffer_ptr, (const void*)/*unsigned char**/(__iv__aave_batch__700_children->buffer), (size_t)/*int*/(__iv__aave_batch__700_children->buffer_len));
		__iv__aave_batch__702_buffer_ptr=__iv__aave_batch__702_buffer_ptr + __iv__aave_batch__700_children->buffer_len;
	}
/*service_var <==345 zgenerator_crypt.buffer*/
/*service_var <==346 zgenerator_crypt.buffer_len*/
	__iv__aave_batch__705_buffer_len=0;
	__iv__aave_batch__704_buffer=(ethereum_rlp_string_type)/*void**/(NULL);
	if(__iv__aave_batch__699_buffer_len < 56){
		__iv__aave_batch__705_buffer_len=1 + __iv__aave_batch__699_buffer_len;
		__iv__aave_batch__704_buffer=malloc(__iv__aave_batch__705_buffer_len);
		__iv__aave_batch__704_buffer[0]=0xc0 + __iv__aave_batch__699_buffer_len;
		if(__iv__aave_batch__699_buffer_len){
			memcpy((void*)/*ethereum_rlp_string_type*/(__iv__aave_batch__704_buffer + 1), (const void*)/*void**/(__iv__aave_batch__698_buffer), (size_t)/*int*/(__iv__aave_batch__699_buffer_len));
		}
	}
	else {
		int __iv__267_len_length;
		u_int64_t __iv__268_i;
		unsigned char* __iv__269_value_len_chr;
		__iv__267_len_length=1;
		for(__iv__268_i=(u_int64_t)/*int*/(__iv__aave_batch__699_buffer_len);__iv__268_i > 0xff;__iv__268_i=__iv__268_i / 0x100){
			__iv__267_len_length=__iv__267_len_length + 1;
		}
		__iv__aave_batch__705_buffer_len=1 + __iv__267_len_length + __iv__aave_batch__699_buffer_len;
		__iv__aave_batch__704_buffer=malloc(__iv__aave_batch__705_buffer_len);
		__iv__aave_batch__704_buffer[0]=0xf7 + __iv__267_len_length;
		__iv__269_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__699_buffer_len);
		for(__iv__268_i=(u_int64_t)/*int*/(__iv__267_len_length);__iv__268_i > 0;__iv__268_i=__iv__268_i - 1){
			__iv__aave_batch__704_buffer[__iv__268_i]=__iv__269_value_len_chr[__iv__267_len_length - __iv__268_i];
		}
		memcpy((void*)/*ethereum_rlp_string_type*/(__iv__aave_batch__704_buffer + 1 + __iv__267_len_length), (const void*)/*void**/(__iv__aave_batch__698_buffer), (size_t)/*int*/(__iv__aave_batch__699_buffer_len));
	}
	__iv__238_tx=(string)/*void**/(NULL);
	if(__iv__aave_batch__704_buffer){
		unsigned char* __iv__aave_batch__706_u_str;
		int __iv__270_i;
		__iv__238_tx=malloc(__iv__aave_batch__705_buffer_len * 2 + 1);
		__iv__238_tx[0]='\0';
		__iv__238_tx[__iv__aave_batch__705_buffer_len * 2]='\0';
		__iv__aave_batch__706_u_str=(unsigned char*)/*string*/(__iv__238_tx);
		for(__iv__270_i=0;__iv__270_i < __iv__aave_batch__705_buffer_len;__iv__270_i=__iv__270_i + 1){
			unsigned char __iv__271_c;
			unsigned char __iv__272_c2;
			__iv__271_c=(unsigned char)/*char*/(__iv__aave_batch__704_buffer[__iv__270_i] & 0xf);
			if(__iv__271_c < 10){
				__iv__aave_batch__706_u_str[__iv__270_i * 2 + 1]=__iv__271_c + '0';
			}
			else {
				__iv__aave_batch__706_u_str[__iv__270_i * 2 + 1]=__iv__271_c - 10 + 'a';
			}
			__iv__272_c2=(unsigned char)/*char*/(__iv__aave_batch__704_buffer[__iv__270_i] >> 4);
			if(__iv__272_c2 < 0xa){
				__iv__aave_batch__706_u_str[__iv__270_i * 2]=__iv__272_c2 + '0';
			}
			else {
				__iv__aave_batch__706_u_str[__iv__270_i * 2]=__iv__272_c2 - 10 + 'a';
			}
		}
	}
	__iv__239_transaction_hash="";
	__iv__main__5_jsonrpc_id=__iv__main__5_jsonrpc_id + 1;
	__iv__aave_batch__708_id=int_to_string(__iv__main__5_jsonrpc_id, 0);
	__iv__aave_batch__707_json_post=calloc(1, sizeof(json_type));
/*service_var <==347 json_add.json*/
	__iv__aave_batch__709_json_object=calloc(1, sizeof(json_object_type));
	__iv__aave_batch__707_json_post->item=calloc(1, sizeof(pointerof_type));
	__iv__aave_batch__707_json_post->item->var=__iv__aave_batch__709_json_object;
	__iv__aave_batch__707_json_post->item->type_name="json_object_type*";
/*service_var <==348 json_add.json_object*/
	__iv__aave_batch__710_field=calloc(1, sizeof(json_object_item_type));
	__iv__aave_batch__709_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__709_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__710_field));
	__iv__aave_batch__710_field->name="json_rpc";
/*service_var <==349 json_add.json_object_field*/
	__iv__aave_batch__711_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==350 json_add.json*/
	__iv__aave_batch__711_item=calloc(1, sizeof(pointerof_type));
	__iv__aave_batch__711_item->var="2.0";
	__iv__aave_batch__711_item->type_name="string";
/*service_var 350==> json_add.json*/
	__iv__aave_batch__710_field->value=__iv__aave_batch__711_item;
/*service_var 349==> json_add.json_object_field*/
	__iv__aave_batch__712_field=calloc(1, sizeof(json_object_item_type));
	__iv__aave_batch__709_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__709_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__712_field));
	__iv__aave_batch__712_field->name="method";
/*service_var <==351 json_add.json_object_field*/
	__iv__aave_batch__713_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==352 json_add.json*/
	__iv__aave_batch__713_item=calloc(1, sizeof(pointerof_type));
	__iv__aave_batch__713_item->var="eth_sendRawTransaction";
	__iv__aave_batch__713_item->type_name="string";
/*service_var 352==> json_add.json*/
	__iv__aave_batch__712_field->value=__iv__aave_batch__713_item;
/*service_var 351==> json_add.json_object_field*/
	__iv__aave_batch__714_field=calloc(1, sizeof(json_object_item_type));
	__iv__aave_batch__709_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__709_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__714_field));
	__iv__aave_batch__714_field->name="params";
/*service_var <==353 json_add.json_object_field*/
	__iv__aave_batch__715_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==354 json_add.json*/
	__iv__aave_batch__716_json_array=calloc(1, sizeof(json_array_type));
	__iv__aave_batch__715_item=calloc(1, sizeof(pointerof_type));
	__iv__aave_batch__715_item->var=__iv__aave_batch__716_json_array;
	__iv__aave_batch__715_item->type_name="json_array_type*";
/*service_var <==355 json_add.json_array*/
	__iv__aave_batch__717_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==356 json_add.json*/
	__iv__aave_batch__717_item=calloc(1, sizeof(pointerof_type));
	__iv__aave_batch__718_tmp_var=strconcat((char*)/*string*/("0x"), (char*)/*string*/(__iv__238_tx));
	__iv__aave_batch__717_item->var=__iv__aave_batch__718_tmp_var;
	__iv__aave_batch__717_item->type_name="string";
/*service_var 356==> json_add.json*/
	if(__iv__aave_batch__717_item){
		__iv__aave_batch__716_json_array->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__716_json_array->item), (void*)/*pointerof_type**/(__iv__aave_batch__717_item));
	}
/*service_var 355==> json_add.json_array*/
/*service_var 354==> json_add.json*/
	__iv__aave_batch__714_field->value=__iv__aave_batch__715_item;
/*service_var 353==> json_add.json_object_field*/
	__iv__aave_batch__719_field=calloc(1, sizeof(json_object_item_type));
	__iv__aave_batch__709_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__709_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__719_field));
	__iv__aave_batch__719_field->name="id";
/*service_var <==357 json_add.json_object_field*/
	__iv__aave_batch__720_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==358 json_add.json*/
	__iv__aave_batch__720_item=calloc(1, sizeof(pointerof_type));
	__iv__aave_batch__720_item->var=__iv__aave_batch__708_id;
	__iv__aave_batch__720_item->type_name="string";
/*service_var 358==> json_add.json*/
	__iv__aave_batch__719_field->value=__iv__aave_batch__720_item;
/*service_var 357==> json_add.json_object_field*/
/*service_var 348==> json_add.json_object*/
/*service_var 347==> json_add.json*/
	__iv__aave_batch__721_json_post_str=(string)/*void**/(NULL);
	if(__iv__aave_batch__707_json_post && __iv__aave_batch__707_json_post->item){
		stringlist __iv__273_str_list;
		int __iv__aave_batch__722_total_len;
		collection __iv__aave_batch__724_list_name;
		collection __iv__aave_batch__725_name;
		int __iv__aave_batch__726_string_index;
		collection __iv__aave_batch__727_name;
		__iv__273_str_list=json_to_stringlist(__iv__aave_batch__707_json_post->item, (stringlist)/*void**/(NULL));
		__iv__aave_batch__722_total_len=0;
		__iv__aave_batch__724_list_name=(collection)/*stringlist*/(__iv__273_str_list);
		for(__iv__aave_batch__725_name=(collection)/*collection*/(__iv__aave_batch__724_list_name);__iv__aave_batch__725_name;__iv__aave_batch__725_name=(collection)/*z_list_item_type**/(__iv__aave_batch__725_name->next)){
			stringlist_item_type* __iv__aave_batch__723_stringlist_item;
			__iv__aave_batch__723_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__725_name->data);
			__iv__aave_batch__722_total_len=__iv__aave_batch__722_total_len + __iv__aave_batch__723_stringlist_item->len;
		}
		__iv__aave_batch__721_json_post_str=newString(__iv__aave_batch__722_total_len);
		__iv__aave_batch__726_string_index=0;
		for(__iv__aave_batch__727_name=(collection)/*collection*/(__iv__aave_batch__724_list_name);__iv__aave_batch__727_name;__iv__aave_batch__727_name=(collection)/*z_list_item_type**/(__iv__aave_batch__727_name->next)){
			stringlist_item_type* __iv__aave_batch__723_stringlist_item;
			int __iv__274_stringlist_item_index;
			__iv__aave_batch__723_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__727_name->data);
			for(__iv__274_stringlist_item_index=0;__iv__274_stringlist_item_index < __iv__aave_batch__723_stringlist_item->len && __iv__aave_batch__723_stringlist_item->str[__iv__274_stringlist_item_index] != '\0';__iv__274_stringlist_item_index=__iv__274_stringlist_item_index + 1){
				__iv__aave_batch__721_json_post_str[__iv__aave_batch__726_string_index]=__iv__aave_batch__723_stringlist_item->str[__iv__274_stringlist_item_index];
				__iv__aave_batch__726_string_index=__iv__aave_batch__726_string_index + 1;
			}
		}
		__iv__aave_batch__721_json_post_str[__iv__aave_batch__726_string_index]='\0';
	}
	__iv__aave_batch__728_json=(json_type*)/*void**/(NULL);
	__iv__aave_batch__729_ret_str=(string)/*void**/(NULL);
	if(0){
		rest_html_write_to_str((char*)/*void**/(NULL), (size_t)/*int*/(0), (size_t)/*int*/(0), (rest_html_write_struct*)/*void**/(NULL));
	}
	__iv__aave_batch__730_curl_ptr=curl_easy_init();
/*service_var <==359 rest_html.curl_ptr*/
	if(__iv__aave_batch__730_curl_ptr){
		string __iv__aave_batch__731_query_url;
		struct curl_slist* __iv__aave_batch__734_header;
		string __iv__aave_batch__735_tmp_var;
		string __iv__aave_batch__736_tmp_var;
		string __iv__aave_batch__737_tmp_var;
		string __iv__aave_batch__738_tmp_var;
		rest_html_write_struct* __iv__275_user_data;
		string __iv__aave_batch__739_error_buffer;
		FILE* __iv__aave_batch__740_file_debug;
		__iv__aave_batch__731_query_url=(string)/*void**/(NULL);
/*service_var <==360 rest_html.query_url*/
/*service_var 360==> rest_html.query_url*/
		if(__iv__aave_batch__731_query_url){
			string __iv__aave_batch__732_tmp_var;
			string __iv__aave_batch__733_tmp_var;
			__iv__aave_batch__732_tmp_var=strconcat((char*)/*string*/(__iv__main__1_infura_url), (char*)/*string*/("?"));
			__iv__aave_batch__733_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__732_tmp_var), (char*)/*string*/(__iv__aave_batch__731_query_url));
			__iv__aave_batch__731_query_url=__iv__aave_batch__733_tmp_var;
		}
		else {
			__iv__aave_batch__731_query_url=__iv__main__1_infura_url;
		}
		if(__iv__aave_batch__731_query_url){
			curl_easy_setopt(__iv__aave_batch__730_curl_ptr, CURLOPT_URL, (void*)/*string*/(__iv__aave_batch__731_query_url));
		}
		__iv__aave_batch__734_header=(struct curl_slist*)/*void**/(NULL);
/*service_var <==361 rest_html.header*/
		__iv__aave_batch__735_tmp_var=strconcat((char*)/*string*/("Content-Type"), (char*)/*string*/(": "));
		__iv__aave_batch__736_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__735_tmp_var), (char*)/*string*/("application/json"));
		__iv__aave_batch__734_header=curl_slist_append(__iv__aave_batch__734_header, __iv__aave_batch__736_tmp_var);
		__iv__aave_batch__737_tmp_var=strconcat((char*)/*string*/("Accept"), (char*)/*string*/(": "));
		__iv__aave_batch__738_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__737_tmp_var), (char*)/*string*/("application/json"));
		__iv__aave_batch__734_header=curl_slist_append(__iv__aave_batch__734_header, __iv__aave_batch__738_tmp_var);
/*service_var 361==> rest_html.header*/
		if(__iv__aave_batch__734_header){
			curl_easy_setopt(__iv__aave_batch__730_curl_ptr, CURLOPT_HTTPHEADER, (void*)/*struct curl_slist**/(__iv__aave_batch__734_header));
		}
		if("Zipli"){
			curl_easy_setopt(__iv__aave_batch__730_curl_ptr, CURLOPT_USERAGENT, (void*)/*string*/("Zipli"));
		}
		curl_easy_setopt(__iv__aave_batch__730_curl_ptr, CURLOPT_CUSTOMREQUEST, (void*)/*string*/("POST"));
		if(__iv__aave_batch__721_json_post_str){
			curl_easy_setopt(__iv__aave_batch__730_curl_ptr, CURLOPT_POSTFIELDS, (void*)/*string*/(__iv__aave_batch__721_json_post_str));
		}
		curl_easy_setopt(__iv__aave_batch__730_curl_ptr, CURLOPT_WRITEFUNCTION, (void*)/*void*/(rest_html_write_to_str));
		__iv__275_user_data=calloc(1, sizeof(rest_html_write_struct));
		curl_easy_setopt(__iv__aave_batch__730_curl_ptr, CURLOPT_WRITEDATA, (void*)/*rest_html_write_struct**/(__iv__275_user_data));
		__iv__aave_batch__739_error_buffer=newString(CURL_ERROR_SIZE);
		curl_easy_setopt(__iv__aave_batch__730_curl_ptr, CURLOPT_ERRORBUFFER, (void*)/*string*/(__iv__aave_batch__739_error_buffer));
		curl_easy_setopt(__iv__aave_batch__730_curl_ptr, CURLOPT_VERBOSE, (void*)/*int*/(1L));
		__iv__aave_batch__740_file_debug=fopen((char*)/*string*/("/tmp/rest_debug.txt"), (char*)/*string*/("w"));
		curl_easy_setopt(__iv__aave_batch__730_curl_ptr, CURLOPT_STDERR, (void*)/*FILE**/(__iv__aave_batch__740_file_debug));
		curl_easy_perform(__iv__aave_batch__730_curl_ptr);
		print_html_text_function(prog, __iv__aave_batch__739_error_buffer);
		print_html_br(prog);
		fclose(__iv__aave_batch__740_file_debug);
		curl_easy_cleanup(__iv__aave_batch__730_curl_ptr);
		if(__iv__275_user_data->str){
			int __iv__aave_batch__741_total_len;
			collection __iv__aave_batch__743_list_name;
			collection __iv__aave_batch__744_name;
			int __iv__aave_batch__745_string_index;
			collection __iv__aave_batch__746_name;
			__iv__aave_batch__741_total_len=0;
			__iv__aave_batch__743_list_name=(collection)/*stringlist*/(__iv__275_user_data->str);
			for(__iv__aave_batch__744_name=(collection)/*collection*/(__iv__aave_batch__743_list_name);__iv__aave_batch__744_name;__iv__aave_batch__744_name=(collection)/*z_list_item_type**/(__iv__aave_batch__744_name->next)){
				stringlist_item_type* __iv__aave_batch__742_stringlist_item;
				__iv__aave_batch__742_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__744_name->data);
				__iv__aave_batch__741_total_len=__iv__aave_batch__741_total_len + __iv__aave_batch__742_stringlist_item->len;
			}
			__iv__aave_batch__729_ret_str=newString(__iv__aave_batch__741_total_len);
			__iv__aave_batch__745_string_index=0;
			for(__iv__aave_batch__746_name=(collection)/*collection*/(__iv__aave_batch__743_list_name);__iv__aave_batch__746_name;__iv__aave_batch__746_name=(collection)/*z_list_item_type**/(__iv__aave_batch__746_name->next)){
				stringlist_item_type* __iv__aave_batch__742_stringlist_item;
				int __iv__276_stringlist_item_index;
				__iv__aave_batch__742_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__746_name->data);
				for(__iv__276_stringlist_item_index=0;__iv__276_stringlist_item_index < __iv__aave_batch__742_stringlist_item->len && __iv__aave_batch__742_stringlist_item->str[__iv__276_stringlist_item_index] != '\0';__iv__276_stringlist_item_index=__iv__276_stringlist_item_index + 1){
					__iv__aave_batch__729_ret_str[__iv__aave_batch__745_string_index]=__iv__aave_batch__742_stringlist_item->str[__iv__276_stringlist_item_index];
					__iv__aave_batch__745_string_index=__iv__aave_batch__745_string_index + 1;
				}
			}
			__iv__aave_batch__729_ret_str[__iv__aave_batch__745_string_index]='\0';
		}
	}
/*service_var 359==> rest_html.curl_ptr*/
	if(__iv__aave_batch__729_ret_str){
		__iv__aave_batch__728_json=json_parse(__iv__aave_batch__729_ret_str);
	}
	__iv__aave_batch__747_json_str=(string)/*void**/(NULL);
	if(__iv__aave_batch__728_json && __iv__aave_batch__728_json->item){
		stringlist __iv__277_str_list;
		int __iv__aave_batch__748_total_len;
		collection __iv__aave_batch__750_list_name;
		collection __iv__aave_batch__751_name;
		int __iv__aave_batch__752_string_index;
		collection __iv__aave_batch__753_name;
		__iv__277_str_list=json_to_stringlist(__iv__aave_batch__728_json->item, (stringlist)/*void**/(NULL));
		__iv__aave_batch__748_total_len=0;
		__iv__aave_batch__750_list_name=(collection)/*stringlist*/(__iv__277_str_list);
		for(__iv__aave_batch__751_name=(collection)/*collection*/(__iv__aave_batch__750_list_name);__iv__aave_batch__751_name;__iv__aave_batch__751_name=(collection)/*z_list_item_type**/(__iv__aave_batch__751_name->next)){
			stringlist_item_type* __iv__aave_batch__749_stringlist_item;
			__iv__aave_batch__749_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__751_name->data);
			__iv__aave_batch__748_total_len=__iv__aave_batch__748_total_len + __iv__aave_batch__749_stringlist_item->len;
		}
		__iv__aave_batch__747_json_str=newString(__iv__aave_batch__748_total_len);
		__iv__aave_batch__752_string_index=0;
		for(__iv__aave_batch__753_name=(collection)/*collection*/(__iv__aave_batch__750_list_name);__iv__aave_batch__753_name;__iv__aave_batch__753_name=(collection)/*z_list_item_type**/(__iv__aave_batch__753_name->next)){
			stringlist_item_type* __iv__aave_batch__749_stringlist_item;
			int __iv__278_stringlist_item_index;
			__iv__aave_batch__749_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__753_name->data);
			for(__iv__278_stringlist_item_index=0;__iv__278_stringlist_item_index < __iv__aave_batch__749_stringlist_item->len && __iv__aave_batch__749_stringlist_item->str[__iv__278_stringlist_item_index] != '\0';__iv__278_stringlist_item_index=__iv__278_stringlist_item_index + 1){
				__iv__aave_batch__747_json_str[__iv__aave_batch__752_string_index]=__iv__aave_batch__749_stringlist_item->str[__iv__278_stringlist_item_index];
				__iv__aave_batch__752_string_index=__iv__aave_batch__752_string_index + 1;
			}
		}
		__iv__aave_batch__747_json_str[__iv__aave_batch__752_string_index]='\0';
	}
	__iv__aave_batch__755_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__747_json_str), (char*)/*string*/("\n"));
	__iv__aave_batch__754_to_print=__iv__aave_batch__755_tmp_var;
	if(__iv__aave_batch__754_to_print){
		printf((char*)/*string*/("%s"), __iv__aave_batch__754_to_print);
	}
/*service_var <==362 json_easy.json_data*/
	__iv__aave_batch__756_json_data=json_parse(__iv__aave_batch__747_json_str);
	if(__iv__aave_batch__756_json_data){
/*service_var <==363 json_easy.json_data*/
/*service_var <==364 json_easy.json_data_name*/
		if(__iv__aave_batch__756_json_data->item && __iv__aave_batch__756_json_data->item->type_name){
			int __iv__aave_batch__760_tmp_var;
			__iv__aave_batch__760_tmp_var=string_equal((const char*)/*string*/(__iv__aave_batch__756_json_data->item->type_name), (const char*)/*string*/("json_object_type*"));
			if(__iv__aave_batch__760_tmp_var){
				json_object_type* __iv__aave_batch__759_json_data_parent_object;
				collection __iv__aave_batch__762_name;
				__iv__aave_batch__759_json_data_parent_object=(json_object_type*)/*void**/(__iv__aave_batch__756_json_data->item->var);
				for(__iv__aave_batch__762_name=(collection)/*collection*/(__iv__aave_batch__759_json_data_parent_object->item);__iv__aave_batch__762_name;__iv__aave_batch__762_name=(collection)/*z_list_item_type**/(__iv__aave_batch__762_name->next)){
					json_object_item_type* __iv__aave_batch__761_item;
					string __iv__aave_batch__758_name;
					pointerof_type* __iv__aave_batch__757_json_data;
					int __iv__aave_batch__763_tmp_var;
					__iv__aave_batch__761_item=(json_object_item_type*)/*void**/(__iv__aave_batch__762_name->data);
					__iv__aave_batch__758_name=__iv__aave_batch__761_item->name;
					__iv__aave_batch__757_json_data=__iv__aave_batch__761_item->value;
					__iv__aave_batch__763_tmp_var=string_equal_or_null((const char*)/*string*/("result"), (const char*)/*string*/(__iv__aave_batch__758_name));
					if(__iv__aave_batch__763_tmp_var){
						if(__iv__aave_batch__757_json_data && __iv__aave_batch__757_json_data->type_name){
							int __iv__aave_batch__764_tmp_var;
							__iv__aave_batch__764_tmp_var=string_equal((const char*)/*string*/(__iv__aave_batch__757_json_data->type_name), (const char*)/*string*/("string"));
							if(__iv__aave_batch__764_tmp_var){
								__iv__239_transaction_hash=(string)/*void**/(__iv__aave_batch__757_json_data->var);
							}
						}
					}
				}
			}
		}
/*service_var 364==> json_easy.json_data_name*/
/*service_var 363==> json_easy.json_data*/
	}
/*service_var 362==> json_easy.json_data*/
	__iv__aave_batch__766_tmp_var=strconcat((char*)/*string*/("transaction sent : "), (char*)/*string*/(__iv__239_transaction_hash));
	__iv__aave_batch__767_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__766_tmp_var), (char*)/*string*/("\n"));
	__iv__aave_batch__765_to_print=__iv__aave_batch__767_tmp_var;
	if(__iv__aave_batch__765_to_print){
		printf((char*)/*string*/("%s"), __iv__aave_batch__765_to_print);
	}
/*service_var 346==> zgenerator_crypt.buffer_len*/
/*service_var 345==> zgenerator_crypt.buffer*/
/*service_var 344==> zgenerator_crypt.buffer_len*/
/*service_var 343==> zgenerator_crypt.buffer*/
/*service_var 342==> zgenerator_crypt.buffer_len*/
/*service_var 341==> zgenerator_crypt.buffer*/
	printf((char*)/*string*/("%s"), "\n\nAAVE withdraw 0.1 ETH\n\n");
	__iv__aave_batch__768_gas_price=(string)/*void**/(NULL);
	if(__iv__main__27_wallet_info->gas_price){
		__iv__aave_batch__768_gas_price=__iv__main__27_wallet_info->gas_price;
	}
	else {
		string __iv__aave_batch__770_id;
		json_type* __iv__aave_batch__769_json_post;
		json_object_type* __iv__aave_batch__771_json_object;
		json_object_item_type* __iv__aave_batch__772_field;
		pointerof_type* __iv__aave_batch__773_item;
		json_object_item_type* __iv__aave_batch__774_field;
		pointerof_type* __iv__aave_batch__775_item;
		json_object_item_type* __iv__aave_batch__776_field;
		pointerof_type* __iv__aave_batch__777_item;
		json_array_type* __iv__aave_batch__778_json_array;
		json_object_item_type* __iv__aave_batch__779_field;
		pointerof_type* __iv__aave_batch__780_item;
		string __iv__aave_batch__781_json_post_str;
		json_type* __iv__aave_batch__788_json;
		string __iv__aave_batch__789_ret_str;
		CURL* __iv__aave_batch__790_curl_ptr;
		string __iv__aave_batch__807_json_str;
		string __iv__aave_batch__815_tmp_var;
		string __iv__aave_batch__814_to_print;
		json_type* __iv__aave_batch__816_json_data;
		__iv__aave_batch__768_gas_price="";
		__iv__main__5_jsonrpc_id=__iv__main__5_jsonrpc_id + 1;
		__iv__aave_batch__770_id=int_to_string(__iv__main__5_jsonrpc_id, 0);
		__iv__aave_batch__769_json_post=calloc(1, sizeof(json_type));
/*service_var <==365 json_add.json*/
		__iv__aave_batch__771_json_object=calloc(1, sizeof(json_object_type));
		__iv__aave_batch__769_json_post->item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__769_json_post->item->var=__iv__aave_batch__771_json_object;
		__iv__aave_batch__769_json_post->item->type_name="json_object_type*";
/*service_var <==366 json_add.json_object*/
		__iv__aave_batch__772_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__771_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__771_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__772_field));
		__iv__aave_batch__772_field->name="json_rpc";
/*service_var <==367 json_add.json_object_field*/
		__iv__aave_batch__773_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==368 json_add.json*/
		__iv__aave_batch__773_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__773_item->var="2.0";
		__iv__aave_batch__773_item->type_name="string";
/*service_var 368==> json_add.json*/
		__iv__aave_batch__772_field->value=__iv__aave_batch__773_item;
/*service_var 367==> json_add.json_object_field*/
		__iv__aave_batch__774_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__771_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__771_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__774_field));
		__iv__aave_batch__774_field->name="method";
/*service_var <==369 json_add.json_object_field*/
		__iv__aave_batch__775_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==370 json_add.json*/
		__iv__aave_batch__775_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__775_item->var="eth_gasPrice";
		__iv__aave_batch__775_item->type_name="string";
/*service_var 370==> json_add.json*/
		__iv__aave_batch__774_field->value=__iv__aave_batch__775_item;
/*service_var 369==> json_add.json_object_field*/
		__iv__aave_batch__776_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__771_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__771_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__776_field));
		__iv__aave_batch__776_field->name="params";
/*service_var <==371 json_add.json_object_field*/
		__iv__aave_batch__777_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==372 json_add.json*/
		__iv__aave_batch__778_json_array=calloc(1, sizeof(json_array_type));
		__iv__aave_batch__777_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__777_item->var=__iv__aave_batch__778_json_array;
		__iv__aave_batch__777_item->type_name="json_array_type*";
/*service_var 372==> json_add.json*/
		__iv__aave_batch__776_field->value=__iv__aave_batch__777_item;
/*service_var 371==> json_add.json_object_field*/
		__iv__aave_batch__779_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__771_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__771_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__779_field));
		__iv__aave_batch__779_field->name="id";
/*service_var <==373 json_add.json_object_field*/
		__iv__aave_batch__780_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==374 json_add.json*/
		__iv__aave_batch__780_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__780_item->var=__iv__aave_batch__770_id;
		__iv__aave_batch__780_item->type_name="string";
/*service_var 374==> json_add.json*/
		__iv__aave_batch__779_field->value=__iv__aave_batch__780_item;
/*service_var 373==> json_add.json_object_field*/
/*service_var 366==> json_add.json_object*/
/*service_var 365==> json_add.json*/
		__iv__aave_batch__781_json_post_str=(string)/*void**/(NULL);
		if(__iv__aave_batch__769_json_post && __iv__aave_batch__769_json_post->item){
			stringlist __iv__279_str_list;
			int __iv__aave_batch__782_total_len;
			collection __iv__aave_batch__784_list_name;
			collection __iv__aave_batch__785_name;
			int __iv__aave_batch__786_string_index;
			collection __iv__aave_batch__787_name;
			__iv__279_str_list=json_to_stringlist(__iv__aave_batch__769_json_post->item, (stringlist)/*void**/(NULL));
			__iv__aave_batch__782_total_len=0;
			__iv__aave_batch__784_list_name=(collection)/*stringlist*/(__iv__279_str_list);
			for(__iv__aave_batch__785_name=(collection)/*collection*/(__iv__aave_batch__784_list_name);__iv__aave_batch__785_name;__iv__aave_batch__785_name=(collection)/*z_list_item_type**/(__iv__aave_batch__785_name->next)){
				stringlist_item_type* __iv__aave_batch__783_stringlist_item;
				__iv__aave_batch__783_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__785_name->data);
				__iv__aave_batch__782_total_len=__iv__aave_batch__782_total_len + __iv__aave_batch__783_stringlist_item->len;
			}
			__iv__aave_batch__781_json_post_str=newString(__iv__aave_batch__782_total_len);
			__iv__aave_batch__786_string_index=0;
			for(__iv__aave_batch__787_name=(collection)/*collection*/(__iv__aave_batch__784_list_name);__iv__aave_batch__787_name;__iv__aave_batch__787_name=(collection)/*z_list_item_type**/(__iv__aave_batch__787_name->next)){
				stringlist_item_type* __iv__aave_batch__783_stringlist_item;
				int __iv__280_stringlist_item_index;
				__iv__aave_batch__783_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__787_name->data);
				for(__iv__280_stringlist_item_index=0;__iv__280_stringlist_item_index < __iv__aave_batch__783_stringlist_item->len && __iv__aave_batch__783_stringlist_item->str[__iv__280_stringlist_item_index] != '\0';__iv__280_stringlist_item_index=__iv__280_stringlist_item_index + 1){
					__iv__aave_batch__781_json_post_str[__iv__aave_batch__786_string_index]=__iv__aave_batch__783_stringlist_item->str[__iv__280_stringlist_item_index];
					__iv__aave_batch__786_string_index=__iv__aave_batch__786_string_index + 1;
				}
			}
			__iv__aave_batch__781_json_post_str[__iv__aave_batch__786_string_index]='\0';
		}
		__iv__aave_batch__788_json=(json_type*)/*void**/(NULL);
		__iv__aave_batch__789_ret_str=(string)/*void**/(NULL);
		if(0){
			rest_html_write_to_str((char*)/*void**/(NULL), (size_t)/*int*/(0), (size_t)/*int*/(0), (rest_html_write_struct*)/*void**/(NULL));
		}
		__iv__aave_batch__790_curl_ptr=curl_easy_init();
/*service_var <==375 rest_html.curl_ptr*/
		if(__iv__aave_batch__790_curl_ptr){
			string __iv__aave_batch__791_query_url;
			struct curl_slist* __iv__aave_batch__794_header;
			string __iv__aave_batch__795_tmp_var;
			string __iv__aave_batch__796_tmp_var;
			string __iv__aave_batch__797_tmp_var;
			string __iv__aave_batch__798_tmp_var;
			rest_html_write_struct* __iv__281_user_data;
			string __iv__aave_batch__799_error_buffer;
			FILE* __iv__aave_batch__800_file_debug;
			__iv__aave_batch__791_query_url=(string)/*void**/(NULL);
/*service_var <==376 rest_html.query_url*/
/*service_var 376==> rest_html.query_url*/
			if(__iv__aave_batch__791_query_url){
				string __iv__aave_batch__792_tmp_var;
				string __iv__aave_batch__793_tmp_var;
				__iv__aave_batch__792_tmp_var=strconcat((char*)/*string*/(__iv__main__1_infura_url), (char*)/*string*/("?"));
				__iv__aave_batch__793_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__792_tmp_var), (char*)/*string*/(__iv__aave_batch__791_query_url));
				__iv__aave_batch__791_query_url=__iv__aave_batch__793_tmp_var;
			}
			else {
				__iv__aave_batch__791_query_url=__iv__main__1_infura_url;
			}
			if(__iv__aave_batch__791_query_url){
				curl_easy_setopt(__iv__aave_batch__790_curl_ptr, CURLOPT_URL, (void*)/*string*/(__iv__aave_batch__791_query_url));
			}
			__iv__aave_batch__794_header=(struct curl_slist*)/*void**/(NULL);
/*service_var <==377 rest_html.header*/
			__iv__aave_batch__795_tmp_var=strconcat((char*)/*string*/("Content-Type"), (char*)/*string*/(": "));
			__iv__aave_batch__796_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__795_tmp_var), (char*)/*string*/("application/json"));
			__iv__aave_batch__794_header=curl_slist_append(__iv__aave_batch__794_header, __iv__aave_batch__796_tmp_var);
			__iv__aave_batch__797_tmp_var=strconcat((char*)/*string*/("Accept"), (char*)/*string*/(": "));
			__iv__aave_batch__798_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__797_tmp_var), (char*)/*string*/("application/json"));
			__iv__aave_batch__794_header=curl_slist_append(__iv__aave_batch__794_header, __iv__aave_batch__798_tmp_var);
/*service_var 377==> rest_html.header*/
			if(__iv__aave_batch__794_header){
				curl_easy_setopt(__iv__aave_batch__790_curl_ptr, CURLOPT_HTTPHEADER, (void*)/*struct curl_slist**/(__iv__aave_batch__794_header));
			}
			if("Zipli"){
				curl_easy_setopt(__iv__aave_batch__790_curl_ptr, CURLOPT_USERAGENT, (void*)/*string*/("Zipli"));
			}
			curl_easy_setopt(__iv__aave_batch__790_curl_ptr, CURLOPT_CUSTOMREQUEST, (void*)/*string*/("POST"));
			if(__iv__aave_batch__781_json_post_str){
				curl_easy_setopt(__iv__aave_batch__790_curl_ptr, CURLOPT_POSTFIELDS, (void*)/*string*/(__iv__aave_batch__781_json_post_str));
			}
			curl_easy_setopt(__iv__aave_batch__790_curl_ptr, CURLOPT_WRITEFUNCTION, (void*)/*void*/(rest_html_write_to_str));
			__iv__281_user_data=calloc(1, sizeof(rest_html_write_struct));
			curl_easy_setopt(__iv__aave_batch__790_curl_ptr, CURLOPT_WRITEDATA, (void*)/*rest_html_write_struct**/(__iv__281_user_data));
			__iv__aave_batch__799_error_buffer=newString(CURL_ERROR_SIZE);
			curl_easy_setopt(__iv__aave_batch__790_curl_ptr, CURLOPT_ERRORBUFFER, (void*)/*string*/(__iv__aave_batch__799_error_buffer));
			curl_easy_setopt(__iv__aave_batch__790_curl_ptr, CURLOPT_VERBOSE, (void*)/*int*/(1L));
			__iv__aave_batch__800_file_debug=fopen((char*)/*string*/("/tmp/rest_debug.txt"), (char*)/*string*/("w"));
			curl_easy_setopt(__iv__aave_batch__790_curl_ptr, CURLOPT_STDERR, (void*)/*FILE**/(__iv__aave_batch__800_file_debug));
			curl_easy_perform(__iv__aave_batch__790_curl_ptr);
			print_html_text_function(prog, __iv__aave_batch__799_error_buffer);
			print_html_br(prog);
			fclose(__iv__aave_batch__800_file_debug);
			curl_easy_cleanup(__iv__aave_batch__790_curl_ptr);
			if(__iv__281_user_data->str){
				int __iv__aave_batch__801_total_len;
				collection __iv__aave_batch__803_list_name;
				collection __iv__aave_batch__804_name;
				int __iv__aave_batch__805_string_index;
				collection __iv__aave_batch__806_name;
				__iv__aave_batch__801_total_len=0;
				__iv__aave_batch__803_list_name=(collection)/*stringlist*/(__iv__281_user_data->str);
				for(__iv__aave_batch__804_name=(collection)/*collection*/(__iv__aave_batch__803_list_name);__iv__aave_batch__804_name;__iv__aave_batch__804_name=(collection)/*z_list_item_type**/(__iv__aave_batch__804_name->next)){
					stringlist_item_type* __iv__aave_batch__802_stringlist_item;
					__iv__aave_batch__802_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__804_name->data);
					__iv__aave_batch__801_total_len=__iv__aave_batch__801_total_len + __iv__aave_batch__802_stringlist_item->len;
				}
				__iv__aave_batch__789_ret_str=newString(__iv__aave_batch__801_total_len);
				__iv__aave_batch__805_string_index=0;
				for(__iv__aave_batch__806_name=(collection)/*collection*/(__iv__aave_batch__803_list_name);__iv__aave_batch__806_name;__iv__aave_batch__806_name=(collection)/*z_list_item_type**/(__iv__aave_batch__806_name->next)){
					stringlist_item_type* __iv__aave_batch__802_stringlist_item;
					int __iv__282_stringlist_item_index;
					__iv__aave_batch__802_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__806_name->data);
					for(__iv__282_stringlist_item_index=0;__iv__282_stringlist_item_index < __iv__aave_batch__802_stringlist_item->len && __iv__aave_batch__802_stringlist_item->str[__iv__282_stringlist_item_index] != '\0';__iv__282_stringlist_item_index=__iv__282_stringlist_item_index + 1){
						__iv__aave_batch__789_ret_str[__iv__aave_batch__805_string_index]=__iv__aave_batch__802_stringlist_item->str[__iv__282_stringlist_item_index];
						__iv__aave_batch__805_string_index=__iv__aave_batch__805_string_index + 1;
					}
				}
				__iv__aave_batch__789_ret_str[__iv__aave_batch__805_string_index]='\0';
			}
		}
/*service_var 375==> rest_html.curl_ptr*/
		if(__iv__aave_batch__789_ret_str){
			__iv__aave_batch__788_json=json_parse(__iv__aave_batch__789_ret_str);
		}
		__iv__aave_batch__807_json_str=(string)/*void**/(NULL);
		if(__iv__aave_batch__788_json && __iv__aave_batch__788_json->item){
			stringlist __iv__283_str_list;
			int __iv__aave_batch__808_total_len;
			collection __iv__aave_batch__810_list_name;
			collection __iv__aave_batch__811_name;
			int __iv__aave_batch__812_string_index;
			collection __iv__aave_batch__813_name;
			__iv__283_str_list=json_to_stringlist(__iv__aave_batch__788_json->item, (stringlist)/*void**/(NULL));
			__iv__aave_batch__808_total_len=0;
			__iv__aave_batch__810_list_name=(collection)/*stringlist*/(__iv__283_str_list);
			for(__iv__aave_batch__811_name=(collection)/*collection*/(__iv__aave_batch__810_list_name);__iv__aave_batch__811_name;__iv__aave_batch__811_name=(collection)/*z_list_item_type**/(__iv__aave_batch__811_name->next)){
				stringlist_item_type* __iv__aave_batch__809_stringlist_item;
				__iv__aave_batch__809_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__811_name->data);
				__iv__aave_batch__808_total_len=__iv__aave_batch__808_total_len + __iv__aave_batch__809_stringlist_item->len;
			}
			__iv__aave_batch__807_json_str=newString(__iv__aave_batch__808_total_len);
			__iv__aave_batch__812_string_index=0;
			for(__iv__aave_batch__813_name=(collection)/*collection*/(__iv__aave_batch__810_list_name);__iv__aave_batch__813_name;__iv__aave_batch__813_name=(collection)/*z_list_item_type**/(__iv__aave_batch__813_name->next)){
				stringlist_item_type* __iv__aave_batch__809_stringlist_item;
				int __iv__284_stringlist_item_index;
				__iv__aave_batch__809_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__813_name->data);
				for(__iv__284_stringlist_item_index=0;__iv__284_stringlist_item_index < __iv__aave_batch__809_stringlist_item->len && __iv__aave_batch__809_stringlist_item->str[__iv__284_stringlist_item_index] != '\0';__iv__284_stringlist_item_index=__iv__284_stringlist_item_index + 1){
					__iv__aave_batch__807_json_str[__iv__aave_batch__812_string_index]=__iv__aave_batch__809_stringlist_item->str[__iv__284_stringlist_item_index];
					__iv__aave_batch__812_string_index=__iv__aave_batch__812_string_index + 1;
				}
			}
			__iv__aave_batch__807_json_str[__iv__aave_batch__812_string_index]='\0';
		}
		__iv__aave_batch__815_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__807_json_str), (char*)/*string*/("\n"));
		__iv__aave_batch__814_to_print=__iv__aave_batch__815_tmp_var;
		if(__iv__aave_batch__814_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__814_to_print);
		}
/*service_var <==378 json_easy.json_data*/
		__iv__aave_batch__816_json_data=json_parse(__iv__aave_batch__807_json_str);
		if(__iv__aave_batch__816_json_data){
/*service_var <==379 json_easy.json_data*/
/*service_var <==380 json_easy.json_data_name*/
			if(__iv__aave_batch__816_json_data->item && __iv__aave_batch__816_json_data->item->type_name){
				int __iv__aave_batch__820_tmp_var;
				__iv__aave_batch__820_tmp_var=string_equal((const char*)/*string*/(__iv__aave_batch__816_json_data->item->type_name), (const char*)/*string*/("json_object_type*"));
				if(__iv__aave_batch__820_tmp_var){
					json_object_type* __iv__aave_batch__819_json_data_parent_object;
					collection __iv__aave_batch__822_name;
					__iv__aave_batch__819_json_data_parent_object=(json_object_type*)/*void**/(__iv__aave_batch__816_json_data->item->var);
					for(__iv__aave_batch__822_name=(collection)/*collection*/(__iv__aave_batch__819_json_data_parent_object->item);__iv__aave_batch__822_name;__iv__aave_batch__822_name=(collection)/*z_list_item_type**/(__iv__aave_batch__822_name->next)){
						json_object_item_type* __iv__aave_batch__821_item;
						string __iv__aave_batch__818_name;
						pointerof_type* __iv__aave_batch__817_json_data;
						int __iv__aave_batch__823_tmp_var;
						__iv__aave_batch__821_item=(json_object_item_type*)/*void**/(__iv__aave_batch__822_name->data);
						__iv__aave_batch__818_name=__iv__aave_batch__821_item->name;
						__iv__aave_batch__817_json_data=__iv__aave_batch__821_item->value;
						__iv__aave_batch__823_tmp_var=string_equal_or_null((const char*)/*string*/("result"), (const char*)/*string*/(__iv__aave_batch__818_name));
						if(__iv__aave_batch__823_tmp_var){
							if(__iv__aave_batch__817_json_data && __iv__aave_batch__817_json_data->type_name){
								int __iv__aave_batch__824_tmp_var;
								__iv__aave_batch__824_tmp_var=string_equal((const char*)/*string*/(__iv__aave_batch__817_json_data->type_name), (const char*)/*string*/("string"));
								if(__iv__aave_batch__824_tmp_var){
									__iv__aave_batch__768_gas_price=(string)/*void**/(__iv__aave_batch__817_json_data->var);
								}
							}
						}
					}
				}
			}
/*service_var 380==> json_easy.json_data_name*/
/*service_var 379==> json_easy.json_data*/
		}
/*service_var 378==> json_easy.json_data*/
		__iv__main__27_wallet_info->gas_price=__iv__aave_batch__768_gas_price;
	}
	__iv__aave_batch__825_nonce=(string)/*void**/(NULL);
	if(__iv__main__27_wallet_info->nonce){
		string __iv__aave_batch__826_to_print;
		string __iv__285_wallet_info_nonce;
		int __iv__aave_batch__828_len;
		int __iv__aave_batch__827_tmp_var;
		BIGNUM* __iv__286_bn;
		BIGNUM* __iv__287_bn_one;
		__iv__aave_batch__826_to_print=__iv__main__27_wallet_info->nonce;
		if(__iv__aave_batch__826_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__826_to_print);
		}
		__iv__285_wallet_info_nonce=__iv__main__27_wallet_info->nonce;
		__iv__aave_batch__828_len=strlen((char*)/*string*/("0x"));
		__iv__aave_batch__827_tmp_var=string_nequal_or_null((const char*)/*string*/(__iv__285_wallet_info_nonce), (const char*)/*string*/("0x"), __iv__aave_batch__828_len);
		if(__iv__aave_batch__827_tmp_var){
			__iv__285_wallet_info_nonce=__iv__285_wallet_info_nonce + 2;
		}
		printf((char*)/*string*/("%s"), "\n");
		__iv__286_bn=(BIGNUM*)/*void**/(NULL);
		if(__iv__285_wallet_info_nonce){
			BN_hex2bn(&__iv__286_bn, (char*)/*string*/(__iv__285_wallet_info_nonce));
		}
		__iv__287_bn_one=BN_new();
		BN_one(__iv__287_bn_one);
		BN_add(__iv__286_bn, __iv__287_bn_one, __iv__286_bn);
		__iv__main__27_wallet_info->nonce="";
		if(__iv__286_bn){
			__iv__main__27_wallet_info->nonce=BN_bn2hex(__iv__286_bn);
		}
		__iv__aave_batch__825_nonce=__iv__main__27_wallet_info->nonce;
	}
	else {
		string __iv__288_wallet;
		const EC_GROUP* __iv__aave_batch__829_group;
		const EC_POINT* __iv__289_public_key_point;
		string __iv__aave_batch__841_id;
		json_type* __iv__aave_batch__840_json_post;
		json_object_type* __iv__aave_batch__842_json_object;
		json_object_item_type* __iv__aave_batch__843_field;
		pointerof_type* __iv__aave_batch__844_item;
		json_object_item_type* __iv__aave_batch__845_field;
		pointerof_type* __iv__aave_batch__846_item;
		json_object_item_type* __iv__aave_batch__847_field;
		pointerof_type* __iv__aave_batch__848_item;
		json_array_type* __iv__aave_batch__849_json_array;
		pointerof_type* __iv__aave_batch__850_item;
		pointerof_type* __iv__aave_batch__851_item;
		json_object_item_type* __iv__aave_batch__852_field;
		pointerof_type* __iv__aave_batch__853_item;
		string __iv__aave_batch__854_json_post_str;
		json_type* __iv__aave_batch__861_json;
		string __iv__aave_batch__862_ret_str;
		CURL* __iv__aave_batch__863_curl_ptr;
		string __iv__aave_batch__880_json_str;
		string __iv__aave_batch__888_tmp_var;
		string __iv__aave_batch__887_to_print;
		json_type* __iv__aave_batch__889_json_data;
		__iv__288_wallet=(string)/*void**/(NULL);
/*service_var <==381 zgenerator_crypt.buffer*/
/*service_var <==382 zgenerator_crypt.buffer_len*/
/*service_var <==383 openssl_ec.group*/
		__iv__aave_batch__829_group=EC_KEY_get0_group(__iv__main__26_ec_key);
		__iv__289_public_key_point=EC_KEY_get0_public_key(__iv__main__26_ec_key);
		if(__iv__289_public_key_point){
			int __iv__aave_batch__831_buffer_len;
			unsigned char* __iv__aave_batch__830_buffer;
			__iv__aave_batch__831_buffer_len=256;
			__iv__aave_batch__830_buffer=malloc(__iv__aave_batch__831_buffer_len);
			__iv__aave_batch__831_buffer_len=EC_POINT_point2oct((EC_GROUP*)/*const EC_GROUP**/(__iv__aave_batch__829_group), (EC_POINT*)/*const EC_POINT**/(__iv__289_public_key_point), POINT_CONVERSION_UNCOMPRESSED, __iv__aave_batch__830_buffer, (size_t)/*int*/(__iv__aave_batch__831_buffer_len), (BN_CTX*)/*void**/(NULL));
			if(__iv__aave_batch__831_buffer_len){
/*service_var <==384 zgenerator_crypt.buffer*/
/*service_var <==385 zgenerator_crypt.buffer_len*/
				if(__iv__aave_batch__831_buffer_len && __iv__aave_batch__830_buffer[0] == 0x04){
					unsigned char* __iv__aave_batch__832_wallet;
					int __iv__aave_batch__833_wallet_len;
					int __iv__aave_batch__835_hash_len;
					string __iv__aave_batch__834_hash;
					int __iv__aave_batch__837_wallet_len;
					__iv__aave_batch__832_wallet=__iv__aave_batch__830_buffer + 1;
					__iv__aave_batch__833_wallet_len=__iv__aave_batch__831_buffer_len - 1;
/*service_var <==386 zgenerator_crypt.hash*/
/*service_var <==387 zgenerator_crypt.hash_len*/
					__iv__aave_batch__835_hash_len=32;
					__iv__aave_batch__834_hash=malloc(32 + 1);
					__iv__aave_batch__834_hash[0]='\0';
					zgenerator_crypt_keccak256(__iv__aave_batch__832_wallet, (unsigned int)/*int*/(__iv__aave_batch__833_wallet_len), (unsigned char*)/*string*/(__iv__aave_batch__834_hash));
/*service_var <==388 zgenerator_crypt.buffer*/
/*service_var <==389 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__837_wallet_len=20;
					if(__iv__aave_batch__835_hash_len >= __iv__aave_batch__837_wallet_len){
						unsigned char* __iv__aave_batch__836_wallet;
						string __iv__aave_batch__839_tmp_var;
						__iv__aave_batch__836_wallet=malloc(__iv__aave_batch__837_wallet_len);
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__836_wallet), (const void*)/*string*/(__iv__aave_batch__834_hash + __iv__aave_batch__835_hash_len - __iv__aave_batch__837_wallet_len), (size_t)/*int*/(__iv__aave_batch__837_wallet_len));
						__iv__288_wallet=(string)/*void**/(NULL);
						if(__iv__aave_batch__836_wallet){
							unsigned char* __iv__aave_batch__838_u_str;
							int __iv__290_i;
							__iv__288_wallet=malloc(__iv__aave_batch__837_wallet_len * 2 + 1);
							__iv__288_wallet[0]='\0';
							__iv__288_wallet[__iv__aave_batch__837_wallet_len * 2]='\0';
							__iv__aave_batch__838_u_str=(unsigned char*)/*string*/(__iv__288_wallet);
							for(__iv__290_i=0;__iv__290_i < __iv__aave_batch__837_wallet_len;__iv__290_i=__iv__290_i + 1){
								unsigned char __iv__291_c;
								unsigned char __iv__292_c2;
								__iv__291_c=(unsigned char)/*char*/(__iv__aave_batch__836_wallet[__iv__290_i] & 0xf);
								if(__iv__291_c < 10){
									__iv__aave_batch__838_u_str[__iv__290_i * 2 + 1]=__iv__291_c + '0';
								}
								else {
									__iv__aave_batch__838_u_str[__iv__290_i * 2 + 1]=__iv__291_c - 10 + 'a';
								}
								__iv__292_c2=(unsigned char)/*char*/(__iv__aave_batch__836_wallet[__iv__290_i] >> 4);
								if(__iv__292_c2 < 0xa){
									__iv__aave_batch__838_u_str[__iv__290_i * 2]=__iv__292_c2 + '0';
								}
								else {
									__iv__aave_batch__838_u_str[__iv__290_i * 2]=__iv__292_c2 - 10 + 'a';
								}
							}
						}
						__iv__aave_batch__839_tmp_var=strconcat((char*)/*string*/("0x"), (char*)/*string*/(__iv__288_wallet));
						__iv__288_wallet=__iv__aave_batch__839_tmp_var;
					}
/*service_var 389==> zgenerator_crypt.buffer_len*/
/*service_var 388==> zgenerator_crypt.buffer*/
/*service_var 387==> zgenerator_crypt.hash_len*/
/*service_var 386==> zgenerator_crypt.hash*/
				}
/*service_var 385==> zgenerator_crypt.buffer_len*/
/*service_var 384==> zgenerator_crypt.buffer*/
			}
		}
/*service_var 383==> openssl_ec.group*/
/*service_var 382==> zgenerator_crypt.buffer_len*/
/*service_var 381==> zgenerator_crypt.buffer*/
		__iv__aave_batch__825_nonce="";
		__iv__main__5_jsonrpc_id=__iv__main__5_jsonrpc_id + 1;
		__iv__aave_batch__841_id=int_to_string(__iv__main__5_jsonrpc_id, 0);
		__iv__aave_batch__840_json_post=calloc(1, sizeof(json_type));
/*service_var <==390 json_add.json*/
		__iv__aave_batch__842_json_object=calloc(1, sizeof(json_object_type));
		__iv__aave_batch__840_json_post->item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__840_json_post->item->var=__iv__aave_batch__842_json_object;
		__iv__aave_batch__840_json_post->item->type_name="json_object_type*";
/*service_var <==391 json_add.json_object*/
		__iv__aave_batch__843_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__842_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__842_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__843_field));
		__iv__aave_batch__843_field->name="json_rpc";
/*service_var <==392 json_add.json_object_field*/
		__iv__aave_batch__844_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==393 json_add.json*/
		__iv__aave_batch__844_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__844_item->var="2.0";
		__iv__aave_batch__844_item->type_name="string";
/*service_var 393==> json_add.json*/
		__iv__aave_batch__843_field->value=__iv__aave_batch__844_item;
/*service_var 392==> json_add.json_object_field*/
		__iv__aave_batch__845_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__842_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__842_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__845_field));
		__iv__aave_batch__845_field->name="method";
/*service_var <==394 json_add.json_object_field*/
		__iv__aave_batch__846_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==395 json_add.json*/
		__iv__aave_batch__846_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__846_item->var="eth_getTransactionCount";
		__iv__aave_batch__846_item->type_name="string";
/*service_var 395==> json_add.json*/
		__iv__aave_batch__845_field->value=__iv__aave_batch__846_item;
/*service_var 394==> json_add.json_object_field*/
		__iv__aave_batch__847_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__842_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__842_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__847_field));
		__iv__aave_batch__847_field->name="params";
/*service_var <==396 json_add.json_object_field*/
		__iv__aave_batch__848_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==397 json_add.json*/
		__iv__aave_batch__849_json_array=calloc(1, sizeof(json_array_type));
		__iv__aave_batch__848_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__848_item->var=__iv__aave_batch__849_json_array;
		__iv__aave_batch__848_item->type_name="json_array_type*";
/*service_var <==398 json_add.json_array*/
		__iv__aave_batch__850_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==399 json_add.json*/
		__iv__aave_batch__850_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__850_item->var=__iv__288_wallet;
		__iv__aave_batch__850_item->type_name="string";
/*service_var 399==> json_add.json*/
		if(__iv__aave_batch__850_item){
			__iv__aave_batch__849_json_array->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__849_json_array->item), (void*)/*pointerof_type**/(__iv__aave_batch__850_item));
		}
		__iv__aave_batch__851_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==400 json_add.json*/
		__iv__aave_batch__851_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__851_item->var="latest";
		__iv__aave_batch__851_item->type_name="string";
/*service_var 400==> json_add.json*/
		if(__iv__aave_batch__851_item){
			__iv__aave_batch__849_json_array->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__849_json_array->item), (void*)/*pointerof_type**/(__iv__aave_batch__851_item));
		}
/*service_var 398==> json_add.json_array*/
/*service_var 397==> json_add.json*/
		__iv__aave_batch__847_field->value=__iv__aave_batch__848_item;
/*service_var 396==> json_add.json_object_field*/
		__iv__aave_batch__852_field=calloc(1, sizeof(json_object_item_type));
		__iv__aave_batch__842_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__842_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__852_field));
		__iv__aave_batch__852_field->name="id";
/*service_var <==401 json_add.json_object_field*/
		__iv__aave_batch__853_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==402 json_add.json*/
		__iv__aave_batch__853_item=calloc(1, sizeof(pointerof_type));
		__iv__aave_batch__853_item->var=__iv__aave_batch__841_id;
		__iv__aave_batch__853_item->type_name="string";
/*service_var 402==> json_add.json*/
		__iv__aave_batch__852_field->value=__iv__aave_batch__853_item;
/*service_var 401==> json_add.json_object_field*/
/*service_var 391==> json_add.json_object*/
/*service_var 390==> json_add.json*/
		__iv__aave_batch__854_json_post_str=(string)/*void**/(NULL);
		if(__iv__aave_batch__840_json_post && __iv__aave_batch__840_json_post->item){
			stringlist __iv__293_str_list;
			int __iv__aave_batch__855_total_len;
			collection __iv__aave_batch__857_list_name;
			collection __iv__aave_batch__858_name;
			int __iv__aave_batch__859_string_index;
			collection __iv__aave_batch__860_name;
			__iv__293_str_list=json_to_stringlist(__iv__aave_batch__840_json_post->item, (stringlist)/*void**/(NULL));
			__iv__aave_batch__855_total_len=0;
			__iv__aave_batch__857_list_name=(collection)/*stringlist*/(__iv__293_str_list);
			for(__iv__aave_batch__858_name=(collection)/*collection*/(__iv__aave_batch__857_list_name);__iv__aave_batch__858_name;__iv__aave_batch__858_name=(collection)/*z_list_item_type**/(__iv__aave_batch__858_name->next)){
				stringlist_item_type* __iv__aave_batch__856_stringlist_item;
				__iv__aave_batch__856_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__858_name->data);
				__iv__aave_batch__855_total_len=__iv__aave_batch__855_total_len + __iv__aave_batch__856_stringlist_item->len;
			}
			__iv__aave_batch__854_json_post_str=newString(__iv__aave_batch__855_total_len);
			__iv__aave_batch__859_string_index=0;
			for(__iv__aave_batch__860_name=(collection)/*collection*/(__iv__aave_batch__857_list_name);__iv__aave_batch__860_name;__iv__aave_batch__860_name=(collection)/*z_list_item_type**/(__iv__aave_batch__860_name->next)){
				stringlist_item_type* __iv__aave_batch__856_stringlist_item;
				int __iv__294_stringlist_item_index;
				__iv__aave_batch__856_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__860_name->data);
				for(__iv__294_stringlist_item_index=0;__iv__294_stringlist_item_index < __iv__aave_batch__856_stringlist_item->len && __iv__aave_batch__856_stringlist_item->str[__iv__294_stringlist_item_index] != '\0';__iv__294_stringlist_item_index=__iv__294_stringlist_item_index + 1){
					__iv__aave_batch__854_json_post_str[__iv__aave_batch__859_string_index]=__iv__aave_batch__856_stringlist_item->str[__iv__294_stringlist_item_index];
					__iv__aave_batch__859_string_index=__iv__aave_batch__859_string_index + 1;
				}
			}
			__iv__aave_batch__854_json_post_str[__iv__aave_batch__859_string_index]='\0';
		}
		__iv__aave_batch__861_json=(json_type*)/*void**/(NULL);
		__iv__aave_batch__862_ret_str=(string)/*void**/(NULL);
		if(0){
			rest_html_write_to_str((char*)/*void**/(NULL), (size_t)/*int*/(0), (size_t)/*int*/(0), (rest_html_write_struct*)/*void**/(NULL));
		}
		__iv__aave_batch__863_curl_ptr=curl_easy_init();
/*service_var <==403 rest_html.curl_ptr*/
		if(__iv__aave_batch__863_curl_ptr){
			string __iv__aave_batch__864_query_url;
			struct curl_slist* __iv__aave_batch__867_header;
			string __iv__aave_batch__868_tmp_var;
			string __iv__aave_batch__869_tmp_var;
			string __iv__aave_batch__870_tmp_var;
			string __iv__aave_batch__871_tmp_var;
			rest_html_write_struct* __iv__295_user_data;
			string __iv__aave_batch__872_error_buffer;
			FILE* __iv__aave_batch__873_file_debug;
			__iv__aave_batch__864_query_url=(string)/*void**/(NULL);
/*service_var <==404 rest_html.query_url*/
/*service_var 404==> rest_html.query_url*/
			if(__iv__aave_batch__864_query_url){
				string __iv__aave_batch__865_tmp_var;
				string __iv__aave_batch__866_tmp_var;
				__iv__aave_batch__865_tmp_var=strconcat((char*)/*string*/(__iv__main__1_infura_url), (char*)/*string*/("?"));
				__iv__aave_batch__866_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__865_tmp_var), (char*)/*string*/(__iv__aave_batch__864_query_url));
				__iv__aave_batch__864_query_url=__iv__aave_batch__866_tmp_var;
			}
			else {
				__iv__aave_batch__864_query_url=__iv__main__1_infura_url;
			}
			if(__iv__aave_batch__864_query_url){
				curl_easy_setopt(__iv__aave_batch__863_curl_ptr, CURLOPT_URL, (void*)/*string*/(__iv__aave_batch__864_query_url));
			}
			__iv__aave_batch__867_header=(struct curl_slist*)/*void**/(NULL);
/*service_var <==405 rest_html.header*/
			__iv__aave_batch__868_tmp_var=strconcat((char*)/*string*/("Content-Type"), (char*)/*string*/(": "));
			__iv__aave_batch__869_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__868_tmp_var), (char*)/*string*/("application/json"));
			__iv__aave_batch__867_header=curl_slist_append(__iv__aave_batch__867_header, __iv__aave_batch__869_tmp_var);
			__iv__aave_batch__870_tmp_var=strconcat((char*)/*string*/("Accept"), (char*)/*string*/(": "));
			__iv__aave_batch__871_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__870_tmp_var), (char*)/*string*/("application/json"));
			__iv__aave_batch__867_header=curl_slist_append(__iv__aave_batch__867_header, __iv__aave_batch__871_tmp_var);
/*service_var 405==> rest_html.header*/
			if(__iv__aave_batch__867_header){
				curl_easy_setopt(__iv__aave_batch__863_curl_ptr, CURLOPT_HTTPHEADER, (void*)/*struct curl_slist**/(__iv__aave_batch__867_header));
			}
			if("Zipli"){
				curl_easy_setopt(__iv__aave_batch__863_curl_ptr, CURLOPT_USERAGENT, (void*)/*string*/("Zipli"));
			}
			curl_easy_setopt(__iv__aave_batch__863_curl_ptr, CURLOPT_CUSTOMREQUEST, (void*)/*string*/("POST"));
			if(__iv__aave_batch__854_json_post_str){
				curl_easy_setopt(__iv__aave_batch__863_curl_ptr, CURLOPT_POSTFIELDS, (void*)/*string*/(__iv__aave_batch__854_json_post_str));
			}
			curl_easy_setopt(__iv__aave_batch__863_curl_ptr, CURLOPT_WRITEFUNCTION, (void*)/*void*/(rest_html_write_to_str));
			__iv__295_user_data=calloc(1, sizeof(rest_html_write_struct));
			curl_easy_setopt(__iv__aave_batch__863_curl_ptr, CURLOPT_WRITEDATA, (void*)/*rest_html_write_struct**/(__iv__295_user_data));
			__iv__aave_batch__872_error_buffer=newString(CURL_ERROR_SIZE);
			curl_easy_setopt(__iv__aave_batch__863_curl_ptr, CURLOPT_ERRORBUFFER, (void*)/*string*/(__iv__aave_batch__872_error_buffer));
			curl_easy_setopt(__iv__aave_batch__863_curl_ptr, CURLOPT_VERBOSE, (void*)/*int*/(1L));
			__iv__aave_batch__873_file_debug=fopen((char*)/*string*/("/tmp/rest_debug.txt"), (char*)/*string*/("w"));
			curl_easy_setopt(__iv__aave_batch__863_curl_ptr, CURLOPT_STDERR, (void*)/*FILE**/(__iv__aave_batch__873_file_debug));
			curl_easy_perform(__iv__aave_batch__863_curl_ptr);
			print_html_text_function(prog, __iv__aave_batch__872_error_buffer);
			print_html_br(prog);
			fclose(__iv__aave_batch__873_file_debug);
			curl_easy_cleanup(__iv__aave_batch__863_curl_ptr);
			if(__iv__295_user_data->str){
				int __iv__aave_batch__874_total_len;
				collection __iv__aave_batch__876_list_name;
				collection __iv__aave_batch__877_name;
				int __iv__aave_batch__878_string_index;
				collection __iv__aave_batch__879_name;
				__iv__aave_batch__874_total_len=0;
				__iv__aave_batch__876_list_name=(collection)/*stringlist*/(__iv__295_user_data->str);
				for(__iv__aave_batch__877_name=(collection)/*collection*/(__iv__aave_batch__876_list_name);__iv__aave_batch__877_name;__iv__aave_batch__877_name=(collection)/*z_list_item_type**/(__iv__aave_batch__877_name->next)){
					stringlist_item_type* __iv__aave_batch__875_stringlist_item;
					__iv__aave_batch__875_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__877_name->data);
					__iv__aave_batch__874_total_len=__iv__aave_batch__874_total_len + __iv__aave_batch__875_stringlist_item->len;
				}
				__iv__aave_batch__862_ret_str=newString(__iv__aave_batch__874_total_len);
				__iv__aave_batch__878_string_index=0;
				for(__iv__aave_batch__879_name=(collection)/*collection*/(__iv__aave_batch__876_list_name);__iv__aave_batch__879_name;__iv__aave_batch__879_name=(collection)/*z_list_item_type**/(__iv__aave_batch__879_name->next)){
					stringlist_item_type* __iv__aave_batch__875_stringlist_item;
					int __iv__296_stringlist_item_index;
					__iv__aave_batch__875_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__879_name->data);
					for(__iv__296_stringlist_item_index=0;__iv__296_stringlist_item_index < __iv__aave_batch__875_stringlist_item->len && __iv__aave_batch__875_stringlist_item->str[__iv__296_stringlist_item_index] != '\0';__iv__296_stringlist_item_index=__iv__296_stringlist_item_index + 1){
						__iv__aave_batch__862_ret_str[__iv__aave_batch__878_string_index]=__iv__aave_batch__875_stringlist_item->str[__iv__296_stringlist_item_index];
						__iv__aave_batch__878_string_index=__iv__aave_batch__878_string_index + 1;
					}
				}
				__iv__aave_batch__862_ret_str[__iv__aave_batch__878_string_index]='\0';
			}
		}
/*service_var 403==> rest_html.curl_ptr*/
		if(__iv__aave_batch__862_ret_str){
			__iv__aave_batch__861_json=json_parse(__iv__aave_batch__862_ret_str);
		}
		__iv__aave_batch__880_json_str=(string)/*void**/(NULL);
		if(__iv__aave_batch__861_json && __iv__aave_batch__861_json->item){
			stringlist __iv__297_str_list;
			int __iv__aave_batch__881_total_len;
			collection __iv__aave_batch__883_list_name;
			collection __iv__aave_batch__884_name;
			int __iv__aave_batch__885_string_index;
			collection __iv__aave_batch__886_name;
			__iv__297_str_list=json_to_stringlist(__iv__aave_batch__861_json->item, (stringlist)/*void**/(NULL));
			__iv__aave_batch__881_total_len=0;
			__iv__aave_batch__883_list_name=(collection)/*stringlist*/(__iv__297_str_list);
			for(__iv__aave_batch__884_name=(collection)/*collection*/(__iv__aave_batch__883_list_name);__iv__aave_batch__884_name;__iv__aave_batch__884_name=(collection)/*z_list_item_type**/(__iv__aave_batch__884_name->next)){
				stringlist_item_type* __iv__aave_batch__882_stringlist_item;
				__iv__aave_batch__882_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__884_name->data);
				__iv__aave_batch__881_total_len=__iv__aave_batch__881_total_len + __iv__aave_batch__882_stringlist_item->len;
			}
			__iv__aave_batch__880_json_str=newString(__iv__aave_batch__881_total_len);
			__iv__aave_batch__885_string_index=0;
			for(__iv__aave_batch__886_name=(collection)/*collection*/(__iv__aave_batch__883_list_name);__iv__aave_batch__886_name;__iv__aave_batch__886_name=(collection)/*z_list_item_type**/(__iv__aave_batch__886_name->next)){
				stringlist_item_type* __iv__aave_batch__882_stringlist_item;
				int __iv__298_stringlist_item_index;
				__iv__aave_batch__882_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__886_name->data);
				for(__iv__298_stringlist_item_index=0;__iv__298_stringlist_item_index < __iv__aave_batch__882_stringlist_item->len && __iv__aave_batch__882_stringlist_item->str[__iv__298_stringlist_item_index] != '\0';__iv__298_stringlist_item_index=__iv__298_stringlist_item_index + 1){
					__iv__aave_batch__880_json_str[__iv__aave_batch__885_string_index]=__iv__aave_batch__882_stringlist_item->str[__iv__298_stringlist_item_index];
					__iv__aave_batch__885_string_index=__iv__aave_batch__885_string_index + 1;
				}
			}
			__iv__aave_batch__880_json_str[__iv__aave_batch__885_string_index]='\0';
		}
		__iv__aave_batch__888_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__880_json_str), (char*)/*string*/("\n"));
		__iv__aave_batch__887_to_print=__iv__aave_batch__888_tmp_var;
		if(__iv__aave_batch__887_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__887_to_print);
		}
/*service_var <==406 json_easy.json_data*/
		__iv__aave_batch__889_json_data=json_parse(__iv__aave_batch__880_json_str);
		if(__iv__aave_batch__889_json_data){
/*service_var <==407 json_easy.json_data*/
/*service_var <==408 json_easy.json_data_name*/
			if(__iv__aave_batch__889_json_data->item && __iv__aave_batch__889_json_data->item->type_name){
				int __iv__aave_batch__893_tmp_var;
				__iv__aave_batch__893_tmp_var=string_equal((const char*)/*string*/(__iv__aave_batch__889_json_data->item->type_name), (const char*)/*string*/("json_object_type*"));
				if(__iv__aave_batch__893_tmp_var){
					json_object_type* __iv__aave_batch__892_json_data_parent_object;
					collection __iv__aave_batch__895_name;
					__iv__aave_batch__892_json_data_parent_object=(json_object_type*)/*void**/(__iv__aave_batch__889_json_data->item->var);
					for(__iv__aave_batch__895_name=(collection)/*collection*/(__iv__aave_batch__892_json_data_parent_object->item);__iv__aave_batch__895_name;__iv__aave_batch__895_name=(collection)/*z_list_item_type**/(__iv__aave_batch__895_name->next)){
						json_object_item_type* __iv__aave_batch__894_item;
						string __iv__aave_batch__891_name;
						pointerof_type* __iv__aave_batch__890_json_data;
						int __iv__aave_batch__896_tmp_var;
						__iv__aave_batch__894_item=(json_object_item_type*)/*void**/(__iv__aave_batch__895_name->data);
						__iv__aave_batch__891_name=__iv__aave_batch__894_item->name;
						__iv__aave_batch__890_json_data=__iv__aave_batch__894_item->value;
						__iv__aave_batch__896_tmp_var=string_equal_or_null((const char*)/*string*/("result"), (const char*)/*string*/(__iv__aave_batch__891_name));
						if(__iv__aave_batch__896_tmp_var){
							if(__iv__aave_batch__890_json_data && __iv__aave_batch__890_json_data->type_name){
								int __iv__aave_batch__897_tmp_var;
								__iv__aave_batch__897_tmp_var=string_equal((const char*)/*string*/(__iv__aave_batch__890_json_data->type_name), (const char*)/*string*/("string"));
								if(__iv__aave_batch__897_tmp_var){
									__iv__aave_batch__825_nonce=(string)/*void**/(__iv__aave_batch__890_json_data->var);
								}
							}
						}
					}
				}
			}
/*service_var 408==> json_easy.json_data_name*/
/*service_var 407==> json_easy.json_data*/
		}
/*service_var 406==> json_easy.json_data*/
		__iv__main__27_wallet_info->nonce=strdup2((const string)/*string*/(__iv__aave_batch__825_nonce));
	}
	__iv__aave_batch__898_amount_wei=ethereum_convert_string_eth_to_string_wei_function("0", 18);
	__iv__aave_batch__899_transaction=calloc(1, sizeof(blockchain_transaction_ethereum_type));
/*service_var <==409 ethereum.transaction*/
/*service_var <==410 zgenerator_crypt.buffer*/
/*service_var <==411 zgenerator_crypt.buffer_len*/
	if(__iv__aave_batch__825_nonce){
		unsigned char* __iv__302_ustr;
		int __iv__301_i;
		int __iv__aave_batch__900_len;
		int __iv__303_j;
		unsigned char* __iv__aave_batch__901_buffer;
		__iv__302_ustr=(unsigned char*)/*string*/(__iv__aave_batch__825_nonce);
		__iv__301_i=0;
		for(__iv__301_i=0;__iv__302_ustr[__iv__301_i] && !(((__iv__302_ustr[__iv__301_i] >= '0' && __iv__302_ustr[__iv__301_i] <= '9') || (__iv__302_ustr[__iv__301_i] >= 'a' && __iv__302_ustr[__iv__301_i] <= 'f') || (__iv__302_ustr[__iv__301_i] >= 'A' && __iv__302_ustr[__iv__301_i] <= 'F')));__iv__301_i=__iv__301_i + 1){
		}
		if(__iv__302_ustr[__iv__301_i] == '0' && (__iv__302_ustr[__iv__301_i + 1] == 'x' || __iv__302_ustr[__iv__301_i + 1] == 'X')){
			__iv__301_i=__iv__301_i + 2;
		}
		__iv__aave_batch__900_len=0;
		for(__iv__303_j=__iv__301_i;__iv__302_ustr[__iv__303_j];__iv__303_j=__iv__303_j + 1){
			if(((__iv__302_ustr[__iv__303_j] >= '0' && __iv__302_ustr[__iv__303_j] <= '9') || (__iv__302_ustr[__iv__303_j] >= 'a' && __iv__302_ustr[__iv__303_j] <= 'f') || (__iv__302_ustr[__iv__303_j] >= 'A' && __iv__302_ustr[__iv__303_j] <= 'F'))){
				int __iv__304_k;
				for(__iv__304_k=__iv__303_j + 1;((__iv__302_ustr[__iv__304_k] >= '0' && __iv__302_ustr[__iv__304_k] <= '9') || (__iv__302_ustr[__iv__304_k] >= 'a' && __iv__302_ustr[__iv__304_k] <= 'f') || (__iv__302_ustr[__iv__304_k] >= 'A' && __iv__302_ustr[__iv__304_k] <= 'F'));__iv__304_k=__iv__304_k + 1){
				}
				if(((__iv__304_k - __iv__303_j) & 1) == 0 && ((__iv__302_ustr[__iv__303_j + 1] >= '0' && __iv__302_ustr[__iv__303_j + 1] <= '9') || (__iv__302_ustr[__iv__303_j + 1] >= 'a' && __iv__302_ustr[__iv__303_j + 1] <= 'f') || (__iv__302_ustr[__iv__303_j + 1] >= 'A' && __iv__302_ustr[__iv__303_j + 1] <= 'F'))){
					__iv__303_j=__iv__303_j + 1;
				}
				__iv__aave_batch__900_len=__iv__aave_batch__900_len + 1;
			}
		}
		__iv__aave_batch__901_buffer=malloc(__iv__aave_batch__900_len);
		__iv__aave_batch__900_len=0;
		for(__iv__303_j=__iv__301_i;__iv__302_ustr[__iv__303_j];__iv__303_j=__iv__303_j + 1){
			if(((__iv__302_ustr[__iv__303_j] >= '0' && __iv__302_ustr[__iv__303_j] <= '9') || (__iv__302_ustr[__iv__303_j] >= 'a' && __iv__302_ustr[__iv__303_j] <= 'f') || (__iv__302_ustr[__iv__303_j] >= 'A' && __iv__302_ustr[__iv__303_j] <= 'F'))){
				int __iv__304_k;
				if(__iv__302_ustr[__iv__303_j] <= '9'){
					__iv__aave_batch__901_buffer[__iv__aave_batch__900_len]=__iv__302_ustr[__iv__303_j] - '0';
				}
				else if(__iv__302_ustr[__iv__303_j] <= 'F'){
					__iv__aave_batch__901_buffer[__iv__aave_batch__900_len]=__iv__302_ustr[__iv__303_j] - 'A' + 10;
				}
				else {
					__iv__aave_batch__901_buffer[__iv__aave_batch__900_len]=__iv__302_ustr[__iv__303_j] - 'a' + 10;
				}
				for(__iv__304_k=__iv__303_j + 1;((__iv__302_ustr[__iv__304_k] >= '0' && __iv__302_ustr[__iv__304_k] <= '9') || (__iv__302_ustr[__iv__304_k] >= 'a' && __iv__302_ustr[__iv__304_k] <= 'f') || (__iv__302_ustr[__iv__304_k] >= 'A' && __iv__302_ustr[__iv__304_k] <= 'F'));__iv__304_k=__iv__304_k + 1){
				}
				if(((__iv__304_k - __iv__303_j) & 1) == 0 && ((__iv__302_ustr[__iv__303_j + 1] >= '0' && __iv__302_ustr[__iv__303_j + 1] <= '9') || (__iv__302_ustr[__iv__303_j + 1] >= 'a' && __iv__302_ustr[__iv__303_j + 1] <= 'f') || (__iv__302_ustr[__iv__303_j + 1] >= 'A' && __iv__302_ustr[__iv__303_j + 1] <= 'F'))){
					__iv__303_j=__iv__303_j + 1;
					if(__iv__302_ustr[__iv__303_j] <= '9'){
						__iv__aave_batch__901_buffer[__iv__aave_batch__900_len]=__iv__302_ustr[__iv__303_j] - '0' + (16 * __iv__aave_batch__901_buffer[__iv__aave_batch__900_len]);
					}
					else if(__iv__302_ustr[__iv__303_j] <= 'F'){
						__iv__aave_batch__901_buffer[__iv__aave_batch__900_len]=__iv__302_ustr[__iv__303_j] - 'A' + 10 + (16 * __iv__aave_batch__901_buffer[__iv__aave_batch__900_len]);
					}
					else {
						__iv__aave_batch__901_buffer[__iv__aave_batch__900_len]=__iv__302_ustr[__iv__303_j] - 'a' + 10 + (16 * __iv__aave_batch__901_buffer[__iv__aave_batch__900_len]);
					}
				}
				__iv__aave_batch__900_len=__iv__aave_batch__900_len + 1;
			}
		}
		__iv__aave_batch__899_transaction->nonce=BN_bin2bn(__iv__aave_batch__901_buffer, __iv__aave_batch__900_len, (BIGNUM*)/*void**/(NULL));
	}
/*service_var 411==> zgenerator_crypt.buffer_len*/
/*service_var 410==> zgenerator_crypt.buffer*/
/*service_var <==412 zgenerator_crypt.buffer*/
/*service_var <==413 zgenerator_crypt.buffer_len*/
	if(__iv__aave_batch__768_gas_price){
		unsigned char* __iv__306_ustr;
		int __iv__305_i;
		int __iv__aave_batch__902_len;
		int __iv__307_j;
		unsigned char* __iv__aave_batch__903_buffer;
		__iv__306_ustr=(unsigned char*)/*string*/(__iv__aave_batch__768_gas_price);
		__iv__305_i=0;
		for(__iv__305_i=0;__iv__306_ustr[__iv__305_i] && !(((__iv__306_ustr[__iv__305_i] >= '0' && __iv__306_ustr[__iv__305_i] <= '9') || (__iv__306_ustr[__iv__305_i] >= 'a' && __iv__306_ustr[__iv__305_i] <= 'f') || (__iv__306_ustr[__iv__305_i] >= 'A' && __iv__306_ustr[__iv__305_i] <= 'F')));__iv__305_i=__iv__305_i + 1){
		}
		if(__iv__306_ustr[__iv__305_i] == '0' && (__iv__306_ustr[__iv__305_i + 1] == 'x' || __iv__306_ustr[__iv__305_i + 1] == 'X')){
			__iv__305_i=__iv__305_i + 2;
		}
		__iv__aave_batch__902_len=0;
		for(__iv__307_j=__iv__305_i;__iv__306_ustr[__iv__307_j];__iv__307_j=__iv__307_j + 1){
			if(((__iv__306_ustr[__iv__307_j] >= '0' && __iv__306_ustr[__iv__307_j] <= '9') || (__iv__306_ustr[__iv__307_j] >= 'a' && __iv__306_ustr[__iv__307_j] <= 'f') || (__iv__306_ustr[__iv__307_j] >= 'A' && __iv__306_ustr[__iv__307_j] <= 'F'))){
				int __iv__308_k;
				for(__iv__308_k=__iv__307_j + 1;((__iv__306_ustr[__iv__308_k] >= '0' && __iv__306_ustr[__iv__308_k] <= '9') || (__iv__306_ustr[__iv__308_k] >= 'a' && __iv__306_ustr[__iv__308_k] <= 'f') || (__iv__306_ustr[__iv__308_k] >= 'A' && __iv__306_ustr[__iv__308_k] <= 'F'));__iv__308_k=__iv__308_k + 1){
				}
				if(((__iv__308_k - __iv__307_j) & 1) == 0 && ((__iv__306_ustr[__iv__307_j + 1] >= '0' && __iv__306_ustr[__iv__307_j + 1] <= '9') || (__iv__306_ustr[__iv__307_j + 1] >= 'a' && __iv__306_ustr[__iv__307_j + 1] <= 'f') || (__iv__306_ustr[__iv__307_j + 1] >= 'A' && __iv__306_ustr[__iv__307_j + 1] <= 'F'))){
					__iv__307_j=__iv__307_j + 1;
				}
				__iv__aave_batch__902_len=__iv__aave_batch__902_len + 1;
			}
		}
		__iv__aave_batch__903_buffer=malloc(__iv__aave_batch__902_len);
		__iv__aave_batch__902_len=0;
		for(__iv__307_j=__iv__305_i;__iv__306_ustr[__iv__307_j];__iv__307_j=__iv__307_j + 1){
			if(((__iv__306_ustr[__iv__307_j] >= '0' && __iv__306_ustr[__iv__307_j] <= '9') || (__iv__306_ustr[__iv__307_j] >= 'a' && __iv__306_ustr[__iv__307_j] <= 'f') || (__iv__306_ustr[__iv__307_j] >= 'A' && __iv__306_ustr[__iv__307_j] <= 'F'))){
				int __iv__308_k;
				if(__iv__306_ustr[__iv__307_j] <= '9'){
					__iv__aave_batch__903_buffer[__iv__aave_batch__902_len]=__iv__306_ustr[__iv__307_j] - '0';
				}
				else if(__iv__306_ustr[__iv__307_j] <= 'F'){
					__iv__aave_batch__903_buffer[__iv__aave_batch__902_len]=__iv__306_ustr[__iv__307_j] - 'A' + 10;
				}
				else {
					__iv__aave_batch__903_buffer[__iv__aave_batch__902_len]=__iv__306_ustr[__iv__307_j] - 'a' + 10;
				}
				for(__iv__308_k=__iv__307_j + 1;((__iv__306_ustr[__iv__308_k] >= '0' && __iv__306_ustr[__iv__308_k] <= '9') || (__iv__306_ustr[__iv__308_k] >= 'a' && __iv__306_ustr[__iv__308_k] <= 'f') || (__iv__306_ustr[__iv__308_k] >= 'A' && __iv__306_ustr[__iv__308_k] <= 'F'));__iv__308_k=__iv__308_k + 1){
				}
				if(((__iv__308_k - __iv__307_j) & 1) == 0 && ((__iv__306_ustr[__iv__307_j + 1] >= '0' && __iv__306_ustr[__iv__307_j + 1] <= '9') || (__iv__306_ustr[__iv__307_j + 1] >= 'a' && __iv__306_ustr[__iv__307_j + 1] <= 'f') || (__iv__306_ustr[__iv__307_j + 1] >= 'A' && __iv__306_ustr[__iv__307_j + 1] <= 'F'))){
					__iv__307_j=__iv__307_j + 1;
					if(__iv__306_ustr[__iv__307_j] <= '9'){
						__iv__aave_batch__903_buffer[__iv__aave_batch__902_len]=__iv__306_ustr[__iv__307_j] - '0' + (16 * __iv__aave_batch__903_buffer[__iv__aave_batch__902_len]);
					}
					else if(__iv__306_ustr[__iv__307_j] <= 'F'){
						__iv__aave_batch__903_buffer[__iv__aave_batch__902_len]=__iv__306_ustr[__iv__307_j] - 'A' + 10 + (16 * __iv__aave_batch__903_buffer[__iv__aave_batch__902_len]);
					}
					else {
						__iv__aave_batch__903_buffer[__iv__aave_batch__902_len]=__iv__306_ustr[__iv__307_j] - 'a' + 10 + (16 * __iv__aave_batch__903_buffer[__iv__aave_batch__902_len]);
					}
				}
				__iv__aave_batch__902_len=__iv__aave_batch__902_len + 1;
			}
		}
		__iv__aave_batch__899_transaction->gas_price=BN_bin2bn(__iv__aave_batch__903_buffer, __iv__aave_batch__902_len, (BIGNUM*)/*void**/(NULL));
	}
/*service_var 413==> zgenerator_crypt.buffer_len*/
/*service_var 412==> zgenerator_crypt.buffer*/
	__iv__299_bn=(BIGNUM*)/*void**/(NULL);
	if("300000"){
		BN_dec2bn(&__iv__299_bn, (char*)/*string*/("300000"));
		if(__iv__299_bn){
			int __iv__aave_batch__905_buffer_len;
			unsigned char* __iv__aave_batch__904_buffer;
/*service_var <==414 zgenerator_crypt.buffer*/
/*service_var <==415 zgenerator_crypt.buffer_len*/
			__iv__aave_batch__905_buffer_len=BN_num_bytes(__iv__299_bn);
			__iv__aave_batch__904_buffer=malloc(__iv__aave_batch__905_buffer_len);
			__iv__aave_batch__905_buffer_len=BN_bn2bin(__iv__299_bn, __iv__aave_batch__904_buffer);
			__iv__aave_batch__899_transaction->gas_limit=BN_bin2bn(__iv__aave_batch__904_buffer, __iv__aave_batch__905_buffer_len, (BIGNUM*)/*void**/(NULL));
/*service_var 415==> zgenerator_crypt.buffer_len*/
/*service_var 414==> zgenerator_crypt.buffer*/
		}
	}
/*service_var <==416 zgenerator_crypt.buffer*/
/*service_var <==417 zgenerator_crypt.buffer_len*/
	if("0xf8ac10e65f2073460aad5f28e1eabe807dc287cf"){
		unsigned char* __iv__310_ustr;
		int __iv__309_i;
		int __iv__aave_batch__906_len;
		int __iv__311_j;
		unsigned char* __iv__aave_batch__907_buffer;
		__iv__310_ustr=(unsigned char*)/*string*/("0xf8ac10e65f2073460aad5f28e1eabe807dc287cf");
		__iv__309_i=0;
		for(__iv__309_i=0;__iv__310_ustr[__iv__309_i] && !(((__iv__310_ustr[__iv__309_i] >= '0' && __iv__310_ustr[__iv__309_i] <= '9') || (__iv__310_ustr[__iv__309_i] >= 'a' && __iv__310_ustr[__iv__309_i] <= 'f') || (__iv__310_ustr[__iv__309_i] >= 'A' && __iv__310_ustr[__iv__309_i] <= 'F')));__iv__309_i=__iv__309_i + 1){
		}
		if(__iv__310_ustr[__iv__309_i] == '0' && (__iv__310_ustr[__iv__309_i + 1] == 'x' || __iv__310_ustr[__iv__309_i + 1] == 'X')){
			__iv__309_i=__iv__309_i + 2;
		}
		__iv__aave_batch__906_len=0;
		for(__iv__311_j=__iv__309_i;__iv__310_ustr[__iv__311_j];__iv__311_j=__iv__311_j + 1){
			if(((__iv__310_ustr[__iv__311_j] >= '0' && __iv__310_ustr[__iv__311_j] <= '9') || (__iv__310_ustr[__iv__311_j] >= 'a' && __iv__310_ustr[__iv__311_j] <= 'f') || (__iv__310_ustr[__iv__311_j] >= 'A' && __iv__310_ustr[__iv__311_j] <= 'F'))){
				int __iv__312_k;
				for(__iv__312_k=__iv__311_j + 1;((__iv__310_ustr[__iv__312_k] >= '0' && __iv__310_ustr[__iv__312_k] <= '9') || (__iv__310_ustr[__iv__312_k] >= 'a' && __iv__310_ustr[__iv__312_k] <= 'f') || (__iv__310_ustr[__iv__312_k] >= 'A' && __iv__310_ustr[__iv__312_k] <= 'F'));__iv__312_k=__iv__312_k + 1){
				}
				if(((__iv__312_k - __iv__311_j) & 1) == 0 && ((__iv__310_ustr[__iv__311_j + 1] >= '0' && __iv__310_ustr[__iv__311_j + 1] <= '9') || (__iv__310_ustr[__iv__311_j + 1] >= 'a' && __iv__310_ustr[__iv__311_j + 1] <= 'f') || (__iv__310_ustr[__iv__311_j + 1] >= 'A' && __iv__310_ustr[__iv__311_j + 1] <= 'F'))){
					__iv__311_j=__iv__311_j + 1;
				}
				__iv__aave_batch__906_len=__iv__aave_batch__906_len + 1;
			}
		}
		__iv__aave_batch__907_buffer=malloc(__iv__aave_batch__906_len);
		__iv__aave_batch__906_len=0;
		for(__iv__311_j=__iv__309_i;__iv__310_ustr[__iv__311_j];__iv__311_j=__iv__311_j + 1){
			if(((__iv__310_ustr[__iv__311_j] >= '0' && __iv__310_ustr[__iv__311_j] <= '9') || (__iv__310_ustr[__iv__311_j] >= 'a' && __iv__310_ustr[__iv__311_j] <= 'f') || (__iv__310_ustr[__iv__311_j] >= 'A' && __iv__310_ustr[__iv__311_j] <= 'F'))){
				int __iv__312_k;
				if(__iv__310_ustr[__iv__311_j] <= '9'){
					__iv__aave_batch__907_buffer[__iv__aave_batch__906_len]=__iv__310_ustr[__iv__311_j] - '0';
				}
				else if(__iv__310_ustr[__iv__311_j] <= 'F'){
					__iv__aave_batch__907_buffer[__iv__aave_batch__906_len]=__iv__310_ustr[__iv__311_j] - 'A' + 10;
				}
				else {
					__iv__aave_batch__907_buffer[__iv__aave_batch__906_len]=__iv__310_ustr[__iv__311_j] - 'a' + 10;
				}
				for(__iv__312_k=__iv__311_j + 1;((__iv__310_ustr[__iv__312_k] >= '0' && __iv__310_ustr[__iv__312_k] <= '9') || (__iv__310_ustr[__iv__312_k] >= 'a' && __iv__310_ustr[__iv__312_k] <= 'f') || (__iv__310_ustr[__iv__312_k] >= 'A' && __iv__310_ustr[__iv__312_k] <= 'F'));__iv__312_k=__iv__312_k + 1){
				}
				if(((__iv__312_k - __iv__311_j) & 1) == 0 && ((__iv__310_ustr[__iv__311_j + 1] >= '0' && __iv__310_ustr[__iv__311_j + 1] <= '9') || (__iv__310_ustr[__iv__311_j + 1] >= 'a' && __iv__310_ustr[__iv__311_j + 1] <= 'f') || (__iv__310_ustr[__iv__311_j + 1] >= 'A' && __iv__310_ustr[__iv__311_j + 1] <= 'F'))){
					__iv__311_j=__iv__311_j + 1;
					if(__iv__310_ustr[__iv__311_j] <= '9'){
						__iv__aave_batch__907_buffer[__iv__aave_batch__906_len]=__iv__310_ustr[__iv__311_j] - '0' + (16 * __iv__aave_batch__907_buffer[__iv__aave_batch__906_len]);
					}
					else if(__iv__310_ustr[__iv__311_j] <= 'F'){
						__iv__aave_batch__907_buffer[__iv__aave_batch__906_len]=__iv__310_ustr[__iv__311_j] - 'A' + 10 + (16 * __iv__aave_batch__907_buffer[__iv__aave_batch__906_len]);
					}
					else {
						__iv__aave_batch__907_buffer[__iv__aave_batch__906_len]=__iv__310_ustr[__iv__311_j] - 'a' + 10 + (16 * __iv__aave_batch__907_buffer[__iv__aave_batch__906_len]);
					}
				}
				__iv__aave_batch__906_len=__iv__aave_batch__906_len + 1;
			}
		}
		__iv__aave_batch__899_transaction->recipient=BN_bin2bn(__iv__aave_batch__907_buffer, __iv__aave_batch__906_len, (BIGNUM*)/*void**/(NULL));
	}
/*service_var 417==> zgenerator_crypt.buffer_len*/
/*service_var 416==> zgenerator_crypt.buffer*/
	__iv__300_bn=(BIGNUM*)/*void**/(NULL);
	if(__iv__aave_batch__898_amount_wei){
		BN_dec2bn(&__iv__300_bn, (char*)/*string*/(__iv__aave_batch__898_amount_wei));
		if(__iv__300_bn){
			int __iv__aave_batch__909_buffer_len;
			unsigned char* __iv__aave_batch__908_buffer;
/*service_var <==418 zgenerator_crypt.buffer*/
/*service_var <==419 zgenerator_crypt.buffer_len*/
			__iv__aave_batch__909_buffer_len=BN_num_bytes(__iv__300_bn);
			__iv__aave_batch__908_buffer=malloc(__iv__aave_batch__909_buffer_len);
			__iv__aave_batch__909_buffer_len=BN_bn2bin(__iv__300_bn, __iv__aave_batch__908_buffer);
			__iv__aave_batch__899_transaction->value=BN_bin2bn(__iv__aave_batch__908_buffer, __iv__aave_batch__909_buffer_len, (BIGNUM*)/*void**/(NULL));
/*service_var 419==> zgenerator_crypt.buffer_len*/
/*service_var 418==> zgenerator_crypt.buffer*/
		}
	}
	__iv__aave_batch__910_buffer_list=(bufferlist)/*void**/(NULL);
/*service_var <==420 ethereum_contract_call_data.buffer_list*/
/*service_var <==421 zgenerator_crypt.buffer*/
/*service_var <==422 zgenerator_crypt.buffer_len*/
	if("withdrawETH(uint256,address)"){
		int __iv__aave_batch__911_len;
		int __iv__aave_batch__913_hash_len;
		string __iv__aave_batch__912_hash;
		int __iv__aave_batch__915_method_id_len;
		__iv__aave_batch__911_len=strlen((char*)/*string*/("withdrawETH(uint256,address)"));
/*service_var <==423 zgenerator_crypt.hash*/
/*service_var <==424 zgenerator_crypt.hash_len*/
		__iv__aave_batch__913_hash_len=32;
		__iv__aave_batch__912_hash=malloc(32 + 1);
		__iv__aave_batch__912_hash[0]='\0';
		zgenerator_crypt_keccak256((unsigned char*)/*string*/("withdrawETH(uint256,address)"), (unsigned int)/*int*/(__iv__aave_batch__911_len), (unsigned char*)/*string*/(__iv__aave_batch__912_hash));
/*service_var <==425 zgenerator_crypt.buffer*/
/*service_var <==426 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__915_method_id_len=4;
		if(__iv__aave_batch__913_hash_len >= __iv__aave_batch__915_method_id_len){
			unsigned char* __iv__aave_batch__914_method_id;
			buffer_type* __iv__aave_batch__916_buffer_item;
			__iv__aave_batch__914_method_id=malloc(__iv__aave_batch__915_method_id_len);
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__914_method_id), (const void*)/*string*/(__iv__aave_batch__912_hash), (size_t)/*int*/(__iv__aave_batch__915_method_id_len));
			__iv__aave_batch__916_buffer_item=calloc(1, sizeof(buffer_type));
			__iv__aave_batch__916_buffer_item->buffer=__iv__aave_batch__914_method_id;
			__iv__aave_batch__916_buffer_item->size=__iv__aave_batch__915_method_id_len;
			__iv__aave_batch__910_buffer_list=z_list_append_function((z_list_item_type*)/*bufferlist*/(__iv__aave_batch__910_buffer_list), (void*)/*buffer_type**/(__iv__aave_batch__916_buffer_item));
		}
/*service_var 426==> zgenerator_crypt.buffer_len*/
/*service_var 425==> zgenerator_crypt.buffer*/
/*service_var 424==> zgenerator_crypt.hash_len*/
/*service_var 423==> zgenerator_crypt.hash*/
	}
/*service_var 422==> zgenerator_crypt.buffer_len*/
/*service_var 421==> zgenerator_crypt.buffer*/
	__iv__aave_batch__917_value_clean="ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff";
	__iv__aave_batch__919_len=strlen((char*)/*string*/("0x"));
	__iv__aave_batch__918_tmp_var=string_nequal_or_null((const char*)/*string*/(__iv__aave_batch__917_value_clean), (const char*)/*string*/("0x"), __iv__aave_batch__919_len);
	if(__iv__aave_batch__918_tmp_var){
		__iv__aave_batch__917_value_clean=__iv__aave_batch__917_value_clean + 2;
	}
	__iv__aave_batch__910_buffer_list=ethereum_contract_call_uint_from_string_hex_(__iv__aave_batch__910_buffer_list, __iv__aave_batch__917_value_clean);
	__iv__aave_batch__920_value_clean=wallet;
	__iv__aave_batch__922_len=strlen((char*)/*string*/("0x"));
	__iv__aave_batch__921_tmp_var=string_nequal_or_null((const char*)/*string*/(__iv__aave_batch__920_value_clean), (const char*)/*string*/("0x"), __iv__aave_batch__922_len);
	if(__iv__aave_batch__921_tmp_var){
		__iv__aave_batch__920_value_clean=__iv__aave_batch__920_value_clean + 2;
	}
	__iv__aave_batch__910_buffer_list=ethereum_contract_call_uint_from_string_hex_(__iv__aave_batch__910_buffer_list, __iv__aave_batch__920_value_clean);
/*service_var 420==> ethereum_contract_call_data.buffer_list*/
	__iv__aave_batch__923_total_len=0;
	__iv__aave_batch__926_list_name=(collection)/*bufferlist*/(__iv__aave_batch__910_buffer_list);
	for(__iv__aave_batch__927_name=(collection)/*collection*/(__iv__aave_batch__926_list_name);__iv__aave_batch__927_name;__iv__aave_batch__927_name=(collection)/*z_list_item_type**/(__iv__aave_batch__927_name->next)){
		buffer_type* __iv__aave_batch__925_buffer_item;
		__iv__aave_batch__925_buffer_item=(buffer_type*)/*void**/(__iv__aave_batch__927_name->data);
		__iv__aave_batch__923_total_len=__iv__aave_batch__923_total_len + __iv__aave_batch__925_buffer_item->size;
	}
	__iv__aave_batch__924_buffer=malloc(__iv__aave_batch__923_total_len);
	__iv__aave_batch__928_string_index=0;
	for(__iv__aave_batch__929_name=(collection)/*collection*/(__iv__aave_batch__926_list_name);__iv__aave_batch__929_name;__iv__aave_batch__929_name=(collection)/*z_list_item_type**/(__iv__aave_batch__929_name->next)){
		buffer_type* __iv__aave_batch__925_buffer_item;
		int __iv__313_buffer_index;
		__iv__aave_batch__925_buffer_item=(buffer_type*)/*void**/(__iv__aave_batch__929_name->data);
		for(__iv__313_buffer_index=0;__iv__313_buffer_index < __iv__aave_batch__925_buffer_item->size;__iv__313_buffer_index=__iv__313_buffer_index + 1){
			__iv__aave_batch__924_buffer[__iv__aave_batch__928_string_index]=__iv__aave_batch__925_buffer_item->buffer[__iv__313_buffer_index];
			__iv__aave_batch__928_string_index=__iv__aave_batch__928_string_index + 1;
		}
	}
/*service_var <==427 zgenerator_crypt.buffer*/
/*service_var <==428 zgenerator_crypt.buffer_len*/
	__iv__aave_batch__899_transaction->data_len=__iv__aave_batch__923_total_len;
	__iv__aave_batch__899_transaction->data=malloc(__iv__aave_batch__899_transaction->data_len);
	memcpy((void*)/*unsigned char**/(__iv__aave_batch__899_transaction->data), (const void*)/*unsigned char**/(__iv__aave_batch__924_buffer), (size_t)/*int*/(__iv__aave_batch__923_total_len));
/*service_var 428==> zgenerator_crypt.buffer_len*/
/*service_var 427==> zgenerator_crypt.buffer*/
/*service_var 409==> ethereum.transaction*/
	__iv__aave_batch__931_tmp_var=strconcat((char*)/*string*/("../resource/ethereum.key"), (char*)/*string*/(".priv"));
	__iv__aave_batch__930_not_file_exist=access(__iv__aave_batch__931_tmp_var, F_OK);
	if(__iv__aave_batch__930_not_file_exist){
		EC_KEY* __iv__aave_batch__932_key;
/*service_var <==429 zgenerator_crypt_key.ec_private*/
/*service_var <==430 zgenerator_crypt_key.ec_public*/
		__iv__aave_batch__932_key=EC_KEY_new_by_curve_name(NID_secp256k1);
		if(__iv__aave_batch__932_key){
			int __iv__314_ret;
			EC_KEY_set_asn1_flag(__iv__aave_batch__932_key, OPENSSL_EC_NAMED_CURVE);
			__iv__314_ret=EC_KEY_generate_key(__iv__aave_batch__932_key);
			if(__iv__314_ret == 1){
				EVP_PKEY* __iv__aave_batch__933_evp_key;
				EVP_PKEY* __iv__aave_batch__940_evp_key;
/*service_var <==431 zgenerator_crypt_key.evp_private*/
				__iv__aave_batch__933_evp_key=EVP_PKEY_new();
				if(__iv__aave_batch__933_evp_key){
					int __iv__315_ret;
					__iv__315_ret=EVP_PKEY_set1_EC_KEY(__iv__aave_batch__933_evp_key, __iv__aave_batch__932_key);
					if(__iv__315_ret){
						string __iv__aave_batch__935_tmp_var;
						BIO* __iv__aave_batch__934_bp;
						__iv__aave_batch__935_tmp_var=strconcat((char*)/*string*/("../resource/ethereum.key"), (char*)/*string*/(".priv"));
						__iv__aave_batch__934_bp=BIO_new_file((char*)/*string*/(__iv__aave_batch__935_tmp_var), (char*)/*string*/("w+"));
						if(__iv__aave_batch__934_bp){
							int __iv__316_ret;
							__iv__316_ret=PEM_write_bio_PrivateKey(__iv__aave_batch__934_bp, __iv__aave_batch__933_evp_key, (EVP_CIPHER*)/*void**/(NULL), (unsigned char*)/*void**/(NULL), 0, (pem_password_cb*)/*void**/(NULL), NULL);
							if(__iv__316_ret == 1){
								string __iv__aave_batch__937_tmp_var;
								string __iv__aave_batch__938_tmp_var;
								string __iv__aave_batch__939_tmp_var;
								string __iv__aave_batch__936_to_print;
								__iv__aave_batch__937_tmp_var=strconcat((char*)/*string*/("write to file "), (char*)/*string*/("../resource/ethereum.key"));
								__iv__aave_batch__938_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__937_tmp_var), (char*)/*string*/(".priv"));
								__iv__aave_batch__939_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__938_tmp_var), (char*)/*string*/("\n"));
								__iv__aave_batch__936_to_print=__iv__aave_batch__939_tmp_var;
								if(__iv__aave_batch__936_to_print){
									printf((char*)/*string*/("%s"), __iv__aave_batch__936_to_print);
								}
							}
							if(__iv__316_ret != 1){
								printf((char*)/*string*/("%s"), "error write private key!!!\n");
							}
							BIO_free_all(__iv__aave_batch__934_bp);
						}
						else {
							printf((char*)/*string*/("%s"), "error write private key!!!\n");
						}
					}
					else {
						printf((char*)/*string*/("%s"), "error write private key!!!\n");
					}
					EVP_PKEY_free(__iv__aave_batch__933_evp_key);
				}
				else {
					printf((char*)/*string*/("%s"), "error write private key!!!\n");
				}
/*service_var 431==> zgenerator_crypt_key.evp_private*/
/*service_var <==432 zgenerator_crypt_key.evp_public*/
				__iv__aave_batch__940_evp_key=EVP_PKEY_new();
				if(__iv__aave_batch__940_evp_key){
					int __iv__317_ret;
					__iv__317_ret=EVP_PKEY_set1_EC_KEY(__iv__aave_batch__940_evp_key, __iv__aave_batch__932_key);
					if(__iv__317_ret){
						string __iv__aave_batch__942_tmp_var;
						BIO* __iv__aave_batch__941_bp;
						__iv__aave_batch__942_tmp_var=strconcat((char*)/*string*/("../resource/ethereum.key"), (char*)/*string*/(".pub"));
						__iv__aave_batch__941_bp=BIO_new_file((char*)/*string*/(__iv__aave_batch__942_tmp_var), (char*)/*string*/("w+"));
						if(__iv__aave_batch__941_bp){
							int __iv__318_ret;
							__iv__318_ret=PEM_write_bio_PUBKEY(__iv__aave_batch__941_bp, __iv__aave_batch__940_evp_key);
							if(__iv__318_ret == 1){
								string __iv__aave_batch__944_tmp_var;
								string __iv__aave_batch__945_tmp_var;
								string __iv__aave_batch__946_tmp_var;
								string __iv__aave_batch__943_to_print;
								__iv__aave_batch__944_tmp_var=strconcat((char*)/*string*/("write to file "), (char*)/*string*/("../resource/ethereum.key"));
								__iv__aave_batch__945_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__944_tmp_var), (char*)/*string*/(".pub"));
								__iv__aave_batch__946_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__945_tmp_var), (char*)/*string*/("\n"));
								__iv__aave_batch__943_to_print=__iv__aave_batch__946_tmp_var;
								if(__iv__aave_batch__943_to_print){
									printf((char*)/*string*/("%s"), __iv__aave_batch__943_to_print);
								}
							}
							if(__iv__318_ret != 1){
								printf((char*)/*string*/("%s"), "error write public key!!!\n");
							}
							BIO_free_all(__iv__aave_batch__941_bp);
						}
						else {
							printf((char*)/*string*/("%s"), "error write public key!!!\n");
						}
					}
					else {
						printf((char*)/*string*/("%s"), "error write public key!!!\n");
					}
					EVP_PKEY_free(__iv__aave_batch__940_evp_key);
				}
				else {
					printf((char*)/*string*/("%s"), "error write public key!!!\n");
				}
/*service_var 432==> zgenerator_crypt_key.evp_public*/
			}
			else {
				printf((char*)/*string*/("%s"), "error gen key!!!\n");
			}
			EC_KEY_free(__iv__aave_batch__932_key);
		}
		else {
			printf((char*)/*string*/("%s"), "error gen key!!!\n");
		}
/*service_var 430==> zgenerator_crypt_key.ec_public*/
/*service_var 429==> zgenerator_crypt_key.ec_private*/
	}
/*service_var <==433 zgenerator_crypt_key.evp_private*/
	__iv__aave_batch__949_tmp_var=strconcat((char*)/*string*/("../resource/ethereum.key"), (char*)/*string*/(".priv"));
	__iv__aave_batch__948_bp=BIO_new_file((char*)/*string*/(__iv__aave_batch__949_tmp_var), (char*)/*string*/("r"));
	if(__iv__aave_batch__948_bp){
		EVP_PKEY* __iv__aave_batch__947_key;
		__iv__aave_batch__947_key=(EVP_PKEY*)/*void**/(NULL);
		__iv__aave_batch__947_key=PEM_read_bio_PrivateKey(__iv__aave_batch__948_bp, &__iv__aave_batch__947_key, (pem_password_cb*)/*void**/(NULL), NULL);
		if(__iv__aave_batch__947_key){
			EC_KEY* __iv__aave_batch__950_ec_key;
/*service_var <==434 zgenerator_crypt_key.ec_private*/
			__iv__aave_batch__950_ec_key=EVP_PKEY_get1_EC_KEY(__iv__aave_batch__947_key);
			if(__iv__aave_batch__950_ec_key){
				ethereum_rlp_list_type* __iv__aave_batch__951_rlp;
				BIGNUM* __iv__aave_batch__952_bn;
				int __iv__aave_batch__994_buffer_len;
				collection __iv__aave_batch__996_name;
				void* __iv__aave_batch__993_buffer;
				void* __iv__aave_batch__997_buffer_ptr;
				collection __iv__aave_batch__998_name;
				int __iv__aave_batch__1000_buffer_len;
				ethereum_rlp_string_type __iv__aave_batch__999_buffer;
				int __iv__aave_batch__1002_hash_len;
				string __iv__aave_batch__1001_hash;
				ECDSA_SIG* __iv__aave_batch__1005_sig;
				__iv__aave_batch__951_rlp=calloc(1, sizeof(ethereum_rlp_list_type));
/*service_var <==435 ethereum.transaction*/
				__iv__aave_batch__952_bn=BN_new();
				if(__iv__aave_batch__952_bn){
					int __iv__319_ret;
					__iv__319_ret=BN_set_word(__iv__aave_batch__952_bn, (BN_ULONG)/*int*/(__iv__main__0_chain_id));
					if(__iv__319_ret){
						int __iv__aave_batch__954_buffer_len;
						unsigned char* __iv__aave_batch__953_buffer;
/*service_var <==436 zgenerator_crypt.buffer*/
/*service_var <==437 zgenerator_crypt.buffer_len*/
						__iv__aave_batch__954_buffer_len=BN_num_bytes(__iv__aave_batch__952_bn);
						__iv__aave_batch__953_buffer=malloc(__iv__aave_batch__954_buffer_len);
						__iv__aave_batch__954_buffer_len=BN_bn2bin(__iv__aave_batch__952_bn, __iv__aave_batch__953_buffer);
						__iv__aave_batch__899_transaction->v=BN_bin2bn(__iv__aave_batch__953_buffer, __iv__aave_batch__954_buffer_len, (BIGNUM*)/*void**/(NULL));
/*service_var 437==> zgenerator_crypt.buffer_len*/
/*service_var 436==> zgenerator_crypt.buffer*/
					}
				}
/*service_var <==438 zgenerator_crypt.buffer*/
/*service_var <==439 zgenerator_crypt.buffer_len*/
				if(""){
					unsigned char* __iv__321_ustr;
					int __iv__320_i;
					int __iv__aave_batch__955_len;
					int __iv__322_j;
					unsigned char* __iv__aave_batch__956_buffer;
					__iv__321_ustr=(unsigned char*)/*string*/("");
					__iv__320_i=0;
					for(__iv__320_i=0;__iv__321_ustr[__iv__320_i] && !(((__iv__321_ustr[__iv__320_i] >= '0' && __iv__321_ustr[__iv__320_i] <= '9') || (__iv__321_ustr[__iv__320_i] >= 'a' && __iv__321_ustr[__iv__320_i] <= 'f') || (__iv__321_ustr[__iv__320_i] >= 'A' && __iv__321_ustr[__iv__320_i] <= 'F')));__iv__320_i=__iv__320_i + 1){
					}
					if(__iv__321_ustr[__iv__320_i] == '0' && (__iv__321_ustr[__iv__320_i + 1] == 'x' || __iv__321_ustr[__iv__320_i + 1] == 'X')){
						__iv__320_i=__iv__320_i + 2;
					}
					__iv__aave_batch__955_len=0;
					for(__iv__322_j=__iv__320_i;__iv__321_ustr[__iv__322_j];__iv__322_j=__iv__322_j + 1){
						if(((__iv__321_ustr[__iv__322_j] >= '0' && __iv__321_ustr[__iv__322_j] <= '9') || (__iv__321_ustr[__iv__322_j] >= 'a' && __iv__321_ustr[__iv__322_j] <= 'f') || (__iv__321_ustr[__iv__322_j] >= 'A' && __iv__321_ustr[__iv__322_j] <= 'F'))){
							int __iv__323_k;
							for(__iv__323_k=__iv__322_j + 1;((__iv__321_ustr[__iv__323_k] >= '0' && __iv__321_ustr[__iv__323_k] <= '9') || (__iv__321_ustr[__iv__323_k] >= 'a' && __iv__321_ustr[__iv__323_k] <= 'f') || (__iv__321_ustr[__iv__323_k] >= 'A' && __iv__321_ustr[__iv__323_k] <= 'F'));__iv__323_k=__iv__323_k + 1){
							}
							if(((__iv__323_k - __iv__322_j) & 1) == 0 && ((__iv__321_ustr[__iv__322_j + 1] >= '0' && __iv__321_ustr[__iv__322_j + 1] <= '9') || (__iv__321_ustr[__iv__322_j + 1] >= 'a' && __iv__321_ustr[__iv__322_j + 1] <= 'f') || (__iv__321_ustr[__iv__322_j + 1] >= 'A' && __iv__321_ustr[__iv__322_j + 1] <= 'F'))){
								__iv__322_j=__iv__322_j + 1;
							}
							__iv__aave_batch__955_len=__iv__aave_batch__955_len + 1;
						}
					}
					__iv__aave_batch__956_buffer=malloc(__iv__aave_batch__955_len);
					__iv__aave_batch__955_len=0;
					for(__iv__322_j=__iv__320_i;__iv__321_ustr[__iv__322_j];__iv__322_j=__iv__322_j + 1){
						if(((__iv__321_ustr[__iv__322_j] >= '0' && __iv__321_ustr[__iv__322_j] <= '9') || (__iv__321_ustr[__iv__322_j] >= 'a' && __iv__321_ustr[__iv__322_j] <= 'f') || (__iv__321_ustr[__iv__322_j] >= 'A' && __iv__321_ustr[__iv__322_j] <= 'F'))){
							int __iv__323_k;
							if(__iv__321_ustr[__iv__322_j] <= '9'){
								__iv__aave_batch__956_buffer[__iv__aave_batch__955_len]=__iv__321_ustr[__iv__322_j] - '0';
							}
							else if(__iv__321_ustr[__iv__322_j] <= 'F'){
								__iv__aave_batch__956_buffer[__iv__aave_batch__955_len]=__iv__321_ustr[__iv__322_j] - 'A' + 10;
							}
							else {
								__iv__aave_batch__956_buffer[__iv__aave_batch__955_len]=__iv__321_ustr[__iv__322_j] - 'a' + 10;
							}
							for(__iv__323_k=__iv__322_j + 1;((__iv__321_ustr[__iv__323_k] >= '0' && __iv__321_ustr[__iv__323_k] <= '9') || (__iv__321_ustr[__iv__323_k] >= 'a' && __iv__321_ustr[__iv__323_k] <= 'f') || (__iv__321_ustr[__iv__323_k] >= 'A' && __iv__321_ustr[__iv__323_k] <= 'F'));__iv__323_k=__iv__323_k + 1){
							}
							if(((__iv__323_k - __iv__322_j) & 1) == 0 && ((__iv__321_ustr[__iv__322_j + 1] >= '0' && __iv__321_ustr[__iv__322_j + 1] <= '9') || (__iv__321_ustr[__iv__322_j + 1] >= 'a' && __iv__321_ustr[__iv__322_j + 1] <= 'f') || (__iv__321_ustr[__iv__322_j + 1] >= 'A' && __iv__321_ustr[__iv__322_j + 1] <= 'F'))){
								__iv__322_j=__iv__322_j + 1;
								if(__iv__321_ustr[__iv__322_j] <= '9'){
									__iv__aave_batch__956_buffer[__iv__aave_batch__955_len]=__iv__321_ustr[__iv__322_j] - '0' + (16 * __iv__aave_batch__956_buffer[__iv__aave_batch__955_len]);
								}
								else if(__iv__321_ustr[__iv__322_j] <= 'F'){
									__iv__aave_batch__956_buffer[__iv__aave_batch__955_len]=__iv__321_ustr[__iv__322_j] - 'A' + 10 + (16 * __iv__aave_batch__956_buffer[__iv__aave_batch__955_len]);
								}
								else {
									__iv__aave_batch__956_buffer[__iv__aave_batch__955_len]=__iv__321_ustr[__iv__322_j] - 'a' + 10 + (16 * __iv__aave_batch__956_buffer[__iv__aave_batch__955_len]);
								}
							}
							__iv__aave_batch__955_len=__iv__aave_batch__955_len + 1;
						}
					}
					__iv__aave_batch__899_transaction->r=BN_bin2bn(__iv__aave_batch__956_buffer, __iv__aave_batch__955_len, (BIGNUM*)/*void**/(NULL));
					__iv__aave_batch__899_transaction->s=BN_bin2bn(__iv__aave_batch__956_buffer, __iv__aave_batch__955_len, (BIGNUM*)/*void**/(NULL));
				}
/*service_var 439==> zgenerator_crypt.buffer_len*/
/*service_var 438==> zgenerator_crypt.buffer*/
/*service_var <==440 ethereum.rlp*/
				if(__iv__aave_batch__899_transaction){
					int __iv__aave_batch__958_buffer_len;
					unsigned char* __iv__aave_batch__957_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__959_children;
					unsigned char* __iv__aave_batch__960_uvalue;
					int __iv__aave_batch__962_buffer_len;
					unsigned char* __iv__aave_batch__961_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__963_children;
					unsigned char* __iv__aave_batch__964_uvalue;
					int __iv__aave_batch__966_buffer_len;
					unsigned char* __iv__aave_batch__965_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__967_children;
					unsigned char* __iv__aave_batch__968_uvalue;
					int __iv__aave_batch__970_buffer_len;
					unsigned char* __iv__aave_batch__969_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__971_children;
					unsigned char* __iv__aave_batch__972_uvalue;
					int __iv__aave_batch__974_buffer_len;
					unsigned char* __iv__aave_batch__973_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__975_children;
					unsigned char* __iv__aave_batch__976_uvalue;
					ethereum_rlp_list_type* __iv__aave_batch__977_children;
					unsigned char* __iv__aave_batch__978_uvalue;
					int __iv__aave_batch__980_buffer_len;
					unsigned char* __iv__aave_batch__979_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__981_children;
					unsigned char* __iv__aave_batch__982_uvalue;
					int __iv__aave_batch__984_buffer_len;
					unsigned char* __iv__aave_batch__983_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__985_children;
					unsigned char* __iv__aave_batch__986_uvalue;
					int __iv__aave_batch__988_buffer_len;
					unsigned char* __iv__aave_batch__987_buffer;
					ethereum_rlp_list_type* __iv__aave_batch__989_children;
					unsigned char* __iv__aave_batch__990_uvalue;
/*service_var <==441 zgenerator_crypt.buffer*/
/*service_var <==442 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__958_buffer_len=BN_num_bytes(__iv__aave_batch__899_transaction->nonce);
					__iv__aave_batch__957_buffer=malloc(__iv__aave_batch__958_buffer_len);
					__iv__aave_batch__958_buffer_len=BN_bn2bin(__iv__aave_batch__899_transaction->nonce, __iv__aave_batch__957_buffer);
					__iv__aave_batch__959_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__959_children->buffer_len=0;
					__iv__aave_batch__959_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__960_uvalue=__iv__aave_batch__957_buffer;
					if(__iv__aave_batch__958_buffer_len == 1 && __iv__aave_batch__960_uvalue[0] < 0x80){
						__iv__aave_batch__959_children->buffer_len=1;
						__iv__aave_batch__959_children->buffer=malloc(__iv__aave_batch__959_children->buffer_len);
						__iv__aave_batch__959_children->buffer[0]=__iv__aave_batch__960_uvalue[0];
					}
					else if(__iv__aave_batch__958_buffer_len < 56){
						__iv__aave_batch__959_children->buffer_len=1 + __iv__aave_batch__958_buffer_len;
						__iv__aave_batch__959_children->buffer=malloc(__iv__aave_batch__959_children->buffer_len);
						__iv__aave_batch__959_children->buffer[0]=0x80 + __iv__aave_batch__958_buffer_len;
						if(__iv__aave_batch__958_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__959_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__957_buffer), (size_t)/*int*/(__iv__aave_batch__958_buffer_len));
						}
					}
					else {
						int __iv__324_len_length;
						u_int64_t __iv__325_i;
						unsigned char* __iv__326_value_len_chr;
						__iv__324_len_length=1;
						for(__iv__325_i=(u_int64_t)/*int*/(__iv__aave_batch__958_buffer_len);__iv__325_i > 0xff;__iv__325_i=__iv__325_i / 0x100){
							__iv__324_len_length=__iv__324_len_length + 1;
						}
						__iv__aave_batch__959_children->buffer_len=1 + __iv__324_len_length + __iv__aave_batch__958_buffer_len;
						__iv__aave_batch__959_children->buffer=malloc(__iv__aave_batch__959_children->buffer_len);
						__iv__aave_batch__959_children->buffer[0]=0xb7 + __iv__324_len_length;
						__iv__326_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__958_buffer_len);
						for(__iv__325_i=(u_int64_t)/*int*/(__iv__324_len_length);__iv__325_i > 0;__iv__325_i=__iv__325_i - 1){
							__iv__aave_batch__959_children->buffer[__iv__325_i]=__iv__326_value_len_chr[__iv__324_len_length - __iv__325_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__959_children->buffer + 1 + __iv__324_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__957_buffer), (size_t)/*int*/(__iv__aave_batch__958_buffer_len));
					}
					__iv__aave_batch__951_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__951_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__959_children));
/*service_var 442==> zgenerator_crypt.buffer_len*/
/*service_var 441==> zgenerator_crypt.buffer*/
/*service_var <==443 zgenerator_crypt.buffer*/
/*service_var <==444 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__962_buffer_len=BN_num_bytes(__iv__aave_batch__899_transaction->gas_price);
					__iv__aave_batch__961_buffer=malloc(__iv__aave_batch__962_buffer_len);
					__iv__aave_batch__962_buffer_len=BN_bn2bin(__iv__aave_batch__899_transaction->gas_price, __iv__aave_batch__961_buffer);
					__iv__aave_batch__963_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__963_children->buffer_len=0;
					__iv__aave_batch__963_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__964_uvalue=__iv__aave_batch__961_buffer;
					if(__iv__aave_batch__962_buffer_len == 1 && __iv__aave_batch__964_uvalue[0] < 0x80){
						__iv__aave_batch__963_children->buffer_len=1;
						__iv__aave_batch__963_children->buffer=malloc(__iv__aave_batch__963_children->buffer_len);
						__iv__aave_batch__963_children->buffer[0]=__iv__aave_batch__964_uvalue[0];
					}
					else if(__iv__aave_batch__962_buffer_len < 56){
						__iv__aave_batch__963_children->buffer_len=1 + __iv__aave_batch__962_buffer_len;
						__iv__aave_batch__963_children->buffer=malloc(__iv__aave_batch__963_children->buffer_len);
						__iv__aave_batch__963_children->buffer[0]=0x80 + __iv__aave_batch__962_buffer_len;
						if(__iv__aave_batch__962_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__963_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__961_buffer), (size_t)/*int*/(__iv__aave_batch__962_buffer_len));
						}
					}
					else {
						int __iv__327_len_length;
						u_int64_t __iv__328_i;
						unsigned char* __iv__329_value_len_chr;
						__iv__327_len_length=1;
						for(__iv__328_i=(u_int64_t)/*int*/(__iv__aave_batch__962_buffer_len);__iv__328_i > 0xff;__iv__328_i=__iv__328_i / 0x100){
							__iv__327_len_length=__iv__327_len_length + 1;
						}
						__iv__aave_batch__963_children->buffer_len=1 + __iv__327_len_length + __iv__aave_batch__962_buffer_len;
						__iv__aave_batch__963_children->buffer=malloc(__iv__aave_batch__963_children->buffer_len);
						__iv__aave_batch__963_children->buffer[0]=0xb7 + __iv__327_len_length;
						__iv__329_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__962_buffer_len);
						for(__iv__328_i=(u_int64_t)/*int*/(__iv__327_len_length);__iv__328_i > 0;__iv__328_i=__iv__328_i - 1){
							__iv__aave_batch__963_children->buffer[__iv__328_i]=__iv__329_value_len_chr[__iv__327_len_length - __iv__328_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__963_children->buffer + 1 + __iv__327_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__961_buffer), (size_t)/*int*/(__iv__aave_batch__962_buffer_len));
					}
					__iv__aave_batch__951_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__951_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__963_children));
/*service_var 444==> zgenerator_crypt.buffer_len*/
/*service_var 443==> zgenerator_crypt.buffer*/
/*service_var <==445 zgenerator_crypt.buffer*/
/*service_var <==446 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__966_buffer_len=BN_num_bytes(__iv__aave_batch__899_transaction->gas_limit);
					__iv__aave_batch__965_buffer=malloc(__iv__aave_batch__966_buffer_len);
					__iv__aave_batch__966_buffer_len=BN_bn2bin(__iv__aave_batch__899_transaction->gas_limit, __iv__aave_batch__965_buffer);
					__iv__aave_batch__967_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__967_children->buffer_len=0;
					__iv__aave_batch__967_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__968_uvalue=__iv__aave_batch__965_buffer;
					if(__iv__aave_batch__966_buffer_len == 1 && __iv__aave_batch__968_uvalue[0] < 0x80){
						__iv__aave_batch__967_children->buffer_len=1;
						__iv__aave_batch__967_children->buffer=malloc(__iv__aave_batch__967_children->buffer_len);
						__iv__aave_batch__967_children->buffer[0]=__iv__aave_batch__968_uvalue[0];
					}
					else if(__iv__aave_batch__966_buffer_len < 56){
						__iv__aave_batch__967_children->buffer_len=1 + __iv__aave_batch__966_buffer_len;
						__iv__aave_batch__967_children->buffer=malloc(__iv__aave_batch__967_children->buffer_len);
						__iv__aave_batch__967_children->buffer[0]=0x80 + __iv__aave_batch__966_buffer_len;
						if(__iv__aave_batch__966_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__967_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__965_buffer), (size_t)/*int*/(__iv__aave_batch__966_buffer_len));
						}
					}
					else {
						int __iv__330_len_length;
						u_int64_t __iv__331_i;
						unsigned char* __iv__332_value_len_chr;
						__iv__330_len_length=1;
						for(__iv__331_i=(u_int64_t)/*int*/(__iv__aave_batch__966_buffer_len);__iv__331_i > 0xff;__iv__331_i=__iv__331_i / 0x100){
							__iv__330_len_length=__iv__330_len_length + 1;
						}
						__iv__aave_batch__967_children->buffer_len=1 + __iv__330_len_length + __iv__aave_batch__966_buffer_len;
						__iv__aave_batch__967_children->buffer=malloc(__iv__aave_batch__967_children->buffer_len);
						__iv__aave_batch__967_children->buffer[0]=0xb7 + __iv__330_len_length;
						__iv__332_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__966_buffer_len);
						for(__iv__331_i=(u_int64_t)/*int*/(__iv__330_len_length);__iv__331_i > 0;__iv__331_i=__iv__331_i - 1){
							__iv__aave_batch__967_children->buffer[__iv__331_i]=__iv__332_value_len_chr[__iv__330_len_length - __iv__331_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__967_children->buffer + 1 + __iv__330_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__965_buffer), (size_t)/*int*/(__iv__aave_batch__966_buffer_len));
					}
					__iv__aave_batch__951_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__951_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__967_children));
/*service_var 446==> zgenerator_crypt.buffer_len*/
/*service_var 445==> zgenerator_crypt.buffer*/
/*service_var <==447 zgenerator_crypt.buffer*/
/*service_var <==448 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__970_buffer_len=BN_num_bytes(__iv__aave_batch__899_transaction->recipient);
					__iv__aave_batch__969_buffer=malloc(__iv__aave_batch__970_buffer_len);
					__iv__aave_batch__970_buffer_len=BN_bn2bin(__iv__aave_batch__899_transaction->recipient, __iv__aave_batch__969_buffer);
					__iv__aave_batch__971_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__971_children->buffer_len=0;
					__iv__aave_batch__971_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__972_uvalue=__iv__aave_batch__969_buffer;
					if(__iv__aave_batch__970_buffer_len == 1 && __iv__aave_batch__972_uvalue[0] < 0x80){
						__iv__aave_batch__971_children->buffer_len=1;
						__iv__aave_batch__971_children->buffer=malloc(__iv__aave_batch__971_children->buffer_len);
						__iv__aave_batch__971_children->buffer[0]=__iv__aave_batch__972_uvalue[0];
					}
					else if(__iv__aave_batch__970_buffer_len < 56){
						__iv__aave_batch__971_children->buffer_len=1 + __iv__aave_batch__970_buffer_len;
						__iv__aave_batch__971_children->buffer=malloc(__iv__aave_batch__971_children->buffer_len);
						__iv__aave_batch__971_children->buffer[0]=0x80 + __iv__aave_batch__970_buffer_len;
						if(__iv__aave_batch__970_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__971_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__969_buffer), (size_t)/*int*/(__iv__aave_batch__970_buffer_len));
						}
					}
					else {
						int __iv__333_len_length;
						u_int64_t __iv__334_i;
						unsigned char* __iv__335_value_len_chr;
						__iv__333_len_length=1;
						for(__iv__334_i=(u_int64_t)/*int*/(__iv__aave_batch__970_buffer_len);__iv__334_i > 0xff;__iv__334_i=__iv__334_i / 0x100){
							__iv__333_len_length=__iv__333_len_length + 1;
						}
						__iv__aave_batch__971_children->buffer_len=1 + __iv__333_len_length + __iv__aave_batch__970_buffer_len;
						__iv__aave_batch__971_children->buffer=malloc(__iv__aave_batch__971_children->buffer_len);
						__iv__aave_batch__971_children->buffer[0]=0xb7 + __iv__333_len_length;
						__iv__335_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__970_buffer_len);
						for(__iv__334_i=(u_int64_t)/*int*/(__iv__333_len_length);__iv__334_i > 0;__iv__334_i=__iv__334_i - 1){
							__iv__aave_batch__971_children->buffer[__iv__334_i]=__iv__335_value_len_chr[__iv__333_len_length - __iv__334_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__971_children->buffer + 1 + __iv__333_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__969_buffer), (size_t)/*int*/(__iv__aave_batch__970_buffer_len));
					}
					__iv__aave_batch__951_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__951_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__971_children));
/*service_var 448==> zgenerator_crypt.buffer_len*/
/*service_var 447==> zgenerator_crypt.buffer*/
/*service_var <==449 zgenerator_crypt.buffer*/
/*service_var <==450 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__974_buffer_len=BN_num_bytes(__iv__aave_batch__899_transaction->value);
					__iv__aave_batch__973_buffer=malloc(__iv__aave_batch__974_buffer_len);
					__iv__aave_batch__974_buffer_len=BN_bn2bin(__iv__aave_batch__899_transaction->value, __iv__aave_batch__973_buffer);
					__iv__aave_batch__975_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__975_children->buffer_len=0;
					__iv__aave_batch__975_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__976_uvalue=__iv__aave_batch__973_buffer;
					if(__iv__aave_batch__974_buffer_len == 1 && __iv__aave_batch__976_uvalue[0] < 0x80){
						__iv__aave_batch__975_children->buffer_len=1;
						__iv__aave_batch__975_children->buffer=malloc(__iv__aave_batch__975_children->buffer_len);
						__iv__aave_batch__975_children->buffer[0]=__iv__aave_batch__976_uvalue[0];
					}
					else if(__iv__aave_batch__974_buffer_len < 56){
						__iv__aave_batch__975_children->buffer_len=1 + __iv__aave_batch__974_buffer_len;
						__iv__aave_batch__975_children->buffer=malloc(__iv__aave_batch__975_children->buffer_len);
						__iv__aave_batch__975_children->buffer[0]=0x80 + __iv__aave_batch__974_buffer_len;
						if(__iv__aave_batch__974_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__975_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__973_buffer), (size_t)/*int*/(__iv__aave_batch__974_buffer_len));
						}
					}
					else {
						int __iv__336_len_length;
						u_int64_t __iv__337_i;
						unsigned char* __iv__338_value_len_chr;
						__iv__336_len_length=1;
						for(__iv__337_i=(u_int64_t)/*int*/(__iv__aave_batch__974_buffer_len);__iv__337_i > 0xff;__iv__337_i=__iv__337_i / 0x100){
							__iv__336_len_length=__iv__336_len_length + 1;
						}
						__iv__aave_batch__975_children->buffer_len=1 + __iv__336_len_length + __iv__aave_batch__974_buffer_len;
						__iv__aave_batch__975_children->buffer=malloc(__iv__aave_batch__975_children->buffer_len);
						__iv__aave_batch__975_children->buffer[0]=0xb7 + __iv__336_len_length;
						__iv__338_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__974_buffer_len);
						for(__iv__337_i=(u_int64_t)/*int*/(__iv__336_len_length);__iv__337_i > 0;__iv__337_i=__iv__337_i - 1){
							__iv__aave_batch__975_children->buffer[__iv__337_i]=__iv__338_value_len_chr[__iv__336_len_length - __iv__337_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__975_children->buffer + 1 + __iv__336_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__973_buffer), (size_t)/*int*/(__iv__aave_batch__974_buffer_len));
					}
					__iv__aave_batch__951_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__951_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__975_children));
/*service_var 450==> zgenerator_crypt.buffer_len*/
/*service_var 449==> zgenerator_crypt.buffer*/
					__iv__aave_batch__977_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__977_children->buffer_len=0;
					__iv__aave_batch__977_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__978_uvalue=__iv__aave_batch__899_transaction->data;
					if(__iv__aave_batch__899_transaction->data_len == 1 && __iv__aave_batch__978_uvalue[0] < 0x80){
						__iv__aave_batch__977_children->buffer_len=1;
						__iv__aave_batch__977_children->buffer=malloc(__iv__aave_batch__977_children->buffer_len);
						__iv__aave_batch__977_children->buffer[0]=__iv__aave_batch__978_uvalue[0];
					}
					else if(__iv__aave_batch__899_transaction->data_len < 56){
						__iv__aave_batch__977_children->buffer_len=1 + __iv__aave_batch__899_transaction->data_len;
						__iv__aave_batch__977_children->buffer=malloc(__iv__aave_batch__977_children->buffer_len);
						__iv__aave_batch__977_children->buffer[0]=0x80 + __iv__aave_batch__899_transaction->data_len;
						if(__iv__aave_batch__899_transaction->data_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__977_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__899_transaction->data), (size_t)/*int*/(__iv__aave_batch__899_transaction->data_len));
						}
					}
					else {
						int __iv__339_len_length;
						u_int64_t __iv__340_i;
						unsigned char* __iv__341_value_len_chr;
						__iv__339_len_length=1;
						for(__iv__340_i=(u_int64_t)/*int*/(__iv__aave_batch__899_transaction->data_len);__iv__340_i > 0xff;__iv__340_i=__iv__340_i / 0x100){
							__iv__339_len_length=__iv__339_len_length + 1;
						}
						__iv__aave_batch__977_children->buffer_len=1 + __iv__339_len_length + __iv__aave_batch__899_transaction->data_len;
						__iv__aave_batch__977_children->buffer=malloc(__iv__aave_batch__977_children->buffer_len);
						__iv__aave_batch__977_children->buffer[0]=0xb7 + __iv__339_len_length;
						__iv__341_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__899_transaction->data_len);
						for(__iv__340_i=(u_int64_t)/*int*/(__iv__339_len_length);__iv__340_i > 0;__iv__340_i=__iv__340_i - 1){
							__iv__aave_batch__977_children->buffer[__iv__340_i]=__iv__341_value_len_chr[__iv__339_len_length - __iv__340_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__977_children->buffer + 1 + __iv__339_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__899_transaction->data), (size_t)/*int*/(__iv__aave_batch__899_transaction->data_len));
					}
					__iv__aave_batch__951_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__951_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__977_children));
/*service_var <==451 zgenerator_crypt.buffer*/
/*service_var <==452 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__980_buffer_len=BN_num_bytes(__iv__aave_batch__899_transaction->v);
					__iv__aave_batch__979_buffer=malloc(__iv__aave_batch__980_buffer_len);
					__iv__aave_batch__980_buffer_len=BN_bn2bin(__iv__aave_batch__899_transaction->v, __iv__aave_batch__979_buffer);
					__iv__aave_batch__981_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__981_children->buffer_len=0;
					__iv__aave_batch__981_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__982_uvalue=__iv__aave_batch__979_buffer;
					if(__iv__aave_batch__980_buffer_len == 1 && __iv__aave_batch__982_uvalue[0] < 0x80){
						__iv__aave_batch__981_children->buffer_len=1;
						__iv__aave_batch__981_children->buffer=malloc(__iv__aave_batch__981_children->buffer_len);
						__iv__aave_batch__981_children->buffer[0]=__iv__aave_batch__982_uvalue[0];
					}
					else if(__iv__aave_batch__980_buffer_len < 56){
						__iv__aave_batch__981_children->buffer_len=1 + __iv__aave_batch__980_buffer_len;
						__iv__aave_batch__981_children->buffer=malloc(__iv__aave_batch__981_children->buffer_len);
						__iv__aave_batch__981_children->buffer[0]=0x80 + __iv__aave_batch__980_buffer_len;
						if(__iv__aave_batch__980_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__981_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__979_buffer), (size_t)/*int*/(__iv__aave_batch__980_buffer_len));
						}
					}
					else {
						int __iv__342_len_length;
						u_int64_t __iv__343_i;
						unsigned char* __iv__344_value_len_chr;
						__iv__342_len_length=1;
						for(__iv__343_i=(u_int64_t)/*int*/(__iv__aave_batch__980_buffer_len);__iv__343_i > 0xff;__iv__343_i=__iv__343_i / 0x100){
							__iv__342_len_length=__iv__342_len_length + 1;
						}
						__iv__aave_batch__981_children->buffer_len=1 + __iv__342_len_length + __iv__aave_batch__980_buffer_len;
						__iv__aave_batch__981_children->buffer=malloc(__iv__aave_batch__981_children->buffer_len);
						__iv__aave_batch__981_children->buffer[0]=0xb7 + __iv__342_len_length;
						__iv__344_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__980_buffer_len);
						for(__iv__343_i=(u_int64_t)/*int*/(__iv__342_len_length);__iv__343_i > 0;__iv__343_i=__iv__343_i - 1){
							__iv__aave_batch__981_children->buffer[__iv__343_i]=__iv__344_value_len_chr[__iv__342_len_length - __iv__343_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__981_children->buffer + 1 + __iv__342_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__979_buffer), (size_t)/*int*/(__iv__aave_batch__980_buffer_len));
					}
					__iv__aave_batch__951_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__951_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__981_children));
/*service_var 452==> zgenerator_crypt.buffer_len*/
/*service_var 451==> zgenerator_crypt.buffer*/
/*service_var <==453 zgenerator_crypt.buffer*/
/*service_var <==454 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__984_buffer_len=BN_num_bytes(__iv__aave_batch__899_transaction->r);
					__iv__aave_batch__983_buffer=malloc(__iv__aave_batch__984_buffer_len);
					__iv__aave_batch__984_buffer_len=BN_bn2bin(__iv__aave_batch__899_transaction->r, __iv__aave_batch__983_buffer);
					__iv__aave_batch__985_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__985_children->buffer_len=0;
					__iv__aave_batch__985_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__986_uvalue=__iv__aave_batch__983_buffer;
					if(__iv__aave_batch__984_buffer_len == 1 && __iv__aave_batch__986_uvalue[0] < 0x80){
						__iv__aave_batch__985_children->buffer_len=1;
						__iv__aave_batch__985_children->buffer=malloc(__iv__aave_batch__985_children->buffer_len);
						__iv__aave_batch__985_children->buffer[0]=__iv__aave_batch__986_uvalue[0];
					}
					else if(__iv__aave_batch__984_buffer_len < 56){
						__iv__aave_batch__985_children->buffer_len=1 + __iv__aave_batch__984_buffer_len;
						__iv__aave_batch__985_children->buffer=malloc(__iv__aave_batch__985_children->buffer_len);
						__iv__aave_batch__985_children->buffer[0]=0x80 + __iv__aave_batch__984_buffer_len;
						if(__iv__aave_batch__984_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__985_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__983_buffer), (size_t)/*int*/(__iv__aave_batch__984_buffer_len));
						}
					}
					else {
						int __iv__345_len_length;
						u_int64_t __iv__346_i;
						unsigned char* __iv__347_value_len_chr;
						__iv__345_len_length=1;
						for(__iv__346_i=(u_int64_t)/*int*/(__iv__aave_batch__984_buffer_len);__iv__346_i > 0xff;__iv__346_i=__iv__346_i / 0x100){
							__iv__345_len_length=__iv__345_len_length + 1;
						}
						__iv__aave_batch__985_children->buffer_len=1 + __iv__345_len_length + __iv__aave_batch__984_buffer_len;
						__iv__aave_batch__985_children->buffer=malloc(__iv__aave_batch__985_children->buffer_len);
						__iv__aave_batch__985_children->buffer[0]=0xb7 + __iv__345_len_length;
						__iv__347_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__984_buffer_len);
						for(__iv__346_i=(u_int64_t)/*int*/(__iv__345_len_length);__iv__346_i > 0;__iv__346_i=__iv__346_i - 1){
							__iv__aave_batch__985_children->buffer[__iv__346_i]=__iv__347_value_len_chr[__iv__345_len_length - __iv__346_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__985_children->buffer + 1 + __iv__345_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__983_buffer), (size_t)/*int*/(__iv__aave_batch__984_buffer_len));
					}
					__iv__aave_batch__951_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__951_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__985_children));
/*service_var 454==> zgenerator_crypt.buffer_len*/
/*service_var 453==> zgenerator_crypt.buffer*/
/*service_var <==455 zgenerator_crypt.buffer*/
/*service_var <==456 zgenerator_crypt.buffer_len*/
					__iv__aave_batch__988_buffer_len=BN_num_bytes(__iv__aave_batch__899_transaction->s);
					__iv__aave_batch__987_buffer=malloc(__iv__aave_batch__988_buffer_len);
					__iv__aave_batch__988_buffer_len=BN_bn2bin(__iv__aave_batch__899_transaction->s, __iv__aave_batch__987_buffer);
					__iv__aave_batch__989_children=calloc(1, sizeof(ethereum_rlp_list_type));
					__iv__aave_batch__989_children->buffer_len=0;
					__iv__aave_batch__989_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
					__iv__aave_batch__990_uvalue=__iv__aave_batch__987_buffer;
					if(__iv__aave_batch__988_buffer_len == 1 && __iv__aave_batch__990_uvalue[0] < 0x80){
						__iv__aave_batch__989_children->buffer_len=1;
						__iv__aave_batch__989_children->buffer=malloc(__iv__aave_batch__989_children->buffer_len);
						__iv__aave_batch__989_children->buffer[0]=__iv__aave_batch__990_uvalue[0];
					}
					else if(__iv__aave_batch__988_buffer_len < 56){
						__iv__aave_batch__989_children->buffer_len=1 + __iv__aave_batch__988_buffer_len;
						__iv__aave_batch__989_children->buffer=malloc(__iv__aave_batch__989_children->buffer_len);
						__iv__aave_batch__989_children->buffer[0]=0x80 + __iv__aave_batch__988_buffer_len;
						if(__iv__aave_batch__988_buffer_len){
							memcpy((void*)/*unsigned char**/(__iv__aave_batch__989_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__987_buffer), (size_t)/*int*/(__iv__aave_batch__988_buffer_len));
						}
					}
					else {
						int __iv__348_len_length;
						u_int64_t __iv__349_i;
						unsigned char* __iv__350_value_len_chr;
						__iv__348_len_length=1;
						for(__iv__349_i=(u_int64_t)/*int*/(__iv__aave_batch__988_buffer_len);__iv__349_i > 0xff;__iv__349_i=__iv__349_i / 0x100){
							__iv__348_len_length=__iv__348_len_length + 1;
						}
						__iv__aave_batch__989_children->buffer_len=1 + __iv__348_len_length + __iv__aave_batch__988_buffer_len;
						__iv__aave_batch__989_children->buffer=malloc(__iv__aave_batch__989_children->buffer_len);
						__iv__aave_batch__989_children->buffer[0]=0xb7 + __iv__348_len_length;
						__iv__350_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__988_buffer_len);
						for(__iv__349_i=(u_int64_t)/*int*/(__iv__348_len_length);__iv__349_i > 0;__iv__349_i=__iv__349_i - 1){
							__iv__aave_batch__989_children->buffer[__iv__349_i]=__iv__350_value_len_chr[__iv__348_len_length - __iv__349_i];
						}
						memcpy((void*)/*unsigned char**/(__iv__aave_batch__989_children->buffer + 1 + __iv__348_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__987_buffer), (size_t)/*int*/(__iv__aave_batch__988_buffer_len));
					}
					__iv__aave_batch__951_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__951_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__989_children));
/*service_var 456==> zgenerator_crypt.buffer_len*/
/*service_var 455==> zgenerator_crypt.buffer*/
				}
/*service_var 440==> ethereum.rlp*/
/*service_var <==457 zgenerator_crypt.buffer*/
/*service_var <==458 zgenerator_crypt.buffer_len*/
/*service_var <==459 zgenerator_crypt.buffer*/
/*service_var <==460 zgenerator_crypt.buffer_len*/
				__iv__aave_batch__994_buffer_len=0;
				for(__iv__aave_batch__996_name=(collection)/*collection*/(__iv__aave_batch__951_rlp->children);__iv__aave_batch__996_name;__iv__aave_batch__996_name=(collection)/*z_list_item_type**/(__iv__aave_batch__996_name->next)){
					ethereum_rlp_list_type* __iv__aave_batch__995_children;
					__iv__aave_batch__995_children=(ethereum_rlp_list_type*)/*void**/(__iv__aave_batch__996_name->data);
					__iv__aave_batch__994_buffer_len=__iv__aave_batch__994_buffer_len + __iv__aave_batch__995_children->buffer_len;
				}
				__iv__aave_batch__993_buffer=malloc(__iv__aave_batch__994_buffer_len);
				__iv__aave_batch__997_buffer_ptr=__iv__aave_batch__993_buffer;
				for(__iv__aave_batch__998_name=(collection)/*collection*/(__iv__aave_batch__951_rlp->children);__iv__aave_batch__998_name;__iv__aave_batch__998_name=(collection)/*z_list_item_type**/(__iv__aave_batch__998_name->next)){
					ethereum_rlp_list_type* __iv__aave_batch__995_children;
					__iv__aave_batch__995_children=(ethereum_rlp_list_type*)/*void**/(__iv__aave_batch__998_name->data);
					memcpy(__iv__aave_batch__997_buffer_ptr, (const void*)/*unsigned char**/(__iv__aave_batch__995_children->buffer), (size_t)/*int*/(__iv__aave_batch__995_children->buffer_len));
					__iv__aave_batch__997_buffer_ptr=__iv__aave_batch__997_buffer_ptr + __iv__aave_batch__995_children->buffer_len;
				}
/*service_var <==461 zgenerator_crypt.buffer*/
/*service_var <==462 zgenerator_crypt.buffer_len*/
				__iv__aave_batch__1000_buffer_len=0;
				__iv__aave_batch__999_buffer=(ethereum_rlp_string_type)/*void**/(NULL);
				if(__iv__aave_batch__994_buffer_len < 56){
					__iv__aave_batch__1000_buffer_len=1 + __iv__aave_batch__994_buffer_len;
					__iv__aave_batch__999_buffer=malloc(__iv__aave_batch__1000_buffer_len);
					__iv__aave_batch__999_buffer[0]=0xc0 + __iv__aave_batch__994_buffer_len;
					if(__iv__aave_batch__994_buffer_len){
						memcpy((void*)/*ethereum_rlp_string_type*/(__iv__aave_batch__999_buffer + 1), (const void*)/*void**/(__iv__aave_batch__993_buffer), (size_t)/*int*/(__iv__aave_batch__994_buffer_len));
					}
				}
				else {
					int __iv__351_len_length;
					u_int64_t __iv__352_i;
					unsigned char* __iv__353_value_len_chr;
					__iv__351_len_length=1;
					for(__iv__352_i=(u_int64_t)/*int*/(__iv__aave_batch__994_buffer_len);__iv__352_i > 0xff;__iv__352_i=__iv__352_i / 0x100){
						__iv__351_len_length=__iv__351_len_length + 1;
					}
					__iv__aave_batch__1000_buffer_len=1 + __iv__351_len_length + __iv__aave_batch__994_buffer_len;
					__iv__aave_batch__999_buffer=malloc(__iv__aave_batch__1000_buffer_len);
					__iv__aave_batch__999_buffer[0]=0xf7 + __iv__351_len_length;
					__iv__353_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__994_buffer_len);
					for(__iv__352_i=(u_int64_t)/*int*/(__iv__351_len_length);__iv__352_i > 0;__iv__352_i=__iv__352_i - 1){
						__iv__aave_batch__999_buffer[__iv__352_i]=__iv__353_value_len_chr[__iv__351_len_length - __iv__352_i];
					}
					memcpy((void*)/*ethereum_rlp_string_type*/(__iv__aave_batch__999_buffer + 1 + __iv__351_len_length), (const void*)/*void**/(__iv__aave_batch__993_buffer), (size_t)/*int*/(__iv__aave_batch__994_buffer_len));
				}
/*service_var <==463 zgenerator_crypt.hash*/
/*service_var <==464 zgenerator_crypt.hash_len*/
				__iv__aave_batch__1002_hash_len=32;
				__iv__aave_batch__1001_hash=malloc(32 + 1);
				__iv__aave_batch__1001_hash[0]='\0';
				zgenerator_crypt_keccak256((unsigned char*)/*ethereum_rlp_string_type*/(__iv__aave_batch__999_buffer), (unsigned int)/*int*/(__iv__aave_batch__1000_buffer_len), (unsigned char*)/*string*/(__iv__aave_batch__1001_hash));
/*service_var <==465 zgenerator_crypt.bn_signature_r*/
/*service_var <==466 zgenerator_crypt.bn_signature_s*/
				__iv__aave_batch__1005_sig=ECDSA_do_sign((unsigned char*)/*string*/(__iv__aave_batch__1001_hash), __iv__aave_batch__1002_hash_len, __iv__aave_batch__950_ec_key);
				if(__iv__aave_batch__1005_sig){
					const BIGNUM* __iv__aave_batch__1003_pr;
					const BIGNUM* __iv__aave_batch__1004_ps;
					__iv__aave_batch__1003_pr=(const BIGNUM*)/*void**/(NULL);
					__iv__aave_batch__1004_ps=(const BIGNUM*)/*void**/(NULL);
					ECDSA_SIG_get0(__iv__aave_batch__1005_sig, &__iv__aave_batch__1003_pr, &__iv__aave_batch__1004_ps);
					if(__iv__aave_batch__1004_ps){
						const EC_GROUP* __iv__aave_batch__1007_group;
						const BIGNUM* __iv__aave_batch__1006_order;
						BIGNUM* __iv__354_halforder;
						int __iv__355_sup;
/*service_var <==467 openssl_ec.group*/
						__iv__aave_batch__1007_group=EC_KEY_get0_group(__iv__aave_batch__950_ec_key);
/*service_var <==468 openssl_ec.order*/
						__iv__aave_batch__1006_order=EC_GROUP_get0_order(__iv__aave_batch__1007_group);
						__iv__354_halforder=BN_new();
						BN_rshift1(__iv__354_halforder, (BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__1006_order));
						__iv__355_sup=BN_cmp((BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__1004_ps), __iv__354_halforder);
						if(__iv__355_sup > 0){
							BN_sub((BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__1004_ps), (BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__1006_order), (BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__1004_ps));
						}
/*service_var 468==> openssl_ec.order*/
/*service_var 467==> openssl_ec.group*/
					}
					if(__iv__aave_batch__1003_pr && __iv__aave_batch__1004_ps){
						unsigned long __iv__356_v_int;
						int __iv__358_loop;
						int __iv__357_recid;
						__iv__356_v_int=(unsigned long)/*int*/((0x23 + (__iv__main__0_chain_id * 2)));
						__iv__358_loop=1;
						for(__iv__357_recid=0;__iv__357_recid < 4 && __iv__358_loop;__iv__357_recid=__iv__357_recid + 1){
							EC_KEY* __iv__359_key;
							int __iv__360_ret;
							__iv__359_key=EC_KEY_new_by_curve_name(NID_secp256k1);
							if(__iv__359_key){
							}
							__iv__360_ret=openssl_ec_key_recover(__iv__359_key, (BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__1003_pr), (BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__1004_ps), (unsigned char*)/*string*/(__iv__aave_batch__1001_hash), __iv__aave_batch__1002_hash_len, __iv__357_recid, 1);
							if(__iv__360_ret == 1){
								const EC_GROUP* __iv__aave_batch__1008_group;
								const EC_POINT* __iv__363_public_key_point;
/*service_var <==469 zgenerator_crypt.buffer*/
/*service_var <==470 zgenerator_crypt.buffer_len*/
/*service_var <==471 openssl_ec.group*/
								__iv__aave_batch__1008_group=EC_KEY_get0_group(__iv__main__26_ec_key);
								__iv__363_public_key_point=EC_KEY_get0_public_key(__iv__main__26_ec_key);
								if(__iv__363_public_key_point){
									int __iv__aave_batch__1010_buffer_len;
									unsigned char* __iv__aave_batch__1009_buffer;
									__iv__aave_batch__1010_buffer_len=256;
									__iv__aave_batch__1009_buffer=malloc(__iv__aave_batch__1010_buffer_len);
									__iv__aave_batch__1010_buffer_len=EC_POINT_point2oct((EC_GROUP*)/*const EC_GROUP**/(__iv__aave_batch__1008_group), (EC_POINT*)/*const EC_POINT**/(__iv__363_public_key_point), POINT_CONVERSION_UNCOMPRESSED, __iv__aave_batch__1009_buffer, (size_t)/*int*/(__iv__aave_batch__1010_buffer_len), (BN_CTX*)/*void**/(NULL));
									if(__iv__aave_batch__1010_buffer_len){
										const EC_GROUP* __iv__aave_batch__1011_group;
										const EC_POINT* __iv__364_public_key_point;
/*service_var <==472 zgenerator_crypt.buffer2*/
/*service_var <==473 zgenerator_crypt.buffer2_len*/
/*service_var <==474 openssl_ec.group*/
										__iv__aave_batch__1011_group=EC_KEY_get0_group(__iv__359_key);
										__iv__364_public_key_point=EC_KEY_get0_public_key(__iv__359_key);
										if(__iv__364_public_key_point){
											int __iv__aave_batch__1013_buffer_len;
											unsigned char* __iv__aave_batch__1012_buffer;
											__iv__aave_batch__1013_buffer_len=256;
											__iv__aave_batch__1012_buffer=malloc(__iv__aave_batch__1013_buffer_len);
											__iv__aave_batch__1013_buffer_len=EC_POINT_point2oct((EC_GROUP*)/*const EC_GROUP**/(__iv__aave_batch__1011_group), (EC_POINT*)/*const EC_POINT**/(__iv__364_public_key_point), POINT_CONVERSION_UNCOMPRESSED, __iv__aave_batch__1012_buffer, (size_t)/*int*/(__iv__aave_batch__1013_buffer_len), (BN_CTX*)/*void**/(NULL));
											if(__iv__aave_batch__1013_buffer_len){
												int __iv__aave_batch__1014_not_equal;
												__iv__aave_batch__1014_not_equal=1;
												if(__iv__aave_batch__1013_buffer_len == __iv__aave_batch__1010_buffer_len){
													__iv__aave_batch__1014_not_equal=memcmp((const void*)/*unsigned char**/(__iv__aave_batch__1012_buffer), (const void*)/*unsigned char**/(__iv__aave_batch__1009_buffer), (size_t)/*int*/(__iv__aave_batch__1013_buffer_len));
												}
												if(!__iv__aave_batch__1014_not_equal){
													BIGNUM* __iv__361_bn;
													int __iv__aave_batch__1016_buffer_len;
													unsigned char* __iv__aave_batch__1015_buffer;
													__iv__356_v_int=__iv__356_v_int + __iv__357_recid;
													__iv__361_bn=BN_new();
													if(__iv__361_bn){
														int __iv__365_ret;
														__iv__365_ret=BN_set_word(__iv__361_bn, (BN_ULONG)/*unsigned long*/(__iv__356_v_int));
														if(__iv__365_ret){
														}
													}
/*service_var <==475 zgenerator_crypt.signature_v*/
/*service_var <==476 zgenerator_crypt.signature_v_len*/
													__iv__aave_batch__1016_buffer_len=BN_num_bytes(__iv__361_bn);
													__iv__aave_batch__1015_buffer=malloc(__iv__aave_batch__1016_buffer_len);
													__iv__aave_batch__1016_buffer_len=BN_bn2bin(__iv__361_bn, __iv__aave_batch__1015_buffer);
													__iv__aave_batch__899_transaction->v=BN_bin2bn(__iv__aave_batch__1015_buffer, __iv__aave_batch__1016_buffer_len, (BIGNUM*)/*void**/(NULL));
/*service_var 476==> zgenerator_crypt.signature_v_len*/
/*service_var 475==> zgenerator_crypt.signature_v*/
													__iv__358_loop=0;
												}
											}
										}
/*service_var 474==> openssl_ec.group*/
/*service_var 473==> zgenerator_crypt.buffer2_len*/
/*service_var 472==> zgenerator_crypt.buffer2*/
									}
								}
/*service_var 471==> openssl_ec.group*/
/*service_var 470==> zgenerator_crypt.buffer_len*/
/*service_var 469==> zgenerator_crypt.buffer*/
							}
						}
						if(__iv__358_loop){
							int __iv__362_is_odd;
							__iv__362_is_odd=BN_is_odd((BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__1003_pr));
							if(__iv__362_is_odd){
								__iv__356_v_int=__iv__356_v_int + 1;
							}
						}
					}
					__iv__aave_batch__899_transaction->r=BN_dup((BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__1003_pr));
					__iv__aave_batch__899_transaction->s=BN_dup((BIGNUM*)/*const BIGNUM**/(__iv__aave_batch__1004_ps));
				}
				else {
				}
/*service_var 466==> zgenerator_crypt.bn_signature_s*/
/*service_var 465==> zgenerator_crypt.bn_signature_r*/
/*service_var 464==> zgenerator_crypt.hash_len*/
/*service_var 463==> zgenerator_crypt.hash*/
/*service_var 462==> zgenerator_crypt.buffer_len*/
/*service_var 461==> zgenerator_crypt.buffer*/
/*service_var 460==> zgenerator_crypt.buffer_len*/
/*service_var 459==> zgenerator_crypt.buffer*/
/*service_var 458==> zgenerator_crypt.buffer_len*/
/*service_var 457==> zgenerator_crypt.buffer*/
/*service_var 435==> ethereum.transaction*/
				EC_KEY_free(__iv__aave_batch__950_ec_key);
			}
			else {
			}
/*service_var 434==> zgenerator_crypt_key.ec_private*/
			EVP_PKEY_free(__iv__aave_batch__947_key);
		}
		else {
		}
		BIO_free_all(__iv__aave_batch__948_bp);
	}
	else {
	}
/*service_var 433==> zgenerator_crypt_key.evp_private*/
/*service_var <==477 ethereum.transaction*/
	if(__iv__aave_batch__899_transaction){
		string __iv__aave_batch__1017_str;
		string __iv__aave_batch__1018_to_print;
		string __iv__aave_batch__1019_str;
		string __iv__aave_batch__1020_str_eth;
		string __iv__aave_batch__1022_tmp_var;
		string __iv__aave_batch__1021_to_print;
		string __iv__aave_batch__1023_str;
		string __iv__aave_batch__1024_to_print;
		string __iv__aave_batch__1025_str;
		string __iv__aave_batch__1026_to_print;
		string __iv__aave_batch__1027_str;
		string __iv__aave_batch__1028_str_eth;
		string __iv__aave_batch__1030_tmp_var;
		string __iv__aave_batch__1029_to_print;
		unsigned char* __iv__aave_batch__1033_u_buffer;
		string __iv__aave_batch__1032_str;
		int __iv__aave_batch__1031_i;
		string __iv__aave_batch__1035_str;
		string __iv__aave_batch__1036_to_print;
		string __iv__aave_batch__1037_str;
		string __iv__aave_batch__1038_to_print;
		string __iv__aave_batch__1039_str;
		string __iv__aave_batch__1040_to_print;
		printf((char*)/*string*/("%s"), "nonce");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__1017_str="";
		if(__iv__aave_batch__899_transaction->nonce){
			__iv__aave_batch__1017_str=BN_bn2dec(__iv__aave_batch__899_transaction->nonce);
		}
		__iv__aave_batch__1018_to_print=__iv__aave_batch__1017_str;
		if(__iv__aave_batch__1018_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__1018_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "gas_price");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__1019_str="";
		if(__iv__aave_batch__899_transaction->gas_price){
			__iv__aave_batch__1019_str=BN_bn2dec(__iv__aave_batch__899_transaction->gas_price);
		}
		__iv__aave_batch__1020_str_eth=ethereum_convert_string_wei_to_string_eth_function(__iv__aave_batch__1019_str, 9);
		__iv__aave_batch__1022_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__1020_str_eth), (char*)/*string*/(" Gwei"));
		__iv__aave_batch__1021_to_print=__iv__aave_batch__1022_tmp_var;
		if(__iv__aave_batch__1021_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__1021_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "gas_limit");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__1023_str="";
		if(__iv__aave_batch__899_transaction->gas_limit){
			__iv__aave_batch__1023_str=BN_bn2dec(__iv__aave_batch__899_transaction->gas_limit);
		}
		__iv__aave_batch__1024_to_print=__iv__aave_batch__1023_str;
		if(__iv__aave_batch__1024_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__1024_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "recipient");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__1025_str="";
		if(__iv__aave_batch__899_transaction->recipient){
			__iv__aave_batch__1025_str=BN_bn2hex(__iv__aave_batch__899_transaction->recipient);
		}
		__iv__aave_batch__1025_str=string_lowercase(__iv__aave_batch__1025_str, 0);
		printf((char*)/*string*/("%s"), "0x");
		__iv__aave_batch__1026_to_print=__iv__aave_batch__1025_str;
		if(__iv__aave_batch__1026_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__1026_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "value");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__1027_str="";
		if(__iv__aave_batch__899_transaction->value){
			__iv__aave_batch__1027_str=BN_bn2dec(__iv__aave_batch__899_transaction->value);
		}
		__iv__aave_batch__1028_str_eth=ethereum_convert_string_wei_to_string_eth_function(__iv__aave_batch__1027_str, 18);
		__iv__aave_batch__1030_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__1028_str_eth), (char*)/*string*/(" ETH"));
		__iv__aave_batch__1029_to_print=__iv__aave_batch__1030_tmp_var;
		if(__iv__aave_batch__1029_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__1029_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "data");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__1033_u_buffer=__iv__aave_batch__899_transaction->data;
		__iv__aave_batch__1032_str=malloc(3 + 1);
		__iv__aave_batch__1032_str[0]='\0';
		__iv__aave_batch__1032_str[2]=0;
		for(__iv__aave_batch__1031_i=0;__iv__aave_batch__1031_i < __iv__aave_batch__899_transaction->data_len;__iv__aave_batch__1031_i=__iv__aave_batch__1031_i + 1){
			string __iv__aave_batch__1034_to_print;
			__iv__aave_batch__1032_str[1]=__iv__aave_batch__1033_u_buffer[__iv__aave_batch__1031_i] % 16;
			__iv__aave_batch__1032_str[0]=__iv__aave_batch__1033_u_buffer[__iv__aave_batch__1031_i] / 16;
			if(__iv__aave_batch__1032_str[1] < 10){
				__iv__aave_batch__1032_str[1]=__iv__aave_batch__1032_str[1] + '0';
			}
			else {
				__iv__aave_batch__1032_str[1]=__iv__aave_batch__1032_str[1] - 10 + 'a';
			}
			if(__iv__aave_batch__1032_str[0] < 10){
				__iv__aave_batch__1032_str[0]=__iv__aave_batch__1032_str[0] + '0';
			}
			else {
				__iv__aave_batch__1032_str[0]=__iv__aave_batch__1032_str[0] - 10 + 'a';
			}
			__iv__aave_batch__1034_to_print=__iv__aave_batch__1032_str;
			if(__iv__aave_batch__1034_to_print){
				printf((char*)/*string*/("%s"), __iv__aave_batch__1034_to_print);
			}
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "v");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__1035_str="";
		if(__iv__aave_batch__899_transaction->v){
			__iv__aave_batch__1035_str=BN_bn2hex(__iv__aave_batch__899_transaction->v);
		}
		__iv__aave_batch__1035_str=string_lowercase(__iv__aave_batch__1035_str, 0);
		printf((char*)/*string*/("%s"), "0x");
		__iv__aave_batch__1036_to_print=__iv__aave_batch__1035_str;
		if(__iv__aave_batch__1036_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__1036_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "r");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__1037_str="";
		if(__iv__aave_batch__899_transaction->r){
			__iv__aave_batch__1037_str=BN_bn2hex(__iv__aave_batch__899_transaction->r);
		}
		__iv__aave_batch__1037_str=string_lowercase(__iv__aave_batch__1037_str, 0);
		printf((char*)/*string*/("%s"), "0x");
		__iv__aave_batch__1038_to_print=__iv__aave_batch__1037_str;
		if(__iv__aave_batch__1038_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__1038_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
		printf((char*)/*string*/("%s"), "s");
		printf((char*)/*string*/("%s"), " : ");
		__iv__aave_batch__1039_str="";
		if(__iv__aave_batch__899_transaction->s){
			__iv__aave_batch__1039_str=BN_bn2hex(__iv__aave_batch__899_transaction->s);
		}
		__iv__aave_batch__1039_str=string_lowercase(__iv__aave_batch__1039_str, 0);
		printf((char*)/*string*/("%s"), "0x");
		__iv__aave_batch__1040_to_print=__iv__aave_batch__1039_str;
		if(__iv__aave_batch__1040_to_print){
			printf((char*)/*string*/("%s"), __iv__aave_batch__1040_to_print);
		}
		printf((char*)/*string*/("%s"), "\n");
	}
/*service_var 477==> ethereum.transaction*/
	__iv__aave_batch__1041_rlp=calloc(1, sizeof(ethereum_rlp_list_type));
/*service_var <==478 ethereum.transaction*/
/*service_var <==479 ethereum.rlp*/
	if(__iv__aave_batch__899_transaction){
		int __iv__aave_batch__1043_buffer_len;
		unsigned char* __iv__aave_batch__1042_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__1044_children;
		unsigned char* __iv__aave_batch__1045_uvalue;
		int __iv__aave_batch__1047_buffer_len;
		unsigned char* __iv__aave_batch__1046_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__1048_children;
		unsigned char* __iv__aave_batch__1049_uvalue;
		int __iv__aave_batch__1051_buffer_len;
		unsigned char* __iv__aave_batch__1050_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__1052_children;
		unsigned char* __iv__aave_batch__1053_uvalue;
		int __iv__aave_batch__1055_buffer_len;
		unsigned char* __iv__aave_batch__1054_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__1056_children;
		unsigned char* __iv__aave_batch__1057_uvalue;
		int __iv__aave_batch__1059_buffer_len;
		unsigned char* __iv__aave_batch__1058_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__1060_children;
		unsigned char* __iv__aave_batch__1061_uvalue;
		ethereum_rlp_list_type* __iv__aave_batch__1062_children;
		unsigned char* __iv__aave_batch__1063_uvalue;
		int __iv__aave_batch__1065_buffer_len;
		unsigned char* __iv__aave_batch__1064_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__1066_children;
		unsigned char* __iv__aave_batch__1067_uvalue;
		int __iv__aave_batch__1069_buffer_len;
		unsigned char* __iv__aave_batch__1068_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__1070_children;
		unsigned char* __iv__aave_batch__1071_uvalue;
		int __iv__aave_batch__1073_buffer_len;
		unsigned char* __iv__aave_batch__1072_buffer;
		ethereum_rlp_list_type* __iv__aave_batch__1074_children;
		unsigned char* __iv__aave_batch__1075_uvalue;
/*service_var <==480 zgenerator_crypt.buffer*/
/*service_var <==481 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__1043_buffer_len=BN_num_bytes(__iv__aave_batch__899_transaction->nonce);
		__iv__aave_batch__1042_buffer=malloc(__iv__aave_batch__1043_buffer_len);
		__iv__aave_batch__1043_buffer_len=BN_bn2bin(__iv__aave_batch__899_transaction->nonce, __iv__aave_batch__1042_buffer);
		__iv__aave_batch__1044_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__1044_children->buffer_len=0;
		__iv__aave_batch__1044_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__1045_uvalue=__iv__aave_batch__1042_buffer;
		if(__iv__aave_batch__1043_buffer_len == 1 && __iv__aave_batch__1045_uvalue[0] < 0x80){
			__iv__aave_batch__1044_children->buffer_len=1;
			__iv__aave_batch__1044_children->buffer=malloc(__iv__aave_batch__1044_children->buffer_len);
			__iv__aave_batch__1044_children->buffer[0]=__iv__aave_batch__1045_uvalue[0];
		}
		else if(__iv__aave_batch__1043_buffer_len < 56){
			__iv__aave_batch__1044_children->buffer_len=1 + __iv__aave_batch__1043_buffer_len;
			__iv__aave_batch__1044_children->buffer=malloc(__iv__aave_batch__1044_children->buffer_len);
			__iv__aave_batch__1044_children->buffer[0]=0x80 + __iv__aave_batch__1043_buffer_len;
			if(__iv__aave_batch__1043_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__1044_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__1042_buffer), (size_t)/*int*/(__iv__aave_batch__1043_buffer_len));
			}
		}
		else {
			int __iv__368_len_length;
			u_int64_t __iv__369_i;
			unsigned char* __iv__370_value_len_chr;
			__iv__368_len_length=1;
			for(__iv__369_i=(u_int64_t)/*int*/(__iv__aave_batch__1043_buffer_len);__iv__369_i > 0xff;__iv__369_i=__iv__369_i / 0x100){
				__iv__368_len_length=__iv__368_len_length + 1;
			}
			__iv__aave_batch__1044_children->buffer_len=1 + __iv__368_len_length + __iv__aave_batch__1043_buffer_len;
			__iv__aave_batch__1044_children->buffer=malloc(__iv__aave_batch__1044_children->buffer_len);
			__iv__aave_batch__1044_children->buffer[0]=0xb7 + __iv__368_len_length;
			__iv__370_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__1043_buffer_len);
			for(__iv__369_i=(u_int64_t)/*int*/(__iv__368_len_length);__iv__369_i > 0;__iv__369_i=__iv__369_i - 1){
				__iv__aave_batch__1044_children->buffer[__iv__369_i]=__iv__370_value_len_chr[__iv__368_len_length - __iv__369_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__1044_children->buffer + 1 + __iv__368_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__1042_buffer), (size_t)/*int*/(__iv__aave_batch__1043_buffer_len));
		}
		__iv__aave_batch__1041_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__1041_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__1044_children));
/*service_var 481==> zgenerator_crypt.buffer_len*/
/*service_var 480==> zgenerator_crypt.buffer*/
/*service_var <==482 zgenerator_crypt.buffer*/
/*service_var <==483 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__1047_buffer_len=BN_num_bytes(__iv__aave_batch__899_transaction->gas_price);
		__iv__aave_batch__1046_buffer=malloc(__iv__aave_batch__1047_buffer_len);
		__iv__aave_batch__1047_buffer_len=BN_bn2bin(__iv__aave_batch__899_transaction->gas_price, __iv__aave_batch__1046_buffer);
		__iv__aave_batch__1048_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__1048_children->buffer_len=0;
		__iv__aave_batch__1048_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__1049_uvalue=__iv__aave_batch__1046_buffer;
		if(__iv__aave_batch__1047_buffer_len == 1 && __iv__aave_batch__1049_uvalue[0] < 0x80){
			__iv__aave_batch__1048_children->buffer_len=1;
			__iv__aave_batch__1048_children->buffer=malloc(__iv__aave_batch__1048_children->buffer_len);
			__iv__aave_batch__1048_children->buffer[0]=__iv__aave_batch__1049_uvalue[0];
		}
		else if(__iv__aave_batch__1047_buffer_len < 56){
			__iv__aave_batch__1048_children->buffer_len=1 + __iv__aave_batch__1047_buffer_len;
			__iv__aave_batch__1048_children->buffer=malloc(__iv__aave_batch__1048_children->buffer_len);
			__iv__aave_batch__1048_children->buffer[0]=0x80 + __iv__aave_batch__1047_buffer_len;
			if(__iv__aave_batch__1047_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__1048_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__1046_buffer), (size_t)/*int*/(__iv__aave_batch__1047_buffer_len));
			}
		}
		else {
			int __iv__371_len_length;
			u_int64_t __iv__372_i;
			unsigned char* __iv__373_value_len_chr;
			__iv__371_len_length=1;
			for(__iv__372_i=(u_int64_t)/*int*/(__iv__aave_batch__1047_buffer_len);__iv__372_i > 0xff;__iv__372_i=__iv__372_i / 0x100){
				__iv__371_len_length=__iv__371_len_length + 1;
			}
			__iv__aave_batch__1048_children->buffer_len=1 + __iv__371_len_length + __iv__aave_batch__1047_buffer_len;
			__iv__aave_batch__1048_children->buffer=malloc(__iv__aave_batch__1048_children->buffer_len);
			__iv__aave_batch__1048_children->buffer[0]=0xb7 + __iv__371_len_length;
			__iv__373_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__1047_buffer_len);
			for(__iv__372_i=(u_int64_t)/*int*/(__iv__371_len_length);__iv__372_i > 0;__iv__372_i=__iv__372_i - 1){
				__iv__aave_batch__1048_children->buffer[__iv__372_i]=__iv__373_value_len_chr[__iv__371_len_length - __iv__372_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__1048_children->buffer + 1 + __iv__371_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__1046_buffer), (size_t)/*int*/(__iv__aave_batch__1047_buffer_len));
		}
		__iv__aave_batch__1041_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__1041_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__1048_children));
/*service_var 483==> zgenerator_crypt.buffer_len*/
/*service_var 482==> zgenerator_crypt.buffer*/
/*service_var <==484 zgenerator_crypt.buffer*/
/*service_var <==485 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__1051_buffer_len=BN_num_bytes(__iv__aave_batch__899_transaction->gas_limit);
		__iv__aave_batch__1050_buffer=malloc(__iv__aave_batch__1051_buffer_len);
		__iv__aave_batch__1051_buffer_len=BN_bn2bin(__iv__aave_batch__899_transaction->gas_limit, __iv__aave_batch__1050_buffer);
		__iv__aave_batch__1052_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__1052_children->buffer_len=0;
		__iv__aave_batch__1052_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__1053_uvalue=__iv__aave_batch__1050_buffer;
		if(__iv__aave_batch__1051_buffer_len == 1 && __iv__aave_batch__1053_uvalue[0] < 0x80){
			__iv__aave_batch__1052_children->buffer_len=1;
			__iv__aave_batch__1052_children->buffer=malloc(__iv__aave_batch__1052_children->buffer_len);
			__iv__aave_batch__1052_children->buffer[0]=__iv__aave_batch__1053_uvalue[0];
		}
		else if(__iv__aave_batch__1051_buffer_len < 56){
			__iv__aave_batch__1052_children->buffer_len=1 + __iv__aave_batch__1051_buffer_len;
			__iv__aave_batch__1052_children->buffer=malloc(__iv__aave_batch__1052_children->buffer_len);
			__iv__aave_batch__1052_children->buffer[0]=0x80 + __iv__aave_batch__1051_buffer_len;
			if(__iv__aave_batch__1051_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__1052_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__1050_buffer), (size_t)/*int*/(__iv__aave_batch__1051_buffer_len));
			}
		}
		else {
			int __iv__374_len_length;
			u_int64_t __iv__375_i;
			unsigned char* __iv__376_value_len_chr;
			__iv__374_len_length=1;
			for(__iv__375_i=(u_int64_t)/*int*/(__iv__aave_batch__1051_buffer_len);__iv__375_i > 0xff;__iv__375_i=__iv__375_i / 0x100){
				__iv__374_len_length=__iv__374_len_length + 1;
			}
			__iv__aave_batch__1052_children->buffer_len=1 + __iv__374_len_length + __iv__aave_batch__1051_buffer_len;
			__iv__aave_batch__1052_children->buffer=malloc(__iv__aave_batch__1052_children->buffer_len);
			__iv__aave_batch__1052_children->buffer[0]=0xb7 + __iv__374_len_length;
			__iv__376_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__1051_buffer_len);
			for(__iv__375_i=(u_int64_t)/*int*/(__iv__374_len_length);__iv__375_i > 0;__iv__375_i=__iv__375_i - 1){
				__iv__aave_batch__1052_children->buffer[__iv__375_i]=__iv__376_value_len_chr[__iv__374_len_length - __iv__375_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__1052_children->buffer + 1 + __iv__374_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__1050_buffer), (size_t)/*int*/(__iv__aave_batch__1051_buffer_len));
		}
		__iv__aave_batch__1041_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__1041_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__1052_children));
/*service_var 485==> zgenerator_crypt.buffer_len*/
/*service_var 484==> zgenerator_crypt.buffer*/
/*service_var <==486 zgenerator_crypt.buffer*/
/*service_var <==487 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__1055_buffer_len=BN_num_bytes(__iv__aave_batch__899_transaction->recipient);
		__iv__aave_batch__1054_buffer=malloc(__iv__aave_batch__1055_buffer_len);
		__iv__aave_batch__1055_buffer_len=BN_bn2bin(__iv__aave_batch__899_transaction->recipient, __iv__aave_batch__1054_buffer);
		__iv__aave_batch__1056_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__1056_children->buffer_len=0;
		__iv__aave_batch__1056_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__1057_uvalue=__iv__aave_batch__1054_buffer;
		if(__iv__aave_batch__1055_buffer_len == 1 && __iv__aave_batch__1057_uvalue[0] < 0x80){
			__iv__aave_batch__1056_children->buffer_len=1;
			__iv__aave_batch__1056_children->buffer=malloc(__iv__aave_batch__1056_children->buffer_len);
			__iv__aave_batch__1056_children->buffer[0]=__iv__aave_batch__1057_uvalue[0];
		}
		else if(__iv__aave_batch__1055_buffer_len < 56){
			__iv__aave_batch__1056_children->buffer_len=1 + __iv__aave_batch__1055_buffer_len;
			__iv__aave_batch__1056_children->buffer=malloc(__iv__aave_batch__1056_children->buffer_len);
			__iv__aave_batch__1056_children->buffer[0]=0x80 + __iv__aave_batch__1055_buffer_len;
			if(__iv__aave_batch__1055_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__1056_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__1054_buffer), (size_t)/*int*/(__iv__aave_batch__1055_buffer_len));
			}
		}
		else {
			int __iv__377_len_length;
			u_int64_t __iv__378_i;
			unsigned char* __iv__379_value_len_chr;
			__iv__377_len_length=1;
			for(__iv__378_i=(u_int64_t)/*int*/(__iv__aave_batch__1055_buffer_len);__iv__378_i > 0xff;__iv__378_i=__iv__378_i / 0x100){
				__iv__377_len_length=__iv__377_len_length + 1;
			}
			__iv__aave_batch__1056_children->buffer_len=1 + __iv__377_len_length + __iv__aave_batch__1055_buffer_len;
			__iv__aave_batch__1056_children->buffer=malloc(__iv__aave_batch__1056_children->buffer_len);
			__iv__aave_batch__1056_children->buffer[0]=0xb7 + __iv__377_len_length;
			__iv__379_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__1055_buffer_len);
			for(__iv__378_i=(u_int64_t)/*int*/(__iv__377_len_length);__iv__378_i > 0;__iv__378_i=__iv__378_i - 1){
				__iv__aave_batch__1056_children->buffer[__iv__378_i]=__iv__379_value_len_chr[__iv__377_len_length - __iv__378_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__1056_children->buffer + 1 + __iv__377_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__1054_buffer), (size_t)/*int*/(__iv__aave_batch__1055_buffer_len));
		}
		__iv__aave_batch__1041_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__1041_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__1056_children));
/*service_var 487==> zgenerator_crypt.buffer_len*/
/*service_var 486==> zgenerator_crypt.buffer*/
/*service_var <==488 zgenerator_crypt.buffer*/
/*service_var <==489 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__1059_buffer_len=BN_num_bytes(__iv__aave_batch__899_transaction->value);
		__iv__aave_batch__1058_buffer=malloc(__iv__aave_batch__1059_buffer_len);
		__iv__aave_batch__1059_buffer_len=BN_bn2bin(__iv__aave_batch__899_transaction->value, __iv__aave_batch__1058_buffer);
		__iv__aave_batch__1060_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__1060_children->buffer_len=0;
		__iv__aave_batch__1060_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__1061_uvalue=__iv__aave_batch__1058_buffer;
		if(__iv__aave_batch__1059_buffer_len == 1 && __iv__aave_batch__1061_uvalue[0] < 0x80){
			__iv__aave_batch__1060_children->buffer_len=1;
			__iv__aave_batch__1060_children->buffer=malloc(__iv__aave_batch__1060_children->buffer_len);
			__iv__aave_batch__1060_children->buffer[0]=__iv__aave_batch__1061_uvalue[0];
		}
		else if(__iv__aave_batch__1059_buffer_len < 56){
			__iv__aave_batch__1060_children->buffer_len=1 + __iv__aave_batch__1059_buffer_len;
			__iv__aave_batch__1060_children->buffer=malloc(__iv__aave_batch__1060_children->buffer_len);
			__iv__aave_batch__1060_children->buffer[0]=0x80 + __iv__aave_batch__1059_buffer_len;
			if(__iv__aave_batch__1059_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__1060_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__1058_buffer), (size_t)/*int*/(__iv__aave_batch__1059_buffer_len));
			}
		}
		else {
			int __iv__380_len_length;
			u_int64_t __iv__381_i;
			unsigned char* __iv__382_value_len_chr;
			__iv__380_len_length=1;
			for(__iv__381_i=(u_int64_t)/*int*/(__iv__aave_batch__1059_buffer_len);__iv__381_i > 0xff;__iv__381_i=__iv__381_i / 0x100){
				__iv__380_len_length=__iv__380_len_length + 1;
			}
			__iv__aave_batch__1060_children->buffer_len=1 + __iv__380_len_length + __iv__aave_batch__1059_buffer_len;
			__iv__aave_batch__1060_children->buffer=malloc(__iv__aave_batch__1060_children->buffer_len);
			__iv__aave_batch__1060_children->buffer[0]=0xb7 + __iv__380_len_length;
			__iv__382_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__1059_buffer_len);
			for(__iv__381_i=(u_int64_t)/*int*/(__iv__380_len_length);__iv__381_i > 0;__iv__381_i=__iv__381_i - 1){
				__iv__aave_batch__1060_children->buffer[__iv__381_i]=__iv__382_value_len_chr[__iv__380_len_length - __iv__381_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__1060_children->buffer + 1 + __iv__380_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__1058_buffer), (size_t)/*int*/(__iv__aave_batch__1059_buffer_len));
		}
		__iv__aave_batch__1041_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__1041_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__1060_children));
/*service_var 489==> zgenerator_crypt.buffer_len*/
/*service_var 488==> zgenerator_crypt.buffer*/
		__iv__aave_batch__1062_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__1062_children->buffer_len=0;
		__iv__aave_batch__1062_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__1063_uvalue=__iv__aave_batch__899_transaction->data;
		if(__iv__aave_batch__899_transaction->data_len == 1 && __iv__aave_batch__1063_uvalue[0] < 0x80){
			__iv__aave_batch__1062_children->buffer_len=1;
			__iv__aave_batch__1062_children->buffer=malloc(__iv__aave_batch__1062_children->buffer_len);
			__iv__aave_batch__1062_children->buffer[0]=__iv__aave_batch__1063_uvalue[0];
		}
		else if(__iv__aave_batch__899_transaction->data_len < 56){
			__iv__aave_batch__1062_children->buffer_len=1 + __iv__aave_batch__899_transaction->data_len;
			__iv__aave_batch__1062_children->buffer=malloc(__iv__aave_batch__1062_children->buffer_len);
			__iv__aave_batch__1062_children->buffer[0]=0x80 + __iv__aave_batch__899_transaction->data_len;
			if(__iv__aave_batch__899_transaction->data_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__1062_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__899_transaction->data), (size_t)/*int*/(__iv__aave_batch__899_transaction->data_len));
			}
		}
		else {
			int __iv__383_len_length;
			u_int64_t __iv__384_i;
			unsigned char* __iv__385_value_len_chr;
			__iv__383_len_length=1;
			for(__iv__384_i=(u_int64_t)/*int*/(__iv__aave_batch__899_transaction->data_len);__iv__384_i > 0xff;__iv__384_i=__iv__384_i / 0x100){
				__iv__383_len_length=__iv__383_len_length + 1;
			}
			__iv__aave_batch__1062_children->buffer_len=1 + __iv__383_len_length + __iv__aave_batch__899_transaction->data_len;
			__iv__aave_batch__1062_children->buffer=malloc(__iv__aave_batch__1062_children->buffer_len);
			__iv__aave_batch__1062_children->buffer[0]=0xb7 + __iv__383_len_length;
			__iv__385_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__899_transaction->data_len);
			for(__iv__384_i=(u_int64_t)/*int*/(__iv__383_len_length);__iv__384_i > 0;__iv__384_i=__iv__384_i - 1){
				__iv__aave_batch__1062_children->buffer[__iv__384_i]=__iv__385_value_len_chr[__iv__383_len_length - __iv__384_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__1062_children->buffer + 1 + __iv__383_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__899_transaction->data), (size_t)/*int*/(__iv__aave_batch__899_transaction->data_len));
		}
		__iv__aave_batch__1041_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__1041_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__1062_children));
/*service_var <==490 zgenerator_crypt.buffer*/
/*service_var <==491 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__1065_buffer_len=BN_num_bytes(__iv__aave_batch__899_transaction->v);
		__iv__aave_batch__1064_buffer=malloc(__iv__aave_batch__1065_buffer_len);
		__iv__aave_batch__1065_buffer_len=BN_bn2bin(__iv__aave_batch__899_transaction->v, __iv__aave_batch__1064_buffer);
		__iv__aave_batch__1066_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__1066_children->buffer_len=0;
		__iv__aave_batch__1066_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__1067_uvalue=__iv__aave_batch__1064_buffer;
		if(__iv__aave_batch__1065_buffer_len == 1 && __iv__aave_batch__1067_uvalue[0] < 0x80){
			__iv__aave_batch__1066_children->buffer_len=1;
			__iv__aave_batch__1066_children->buffer=malloc(__iv__aave_batch__1066_children->buffer_len);
			__iv__aave_batch__1066_children->buffer[0]=__iv__aave_batch__1067_uvalue[0];
		}
		else if(__iv__aave_batch__1065_buffer_len < 56){
			__iv__aave_batch__1066_children->buffer_len=1 + __iv__aave_batch__1065_buffer_len;
			__iv__aave_batch__1066_children->buffer=malloc(__iv__aave_batch__1066_children->buffer_len);
			__iv__aave_batch__1066_children->buffer[0]=0x80 + __iv__aave_batch__1065_buffer_len;
			if(__iv__aave_batch__1065_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__1066_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__1064_buffer), (size_t)/*int*/(__iv__aave_batch__1065_buffer_len));
			}
		}
		else {
			int __iv__386_len_length;
			u_int64_t __iv__387_i;
			unsigned char* __iv__388_value_len_chr;
			__iv__386_len_length=1;
			for(__iv__387_i=(u_int64_t)/*int*/(__iv__aave_batch__1065_buffer_len);__iv__387_i > 0xff;__iv__387_i=__iv__387_i / 0x100){
				__iv__386_len_length=__iv__386_len_length + 1;
			}
			__iv__aave_batch__1066_children->buffer_len=1 + __iv__386_len_length + __iv__aave_batch__1065_buffer_len;
			__iv__aave_batch__1066_children->buffer=malloc(__iv__aave_batch__1066_children->buffer_len);
			__iv__aave_batch__1066_children->buffer[0]=0xb7 + __iv__386_len_length;
			__iv__388_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__1065_buffer_len);
			for(__iv__387_i=(u_int64_t)/*int*/(__iv__386_len_length);__iv__387_i > 0;__iv__387_i=__iv__387_i - 1){
				__iv__aave_batch__1066_children->buffer[__iv__387_i]=__iv__388_value_len_chr[__iv__386_len_length - __iv__387_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__1066_children->buffer + 1 + __iv__386_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__1064_buffer), (size_t)/*int*/(__iv__aave_batch__1065_buffer_len));
		}
		__iv__aave_batch__1041_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__1041_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__1066_children));
/*service_var 491==> zgenerator_crypt.buffer_len*/
/*service_var 490==> zgenerator_crypt.buffer*/
/*service_var <==492 zgenerator_crypt.buffer*/
/*service_var <==493 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__1069_buffer_len=BN_num_bytes(__iv__aave_batch__899_transaction->r);
		__iv__aave_batch__1068_buffer=malloc(__iv__aave_batch__1069_buffer_len);
		__iv__aave_batch__1069_buffer_len=BN_bn2bin(__iv__aave_batch__899_transaction->r, __iv__aave_batch__1068_buffer);
		__iv__aave_batch__1070_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__1070_children->buffer_len=0;
		__iv__aave_batch__1070_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__1071_uvalue=__iv__aave_batch__1068_buffer;
		if(__iv__aave_batch__1069_buffer_len == 1 && __iv__aave_batch__1071_uvalue[0] < 0x80){
			__iv__aave_batch__1070_children->buffer_len=1;
			__iv__aave_batch__1070_children->buffer=malloc(__iv__aave_batch__1070_children->buffer_len);
			__iv__aave_batch__1070_children->buffer[0]=__iv__aave_batch__1071_uvalue[0];
		}
		else if(__iv__aave_batch__1069_buffer_len < 56){
			__iv__aave_batch__1070_children->buffer_len=1 + __iv__aave_batch__1069_buffer_len;
			__iv__aave_batch__1070_children->buffer=malloc(__iv__aave_batch__1070_children->buffer_len);
			__iv__aave_batch__1070_children->buffer[0]=0x80 + __iv__aave_batch__1069_buffer_len;
			if(__iv__aave_batch__1069_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__1070_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__1068_buffer), (size_t)/*int*/(__iv__aave_batch__1069_buffer_len));
			}
		}
		else {
			int __iv__389_len_length;
			u_int64_t __iv__390_i;
			unsigned char* __iv__391_value_len_chr;
			__iv__389_len_length=1;
			for(__iv__390_i=(u_int64_t)/*int*/(__iv__aave_batch__1069_buffer_len);__iv__390_i > 0xff;__iv__390_i=__iv__390_i / 0x100){
				__iv__389_len_length=__iv__389_len_length + 1;
			}
			__iv__aave_batch__1070_children->buffer_len=1 + __iv__389_len_length + __iv__aave_batch__1069_buffer_len;
			__iv__aave_batch__1070_children->buffer=malloc(__iv__aave_batch__1070_children->buffer_len);
			__iv__aave_batch__1070_children->buffer[0]=0xb7 + __iv__389_len_length;
			__iv__391_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__1069_buffer_len);
			for(__iv__390_i=(u_int64_t)/*int*/(__iv__389_len_length);__iv__390_i > 0;__iv__390_i=__iv__390_i - 1){
				__iv__aave_batch__1070_children->buffer[__iv__390_i]=__iv__391_value_len_chr[__iv__389_len_length - __iv__390_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__1070_children->buffer + 1 + __iv__389_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__1068_buffer), (size_t)/*int*/(__iv__aave_batch__1069_buffer_len));
		}
		__iv__aave_batch__1041_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__1041_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__1070_children));
/*service_var 493==> zgenerator_crypt.buffer_len*/
/*service_var 492==> zgenerator_crypt.buffer*/
/*service_var <==494 zgenerator_crypt.buffer*/
/*service_var <==495 zgenerator_crypt.buffer_len*/
		__iv__aave_batch__1073_buffer_len=BN_num_bytes(__iv__aave_batch__899_transaction->s);
		__iv__aave_batch__1072_buffer=malloc(__iv__aave_batch__1073_buffer_len);
		__iv__aave_batch__1073_buffer_len=BN_bn2bin(__iv__aave_batch__899_transaction->s, __iv__aave_batch__1072_buffer);
		__iv__aave_batch__1074_children=calloc(1, sizeof(ethereum_rlp_list_type));
		__iv__aave_batch__1074_children->buffer_len=0;
		__iv__aave_batch__1074_children->buffer=(ethereum_rlp_string_type)/*void**/(NULL);
		__iv__aave_batch__1075_uvalue=__iv__aave_batch__1072_buffer;
		if(__iv__aave_batch__1073_buffer_len == 1 && __iv__aave_batch__1075_uvalue[0] < 0x80){
			__iv__aave_batch__1074_children->buffer_len=1;
			__iv__aave_batch__1074_children->buffer=malloc(__iv__aave_batch__1074_children->buffer_len);
			__iv__aave_batch__1074_children->buffer[0]=__iv__aave_batch__1075_uvalue[0];
		}
		else if(__iv__aave_batch__1073_buffer_len < 56){
			__iv__aave_batch__1074_children->buffer_len=1 + __iv__aave_batch__1073_buffer_len;
			__iv__aave_batch__1074_children->buffer=malloc(__iv__aave_batch__1074_children->buffer_len);
			__iv__aave_batch__1074_children->buffer[0]=0x80 + __iv__aave_batch__1073_buffer_len;
			if(__iv__aave_batch__1073_buffer_len){
				memcpy((void*)/*unsigned char**/(__iv__aave_batch__1074_children->buffer + 1), (const void*)/*unsigned char**/(__iv__aave_batch__1072_buffer), (size_t)/*int*/(__iv__aave_batch__1073_buffer_len));
			}
		}
		else {
			int __iv__392_len_length;
			u_int64_t __iv__393_i;
			unsigned char* __iv__394_value_len_chr;
			__iv__392_len_length=1;
			for(__iv__393_i=(u_int64_t)/*int*/(__iv__aave_batch__1073_buffer_len);__iv__393_i > 0xff;__iv__393_i=__iv__393_i / 0x100){
				__iv__392_len_length=__iv__392_len_length + 1;
			}
			__iv__aave_batch__1074_children->buffer_len=1 + __iv__392_len_length + __iv__aave_batch__1073_buffer_len;
			__iv__aave_batch__1074_children->buffer=malloc(__iv__aave_batch__1074_children->buffer_len);
			__iv__aave_batch__1074_children->buffer[0]=0xb7 + __iv__392_len_length;
			__iv__394_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__1073_buffer_len);
			for(__iv__393_i=(u_int64_t)/*int*/(__iv__392_len_length);__iv__393_i > 0;__iv__393_i=__iv__393_i - 1){
				__iv__aave_batch__1074_children->buffer[__iv__393_i]=__iv__394_value_len_chr[__iv__392_len_length - __iv__393_i];
			}
			memcpy((void*)/*unsigned char**/(__iv__aave_batch__1074_children->buffer + 1 + __iv__392_len_length), (const void*)/*unsigned char**/(__iv__aave_batch__1072_buffer), (size_t)/*int*/(__iv__aave_batch__1073_buffer_len));
		}
		__iv__aave_batch__1041_rlp->children=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__1041_rlp->children), (void*)/*ethereum_rlp_list_type**/(__iv__aave_batch__1074_children));
/*service_var 495==> zgenerator_crypt.buffer_len*/
/*service_var 494==> zgenerator_crypt.buffer*/
	}
/*service_var 479==> ethereum.rlp*/
/*service_var 478==> ethereum.transaction*/
/*service_var <==496 zgenerator_crypt.buffer*/
/*service_var <==497 zgenerator_crypt.buffer_len*/
/*service_var <==498 zgenerator_crypt.buffer*/
/*service_var <==499 zgenerator_crypt.buffer_len*/
	__iv__aave_batch__1079_buffer_len=0;
	for(__iv__aave_batch__1081_name=(collection)/*collection*/(__iv__aave_batch__1041_rlp->children);__iv__aave_batch__1081_name;__iv__aave_batch__1081_name=(collection)/*z_list_item_type**/(__iv__aave_batch__1081_name->next)){
		ethereum_rlp_list_type* __iv__aave_batch__1080_children;
		__iv__aave_batch__1080_children=(ethereum_rlp_list_type*)/*void**/(__iv__aave_batch__1081_name->data);
		__iv__aave_batch__1079_buffer_len=__iv__aave_batch__1079_buffer_len + __iv__aave_batch__1080_children->buffer_len;
	}
	__iv__aave_batch__1078_buffer=malloc(__iv__aave_batch__1079_buffer_len);
	__iv__aave_batch__1082_buffer_ptr=__iv__aave_batch__1078_buffer;
	for(__iv__aave_batch__1083_name=(collection)/*collection*/(__iv__aave_batch__1041_rlp->children);__iv__aave_batch__1083_name;__iv__aave_batch__1083_name=(collection)/*z_list_item_type**/(__iv__aave_batch__1083_name->next)){
		ethereum_rlp_list_type* __iv__aave_batch__1080_children;
		__iv__aave_batch__1080_children=(ethereum_rlp_list_type*)/*void**/(__iv__aave_batch__1083_name->data);
		memcpy(__iv__aave_batch__1082_buffer_ptr, (const void*)/*unsigned char**/(__iv__aave_batch__1080_children->buffer), (size_t)/*int*/(__iv__aave_batch__1080_children->buffer_len));
		__iv__aave_batch__1082_buffer_ptr=__iv__aave_batch__1082_buffer_ptr + __iv__aave_batch__1080_children->buffer_len;
	}
/*service_var <==500 zgenerator_crypt.buffer*/
/*service_var <==501 zgenerator_crypt.buffer_len*/
	__iv__aave_batch__1085_buffer_len=0;
	__iv__aave_batch__1084_buffer=(ethereum_rlp_string_type)/*void**/(NULL);
	if(__iv__aave_batch__1079_buffer_len < 56){
		__iv__aave_batch__1085_buffer_len=1 + __iv__aave_batch__1079_buffer_len;
		__iv__aave_batch__1084_buffer=malloc(__iv__aave_batch__1085_buffer_len);
		__iv__aave_batch__1084_buffer[0]=0xc0 + __iv__aave_batch__1079_buffer_len;
		if(__iv__aave_batch__1079_buffer_len){
			memcpy((void*)/*ethereum_rlp_string_type*/(__iv__aave_batch__1084_buffer + 1), (const void*)/*void**/(__iv__aave_batch__1078_buffer), (size_t)/*int*/(__iv__aave_batch__1079_buffer_len));
		}
	}
	else {
		int __iv__395_len_length;
		u_int64_t __iv__396_i;
		unsigned char* __iv__397_value_len_chr;
		__iv__395_len_length=1;
		for(__iv__396_i=(u_int64_t)/*int*/(__iv__aave_batch__1079_buffer_len);__iv__396_i > 0xff;__iv__396_i=__iv__396_i / 0x100){
			__iv__395_len_length=__iv__395_len_length + 1;
		}
		__iv__aave_batch__1085_buffer_len=1 + __iv__395_len_length + __iv__aave_batch__1079_buffer_len;
		__iv__aave_batch__1084_buffer=malloc(__iv__aave_batch__1085_buffer_len);
		__iv__aave_batch__1084_buffer[0]=0xf7 + __iv__395_len_length;
		__iv__397_value_len_chr=(unsigned char*)/*int**/(&__iv__aave_batch__1079_buffer_len);
		for(__iv__396_i=(u_int64_t)/*int*/(__iv__395_len_length);__iv__396_i > 0;__iv__396_i=__iv__396_i - 1){
			__iv__aave_batch__1084_buffer[__iv__396_i]=__iv__397_value_len_chr[__iv__395_len_length - __iv__396_i];
		}
		memcpy((void*)/*ethereum_rlp_string_type*/(__iv__aave_batch__1084_buffer + 1 + __iv__395_len_length), (const void*)/*void**/(__iv__aave_batch__1078_buffer), (size_t)/*int*/(__iv__aave_batch__1079_buffer_len));
	}
	__iv__366_tx=(string)/*void**/(NULL);
	if(__iv__aave_batch__1084_buffer){
		unsigned char* __iv__aave_batch__1086_u_str;
		int __iv__398_i;
		__iv__366_tx=malloc(__iv__aave_batch__1085_buffer_len * 2 + 1);
		__iv__366_tx[0]='\0';
		__iv__366_tx[__iv__aave_batch__1085_buffer_len * 2]='\0';
		__iv__aave_batch__1086_u_str=(unsigned char*)/*string*/(__iv__366_tx);
		for(__iv__398_i=0;__iv__398_i < __iv__aave_batch__1085_buffer_len;__iv__398_i=__iv__398_i + 1){
			unsigned char __iv__399_c;
			unsigned char __iv__400_c2;
			__iv__399_c=(unsigned char)/*char*/(__iv__aave_batch__1084_buffer[__iv__398_i] & 0xf);
			if(__iv__399_c < 10){
				__iv__aave_batch__1086_u_str[__iv__398_i * 2 + 1]=__iv__399_c + '0';
			}
			else {
				__iv__aave_batch__1086_u_str[__iv__398_i * 2 + 1]=__iv__399_c - 10 + 'a';
			}
			__iv__400_c2=(unsigned char)/*char*/(__iv__aave_batch__1084_buffer[__iv__398_i] >> 4);
			if(__iv__400_c2 < 0xa){
				__iv__aave_batch__1086_u_str[__iv__398_i * 2]=__iv__400_c2 + '0';
			}
			else {
				__iv__aave_batch__1086_u_str[__iv__398_i * 2]=__iv__400_c2 - 10 + 'a';
			}
		}
	}
	__iv__367_transaction_hash="";
	__iv__main__5_jsonrpc_id=__iv__main__5_jsonrpc_id + 1;
	__iv__aave_batch__1088_id=int_to_string(__iv__main__5_jsonrpc_id, 0);
	__iv__aave_batch__1087_json_post=calloc(1, sizeof(json_type));
/*service_var <==502 json_add.json*/
	__iv__aave_batch__1089_json_object=calloc(1, sizeof(json_object_type));
	__iv__aave_batch__1087_json_post->item=calloc(1, sizeof(pointerof_type));
	__iv__aave_batch__1087_json_post->item->var=__iv__aave_batch__1089_json_object;
	__iv__aave_batch__1087_json_post->item->type_name="json_object_type*";
/*service_var <==503 json_add.json_object*/
	__iv__aave_batch__1090_field=calloc(1, sizeof(json_object_item_type));
	__iv__aave_batch__1089_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__1089_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__1090_field));
	__iv__aave_batch__1090_field->name="json_rpc";
/*service_var <==504 json_add.json_object_field*/
	__iv__aave_batch__1091_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==505 json_add.json*/
	__iv__aave_batch__1091_item=calloc(1, sizeof(pointerof_type));
	__iv__aave_batch__1091_item->var="2.0";
	__iv__aave_batch__1091_item->type_name="string";
/*service_var 505==> json_add.json*/
	__iv__aave_batch__1090_field->value=__iv__aave_batch__1091_item;
/*service_var 504==> json_add.json_object_field*/
	__iv__aave_batch__1092_field=calloc(1, sizeof(json_object_item_type));
	__iv__aave_batch__1089_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__1089_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__1092_field));
	__iv__aave_batch__1092_field->name="method";
/*service_var <==506 json_add.json_object_field*/
	__iv__aave_batch__1093_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==507 json_add.json*/
	__iv__aave_batch__1093_item=calloc(1, sizeof(pointerof_type));
	__iv__aave_batch__1093_item->var="eth_sendRawTransaction";
	__iv__aave_batch__1093_item->type_name="string";
/*service_var 507==> json_add.json*/
	__iv__aave_batch__1092_field->value=__iv__aave_batch__1093_item;
/*service_var 506==> json_add.json_object_field*/
	__iv__aave_batch__1094_field=calloc(1, sizeof(json_object_item_type));
	__iv__aave_batch__1089_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__1089_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__1094_field));
	__iv__aave_batch__1094_field->name="params";
/*service_var <==508 json_add.json_object_field*/
	__iv__aave_batch__1095_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==509 json_add.json*/
	__iv__aave_batch__1096_json_array=calloc(1, sizeof(json_array_type));
	__iv__aave_batch__1095_item=calloc(1, sizeof(pointerof_type));
	__iv__aave_batch__1095_item->var=__iv__aave_batch__1096_json_array;
	__iv__aave_batch__1095_item->type_name="json_array_type*";
/*service_var <==510 json_add.json_array*/
	__iv__aave_batch__1097_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==511 json_add.json*/
	__iv__aave_batch__1097_item=calloc(1, sizeof(pointerof_type));
	__iv__aave_batch__1098_tmp_var=strconcat((char*)/*string*/("0x"), (char*)/*string*/(__iv__366_tx));
	__iv__aave_batch__1097_item->var=__iv__aave_batch__1098_tmp_var;
	__iv__aave_batch__1097_item->type_name="string";
/*service_var 511==> json_add.json*/
	if(__iv__aave_batch__1097_item){
		__iv__aave_batch__1096_json_array->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__1096_json_array->item), (void*)/*pointerof_type**/(__iv__aave_batch__1097_item));
	}
/*service_var 510==> json_add.json_array*/
/*service_var 509==> json_add.json*/
	__iv__aave_batch__1094_field->value=__iv__aave_batch__1095_item;
/*service_var 508==> json_add.json_object_field*/
	__iv__aave_batch__1099_field=calloc(1, sizeof(json_object_item_type));
	__iv__aave_batch__1089_json_object->item=z_list_append_function((z_list_item_type*)/*collection*/(__iv__aave_batch__1089_json_object->item), (void*)/*json_object_item_type**/(__iv__aave_batch__1099_field));
	__iv__aave_batch__1099_field->name="id";
/*service_var <==512 json_add.json_object_field*/
	__iv__aave_batch__1100_item=(pointerof_type*)/*void**/(NULL);
/*service_var <==513 json_add.json*/
	__iv__aave_batch__1100_item=calloc(1, sizeof(pointerof_type));
	__iv__aave_batch__1100_item->var=__iv__aave_batch__1088_id;
	__iv__aave_batch__1100_item->type_name="string";
/*service_var 513==> json_add.json*/
	__iv__aave_batch__1099_field->value=__iv__aave_batch__1100_item;
/*service_var 512==> json_add.json_object_field*/
/*service_var 503==> json_add.json_object*/
/*service_var 502==> json_add.json*/
	__iv__aave_batch__1101_json_post_str=(string)/*void**/(NULL);
	if(__iv__aave_batch__1087_json_post && __iv__aave_batch__1087_json_post->item){
		stringlist __iv__401_str_list;
		int __iv__aave_batch__1102_total_len;
		collection __iv__aave_batch__1104_list_name;
		collection __iv__aave_batch__1105_name;
		int __iv__aave_batch__1106_string_index;
		collection __iv__aave_batch__1107_name;
		__iv__401_str_list=json_to_stringlist(__iv__aave_batch__1087_json_post->item, (stringlist)/*void**/(NULL));
		__iv__aave_batch__1102_total_len=0;
		__iv__aave_batch__1104_list_name=(collection)/*stringlist*/(__iv__401_str_list);
		for(__iv__aave_batch__1105_name=(collection)/*collection*/(__iv__aave_batch__1104_list_name);__iv__aave_batch__1105_name;__iv__aave_batch__1105_name=(collection)/*z_list_item_type**/(__iv__aave_batch__1105_name->next)){
			stringlist_item_type* __iv__aave_batch__1103_stringlist_item;
			__iv__aave_batch__1103_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__1105_name->data);
			__iv__aave_batch__1102_total_len=__iv__aave_batch__1102_total_len + __iv__aave_batch__1103_stringlist_item->len;
		}
		__iv__aave_batch__1101_json_post_str=newString(__iv__aave_batch__1102_total_len);
		__iv__aave_batch__1106_string_index=0;
		for(__iv__aave_batch__1107_name=(collection)/*collection*/(__iv__aave_batch__1104_list_name);__iv__aave_batch__1107_name;__iv__aave_batch__1107_name=(collection)/*z_list_item_type**/(__iv__aave_batch__1107_name->next)){
			stringlist_item_type* __iv__aave_batch__1103_stringlist_item;
			int __iv__402_stringlist_item_index;
			__iv__aave_batch__1103_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__1107_name->data);
			for(__iv__402_stringlist_item_index=0;__iv__402_stringlist_item_index < __iv__aave_batch__1103_stringlist_item->len && __iv__aave_batch__1103_stringlist_item->str[__iv__402_stringlist_item_index] != '\0';__iv__402_stringlist_item_index=__iv__402_stringlist_item_index + 1){
				__iv__aave_batch__1101_json_post_str[__iv__aave_batch__1106_string_index]=__iv__aave_batch__1103_stringlist_item->str[__iv__402_stringlist_item_index];
				__iv__aave_batch__1106_string_index=__iv__aave_batch__1106_string_index + 1;
			}
		}
		__iv__aave_batch__1101_json_post_str[__iv__aave_batch__1106_string_index]='\0';
	}
	__iv__aave_batch__1108_json=(json_type*)/*void**/(NULL);
	__iv__aave_batch__1109_ret_str=(string)/*void**/(NULL);
	if(0){
		rest_html_write_to_str((char*)/*void**/(NULL), (size_t)/*int*/(0), (size_t)/*int*/(0), (rest_html_write_struct*)/*void**/(NULL));
	}
	__iv__aave_batch__1110_curl_ptr=curl_easy_init();
/*service_var <==514 rest_html.curl_ptr*/
	if(__iv__aave_batch__1110_curl_ptr){
		string __iv__aave_batch__1111_query_url;
		struct curl_slist* __iv__aave_batch__1114_header;
		string __iv__aave_batch__1115_tmp_var;
		string __iv__aave_batch__1116_tmp_var;
		string __iv__aave_batch__1117_tmp_var;
		string __iv__aave_batch__1118_tmp_var;
		rest_html_write_struct* __iv__403_user_data;
		string __iv__aave_batch__1119_error_buffer;
		FILE* __iv__aave_batch__1120_file_debug;
		__iv__aave_batch__1111_query_url=(string)/*void**/(NULL);
/*service_var <==515 rest_html.query_url*/
/*service_var 515==> rest_html.query_url*/
		if(__iv__aave_batch__1111_query_url){
			string __iv__aave_batch__1112_tmp_var;
			string __iv__aave_batch__1113_tmp_var;
			__iv__aave_batch__1112_tmp_var=strconcat((char*)/*string*/(__iv__main__1_infura_url), (char*)/*string*/("?"));
			__iv__aave_batch__1113_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__1112_tmp_var), (char*)/*string*/(__iv__aave_batch__1111_query_url));
			__iv__aave_batch__1111_query_url=__iv__aave_batch__1113_tmp_var;
		}
		else {
			__iv__aave_batch__1111_query_url=__iv__main__1_infura_url;
		}
		if(__iv__aave_batch__1111_query_url){
			curl_easy_setopt(__iv__aave_batch__1110_curl_ptr, CURLOPT_URL, (void*)/*string*/(__iv__aave_batch__1111_query_url));
		}
		__iv__aave_batch__1114_header=(struct curl_slist*)/*void**/(NULL);
/*service_var <==516 rest_html.header*/
		__iv__aave_batch__1115_tmp_var=strconcat((char*)/*string*/("Content-Type"), (char*)/*string*/(": "));
		__iv__aave_batch__1116_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__1115_tmp_var), (char*)/*string*/("application/json"));
		__iv__aave_batch__1114_header=curl_slist_append(__iv__aave_batch__1114_header, __iv__aave_batch__1116_tmp_var);
		__iv__aave_batch__1117_tmp_var=strconcat((char*)/*string*/("Accept"), (char*)/*string*/(": "));
		__iv__aave_batch__1118_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__1117_tmp_var), (char*)/*string*/("application/json"));
		__iv__aave_batch__1114_header=curl_slist_append(__iv__aave_batch__1114_header, __iv__aave_batch__1118_tmp_var);
/*service_var 516==> rest_html.header*/
		if(__iv__aave_batch__1114_header){
			curl_easy_setopt(__iv__aave_batch__1110_curl_ptr, CURLOPT_HTTPHEADER, (void*)/*struct curl_slist**/(__iv__aave_batch__1114_header));
		}
		if("Zipli"){
			curl_easy_setopt(__iv__aave_batch__1110_curl_ptr, CURLOPT_USERAGENT, (void*)/*string*/("Zipli"));
		}
		curl_easy_setopt(__iv__aave_batch__1110_curl_ptr, CURLOPT_CUSTOMREQUEST, (void*)/*string*/("POST"));
		if(__iv__aave_batch__1101_json_post_str){
			curl_easy_setopt(__iv__aave_batch__1110_curl_ptr, CURLOPT_POSTFIELDS, (void*)/*string*/(__iv__aave_batch__1101_json_post_str));
		}
		curl_easy_setopt(__iv__aave_batch__1110_curl_ptr, CURLOPT_WRITEFUNCTION, (void*)/*void*/(rest_html_write_to_str));
		__iv__403_user_data=calloc(1, sizeof(rest_html_write_struct));
		curl_easy_setopt(__iv__aave_batch__1110_curl_ptr, CURLOPT_WRITEDATA, (void*)/*rest_html_write_struct**/(__iv__403_user_data));
		__iv__aave_batch__1119_error_buffer=newString(CURL_ERROR_SIZE);
		curl_easy_setopt(__iv__aave_batch__1110_curl_ptr, CURLOPT_ERRORBUFFER, (void*)/*string*/(__iv__aave_batch__1119_error_buffer));
		curl_easy_setopt(__iv__aave_batch__1110_curl_ptr, CURLOPT_VERBOSE, (void*)/*int*/(1L));
		__iv__aave_batch__1120_file_debug=fopen((char*)/*string*/("/tmp/rest_debug.txt"), (char*)/*string*/("w"));
		curl_easy_setopt(__iv__aave_batch__1110_curl_ptr, CURLOPT_STDERR, (void*)/*FILE**/(__iv__aave_batch__1120_file_debug));
		curl_easy_perform(__iv__aave_batch__1110_curl_ptr);
		print_html_text_function(prog, __iv__aave_batch__1119_error_buffer);
		print_html_br(prog);
		fclose(__iv__aave_batch__1120_file_debug);
		curl_easy_cleanup(__iv__aave_batch__1110_curl_ptr);
		if(__iv__403_user_data->str){
			int __iv__aave_batch__1121_total_len;
			collection __iv__aave_batch__1123_list_name;
			collection __iv__aave_batch__1124_name;
			int __iv__aave_batch__1125_string_index;
			collection __iv__aave_batch__1126_name;
			__iv__aave_batch__1121_total_len=0;
			__iv__aave_batch__1123_list_name=(collection)/*stringlist*/(__iv__403_user_data->str);
			for(__iv__aave_batch__1124_name=(collection)/*collection*/(__iv__aave_batch__1123_list_name);__iv__aave_batch__1124_name;__iv__aave_batch__1124_name=(collection)/*z_list_item_type**/(__iv__aave_batch__1124_name->next)){
				stringlist_item_type* __iv__aave_batch__1122_stringlist_item;
				__iv__aave_batch__1122_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__1124_name->data);
				__iv__aave_batch__1121_total_len=__iv__aave_batch__1121_total_len + __iv__aave_batch__1122_stringlist_item->len;
			}
			__iv__aave_batch__1109_ret_str=newString(__iv__aave_batch__1121_total_len);
			__iv__aave_batch__1125_string_index=0;
			for(__iv__aave_batch__1126_name=(collection)/*collection*/(__iv__aave_batch__1123_list_name);__iv__aave_batch__1126_name;__iv__aave_batch__1126_name=(collection)/*z_list_item_type**/(__iv__aave_batch__1126_name->next)){
				stringlist_item_type* __iv__aave_batch__1122_stringlist_item;
				int __iv__404_stringlist_item_index;
				__iv__aave_batch__1122_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__1126_name->data);
				for(__iv__404_stringlist_item_index=0;__iv__404_stringlist_item_index < __iv__aave_batch__1122_stringlist_item->len && __iv__aave_batch__1122_stringlist_item->str[__iv__404_stringlist_item_index] != '\0';__iv__404_stringlist_item_index=__iv__404_stringlist_item_index + 1){
					__iv__aave_batch__1109_ret_str[__iv__aave_batch__1125_string_index]=__iv__aave_batch__1122_stringlist_item->str[__iv__404_stringlist_item_index];
					__iv__aave_batch__1125_string_index=__iv__aave_batch__1125_string_index + 1;
				}
			}
			__iv__aave_batch__1109_ret_str[__iv__aave_batch__1125_string_index]='\0';
		}
	}
/*service_var 514==> rest_html.curl_ptr*/
	if(__iv__aave_batch__1109_ret_str){
		__iv__aave_batch__1108_json=json_parse(__iv__aave_batch__1109_ret_str);
	}
	__iv__aave_batch__1127_json_str=(string)/*void**/(NULL);
	if(__iv__aave_batch__1108_json && __iv__aave_batch__1108_json->item){
		stringlist __iv__405_str_list;
		int __iv__aave_batch__1128_total_len;
		collection __iv__aave_batch__1130_list_name;
		collection __iv__aave_batch__1131_name;
		int __iv__aave_batch__1132_string_index;
		collection __iv__aave_batch__1133_name;
		__iv__405_str_list=json_to_stringlist(__iv__aave_batch__1108_json->item, (stringlist)/*void**/(NULL));
		__iv__aave_batch__1128_total_len=0;
		__iv__aave_batch__1130_list_name=(collection)/*stringlist*/(__iv__405_str_list);
		for(__iv__aave_batch__1131_name=(collection)/*collection*/(__iv__aave_batch__1130_list_name);__iv__aave_batch__1131_name;__iv__aave_batch__1131_name=(collection)/*z_list_item_type**/(__iv__aave_batch__1131_name->next)){
			stringlist_item_type* __iv__aave_batch__1129_stringlist_item;
			__iv__aave_batch__1129_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__1131_name->data);
			__iv__aave_batch__1128_total_len=__iv__aave_batch__1128_total_len + __iv__aave_batch__1129_stringlist_item->len;
		}
		__iv__aave_batch__1127_json_str=newString(__iv__aave_batch__1128_total_len);
		__iv__aave_batch__1132_string_index=0;
		for(__iv__aave_batch__1133_name=(collection)/*collection*/(__iv__aave_batch__1130_list_name);__iv__aave_batch__1133_name;__iv__aave_batch__1133_name=(collection)/*z_list_item_type**/(__iv__aave_batch__1133_name->next)){
			stringlist_item_type* __iv__aave_batch__1129_stringlist_item;
			int __iv__406_stringlist_item_index;
			__iv__aave_batch__1129_stringlist_item=(stringlist_item_type*)/*void**/(__iv__aave_batch__1133_name->data);
			for(__iv__406_stringlist_item_index=0;__iv__406_stringlist_item_index < __iv__aave_batch__1129_stringlist_item->len && __iv__aave_batch__1129_stringlist_item->str[__iv__406_stringlist_item_index] != '\0';__iv__406_stringlist_item_index=__iv__406_stringlist_item_index + 1){
				__iv__aave_batch__1127_json_str[__iv__aave_batch__1132_string_index]=__iv__aave_batch__1129_stringlist_item->str[__iv__406_stringlist_item_index];
				__iv__aave_batch__1132_string_index=__iv__aave_batch__1132_string_index + 1;
			}
		}
		__iv__aave_batch__1127_json_str[__iv__aave_batch__1132_string_index]='\0';
	}
	__iv__aave_batch__1135_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__1127_json_str), (char*)/*string*/("\n"));
	__iv__aave_batch__1134_to_print=__iv__aave_batch__1135_tmp_var;
	if(__iv__aave_batch__1134_to_print){
		printf((char*)/*string*/("%s"), __iv__aave_batch__1134_to_print);
	}
/*service_var <==517 json_easy.json_data*/
	__iv__aave_batch__1136_json_data=json_parse(__iv__aave_batch__1127_json_str);
	if(__iv__aave_batch__1136_json_data){
/*service_var <==518 json_easy.json_data*/
/*service_var <==519 json_easy.json_data_name*/
		if(__iv__aave_batch__1136_json_data->item && __iv__aave_batch__1136_json_data->item->type_name){
			int __iv__aave_batch__1140_tmp_var;
			__iv__aave_batch__1140_tmp_var=string_equal((const char*)/*string*/(__iv__aave_batch__1136_json_data->item->type_name), (const char*)/*string*/("json_object_type*"));
			if(__iv__aave_batch__1140_tmp_var){
				json_object_type* __iv__aave_batch__1139_json_data_parent_object;
				collection __iv__aave_batch__1142_name;
				__iv__aave_batch__1139_json_data_parent_object=(json_object_type*)/*void**/(__iv__aave_batch__1136_json_data->item->var);
				for(__iv__aave_batch__1142_name=(collection)/*collection*/(__iv__aave_batch__1139_json_data_parent_object->item);__iv__aave_batch__1142_name;__iv__aave_batch__1142_name=(collection)/*z_list_item_type**/(__iv__aave_batch__1142_name->next)){
					json_object_item_type* __iv__aave_batch__1141_item;
					string __iv__aave_batch__1138_name;
					pointerof_type* __iv__aave_batch__1137_json_data;
					int __iv__aave_batch__1143_tmp_var;
					__iv__aave_batch__1141_item=(json_object_item_type*)/*void**/(__iv__aave_batch__1142_name->data);
					__iv__aave_batch__1138_name=__iv__aave_batch__1141_item->name;
					__iv__aave_batch__1137_json_data=__iv__aave_batch__1141_item->value;
					__iv__aave_batch__1143_tmp_var=string_equal_or_null((const char*)/*string*/("result"), (const char*)/*string*/(__iv__aave_batch__1138_name));
					if(__iv__aave_batch__1143_tmp_var){
						if(__iv__aave_batch__1137_json_data && __iv__aave_batch__1137_json_data->type_name){
							int __iv__aave_batch__1144_tmp_var;
							__iv__aave_batch__1144_tmp_var=string_equal((const char*)/*string*/(__iv__aave_batch__1137_json_data->type_name), (const char*)/*string*/("string"));
							if(__iv__aave_batch__1144_tmp_var){
								__iv__367_transaction_hash=(string)/*void**/(__iv__aave_batch__1137_json_data->var);
							}
						}
					}
				}
			}
		}
/*service_var 519==> json_easy.json_data_name*/
/*service_var 518==> json_easy.json_data*/
	}
/*service_var 517==> json_easy.json_data*/
	__iv__aave_batch__1146_tmp_var=strconcat((char*)/*string*/("transaction sent : "), (char*)/*string*/(__iv__367_transaction_hash));
	__iv__aave_batch__1147_tmp_var=strconcat((char*)/*string*/(__iv__aave_batch__1146_tmp_var), (char*)/*string*/("\n"));
	__iv__aave_batch__1145_to_print=__iv__aave_batch__1147_tmp_var;
	if(__iv__aave_batch__1145_to_print){
		printf((char*)/*string*/("%s"), __iv__aave_batch__1145_to_print);
	}
/*service_var 501==> zgenerator_crypt.buffer_len*/
/*service_var 500==> zgenerator_crypt.buffer*/
/*service_var 499==> zgenerator_crypt.buffer_len*/
/*service_var 498==> zgenerator_crypt.buffer*/
/*service_var 497==> zgenerator_crypt.buffer_len*/
/*service_var 496==> zgenerator_crypt.buffer*/
}

