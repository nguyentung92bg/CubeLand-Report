/* IL2CPP: Rotatelab.UI.FailPanelController$$<InvisibleTapToSkipClick>b__65_3
void Rotatelab_UI_FailPanelController___InvisibleTapToSkipClick_b__65_3 (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x015e9fb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$<InvisibleTapToSkipClick>b__65_3
   void Rotatelab_UI_FailPanelController___InvisibleTapToSkipClick_b__65_3
   (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method); */

int * Rotatelab_UI_FailPanelController___InvisibleTapToSkipClick_b__65_3_111cb90(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_0112cc34 + 0x112cba4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112cc38 + 0x112cbb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112cc3c + 0x112cbc4));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0112cc40 + 0x112cbd8);
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  if (*(char *)(*(int *)(iVar2 + 0x5c) + 3) == '\0') {
    return (int *)0x0;
  }
  piVar5 = (int *)DG_Tweening_ShortcutExtensions__DOScale_116ba14
                            (*(undefined4 *)(param_1 + 0x54),0x3f800000,0x3e4ccccd,0);
  pcVar4 = (char *)(_UNK_015e9fbc + 0x15e9f24);
  cVar1 = *pcVar4;
  if (cVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_015e9fc0 + 0x15e9f38),0x3e4ccccd,
                 **(undefined4 **)(_UNK_0112cc44 + 0x112cc24));
    cVar1 = '\x01';
    *pcVar4 = '\x01';
  }
  if (piVar5 != (int *)0x0) {
    cVar1 = (char)piVar5[0x25];
  }
  if ((piVar5 != (int *)0x0 && cVar1 != '\0') && ((char)piVar5[0x29] == '\0')) {
    if (piVar5[2] == 1) {
      piVar3 = (int *)0x0;
      if (*piVar5 == **(int **)(_UNK_015e9fc4 + 0x15e9f84)) {
        piVar3 = piVar5;
      }
      DG_Tweening_TweenSettingsExtensions__PrependInterval_116d0cc(piVar3,0x3e4ccccd,0);
    }
    else {
      piVar5[0x1b] = 0x3e4ccccd;
      *(undefined1 *)(piVar5 + 0x2f) = 0;
    }
  }
  return piVar5;
}

