/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$.ctor
void Rotatelab_ObservableValue___Il2CppFullySharedGenericType____ctor (Rotatelab_ObservableValue_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_185E280* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$.ctor
   void Rotatelab_ObservableValue___Il2CppFullySharedGenericType____ctor
   (Rotatelab_ObservableValue_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   value, const MethodInfo_185E280* method); */

void Rotatelab_ObservableValue___Il2CppFullySharedGenericType____ctor_185e280
               (undefined4 param_1,undefined4 ****param_2,int param_3)

{
  int iVar1;
  undefined4 ****ppppuVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 ***pppuStack_28;
  int iStack_24;
  
  iStack_24 = **(int **)(_UNK_0186e344 + 0x186e2a4);
  iVar1 = *(int *)(*(int *)(param_3 + 0x10) + 0x60);
  iVar4 = *(int *)(*(int *)(iVar1 + 4) + 0x84);
  iVar5 = (int)&pppuStack_28 - (iVar4 + 7U & 0xfffffff8);
  pppuStack_28 = param_2;
  (*(code *)**(undefined4 **)(iVar1 + 0x2c))(param_1);
  piVar3 = *(int **)(*(int *)(param_3 + 0x10) + 0x60);
  ppppuVar2 = &pppuStack_28;
  if (*(int *)(piVar3[1] + 0x14) < 0) {
    ppppuVar2 = param_2;
  }
  thunk_FUN_00f95db8(iVar5,ppppuVar2,iVar4);
  func_0x00ec37e8(param_1,*(undefined4 *)(*piVar3 + 0x40),iVar5,iVar4);
  if (**(int **)(_UNK_0186e348 + 0x186e330) != iStack_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

