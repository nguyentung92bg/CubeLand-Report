/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$.ctor
void Rotatelab_Scripts_LiveSolverGuideController___ctor (Rotatelab_Scripts_LiveSolverGuideController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$.ctor
   void Rotatelab_Scripts_LiveSolverGuideController___ctor
   (Rotatelab_Scripts_LiveSolverGuideController_o* __this, const MethodInfo* method); */

int Rotatelab_Scripts_LiveSolverGuideController___ctor_105a1f8(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_0106a2f8 + 0x106a214);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a2fc + 0x106a228));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a300 + 0x106a234));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a304 + 0x106a240));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a308 + 0x106a24c));
    *pcVar5 = '\x01';
  }
  uVar3 = _UNK_0106a2f0;
  uVar2 = _UNK_0106a2e8;
  uVar1 = _UNK_0106a2e0;
  *(undefined8 *)(param_1 + 0x20) = _UNK_0106a2d8;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106a30c + 0x106a278));
  System_Collections_Generic_List_int____ctor_261b0bc
            (uVar4,**(undefined4 **)(_UNK_0106a310 + 0x106a28c));
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x40),uVar4);
  *(undefined4 *)(param_1 + 0x60) = **(undefined4 **)(_UNK_0106a314 + 0x106a2b0);
  thunk_FUN_00ec5080();
  pcVar5 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0,extraout_r2,extraout_r3,unaff_r4
                       ,unaff_r5,unaff_r11,unaff_lr);
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

