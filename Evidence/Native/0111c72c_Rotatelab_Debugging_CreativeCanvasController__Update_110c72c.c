/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$Update
void Rotatelab_Debugging_CreativeCanvasController__Update (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$Update
   void Rotatelab_Debugging_CreativeCanvasController__Update
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__Update_110c72c(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  int aiStack_1c [2];
  
  if (*(char *)(param_1 + 0x60) != '\0') {
    fVar8 = *(float *)(param_1 + 0x58);
    fVar1 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    fVar9 = *(float *)(param_1 + 0x5c);
    *(float *)(param_1 + 0x58) = fVar8 + fVar1;
    fVar1 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    fVar9 = fVar9 + fVar1;
    *(float *)(param_1 + 0x5c) = fVar9;
    if ((*(float *)(param_1 + 0x54) < *(float *)(param_1 + 0x58)) && (_UNK_0111c7c8 <= fVar9)) {
      iVar3 = 10;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      if (*(char *)(param_1 + 0x61) == '\0') {
        iVar3 = -10;
      }
      pcVar4 = (char *)(_UNK_0111c8bc + 0x111c7e8);
      if (*pcVar4 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0111c8c0 + 0x111c7fc));
        *pcVar4 = '\x01';
      }
      iVar5 = *(int *)(param_1 + 0x1c);
      aiStack_1c[0] = 0;
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar7 = *(undefined4 *)(iVar5 + 0x160);
      if (*(int *)(**(int **)(_UNK_0111c8c4 + 0x111c828) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar2 = System_Convert__ToInt32_2b1ddb4(uVar7,0);
      if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = *(int *)(*(int *)(param_1 + 0x50) + 0x14);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      aiStack_1c[0] = *(int *)(iVar6 + 0xc);
      if (iVar2 + iVar3 < aiStack_1c[0]) {
        aiStack_1c[0] = iVar2 + iVar3;
      }
      if (aiStack_1c[0] < 2) {
        aiStack_1c[0] = 1;
      }
      uVar7 = System_Int32__ToString_2b6b9ec(aiStack_1c,0);
      TMPro_TMP_InputField__set_text_34eb818(iVar5,uVar7,0);
      return;
    }
  }
  return;
}

