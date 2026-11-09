/* IL2CPP: Rotatelab.Scripts.TweenController$$DecideSequence
void Rotatelab_Scripts_TweenController__DecideSequence (Rotatelab_Scripts_TweenController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.TweenController$$DecideSequence
   void Rotatelab_Scripts_TweenController__DecideSequence (Rotatelab_Scripts_TweenController_o*
   __this, const MethodInfo* method); */

int Rotatelab_Scripts_TweenController__DecideSequence_106bdf4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  float fVar8;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 2) {
    pcVar6 = (char *)(_UNK_0107c1d4 + 0x107c07c);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0107c1d8 + 0x107c090));
      *pcVar6 = '\x01';
    }
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    pcVar6 = (char *)(_UNK_0107c1dc + 0x107c0bc);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0107c1e0 + 0x107c0d0));
      *pcVar6 = '\x01';
    }
    piVar7 = *(int **)(_UNK_0107c1e4 + 0x107c0e8);
    fVar8 = *(float *)(param_1 + 0x18);
    iVar3 = *(int *)(*piVar7 + 0x5c);
    uVar1 = DG_Tweening_ShortcutExtensions__DOScale_116b840
                      (uVar1,*(float *)(iVar3 + 0xc) * fVar8 * 0.25,
                       *(float *)(iVar3 + 0x10) * fVar8 * 0.25,
                       *(float *)(iVar3 + 0x14) * fVar8 * 0.25,0x3f000000,0);
    puVar5 = *(undefined4 **)(_UNK_0107c1e8 + 0x107c140);
    uVar1 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8(uVar1,0x18,*puVar5);
    iVar3 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar4,uVar1,0);
    uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0107c1ec + 0x107c180));
      *pcVar6 = '\x01';
    }
    iVar2 = *(int *)(*piVar7 + 0x5c);
    uVar1 = DG_Tweening_ShortcutExtensions__DOScale_116b840
                      (uVar1,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
                       *(undefined4 *)(iVar2 + 0x14),0x3e4ccccd,0);
    uVar1 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8(uVar1,0x12,*puVar5);
  }
  else if (iVar3 == 1) {
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    pcVar6 = (char *)(_UNK_0107c054 + 0x107bf60);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0107c058 + 0x107bf74));
      *pcVar6 = '\x01';
    }
    piVar7 = *(int **)(_UNK_0107c05c + 0x107bf94);
    fVar8 = *(float *)(param_1 + 0x18);
    iVar3 = *(int *)(*piVar7 + 0x5c);
    uVar1 = DG_Tweening_ShortcutExtensions__DOScale_116b840
                      (uVar1,*(float *)(iVar3 + 0xc) * fVar8 * 0.25,
                       *(float *)(iVar3 + 0x10) * fVar8 * 0.25,
                       *(float *)(iVar3 + 0x14) * fVar8 * 0.25,0x3e4ccccd,0);
    iVar3 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar4,uVar1,0);
    uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0107c060 + 0x107c014));
      *pcVar6 = '\x01';
    }
    iVar2 = *(int *)(*piVar7 + 0x5c);
    uVar1 = DG_Tweening_ShortcutExtensions__DOScale_116b840
                      (uVar1,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
                       *(undefined4 *)(iVar2 + 0x14),0x3e4ccccd,0);
  }
  else {
    if (iVar3 != 0) {
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0107be58 + 0x107be2c));
      uVar1 = thunk_FUN_00f00cdc();
      System_ArgumentOutOfRangeException___ctor_2b12e2c(uVar1,0);
      uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0107be5c + 0x107be48));
      func_0x00ec3920(uVar1,uVar4);
                    /* WARNING: Subroutine does not return */
      FUN_00ec3760();
    }
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    uVar1 = DG_Tweening_ShortcutExtensions__DORotate_116b460
                      (uVar1,0,0,*(undefined4 *)(param_1 + 0x18),0x3e4ccccd,0,0);
    uVar1 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar4,uVar1,0);
    uVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    uVar4 = DG_Tweening_ShortcutExtensions__DORotate_116b460
                      (uVar4,0,0,*(uint *)(param_1 + 0x18) ^ 0x80000000,0x3e4ccccd,0,0);
    iVar3 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar1,uVar4,0);
    uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    uVar1 = DG_Tweening_ShortcutExtensions__DORotate_116b460(uVar1,0,0,0,0x3e4ccccd,0,0);
  }
  iVar2 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_116cf94(iVar3,uVar1,0);
  if (iVar2 != 0) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    DG_Tweening_Sequence__DoInsert_116959c(iVar3,uVar1,*(undefined4 *)(iVar3 + 0x60));
  }
  return iVar3;
}

