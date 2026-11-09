/* IL2CPP: Rotatelab.Boosters.UI.BoosterInfoPopupController$$Hide
void Rotatelab_Boosters_UI_BoosterInfoPopupController__Hide (Rotatelab_Boosters_UI_BoosterInfoPopupController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.UI.BoosterInfoPopupController$$Hide
   void Rotatelab_Boosters_UI_BoosterInfoPopupController__Hide
   (Rotatelab_Boosters_UI_BoosterInfoPopupController_o* __this, const MethodInfo* method); */

int Rotatelab_Boosters_UI_BoosterInfoPopupController__Hide_113e118(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar5 = (char *)(_UNK_0114e298 + 0x114e130);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114e29c + 0x114e144));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114e2a0 + 0x114e150));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114e2a4 + 0x114e15c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114e2a8 + 0x114e168));
    *pcVar5 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x20);
  pcVar5 = (char *)(_UNK_0114e2ac + 0x114e184);
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114e2b0 + 0x114e19c));
    *pcVar5 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0114e2b4 + 0x114e1b4);
  iVar2 = *(int *)(*piVar8 + 0x5c);
  if (iVar6 != 0) {
    UnityEngine_Transform__set_localScale_36155dc
              (iVar6,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
               *(undefined4 *)(iVar2 + 0x14),0);
    uVar7 = *(undefined4 *)(param_1 + 0x20);
    pcVar5 = (char *)(_UNK_0114e2b8 + 0x114e1f8);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0114e2bc + 0x114e20c));
      *pcVar5 = '\x01';
    }
    puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
    uVar7 = DG_Tweening_ShortcutExtensions__DOScale_116b840
                      (uVar7,*puVar3,puVar3[1],puVar3[2],0x3e800000,0);
    iVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                      (uVar7,9,**(undefined4 **)(_UNK_0114e2c0 + 0x114e23c));
    uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114e2c4 + 0x114e254));
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar7,param_1,**(undefined4 **)(_UNK_0114e2c8 + 0x114e270),0);
    uVar4 = **(undefined4 **)(_UNK_0114e2cc + 0x114e288);
    cVar1 = '\0';
    if (iVar6 != 0) {
      cVar1 = *(char *)(iVar6 + 0x94);
    }
    if (iVar6 != 0 && cVar1 != '\0') {
      *(undefined4 *)(iVar6 + 0x4c) = uVar7;
      thunk_FUN_00ec5080((undefined4 *)(iVar6 + 0x4c),uVar7,uVar4);
    }
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

