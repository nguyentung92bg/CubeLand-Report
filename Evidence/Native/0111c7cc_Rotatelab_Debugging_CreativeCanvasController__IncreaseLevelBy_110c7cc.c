/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$IncreaseLevelBy
void Rotatelab_Debugging_CreativeCanvasController__IncreaseLevelBy (Rotatelab_Debugging_CreativeCanvasController_o* __this, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$IncreaseLevelBy
   void Rotatelab_Debugging_CreativeCanvasController__IncreaseLevelBy
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, int32_t value, const MethodInfo*
   method); */

void Rotatelab_Debugging_CreativeCanvasController__IncreaseLevelBy_110c7cc(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_0111c8bc + 0x111c7e8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111c8c0 + 0x111c7fc));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  iStack_1c = 0;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = *(undefined4 *)(iVar3 + 0x160);
  if (*(int *)(**(int **)(_UNK_0111c8c4 + 0x111c828) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = System_Convert__ToInt32_2b1ddb4(uVar5,0);
  if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x50) + 0x14);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar4 + 0xc);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iStack_1c = *(int *)(iVar4 + 0xc);
  if (iVar1 + param_2 < iStack_1c) {
    iStack_1c = iVar1 + param_2;
  }
  if (iStack_1c < 2) {
    iStack_1c = 1;
  }
  uVar5 = System_Int32__ToString_2b6b9ec(&iStack_1c,0);
  TMPro_TMP_InputField__set_text_34eb818(iVar3,uVar5,0);
  return;
}

