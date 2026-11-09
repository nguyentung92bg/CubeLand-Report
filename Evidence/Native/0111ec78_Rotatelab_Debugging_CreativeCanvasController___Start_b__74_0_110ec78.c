/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$<Start>b__74_0
void Rotatelab_Debugging_CreativeCanvasController___Start_b__74_0 (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$<Start>b__74_0
   void Rotatelab_Debugging_CreativeCanvasController___Start_b__74_0
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController___Start_b__74_0_110ec78(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0111ed38 + 0x111ec8c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ed3c + 0x111eca0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ed40 + 0x111ecac));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar1 = (int *)UnityEngine_Component__GetComponentInChildren_object__143f57c
                            (*(int *)(param_1 + 0x1c),**(undefined4 **)(_UNK_0111ed44 + 0x111ecd0));
  if (*(int *)(**(int **)(_UNK_0111ed48 + 0x111ece8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Inequality_36018e4(piVar1,0,0);
  if (iVar2 == 0) {
    return;
  }
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x0111ed34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x188))(piVar1,0,*(undefined4 *)(*piVar1 + 0x18c));
  return;
}

