/* IL2CPP: Rotatelab.Scripts.TweenController$$AddRotatingSequence
void Rotatelab_Scripts_TweenController__AddRotatingSequence (Rotatelab_Scripts_TweenController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.TweenController$$AddRotatingSequence
   void Rotatelab_Scripts_TweenController__AddRotatingSequence (Rotatelab_Scripts_TweenController_o*
   __this, const MethodInfo* method); */

int Rotatelab_Scripts_TweenController__AddRotatingSequence_106be60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  uVar1 = DG_Tweening_ShortcutExtensions__DORotate_116b460
                    (uVar1,0,0,*(undefined4 *)(param_1 + 0x18),0x3e4ccccd,0,0);
  uVar1 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar4,uVar1,0);
  uVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  uVar4 = DG_Tweening_ShortcutExtensions__DORotate_116b460
                    (uVar4,0,0,*(uint *)(param_1 + 0x18) ^ 0x80000000,0x3e4ccccd,0,0);
  iVar2 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar1,uVar4,0);
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  uVar1 = DG_Tweening_ShortcutExtensions__DORotate_116b460(uVar1,0,0,0,0x3e4ccccd,0,0);
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

