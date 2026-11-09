/* IL2CPP: Rotatelab.FX.WallDestructionParticleController$$OnParticleSystemStopped
void Rotatelab_FX_WallDestructionParticleController__OnParticleSystemStopped (Rotatelab_FX_WallDestructionParticleController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.WallDestructionParticleController$$OnParticleSystemStopped
   void Rotatelab_FX_WallDestructionParticleController__OnParticleSystemStopped
   (Rotatelab_FX_WallDestructionParticleController_o* __this, const MethodInfo* method); */

void Rotatelab_FX_WallDestructionParticleController__OnParticleSystemStopped_10fbbc4(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  pcVar2 = (char *)(_UNK_0110bc20 + 0x110bbd8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110bc24 + 0x110bbec));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(param_1 + 0x80);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = **(int **)(_UNK_0110bc28 + 0x110bc14);
  pcVar2 = (char *)(_UNK_01867c34 + 0x1867b6c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01867c38 + 0x1867b80));
    *pcVar2 = '\x01';
  }
  if (piVar3[8] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (piVar3[6] <= *(int *)(piVar3[8] + 0xc)) {
    if (param_1 != 0) {
      iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
      if (*(int *)(**(int **)(_UNK_01867c3c + 0x1867c14) + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar2 = (char *)(_UNK_03619a18 + 0x36199d0);
      if (*pcVar2 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03619a1c + 0x36199e4),0);
        *pcVar2 = '\x01';
      }
      if (*(int *)(**(int **)(_UNK_03619a20 + 0x36199f8) + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      pcVar2 = (char *)(_UNK_03619948 + 0x36198a0);
      if (*pcVar2 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0361994c + 0x36198b4));
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03619950 + 0x36198c0));
        *pcVar2 = '\x01';
      }
      if (*(int *)(**(int **)(_UNK_03619954 + 0x36198d4) + 0x1c) == 0) {
        thunk_FUN_00efd7c4();
      }
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(**(int **)(_UNK_03619958 + 0x36198fc) + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      UNRECOVERED_JUMPTABLE = *(code **)(_UNK_0361995c + 0x3619918);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_03619960 + 0x3619928);
        *(code **)(_UNK_03619964 + 0x3619938) = UNRECOVERED_JUMPTABLE;
      }
                    /* WARNING: Could not recover jumptable at 0x03619944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(uVar4,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar3 + 0xf8))(piVar3,param_1,*(undefined4 *)(*piVar3 + 0xfc));
  iVar5 = piVar3[8];
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(iVar5 + 8);
  uVar6 = *(uint *)(iVar5 + 0xc);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar7 + 0xc) <= uVar6) {
    piVar3 = (int *)(iVar5 + 8);
    if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*piVar3 + 0xc) == 0) {
      iVar7 = 4;
    }
    else {
      if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(*piVar3 + 0xc) << 1;
    }
    System_Array__Resize_object__138a144
              (piVar3,iVar7,
               *(undefined4 *)
                (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 
                                                  0x10) + 0x60) + 0x24) + 0x10) + 0x60) + 0x34) +
                                  0x10) + 0x60) + 0x38));
    iVar1 = *(int *)(iVar5 + 8);
    if (iVar1 != 0) {
      if (*(uint *)(iVar5 + 0xc) < *(uint *)(iVar1 + 0xc)) {
        piVar3 = (int *)(iVar1 + *(uint *)(iVar5 + 0xc) * 4 + 0x10);
        *piVar3 = param_1;
        thunk_FUN_00ec5080(piVar3,param_1);
        *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + 1;
        *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3 = (int *)(iVar7 + uVar6 * 4 + 0x10);
  *piVar3 = param_1;
  thunk_FUN_00ec5080(piVar3,param_1);
  *(uint *)(iVar5 + 0xc) = uVar6 + 1;
  *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
  return;
}

