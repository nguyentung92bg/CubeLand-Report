/* IL2CPP: Rotatelab.Save.SavedGenericValue<__Il2CppFullySharedGenericType>$$SetSavedValue
void Rotatelab_Save_SavedGenericValue___Il2CppFullySharedGenericType___SetSavedValue (Rotatelab_Save_SavedGenericValue_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_1A896F0* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedGenericValue<__Il2CppFullySharedGenericType>$$SetSavedValue
   void Rotatelab_Save_SavedGenericValue___Il2CppFullySharedGenericType___SetSavedValue
   (Rotatelab_Save_SavedGenericValue_T__o* __this,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_1A896F0* method);
    */

void Rotatelab_Save_SavedGenericValue___Il2CppFullySharedGenericType___SetSavedValue_1a896f0
               (undefined4 param_1,undefined4 ****param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 ****ppppuVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 ***pppuStack_28;
  int iStack_24;
  
  pcVar6 = (char *)(_UNK_01a99810 + 0x1a99714);
  iStack_24 = **(int **)(_UNK_01a99814 + 0x1a9971c);
  pppuStack_28 = param_2;
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01a99818 + 0x1a99740));
    *pcVar6 = '\x01';
  }
  piVar1 = *(int **)(*(int *)(param_3 + 0x10) + 0x60);
  iVar8 = *(int *)(*piVar1 + 0x84);
  iVar7 = (int)&pppuStack_28 - (iVar8 + 7U & 0xfffffff8);
  puVar2 = (undefined4 *)thunk_FUN_00f1b490(param_1,*(undefined4 *)(piVar1[4] + 0x40));
  uVar9 = *puVar2;
  iVar5 = **(int **)(*(int *)(param_3 + 0x10) + 0x60);
  ppppuVar4 = &pppuStack_28;
  if (*(int *)(iVar5 + 0x14) < 0) {
    ppppuVar4 = param_2;
  }
  thunk_FUN_00f95db8(iVar7,ppppuVar4,iVar8);
  uVar3 = FUN_00ec393c(iVar5,iVar7);
  if (*(int *)(**(int **)(_UNK_01a9981c + 0x1a997c0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = Newtonsoft_Json_JsonConvert__SerializeObject_2c33b34(uVar3,0);
  Rotatelab_Save_SaveManager__SetString_10791b8(uVar9,uVar3,0);
  if (**(int **)(_UNK_01a99820 + 0x1a997fc) != iStack_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

