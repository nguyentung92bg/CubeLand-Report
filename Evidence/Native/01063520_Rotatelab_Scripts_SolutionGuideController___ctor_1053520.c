/* IL2CPP: Rotatelab.Scripts.SolutionGuideController$$.ctor
void Rotatelab_Scripts_SolutionGuideController___ctor (Rotatelab_Scripts_SolutionGuideController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SolutionGuideController$$.ctor
   void Rotatelab_Scripts_SolutionGuideController___ctor
   (Rotatelab_Scripts_SolutionGuideController_o* __this, const MethodInfo* method); */

int Rotatelab_Scripts_SolutionGuideController___ctor_1053520(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar3;
  int iVar4;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar3 = (char *)(_UNK_01063608 + 0x1063534);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106360c + 0x1063548));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063610 + 0x1063554));
    *pcVar3 = '\x01';
  }
  uVar1 = _UNK_01063600;
  iVar4 = **(int **)(_UNK_01063614 + 0x1063568);
  *(undefined8 *)(param_1 + 0x10) = _UNK_010635f8;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  iVar2 = *(int *)(iVar4 + 0x1c);
  if (iVar2 == 0) {
    FUN_00efd7c4(iVar4);
    iVar2 = *(int *)(iVar4 + 0x1c);
  }
  iVar2 = *(int *)(iVar2 + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  *(undefined4 *)(param_1 + 0x20) = **(undefined4 **)(iVar2 + 0x5c);
  thunk_FUN_00ec5080();
  pcVar3 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0,extraout_r2,extraout_r3,unaff_r4
                       ,unaff_r5,unaff_r11,unaff_lr);
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

