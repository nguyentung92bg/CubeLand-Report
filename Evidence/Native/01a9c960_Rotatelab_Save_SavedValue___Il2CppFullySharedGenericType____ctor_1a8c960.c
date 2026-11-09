/* IL2CPP: Rotatelab.Save.SavedValue<__Il2CppFullySharedGenericType>$$.ctor
void Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType____ctor (Rotatelab_Save_SavedValue_T__o* __this, System_String_o* key, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue, const MethodInfo_1A8C960* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedValue<__Il2CppFullySharedGenericType>$$.ctor
   void Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType____ctor
   (Rotatelab_Save_SavedValue_T__o* __this, System_String_o* key,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue, const MethodInfo_1A8C960*
   method); */

void Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType____ctor_1a8c960
               (undefined4 param_1,undefined4 param_2,undefined4 ****param_3,int param_4)

{
  undefined4 ****ppppuVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_30 [4];
  undefined4 ***pppuStack_2c;
  int iStack_28;
  
  iStack_28 = **(int **)(_UNK_01a9ca44 + 0x1a9c984);
  iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_4 + 0x10) + 0x60) + 8) + 0x84);
  pppuStack_2c = param_3;
  Rotatelab_Save_SavedValue___ctor_1082f7c(param_1,0);
  func_0x00b8fd54(param_1,*(undefined4 *)(**(int **)(*(int *)(param_4 + 0x10) + 0x60) + 0x40),
                  param_2);
  piVar3 = *(int **)(*(int *)(param_4 + 0x10) + 0x60);
  ppppuVar1 = &pppuStack_2c;
  if (*(int *)(piVar3[2] + 0x14) < 0) {
    ppppuVar1 = param_3;
  }
  thunk_FUN_00f95db8(auStack_30 + -(iVar2 + 7U & 0xfffffff8),ppppuVar1,iVar2);
  func_0x00ec37e8(param_1,*(int *)(*piVar3 + 0x40) + 0x14,auStack_30 + -(iVar2 + 7U & 0xfffffff8),
                  iVar2);
  if (**(int **)(_UNK_01a9ca48 + 0x1a9ca30) != iStack_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

