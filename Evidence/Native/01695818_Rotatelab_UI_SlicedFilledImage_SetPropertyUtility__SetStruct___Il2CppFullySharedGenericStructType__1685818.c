/* IL2CPP: Rotatelab.UI.SlicedFilledImage.SetPropertyUtility$$SetStruct<__Il2CppFullySharedGenericStructType>
bool Rotatelab_UI_SlicedFilledImage_SetPropertyUtility__SetStruct___Il2CppFullySharedGenericStructType_ (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o* currentValue, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o newValue, const MethodInfo_1685818* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.UI.SlicedFilledImage.SetPropertyUtility$$SetStruct<__Il2CppFullySharedGenericStructType>
   bool 
   Rotatelab_UI_SlicedFilledImage_SetPropertyUtility__SetStruct___Il2CppFullySharedGenericStructType_
   (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o* currentValue,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o newValue, const MethodInfo_1685818*
   method); */

void Rotatelab_UI_SlicedFilledImage_SetPropertyUtility__SetStruct___Il2CppFullySharedGenericStructType__1685818
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  int aiStack_40 [2];
  int iStack_38;
  int iStack_34;
  char cStack_2d;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_01695968 + 0x169583c);
  puVar1 = *(undefined4 **)(param_3 + 0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00efd7c4(param_3);
    puVar1 = *(undefined4 **)(param_3 + 0x1c);
  }
  iVar6 = *(int *)(puVar1[4] + 0x84);
  uVar4 = iVar6 + 7U & 0xfffffff8;
  iVar9 = (int)&iStack_38 - uVar4;
  iVar7 = iVar9 - uVar4;
  piVar2 = (int *)(**(code **)*puVar1)();
  thunk_FUN_00f95db8(iVar9,param_1,iVar6);
  thunk_FUN_00f95db8(iVar7,param_2,iVar6);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*piVar2 + 0x104);
  pcVar8 = *(code **)(iVar5 + 8);
  uVar3 = *(undefined4 *)(iVar5 + 4);
  iStack_38 = iVar9;
  iStack_34 = iVar7;
  *(char **)(iVar7 + -8) = &cStack_2d;
  (*pcVar8)(uVar3,iVar5,piVar2,&iStack_38);
  if (cStack_2d == '\0') {
    thunk_FUN_00f95db8(iVar9,param_2,iVar6);
    thunk_FUN_00f95dc8(param_1,param_2,iVar6);
    iVar6 = *(int *)(*(int *)(param_3 + 0x1c) + 0x10);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = FUN_00efd768();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00ec3760(iVar6,param_1,iVar9);
  }
  if (**(int **)(_UNK_0169596c + 0x169594c) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iStack_2c);
  }
  return;
}

