/* IL2CPP: Rotatelab.Scripts.PropellerController.<>c__DisplayClass11_0$$<AnimateHit>b__0
void Rotatelab_Scripts_PropellerController___c__DisplayClass11_0___AnimateHit_b__0 (Rotatelab_Scripts_PropellerController___c__DisplayClass11_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PropellerController.<>c__DisplayClass11_0$$<AnimateHit>b__0
   void Rotatelab_Scripts_PropellerController___c__DisplayClass11_0___AnimateHit_b__0
   (Rotatelab_Scripts_PropellerController___c__DisplayClass11_0_o* __this, const MethodInfo*
   method); */

void Rotatelab_Scripts_PropellerController___c__DisplayClass11_0___AnimateHit_b__0_104d708
               (int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x40);
  pcVar3 = (char *)(_UNK_0105d7a4 + 0x105d730);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105d7a8 + 0x105d744));
    *pcVar3 = '\x01';
  }
  iVar1 = *(int *)(**(int **)(_UNK_0105d7ac + 0x105d760) + 0x5c);
  DG_Tweening_ShortcutExtensions__DOScale_116b840
            (uVar2,*(float *)(iVar1 + 0xc) * 0.5,*(float *)(iVar1 + 0x10) * 0.5,
             *(float *)(iVar1 + 0x14) * 0.5,0x3dcccccd,0);
  return;
}

