/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$Rotatelab.IObservableValue.get_Value
Il2CppObject* Rotatelab_ObservableValue___Il2CppFullySharedGenericType___Rotatelab_IObservableValue_get_Value (Rotatelab_ObservableValue_T__o* __this, const MethodInfo_185DD38* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$Rotatelab.IObservableValue.get_Value
   Il2CppObject*
   Rotatelab_ObservableValue___Il2CppFullySharedGenericType___Rotatelab_IObservableValue_get_Value
   (Rotatelab_ObservableValue_T__o* __this, const MethodInfo_185DD38* method); */

void Rotatelab_ObservableValue___Il2CppFullySharedGenericType___Rotatelab_IObservableValue_get_Value_185dd38
               (int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int aiStack_28 [2];
  int iStack_20;
  int iStack_1c;
  
  iStack_1c = **(int **)(_UNK_0186dde0 + 0x186dd58);
  iVar1 = -(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4) + 0x84) + 7U &
           0xfffffff8);
  iVar4 = (int)&iStack_20 + iVar1;
  iVar3 = *(int *)(*param_1 + 0xf4);
  uVar2 = *(undefined4 *)(iVar3 + 4);
  pcVar5 = *(code **)(iVar3 + 8);
  iStack_20 = iVar4;
  *(int *)((int)aiStack_28 + iVar1) = iVar4;
  (*pcVar5)(uVar2,iVar3,param_1,&iStack_20);
  FUN_00ec393c(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4),iVar4);
  if (**(int **)(_UNK_0186dde4 + 0x186ddcc) != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

