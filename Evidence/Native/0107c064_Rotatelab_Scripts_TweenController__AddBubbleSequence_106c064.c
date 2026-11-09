/* IL2CPP: Rotatelab.Scripts.TweenController$$AddBubbleSequence
void Rotatelab_Scripts_TweenController__AddBubbleSequence (Rotatelab_Scripts_TweenController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.TweenController$$AddBubbleSequence
   void Rotatelab_Scripts_TweenController__AddBubbleSequence (Rotatelab_Scripts_TweenController_o*
   __this, const MethodInfo* method); */

int Rotatelab_Scripts_TweenController__AddBubbleSequence_106c064(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  float fVar8;
  
  pcVar4 = (char *)(_UNK_0107c1d4 + 0x107c07c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107c1d8 + 0x107c090));
    *pcVar4 = '\x01';
  }
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  pcVar4 = (char *)(_UNK_0107c1dc + 0x107c0bc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107c1e0 + 0x107c0d0));
    *pcVar4 = '\x01';
  }
  piVar7 = *(int **)(_UNK_0107c1e4 + 0x107c0e8);
  fVar8 = *(float *)(param_1 + 0x18);
  iVar2 = *(int *)(*piVar7 + 0x5c);
  uVar1 = DG_Tweening_ShortcutExtensions__DOScale_116b840
                    (uVar1,*(float *)(iVar2 + 0xc) * fVar8 * 0.25,
                     *(float *)(iVar2 + 0x10) * fVar8 * 0.25,*(float *)(iVar2 + 0x14) * fVar8 * 0.25
                     ,0x3f000000,0);
  puVar6 = *(undefined4 **)(_UNK_0107c1e8 + 0x107c140);
  uVar1 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8(uVar1,0x18,*puVar6);
  iVar2 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar1,0);
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107c1ec + 0x107c180));
    *pcVar4 = '\x01';
  }
  iVar3 = *(int *)(*piVar7 + 0x5c);
  uVar1 = DG_Tweening_ShortcutExtensions__DOScale_116b840
                    (uVar1,*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),
                     *(undefined4 *)(iVar3 + 0x14),0x3e4ccccd,0);
  uVar1 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8(uVar1,0x12,*puVar6);
  iVar3 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_116cf94(iVar2,uVar1,0);
  if (iVar3 != 0) {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    DG_Tweening_Sequence__DoInsert_116959c(iVar2,uVar1,*(undefined4 *)(iVar2 + 0x60));
  }
  return iVar2;
}

