/* IL2CPP: Rotatelab.Extensions$$Sort<object>
System_Object_array* Rotatelab_Extensions__Sort_object_ (System_Object_array* array, System_Comparison_T__o* comparison, const MethodInfo_1489244* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions$$Sort<object>
   System_Object_array* Rotatelab_Extensions__Sort_object_ (System_Object_array* array,
   System_Comparison_T__o* comparison, const MethodInfo_1489244* method); */

undefined4
Rotatelab_Extensions__Sort_object__1489244(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x1c);
  if (iVar1 == 0) {
    FUN_00efd7c4(param_3);
    iVar1 = *(int *)(param_3 + 0x1c);
  }
  System_Array__Sort_object__13c6264(param_1,param_2,*(undefined4 *)(iVar1 + 8));
  return param_1;
}

