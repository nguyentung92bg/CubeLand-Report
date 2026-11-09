/* IL2CPP: Rotatelab.Scripts.ComboBarUI$$Awake
void Rotatelab_Scripts_ComboBarUI__Awake (Rotatelab_Scripts_ComboBarUI_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ComboBarUI$$Awake
   void Rotatelab_Scripts_ComboBarUI__Awake (Rotatelab_Scripts_ComboBarUI_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_ComboBarUI__Awake_1000bcc(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01010ce0 + 0x1010be0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010ce4 + 0x1010bf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010ce8 + 0x1010c00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010cec + 0x1010c0c));
    *pcVar2 = '\x01';
  }
  iVar1 = UnityEngine_Component__GetComponent_object__143f3b0
                    (param_1,**(undefined4 **)(_UNK_01010cf0 + 0x1010c20));
  piVar3 = (int *)(param_1 + 0x40);
  *piVar3 = iVar1;
  thunk_FUN_00ec5080(piVar3,iVar1);
  if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_alpha_39a3758(*piVar3,0,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_fillAmount_3721d6c(*(int *)(param_1 + 0x10),0,0);
  piVar3 = *(int **)(param_1 + 0x14);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar3 + 0x2b0))
            (piVar3,**(undefined4 **)(_UNK_01010cf4 + 0x1010c9c),*(undefined4 *)(*piVar3 + 0x2b4));
  piVar3 = *(int **)(param_1 + 0x1c);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x01010cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x2b0))
            (piVar3,**(undefined4 **)(_UNK_01010cf8 + 0x1010cd4),*(undefined4 *)(*piVar3 + 0x2b4));
  return;
}

