/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$<UpdateProgressionCoroutine>b__51_3
void Rotatelab_CloudRush_CloudRushManager___UpdateProgressionCoroutine_b__51_3 (Rotatelab_CloudRush_CloudRushManager_o* __this, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$<UpdateProgressionCoroutine>b__51_3
   void Rotatelab_CloudRush_CloudRushManager___UpdateProgressionCoroutine_b__51_3
   (Rotatelab_CloudRush_CloudRushManager_o* __this, float value, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushManager___UpdateProgressionCoroutine_b__51_3_10e1df8
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
  
  pcVar3 = (char *)(_UNK_010f1f74 + 0x10f1e18);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f1f78 + 0x10f1e2c));
    *pcVar3 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 100);
  pcVar3 = (char *)(_UNK_010f1f7c + 0x10f1e44);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f1f80 + 0x10f1e58));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010f1f84 + 0x10f1e70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar6 = (double)param_2;
  dVar7 = (double)modf(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),&dStack_28);
  if (NAN(param_2)) {
    uVar4 = in_fpscr & 0xfffffff | (uint)(dVar7 == -0.5) << 0x1e;
    if (!SUB41(uVar4 >> 0x1e,0)) {
      dVar6 = (double)ceil(SUB84(dVar6 + -0.5,0),(int)((ulonglong)(dVar6 + -0.5) >> 0x20));
      goto LAB_010f1f0c;
    }
    dVar6 = -1.0;
  }
  else {
    uVar4 = in_fpscr & 0xfffffff | (uint)(dVar7 == 0.5) << 0x1e;
    if (!SUB41(uVar4 >> 0x1e,0)) {
      dVar6 = (double)floor(SUB84(dVar6 + 0.5,0),(int)((ulonglong)(dVar6 + 0.5) >> 0x20));
      goto LAB_010f1f0c;
    }
    dVar6 = 1.0;
  }
  uVar1 = FUN_00f88224(SUB84(dStack_28,0),(int)((ulonglong)dStack_28 >> 0x20));
  dVar6 = dStack_28 + dVar6;
  if ((uVar1 & 1) == 0) {
    dVar6 = dStack_28;
  }
LAB_010f1f0c:
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = uVar4 & 0xfffffff | (uint)(dVar6 == _UNK_010f1f68) << 0x1e;
  uVar5 = VectorSignedToFloat((int)(longlong)dVar6,(byte)(uVar4 >> 0x16) & 3);
  if (SUB41(uVar4 >> 0x1e,0)) {
    uVar5 = _UNK_010f1f70;
  }
  TMPro_TMP_Text__SetText_34ffee4
            (iVar2,**(undefined4 **)(_UNK_010f1f88 + 0x10f1f34),uVar5,0x42c80000,0);
  return;
}

