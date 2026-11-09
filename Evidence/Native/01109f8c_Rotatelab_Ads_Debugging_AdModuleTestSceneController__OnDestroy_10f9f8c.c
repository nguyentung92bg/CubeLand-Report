/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController$$OnDestroy
void Rotatelab_Ads_Debugging_AdModuleTestSceneController__OnDestroy (Rotatelab_Ads_Debugging_AdModuleTestSceneController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController$$OnDestroy
   void Rotatelab_Ads_Debugging_AdModuleTestSceneController__OnDestroy
   (Rotatelab_Ads_Debugging_AdModuleTestSceneController_o* __this, const MethodInfo* method); */

void Rotatelab_Ads_Debugging_AdModuleTestSceneController__OnDestroy_10f9f8c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  pcVar5 = (char *)(_UNK_0110a044 + 0x1109fa0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a048 + 0x1109fb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a04c + 0x1109fc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a050 + 0x1109fcc));
    *pcVar5 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0110a054 + 0x1109fe0));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0110a058 + 0x110a000));
  System_Action_RewardedAdFormat_CustomReward____ctor_1f159c0
            (uVar3,param_1,**(undefined4 **)(_UNK_0110a05c + 0x110a020),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_01103f94 + 0x1103f08);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01103f98 + 0x1103f1c));
    *pcVar5 = '\x01';
  }
  piVar7 = (int *)(iVar2 + 0x40);
  puVar8 = *(undefined4 **)(_UNK_01103f9c + 0x1103f34);
  iVar2 = *piVar7;
  do {
    iVar6 = 0;
    iVar1 = System_Delegate__Remove_2bbcc8c(iVar2,uVar3,0);
    if (iVar1 != 0) {
      uVar4 = *puVar8;
      iVar6 = thunk_FUN_00f00bc8(iVar1,uVar4);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(iVar1,uVar4);
      }
    }
    iVar1 = FUN_00efd180(piVar7,iVar6,iVar2);
    bVar9 = iVar1 != iVar2;
    iVar2 = iVar1;
  } while (bVar9);
  return;
}

