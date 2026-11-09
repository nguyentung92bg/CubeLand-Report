/* IL2CPP: Rotatelab.UI.UIManager.<>c__DisplayClass37_0$$<SetMainCanvas>b__0
void Rotatelab_UI_UIManager___c__DisplayClass37_0___SetMainCanvas_b__0 (Rotatelab_UI_UIManager___c__DisplayClass37_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UIManager.<>c__DisplayClass37_0$$<SetMainCanvas>b__0
   void Rotatelab_UI_UIManager___c__DisplayClass37_0___SetMainCanvas_b__0
   (Rotatelab_UI_UIManager___c__DisplayClass37_0_o* __this, const MethodInfo* method); */

void Rotatelab_UI_UIManager___c__DisplayClass37_0___SetMainCanvas_b__0_1128c88(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01138d64 + 0x1138c9c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138d68 + 0x1138cb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138d6c + 0x1138cbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138d70 + 0x1138cc8));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01138d74 + 0x1138cdc);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x148);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c
            (iVar1,*(int *)(param_1 + 8) != 0,**(undefined4 **)(_UNK_01138d78 + 0x1138d20));
  iVar1 = *(int *)(*(int *)(*piVar3 + 0x5c) + 0x120);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b4388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))
            (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(param_1 + 8),0,
             *(undefined4 *)(iVar1 + 0x14));
  return;
}

