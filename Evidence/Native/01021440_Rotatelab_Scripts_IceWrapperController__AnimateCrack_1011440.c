/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$AnimateCrack
void Rotatelab_Scripts_IceWrapperController__AnimateCrack (Rotatelab_Scripts_IceWrapperController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$AnimateCrack
   void Rotatelab_Scripts_IceWrapperController__AnimateCrack
   (Rotatelab_Scripts_IceWrapperController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_IceWrapperController__AnimateCrack_1011440(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint in_fpscr;
  float fVar10;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  pcVar5 = (char *)(_UNK_01021690 + 0x102145c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01021694 + 0x1021470));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01021698 + 0x102147c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102169c + 0x1021488));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010216a0 + 0x1021494));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010216a4 + 0x10214a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010216a8 + 0x10214ac));
    *pcVar5 = '\x01';
  }
  piVar9 = *(int **)(_UNK_010216ac + 0x10214c4);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((undefined8 *)(param_1 + 0x48),0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x20),
                                      (byte)(in_fpscr >> 0x16) & 3);
  piVar6 = *(int **)(_UNK_010216b0 + 0x102150c);
  iVar8 = *(int *)(param_1 + 0x34);
  iVar1 = *piVar6;
  iVar3 = *(int *)(iVar1 + 0x74);
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + _UNK_01021688 / fVar10;
  if (iVar3 == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_MaterialPropertyBlock__GetFloat_35c4294
                    (iVar8,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x54),0);
  piVar6 = *(int **)(_UNK_010216b4 + 0x1021564);
  fVar10 = *(float *)(param_1 + 0x30);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  puVar4 = *(undefined4 **)(iVar1 + 0x5c);
  iVar3 = puVar4[1];
  if (iVar3 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar4 = *(undefined4 **)(*piVar6 + 0x5c);
    }
    uVar7 = *puVar4;
    iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010216b8 + 0x10215b0));
    System_Action_object__float____ctor_1f19254
              (iVar3,uVar7,**(undefined4 **)(_UNK_010216bc + 0x10215d0),0);
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
    *piVar6 = iVar3;
    thunk_FUN_00ec5080(piVar6,iVar3);
  }
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Custom_object__15d5b3c
            (&uStack_38,param_1,uVar2,fVar10 + _UNK_0102168c,0x3e800000,iVar3,0,0,0,0,0,1,0,0,0,0,
             **(undefined4 **)(_UNK_010216c0 + 0x1021620));
  *(undefined8 *)(param_1 + 0x48) = uStack_38;
  *(undefined8 *)(param_1 + 0x50) = uStack_30;
  thunk_FUN_00ec5080(param_1 + 0x50,0);
  return;
}

