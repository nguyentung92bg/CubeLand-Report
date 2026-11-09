/* IL2CPP: Rotatelab.Save.SavedList<__Il2CppFullySharedGenericType>$$Add
void Rotatelab_Save_SavedList___Il2CppFullySharedGenericType___Add (Rotatelab_Save_SavedList_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item, bool saveChanges, const MethodInfo_1A8AA4C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedList<__Il2CppFullySharedGenericType>$$Add
   void Rotatelab_Save_SavedList___Il2CppFullySharedGenericType___Add
   (Rotatelab_Save_SavedList_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   item, bool saveChanges, const MethodInfo_1A8AA4C* method); */

void Rotatelab_Save_SavedList___Il2CppFullySharedGenericType___Add_1a8aa4c
               (int *param_1,undefined4 ****param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 ****ppppuVar6;
  code *pcVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int aiStack_48 [2];
  undefined4 ***pppuStack_40;
  int iStack_3c;
  int *piStack_38;
  undefined4 ***pppuStack_34;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_01a9abb0 + 0x1a9aa70);
  puVar4 = *(undefined4 **)(*(int *)(param_4 + 0x10) + 0x60);
  iVar8 = *(int *)(puVar4[4] + 0x84);
  iVar1 = -(iVar8 + 7U & 0xfffffff8);
  piVar9 = (int *)((int)&pppuStack_40 + iVar1);
  pppuStack_40 = param_2;
  iStack_3c = param_3;
  pppuStack_34 = param_2;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar4 = (undefined4 *)*puVar4;
  pcVar7 = (code *)puVar4[2];
  uVar5 = *puVar4;
  *(int **)((int)aiStack_48 + iVar1) = &iStack_30;
  piStack_38 = param_1;
  (*pcVar7)(uVar5,puVar4,param_1,0);
  iVar3 = iStack_30;
  iVar10 = *(int *)(*(int *)(param_4 + 0x10) + 0x60);
  iVar11 = *(int *)(*(int *)(iVar10 + 0x10) + 0x14);
  ppppuVar6 = &pppuStack_34;
  if (iVar11 < 0) {
    ppppuVar6 = (undefined4 ****)pppuStack_40;
  }
  thunk_FUN_00f95db8(piVar9,ppppuVar6,iVar8);
  piVar2 = piStack_38;
  if (iStack_30 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar4 = *(undefined4 **)(iVar10 + 0x24);
  if (-1 < iVar11) {
    piVar9 = (int *)*piVar9;
  }
  uVar5 = *puVar4;
  pcVar7 = (code *)puVar4[2];
  iStack_30 = (int)piVar9;
  *(int **)((int)aiStack_48 + iVar1) = piVar9;
  (*pcVar7)(uVar5,puVar4,iVar3,&iStack_30);
  if (iStack_3c != 0) {
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar2 + 0xf0))(piVar2,*(undefined4 *)(*piVar2 + 0xf4));
  }
  if (**(int **)(_UNK_01a9abb4 + 0x1a9ab9c) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

