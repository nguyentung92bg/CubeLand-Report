/* IL2CPP: Rotatelab.UI.FailPanelController$$GetCoinOffer
Rotatelab_UI_PlayOnOffer_o Rotatelab_UI_FailPanelController__GetCoinOffer (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$GetCoinOffer
   Rotatelab_UI_PlayOnOffer_o Rotatelab_UI_FailPanelController__GetCoinOffer
   (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_UI_FailPanelController__GetCoinOffer_1119100(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  pcVar4 = (char *)(_UNK_01129258 + 0x1129114);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112925c + 0x1129128));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01129260 + 0x1129134));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01129264 + 0x1129148);
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  iVar2 = **(int **)(iVar2 + 0x5c);
  uVar3 = Rotatelab_UI_FailPanelController__get_levelBasePlayOnUseCount_1118dbc();
  if (**(int **)(*piVar5 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = *(int *)(**(int **)(*piVar5 + 0x5c) + 0xc) - 1;
  if ((int)uVar3 < (int)uVar6) {
    uVar6 = uVar3;
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar2 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar2 = iVar2 + uVar6 * 0xc;
  puVar8 = *(undefined4 **)(_UNK_01129268 + 0x11291c4);
  uVar9 = *(undefined4 *)(iVar2 + 0x10);
  uVar7 = *(undefined4 *)(iVar2 + 0x14);
  uVar3 = *(uint *)(iVar2 + 0x18);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(iVar2 + 100) == '\0') {
    bVar1 = false;
    uVar7 = 3;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    bVar1 = false;
    if ((uVar3 & 1) != 0) {
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      bVar1 = *(char *)(iVar2 + 0x65) == '\0';
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = uVar9;
  *(bool *)(param_1 + 2) = bVar1;
  param_1[1] = uVar7;
  return;
}

