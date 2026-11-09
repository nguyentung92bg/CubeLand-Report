/* IL2CPP: Rotatelab.Scripts.ComboController$$GetCurrentThresholdInt
int32_t Rotatelab_Scripts_ComboController__GetCurrentThresholdInt (Rotatelab_Scripts_ComboController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ComboController$$GetCurrentThresholdInt
   int32_t Rotatelab_Scripts_ComboController__GetCurrentThresholdInt
   (Rotatelab_Scripts_ComboController_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_ComboController__GetCurrentThresholdInt_1003560(int param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  double dVar6;
  double dVar7;
  double dStack_28;
  
  pcVar5 = (char *)(_UNK_010136d0 + 0x101357c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010136d4 + 0x1013590));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_010136d8 + 0x10135a4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar2 = (float)Rotatelab_Scripts_ComboConfigSO__GetThreshold_100194c
                           (iVar1,*(undefined4 *)(param_1 + 0x14),0);
  pcVar5 = (char *)(_UNK_010136dc + 0x10135dc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010136e0 + 0x10135f0));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010136e4 + 0x1013608) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar6 = (double)fVar2;
  dVar7 = (double)modf(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),&dStack_28);
  if (0.0 <= fVar2) {
    if (dVar7 != 0.5) {
      dVar6 = (double)floor(SUB84(dVar6 + 0.5,0),(int)((ulonglong)(dVar6 + 0.5) >> 0x20));
      goto LAB_010136a4;
    }
    dVar6 = 1.0;
  }
  else {
    if (dVar7 != -0.5) {
      dVar6 = (double)ceil(SUB84(dVar6 + -0.5,0),(int)((ulonglong)(dVar6 + -0.5) >> 0x20));
      goto LAB_010136a4;
    }
    dVar6 = -1.0;
  }
  uVar3 = FUN_00f88224(SUB84(dStack_28,0),(int)((ulonglong)dStack_28 >> 0x20));
  dVar6 = dStack_28 + dVar6;
  if ((uVar3 & 1) == 0) {
    dVar6 = dStack_28;
  }
LAB_010136a4:
  uVar4 = (undefined4)(longlong)dVar6;
  if (dVar6 == _UNK_010136c8) {
    uVar4 = 0x80000000;
  }
  return uVar4;
}

