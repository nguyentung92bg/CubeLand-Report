/* IL2CPP: Rotatelab.GameExtensions.<>c$$<OccupiedDockCount>b__1_0
bool Rotatelab_GameExtensions___c___OccupiedDockCount_b__1_0 (Rotatelab_GameExtensions___c_o* __this, Rotatelab_Scripts_BaseDockController_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameExtensions.<>c$$<OccupiedDockCount>b__1_0
   bool Rotatelab_GameExtensions___c___OccupiedDockCount_b__1_0 (Rotatelab_GameExtensions___c_o*
   __this, Rotatelab_Scripts_BaseDockController_o* e, const MethodInfo* method); */

uint Rotatelab_GameExtensions___c___OccupiedDockCount_b__1_0_fb6498
               (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  undefined4 uVar2;
  undefined4 unaff_r5;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_00fc6508 + 0xfc64ac);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc650c + 0xfc64c0));
    *pcVar3 = '\x01';
    param_4 = extraout_r3;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  if (*(int *)(**(int **)(_UNK_00fc6510 + 0xfc64e0) + 0x74) == 0) {
    FUN_00ec3934();
    param_4 = extraout_r3_00;
  }
  pcVar3 = (char *)(_UNK_03611948 + 0x36118fc);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0361194c + 0x3611910),0,0,param_4,unaff_r4,unaff_r5);
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_03611950 + 0x3611924) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  uVar1 = UnityEngine_Object__CompareBaseObjects_3607f30(uVar2,0);
  return uVar1 ^ 1;
}

