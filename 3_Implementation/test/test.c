#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
#include<telecom.h>
#define PROJECT_NAME    "Telecom_Billing_Management_System"

void test_addrecords(void);
void test_listrecords(void);
void test_modifyrecords(void);
void test_searchrecords(void);
void test_payment(void);

int main() {

  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
  
  CU_add_test(suite, "addrecords", test_addrecords);
  CU_add_test(suite, "listrecords", test_listrecords);
  CU_add_test(suite, "modifyrecords", test_modifyrecords);
  CU_add_test(suite, "searchrecords", test_searchrecords);
  CU_add_test(suite, "payment", test_payment);
 

  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  CU_cleanup_registry();
  return 0;
}
void test_addrecords(void){
  CU_ASSERT(123 == add(123));  //adding phonenumber
  CU_ASSERT(321 == add(321));  //adding accountnumber
  CU_ASSERT(abc == add(abc));  //adding username
  CU_ASSERT(50 == add(50));   //adding payment
 }

void test_listrecords(void){
  
}

void test_modifyrecords(void){
  
}

void test_searchrecords(void){
  
}

void test_payment(void){
  
}




