/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$get_CrownTournamentIncreaseAmountOfCrownPerLevel
int32_t Rotatelab_Debugging_CreativeCanvasController__get_CrownTournamentIncreaseAmountOfCrownPerLevel (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Debugging.CreativeCanvasController$$get_CrownTournamentIncreaseAmountOfCrownPerLevel
   int32_t
   Rotatelab_Debugging_CreativeCanvasController__get_CrownTournamentIncreaseAmountOfCrownPerLevel
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

undefined4
Rotatelab_Debugging_CreativeCanvasController__get_CrownTournamentIncreaseAmountOfCrownPerLevel_110afd0
          (int param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  double dVar5;
  double dVar6;
  double dStack_28;
  
  if (*(int *)(param_1 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar1 = (float)Rotatelab_UI_CreativeSlider__GetValue_110ae54(*(int *)(param_1 + 0xb0));
  pcVar4 = (char *)(_UNK_0111b0f8 + 0x111b004);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111b0fc + 0x111b018));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0111b100 + 0x111b030) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar5 = (double)fVar1;
  dVar6 = (double)modf(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),&dStack_28);
  if (0.0 <= fVar1) {
    if (dVar6 != 0.5) {
      dVar5 = (double)floor(SUB84(dVar5 + 0.5,0),(int)((ulonglong)(dVar5 + 0.5) >> 0x20));
      goto LAB_0111b0cc;
    }
    dVar5 = 1.0;
  }
  else {
    if (dVar6 != -0.5) {
      dVar5 = (double)ceil(SUB84(dVar5 + -0.5,0),(int)((ulonglong)(dVar5 + -0.5) >> 0x20));
      goto LAB_0111b0cc;
    }
    dVar5 = -1.0;
  }
  uVar2 = FUN_00f88224(SUB84(dStack_28,0),(int)((ulonglong)dStack_28 >> 0x20));
  dVar5 = dStack_28 + dVar5;
  if ((uVar2 & 1) == 0) {
    dVar5 = dStack_28;
  }
LAB_0111b0cc:
  uVar3 = (undefined4)(longlong)dVar5;
  if (dVar5 == _UNK_0111b0f0) {
    uVar3 = 0x80000000;
  }
  return uVar3;
}

