/* IL2CPP: Rotatelab.Extensions$$FindIndex<object>
int32_t Rotatelab_Extensions__FindIndex_object_ (System_Object_array* array, System_Predicate_T__o* selector, const MethodInfo_14871E4* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$FindIndex<object>
   int32_t Rotatelab_Extensions__FindIndex_object_ (System_Object_array* array,
   System_Predicate_T__o* selector, const MethodInfo_14871E4* method); */

void Rotatelab_Extensions__FindIndex_object__14871e4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_3 + 0x1c);
  if (iVar1 == 0) {
    FUN_00efd7c4(param_3);
    iVar1 = *(int *)(param_3 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    FUN_00efd7c4(iVar1);
  }
  if (param_1 != 0) {
    System_Array__FindIndex_object__163c900
              (param_1,0,*(undefined4 *)(param_1 + 0xc),param_2,
               *(undefined4 *)(*(int *)(iVar1 + 0x1c) + 8));
    return;
  }
  thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0164c660 + 0x164c62c));
  uVar2 = thunk_FUN_00f00cdc();
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0164c664 + 0x164c640));
  System_ArgumentNullException___ctor_2b08d00(uVar2,uVar3,0);
  func_0x00ec3920(uVar2,iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}

