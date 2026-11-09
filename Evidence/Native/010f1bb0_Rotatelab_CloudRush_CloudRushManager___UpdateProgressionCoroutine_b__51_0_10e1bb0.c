/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$<UpdateProgressionCoroutine>b__51_0
void Rotatelab_CloudRush_CloudRushManager___UpdateProgressionCoroutine_b__51_0 (Rotatelab_CloudRush_CloudRushManager_o* __this, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$<UpdateProgressionCoroutine>b__51_0
   void Rotatelab_CloudRush_CloudRushManager___UpdateProgressionCoroutine_b__51_0
   (Rotatelab_CloudRush_CloudRushManager_o* __this, float value, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushManager___UpdateProgressionCoroutine_b__51_0_10e1bb0
               (int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint in_fpscr;
  uint uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dStack_28;
  
  pcVar3 = (char *)(_UNK_010f1d2c + 0x10f1bd0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f1d30 + 0x10f1be4));
    *pcVar3 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 100);
  pcVar3 = (char *)(_UNK_010f1d34 + 0x10f1bfc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f1d38 + 0x10f1c10));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010f1d3c + 0x10f1c28) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar6 = (double)param_2;
  dVar7 = (double)modf(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),&dStack_28);
  if (NAN(param_2)) {
    uVar4 = in_fpscr & 0xfffffff | (uint)(dVar7 == -0.5) << 0x1e;
    if (!SUB41(uVar4 >> 0x1e,0)) {
      dVar6 = (double)ceil(SUB84(dVar6 + -0.5,0),(int)((ulonglong)(dVar6 + -0.5) >> 0x20));
      goto LAB_010f1cc4;
    }
    dVar6 = -1.0;
  }
  else {
    uVar4 = in_fpscr & 0xfffffff | (uint)(dVar7 == 0.5) << 0x1e;
    if (!SUB41(uVar4 >> 0x1e,0)) {
      dVar6 = (double)floor(SUB84(dVar6 + 0.5,0),(int)((ulonglong)(dVar6 + 0.5) >> 0x20));
      goto LAB_010f1cc4;
    }
    dVar6 = 1.0;
  }
  uVar1 = FUN_00f88224(SUB84(dStack_28,0),(int)((ulonglong)dStack_28 >> 0x20));
  dVar6 = dStack_28 + dVar6;
  if ((uVar1 & 1) == 0) {
    dVar6 = dStack_28;
  }
LAB_010f1cc4:
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = uVar4 & 0xfffffff | (uint)(dVar6 == _UNK_010f1d20) << 0x1e;
  uVar5 = VectorSignedToFloat((int)(longlong)dVar6,(byte)(uVar4 >> 0x16) & 3);
  if (SUB41(uVar4 >> 0x1e,0)) {
    uVar5 = _UNK_010f1d28;
  }
  TMPro_TMP_Text__SetText_34ffee4
            (iVar2,**(undefined4 **)(_UNK_010f1d40 + 0x10f1cec),uVar5,0x42c80000,0);
  return;
}

