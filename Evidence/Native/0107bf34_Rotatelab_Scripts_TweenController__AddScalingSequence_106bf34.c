/* IL2CPP: Rotatelab.Scripts.TweenController$$AddScalingSequence
void Rotatelab_Scripts_TweenController__AddScalingSequence (Rotatelab_Scripts_TweenController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.TweenController$$AddScalingSequence
   void Rotatelab_Scripts_TweenController__AddScalingSequence (Rotatelab_Scripts_TweenController_o*
   __this, const MethodInfo* method); */

int Rotatelab_Scripts_TweenController__AddScalingSequence_106bf34(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  float fVar7;
  
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  pcVar5 = (char *)(_UNK_0107c054 + 0x107bf60);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107c058 + 0x107bf74));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_0107c05c + 0x107bf94);
  fVar7 = *(float *)(param_1 + 0x18);
  iVar2 = *(int *)(*piVar6 + 0x5c);
  uVar1 = DG_Tweening_ShortcutExtensions__DOScale_116b840
                    (uVar1,*(float *)(iVar2 + 0xc) * fVar7 * 0.25,
                     *(float *)(iVar2 + 0x10) * fVar7 * 0.25,*(float *)(iVar2 + 0x14) * fVar7 * 0.25
                     ,0x3e4ccccd,0);
  iVar2 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar4,uVar1,0);
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107c060 + 0x107c014));
    *pcVar5 = '\x01';
  }
  iVar3 = *(int *)(*piVar6 + 0x5c);
  uVar1 = DG_Tweening_ShortcutExtensions__DOScale_116b840
                    (uVar1,*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),
                     *(undefined4 *)(iVar3 + 0x14),0x3e4ccccd,0);
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

