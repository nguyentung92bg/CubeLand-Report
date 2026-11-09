/* IL2CPP: Rotatelab.Scripts.BulletFlowTracker$$get_DrainGracePeriod
float Rotatelab_Scripts_BulletFlowTracker__get_DrainGracePeriod (Rotatelab_Scripts_BulletFlowTracker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletFlowTracker$$get_DrainGracePeriod
   float Rotatelab_Scripts_BulletFlowTracker__get_DrainGracePeriod
   (Rotatelab_Scripts_BulletFlowTracker_o* __this, const MethodInfo* method); */

float Rotatelab_Scripts_BulletFlowTracker__get_DrainGracePeriod_ff964c(void)

{
  int iVar1;
  float fVar2;
  code *pcVar3;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  float fVar7;
  
  pcVar4 = (char *)(_UNK_010096a8 + 0x100965c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010096ac + 0x1009670));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010096b0 + 0x1009684));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar1 + 0xc4);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4(iVar1,0);
  }
  piVar6 = *(int **)(iVar5 + 0x10);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4(iVar5,0);
  }
  pcVar3 = *(code **)(*piVar6 + 0x230);
  fVar2 = (float)(*pcVar3)(piVar6,*(undefined4 *)(*piVar6 + 0x234),pcVar3,extraout_r3,unaff_r4);
  fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
  return fVar2 / fVar7;
}

