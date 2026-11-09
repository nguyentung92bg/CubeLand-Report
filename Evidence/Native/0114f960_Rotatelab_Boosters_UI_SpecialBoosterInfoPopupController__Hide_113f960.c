/* IL2CPP: Rotatelab.Boosters.UI.SpecialBoosterInfoPopupController$$Hide
void Rotatelab_Boosters_UI_SpecialBoosterInfoPopupController__Hide (Rotatelab_Boosters_UI_SpecialBoosterInfoPopupController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.UI.SpecialBoosterInfoPopupController$$Hide
   void Rotatelab_Boosters_UI_SpecialBoosterInfoPopupController__Hide
   (Rotatelab_Boosters_UI_SpecialBoosterInfoPopupController_o* __this, const MethodInfo* method); */

int Rotatelab_Boosters_UI_SpecialBoosterInfoPopupController__Hide_113f960(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar5 = (char *)(_UNK_0114fae0 + 0x114f978);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114fae4 + 0x114f98c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114fae8 + 0x114f998));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114faec + 0x114f9a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114faf0 + 0x114f9b0));
    *pcVar5 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x14);
  pcVar5 = (char *)(_UNK_0114faf4 + 0x114f9cc);
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114faf8 + 0x114f9e4));
    *pcVar5 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0114fafc + 0x114f9fc);
  iVar2 = *(int *)(*piVar8 + 0x5c);
  if (iVar6 != 0) {
    UnityEngine_Transform__set_localScale_36155dc
              (iVar6,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
               *(undefined4 *)(iVar2 + 0x14),0);
    uVar7 = *(undefined4 *)(param_1 + 0x14);
    pcVar5 = (char *)(_UNK_0114fb00 + 0x114fa40);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0114fb04 + 0x114fa54));
      *pcVar5 = '\x01';
    }
    puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
    uVar7 = DG_Tweening_ShortcutExtensions__DOScale_116b840
                      (uVar7,*puVar3,puVar3[1],puVar3[2],0x3e800000,0);
    iVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                      (uVar7,9,**(undefined4 **)(_UNK_0114fb08 + 0x114fa84));
    uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114fb0c + 0x114fa9c));
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar7,param_1,**(undefined4 **)(_UNK_0114fb10 + 0x114fab8),0);
    uVar4 = **(undefined4 **)(_UNK_0114fb14 + 0x114fad0);
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

