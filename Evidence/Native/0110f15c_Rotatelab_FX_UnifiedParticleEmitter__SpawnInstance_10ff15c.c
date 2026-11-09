/* IL2CPP: Rotatelab.FX.UnifiedParticleEmitter$$SpawnInstance
Rotatelab_FX_UnifiedParticleEmitter_Instance_o Rotatelab_FX_UnifiedParticleEmitter__SpawnInstance (Rotatelab_FX_UnifiedParticleEmitter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.UnifiedParticleEmitter$$SpawnInstance
   Rotatelab_FX_UnifiedParticleEmitter_Instance_o Rotatelab_FX_UnifiedParticleEmitter__SpawnInstance
   (Rotatelab_FX_UnifiedParticleEmitter_o* __this, const MethodInfo* method); */

void Rotatelab_FX_UnifiedParticleEmitter__SpawnInstance_10ff15c(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int aiStack_2c [2];
  
  pcVar10 = (char *)(_UNK_0110f670 + 0x110f178);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110f674 + 0x110f18c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110f678 + 0x110f198));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110f67c + 0x110f1a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110f680 + 0x110f1b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110f684 + 0x110f1bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110f688 + 0x110f1c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110f68c + 0x110f1d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110f690 + 0x110f1e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110f694 + 0x110f1ec));
    *pcVar10 = '\x01';
  }
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  aiStack_2c[0] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar11 = *(undefined4 *)(param_2 + 0x10);
  iStack_38 = 0;
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  if (*(int *)(**(int **)(_UNK_0110f698 + 0x110f220) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__Instantiate_object__14d4dd0
                    (uVar11,uVar1,**(undefined4 **)(_UNK_0110f69c + 0x110f240));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_GameObject__get_transform_3601c90(iVar2,0);
  pcVar10 = (char *)(_UNK_0110f6a0 + 0x110f274);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110f6a4 + 0x110f288));
    *pcVar10 = '\x01';
  }
  puVar4 = *(undefined4 **)(**(int **)(_UNK_0110f6a8 + 0x110f2a0) + 0x5c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localPosition_3613c6c(iVar3,*puVar4,puVar4[1],puVar4[2],0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_GameObject__get_transform_3601c90(iVar2,0);
  pcVar10 = (char *)(_UNK_0110f6ac + 0x110f2f4);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110f6b0 + 0x110f308));
    *pcVar10 = '\x01';
  }
  puVar4 = *(undefined4 **)(**(int **)(_UNK_0110f6b4 + 0x110f320) + 0x5c);
  if (iVar3 != 0) {
    UnityEngine_Transform__set_localRotation_361507c(iVar3,*puVar4,puVar4[1],puVar4[2],puVar4[3],0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_GameObject__GetComponentsInChildren_object__1491068
                      (iVar2,1,**(undefined4 **)(_UNK_0110f6b8 + 0x110f370));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0110f6bc + 0x110f394));
    System_Collections_Generic_List_object____ctor_267d2e8
              (iVar3,*(undefined4 *)(iVar2 + 0xc),**(undefined4 **)(_UNK_0110f6c0 + 0x110f3a8));
    uVar6 = *(uint *)(iVar2 + 0xc);
    if (0 < (int)uVar6) {
      uVar13 = 0;
      puVar4 = *(undefined4 **)(_UNK_0110f6c4 + 0x110f3d0);
      do {
        if (uVar6 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar9 = *(int *)(iVar2 + 0x10 + uVar13 * 4);
        Rotatelab_FX_UnifiedParticleEmitter__ForceWorldSimulation_10ff6e0(iVar9);
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar1 = UnityEngine_Component__GetComponent_object__143f3b0(iVar9,*puVar4);
        if (*(int *)(**(int **)(_UNK_0110f6c8 + 0x110f40c) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar9 = UnityEngine_Object__op_Inequality_36018e4(uVar1,0,0);
        if (iVar9 != 0) {
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar9 = *(int *)(iVar3 + 8);
          uVar6 = *(uint *)(iVar3 + 0xc);
          piVar8 = *(int **)(_UNK_0110f6cc + 0x110f470);
          *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
          if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar6 < *(uint *)(iVar9 + 0xc)) {
            *(uint *)(iVar3 + 0xc) = uVar6 + 1;
            puVar5 = (undefined4 *)(iVar9 + uVar6 * 4 + 0x10);
            *puVar5 = uVar1;
            thunk_FUN_00ec5080(puVar5,uVar1);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_267dae0
                      (iVar3,uVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar8 + 0x10) + 0x60) + 0x38)
                      );
          }
        }
        uVar6 = *(uint *)(iVar2 + 0xc);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar6);
    }
    iVar9 = 0;
    if (uVar6 == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(iVar2 + 0x10);
      if (1 < (int)uVar6) {
        iVar9 = FUN_00ec388c(**(undefined4 **)(_UNK_0110f6d0 + 0x110f4fc),uVar6 - 1);
        uVar6 = *(uint *)(iVar2 + 0xc);
        if (1 < (int)uVar6) {
          iVar14 = 5;
          puVar4 = (undefined4 *)(iVar9 + 0x10);
          do {
            if (uVar6 <= iVar14 - 4U) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f07924();
            }
            uVar1 = *(undefined4 *)(iVar2 + iVar14 * 4);
            if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (*(uint *)(iVar9 + 0xc) <= iVar14 - 5U) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f07924();
            }
            *puVar4 = uVar1;
            thunk_FUN_00ec5080(puVar4,uVar1);
            uVar6 = *(uint *)(iVar2 + 0xc);
            iVar7 = iVar14 + -3;
            iVar14 = iVar14 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar7 < (int)uVar6);
        }
      }
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    aiStack_2c[0] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = iVar12;
    thunk_FUN_00ec5080(&iStack_38,iVar12);
    iStack_34 = iVar9;
    thunk_FUN_00ec5080(&iStack_34,iVar9);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iStack_30 = System_Collections_Generic_List_object___ToArray_267f7a0
                          (iVar3,**(undefined4 **)(_UNK_0110f6d4 + 0x110f5dc));
    thunk_FUN_00ec5080(&iStack_30,iStack_30);
    if (*(int *)(**(int **)(_UNK_0110f6d8 + 0x110f5fc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = 0;
    iVar2 = UnityEngine_Object__op_Inequality_36018e4(iVar12,0,0);
    if (iVar2 != 0) {
      if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = UnityEngine_Component__GetComponent_object__143f3b0
                        (iVar12,**(undefined4 **)(_UNK_0110f6dc + 0x110f640));
    }
    aiStack_2c[0] = iVar3;
    thunk_FUN_00ec5080(aiStack_2c,iVar3);
    *param_1 = iStack_38;
    param_1[1] = iStack_34;
    param_1[2] = iStack_30;
    param_1[3] = aiStack_2c[0];
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

