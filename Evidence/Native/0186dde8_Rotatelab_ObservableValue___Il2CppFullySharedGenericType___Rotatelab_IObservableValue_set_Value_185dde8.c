/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$Rotatelab.IObservableValue.set_Value
void Rotatelab_ObservableValue___Il2CppFullySharedGenericType___Rotatelab_IObservableValue_set_Value (Rotatelab_ObservableValue_T__o* __this, Il2CppObject* value, const MethodInfo_185DDE8* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$Rotatelab.IObservableValue.set_Value
   void 
   Rotatelab_ObservableValue___Il2CppFullySharedGenericType___Rotatelab_IObservableValue_set_Value
   (Rotatelab_ObservableValue_T__o* __this, Il2CppObject* value, const MethodInfo_185DDE8* method);
    */

void Rotatelab_ObservableValue___Il2CppFullySharedGenericType___Rotatelab_IObservableValue_set_Value_185dde8
               (int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 auStack_30 [2];
  undefined4 *puStack_28;
  int iStack_24;
  
  iStack_24 = **(int **)(_UNK_0186dec4 + 0x186de0c);
  iVar2 = *(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 4);
  iVar1 = -(*(int *)(iVar2 + 0x84) + 7U & 0xfffffff8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768(iVar2);
  }
  puStack_28 = (undefined4 *)func_0x00ec3948(param_2,iVar2,(int)&puStack_28 + iVar1);
  if (-1 < *(int *)(*(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 4) + 0x14)) {
    puStack_28 = (undefined4 *)*puStack_28;
  }
  iVar2 = *(int *)(*param_1 + 0xfc);
  uVar3 = *(undefined4 *)(iVar2 + 4);
  pcVar4 = *(code **)(iVar2 + 8);
  *(undefined4 **)((int)auStack_30 + iVar1) = puStack_28;
  (*pcVar4)(uVar3,iVar2,param_1,&puStack_28);
  if (**(int **)(_UNK_0186dec8 + 0x186deb0) != iStack_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

