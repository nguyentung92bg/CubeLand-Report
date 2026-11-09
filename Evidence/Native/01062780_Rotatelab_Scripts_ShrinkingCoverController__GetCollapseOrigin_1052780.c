/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$GetCollapseOrigin
UnityEngine_Vector3_o Rotatelab_Scripts_ShrinkingCoverController__GetCollapseOrigin (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$GetCollapseOrigin
   UnityEngine_Vector3_o Rotatelab_Scripts_ShrinkingCoverController__GetCollapseOrigin
   (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ShrinkingCoverController__GetCollapseOrigin_1052780
               (undefined8 *param_1,int param_2)

{
  uint uVar1;
  float *pfVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  pcVar3 = (char *)(_UNK_01062970 + 0x10627a0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062974 + 0x10627b4));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar9 = *(int *)(*(int *)(param_2 + 0x38) + 0x38);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = *(uint *)(iVar9 + 0xc);
  if (uVar1 != 0) {
    iVar7 = *(int *)(iVar9 + 0x18);
    if (0 < (int)uVar1) {
      uVar6 = 0;
      piVar4 = (int *)(iVar9 + 0x18);
      do {
        if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        uVar6 = uVar6 + 1;
        if (iVar7 <= *piVar4) {
          iVar7 = *piVar4;
        }
        piVar4 = piVar4 + 3;
      } while ((int)uVar6 < (int)uVar1);
    }
    pcVar3 = (char *)(_UNK_01062978 + 0x1062838);
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0106297c + 0x106284c));
      uVar1 = *(uint *)(iVar9 + 0xc);
      *pcVar3 = '\x01';
    }
    pfVar2 = *(float **)(**(int **)(_UNK_01062980 + 0x1062868) + 0x5c);
    fVar12 = *pfVar2;
    fVar13 = pfVar2[1];
    fVar14 = pfVar2[2];
    fVar15 = _UNK_0106296c;
    if (0 < (int)uVar1) {
      puVar5 = (undefined4 *)(iVar9 + 0x10);
      iVar8 = 0;
      uVar6 = 0;
      fVar15 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
      do {
        if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        if (puVar5[2] == iVar7) {
          fVar14 = fVar14 + fVar15;
          iVar8 = iVar8 + 1;
          fVar10 = (float)VectorSignedToFloat(*puVar5,(byte)(in_fpscr >> 0x16) & 3);
          fVar11 = (float)VectorSignedToFloat(puVar5[1],(byte)(in_fpscr >> 0x16) & 3);
          fVar12 = fVar12 + fVar10;
          fVar13 = fVar13 + fVar11;
        }
        uVar1 = *(uint *)(iVar9 + 0xc);
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 3;
      } while ((int)uVar6 < (int)uVar1);
      fVar15 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
    }
    iVar9 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01062984 + 0x10628f8));
    if (iVar9 != 0) {
      if (*(int *)(iVar9 + 0x50) != 0) {
        UnityEngine_Transform__TransformPoint_3616968
                  (&uStack_50,*(int *)(iVar9 + 0x50),fVar12 / fVar15,fVar13 / fVar15,
                   fVar14 / fVar15 + -0.5,0);
        *(undefined4 *)(param_1 + 1) = uStack_48;
        *param_1 = uStack_50;
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

