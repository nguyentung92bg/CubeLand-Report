/* IL2CPP: Rotatelab.Scripts.BulletFlowTracker$$get_MaxBulletCount
int32_t Rotatelab_Scripts_BulletFlowTracker__get_MaxBulletCount (Rotatelab_Scripts_BulletFlowTracker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletFlowTracker$$get_MaxBulletCount
   int32_t Rotatelab_Scripts_BulletFlowTracker__get_MaxBulletCount
   (Rotatelab_Scripts_BulletFlowTracker_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_BulletFlowTracker__get_MaxBulletCount_ff957c(void)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  double dVar6;
  double dVar7;
  double dStack_28;
  
  pcVar5 = (char *)(_UNK_010095d8 + 0x100958c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010095dc + 0x10095a0));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010095e0 + 0x10095b4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0xbc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar2 = (float)Rotatelab_UI_CreativeSlider__GetValue_110ae54(*(int *)(iVar1 + 0xbc),0);
  pcVar5 = (char *)(_UNK_0111b488 + 0x111b394);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111b48c + 0x111b3a8));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0111b490 + 0x111b3c0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar6 = (double)fVar2;
  dVar7 = (double)modf(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),&dStack_28);
  if (0.0 <= fVar2) {
    if (dVar7 != 0.5) {
      dVar6 = (double)floor(SUB84(dVar6 + 0.5,0),(int)((ulonglong)(dVar6 + 0.5) >> 0x20));
      goto LAB_0111b45c;
    }
    dVar6 = 1.0;
  }
  else {
    if (dVar7 != -0.5) {
      dVar6 = (double)ceil(SUB84(dVar6 + -0.5,0),(int)((ulonglong)(dVar6 + -0.5) >> 0x20));
      goto LAB_0111b45c;
    }
    dVar6 = -1.0;
  }
  uVar3 = FUN_00f88224(SUB84(dStack_28,0),(int)((ulonglong)dStack_28 >> 0x20));
  dVar6 = dStack_28 + dVar6;
  if ((uVar3 & 1) == 0) {
    dVar6 = dStack_28;
  }
LAB_0111b45c:
  uVar4 = (undefined4)(longlong)dVar6;
  if (dVar6 == _UNK_0111b480) {
    uVar4 = 0x80000000;
  }
  return uVar4;
}

