/* IL2CPP: Rotatelab.Extensions$$Exists<object>
bool Rotatelab_Extensions__Exists_object_ (System_Object_array* array, System_Predicate_T__o* match, const MethodInfo_1486804* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions$$Exists<object>
   bool Rotatelab_Extensions__Exists_object_ (System_Object_array* array, System_Predicate_T__o*
   match, const MethodInfo_1486804* method); */

bool Rotatelab_Extensions__Exists_object__1486804
               (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  iVar1 = *(int *)(param_3 + 0x1c);
  if (iVar1 == 0) {
    FUN_00efd7c4(param_3);
    iVar1 = *(int *)(param_3 + 0x1c);
    param_4 = extraout_r3;
  }
  iVar2 = *(int *)(iVar1 + 8);
  iVar1 = *(int *)(iVar2 + 0x1c);
  if (iVar1 == 0) {
    FUN_00efd7c4(iVar2);
    iVar1 = *(int *)(iVar2 + 0x1c);
    param_4 = extraout_r3_00;
  }
  iVar1 = System_Array__FindIndex_object__163c5c8
                    (param_1,param_2,*(undefined4 *)(iVar1 + 8),param_4,unaff_r4,unaff_r5,unaff_r6,
                     unaff_lr);
  return iVar1 != -1;
}

