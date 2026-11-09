/* IL2CPP: Rotatelab.UI.FailPanelController$$OnCarouselScrolled
void Rotatelab_UI_FailPanelController__OnCarouselScrolled (Rotatelab_UI_FailPanelController_o* __this, UnityEngine_Vector2_o scrollPos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$OnCarouselScrolled
   void Rotatelab_UI_FailPanelController__OnCarouselScrolled (Rotatelab_UI_FailPanelController_o*
   __this, UnityEngine_Vector2_o scrollPos, const MethodInfo* method); */

void Rotatelab_UI_FailPanelController__OnCarouselScrolled_111c87c(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_0112c904 + 0x112c894);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c908 + 0x112c8a8));
    *pcVar2 = '\x01';
  }
  uVar3 = *(undefined4 *)(param_1 + 0x70);
  if (*(int *)(**(int **)(_UNK_0112c90c + 0x112c8bc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = DG_Tweening_DOTween__IsTweening_11680f4(uVar3,0,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xcc) = param_2;
    if (*(char *)(param_1 + 0xc4) == '\0') {
      *(undefined4 *)(param_1 + 200) = param_2;
      *(undefined1 *)(param_1 + 0xc4) = 1;
    }
    return;
  }
  return;
}

